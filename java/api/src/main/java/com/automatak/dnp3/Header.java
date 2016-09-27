package com.automatak.dnp3;

import com.automatak.dnp3.enums.QualifierCode;

/**
 * Represents a header that can be used to specify various types of master tasks
 */
public class Header
{
    public final byte group;
    public final byte variation;
    public final QualifierCode qualifier;
    public final int count;
    public final int start;
    public final int stop;

    private Header(byte group, byte variation, QualifierCode qualifier, int count, int start, int stop)
    {
        this.group = group;
        this.variation = variation;
        this.qualifier = qualifier;
        this.count = count;
        this.start = start;
        this.stop = stop;
    }

    @Override
    public String toString()
    {
        return String.format("g{%d}v{%d} - {%s}", group, variation, qualifier);
    }

    /**
     * Header requesting all objects of the given type or class (in the case of Group 60 objects) are returned.
     *
     * @param group Group to request
     * @param variation Variation to request
     * @return A Header with Qualifier 0x06
     */
    public static Header allObjects(Byte group, Byte variation)
    {
        return new Header(group, variation, QualifierCode.ALL_OBJECTS, 0, 0, 0);
    }

    /**
     * Header requesting that the first "x" indexes are returned, where x is the quantity.
     *
     * @param group Group to request
     * @param variation Variation to request
     * @param quantity The number of objects to return
     * @return A Header with Qualifier 0x07
     */
    public static Header count8(Byte group, Byte variation, short quantity)
    {
        return new Header(group, variation, QualifierCode.UINT8_CNT, quantity, 0, 0);
    }

    /**
     * Header requesting that the first "x" indexes are returned, where x is the quantity.
     *
     * @param group Group to request
     * @param variation Variation to request
     * @param quantity The number of objects to return
     * @return A Header with Qualifier 0x08
     */
    public static Header count16(Byte group, Byte variation, int quantity)
    {
        return new Header(group, variation, QualifierCode.UINT16_CNT, quantity, 0, 0);
    }

    /**
     * Header requesting that a range of indices
     *
     * @param group Group to request
     * @param variation Variation to request
     * @param startIndex beginning of index range
     * @param stopIndex end of index range
     * @return A Header with Qualifier 0x00
     */
    public static Header Range8(Byte group, Byte variation, short startIndex, short stopIndex)
    {
        return new Header(group, variation, QualifierCode.UINT8_START_STOP, 0, startIndex, stopIndex);
    }

    /**
     * Header requesting that a range of indices
     *
     * @param group Group to request
     * @param variation Variation to request
     * @param startIndex beginning of index range
     * @param stopIndex end of index range
     * @return A Header with Qualifier 0x01
     */
    public static Header Range16(Byte group, Byte variation, int startIndex, int stopIndex)
    {
        return new Header(group, variation, QualifierCode.UINT16_START_STOP, 0, startIndex, stopIndex);
    }
}
