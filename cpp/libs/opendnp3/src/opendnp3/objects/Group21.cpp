//
//  _   _         ______    _ _ _   _             _ _ _
// | \ | |       |  ____|  | (_) | (_)           | | | |
// |  \| | ___   | |__   __| |_| |_ _ _ __   __ _| | | |
// | . ` |/ _ \  |  __| / _` | | __| | '_ \ / _` | | | |
// | |\  | (_) | | |___| (_| | | |_| | | | | (_| |_|_|_|
// |_| \_|\___/  |______\__,_|_|\__|_|_| |_|\__, (_|_|_)
//                                           __/ |
//                                          |___/
// 
// This file is auto-generated. Do not edit manually
// 
// Copyright 2013 Automatak LLC
// 
// Automatak LLC (www.automatak.com) licenses this file
// to you under the the Apache License Version 2.0 (the "License"):
// 
// http://www.apache.org/licenses/LICENSE-2.0.html
//

#include "Group21.h"

#include "opendnp3/app/MeasurementFactory.h"
#include "opendnp3/app/WriteConversions.h"
#include <openpal/serialization/Serialization.h>
#include <openpal/serialization/Parse.h>

using namespace openpal;

namespace opendnp3 {

bool Group21Var1::Read(ReadBufferView& buffer, Group21Var1& output)
{
  return Parse::Many(buffer, output.flags, output.value);
}

void Group21Var1::Write(const Group21Var1& arg, openpal::WriteBufferView& buffer)
{
  UInt8::Write(buffer, arg.flags);
  buffer.Advance(1);
  UInt32::Write(buffer, arg.value);
  buffer.Advance(4);
}


bool Group21Var1::ReadTarget(ReadBufferView& buff, FrozenCounter& output)
{
  Group21Var1 value;
  if(Read(buff, value))
  {
    output = FrozenCounterFactory::From(value.flags, value.value);
    return true;
  }
  else
  {
    return false;
  }
}

void Group21Var1::WriteTarget(const FrozenCounter& value, openpal::WriteBufferView& buff)
{
  Group21Var1::Write(ConvertGroup21Var1::Apply(value), buff);
}


bool Group21Var2::Read(ReadBufferView& buffer, Group21Var2& output)
{
  return Parse::Many(buffer, output.flags, output.value);
}

void Group21Var2::Write(const Group21Var2& arg, openpal::WriteBufferView& buffer)
{
  UInt8::Write(buffer, arg.flags);
  buffer.Advance(1);
  UInt16::Write(buffer, arg.value);
  buffer.Advance(2);
}


bool Group21Var2::ReadTarget(ReadBufferView& buff, FrozenCounter& output)
{
  Group21Var2 value;
  if(Read(buff, value))
  {
    output = FrozenCounterFactory::From(value.flags, value.value);
    return true;
  }
  else
  {
    return false;
  }
}

void Group21Var2::WriteTarget(const FrozenCounter& value, openpal::WriteBufferView& buff)
{
  Group21Var2::Write(ConvertGroup21Var2::Apply(value), buff);
}


bool Group21Var5::Read(ReadBufferView& buffer, Group21Var5& output)
{
  return Parse::Many(buffer, output.flags, output.value, output.time);
}

void Group21Var5::Write(const Group21Var5& arg, openpal::WriteBufferView& buffer)
{
  UInt8::Write(buffer, arg.flags);
  buffer.Advance(1);
  UInt32::Write(buffer, arg.value);
  buffer.Advance(4);
  UInt48::Write(buffer, arg.time);
  buffer.Advance(6);
}


bool Group21Var5::ReadTarget(ReadBufferView& buff, FrozenCounter& output)
{
  Group21Var5 value;
  if(Read(buff, value))
  {
    output = FrozenCounterFactory::From(value.flags, value.value, value.time);
    return true;
  }
  else
  {
    return false;
  }
}

void Group21Var5::WriteTarget(const FrozenCounter& value, openpal::WriteBufferView& buff)
{
  Group21Var5::Write(ConvertGroup21Var5::Apply(value), buff);
}


bool Group21Var6::Read(ReadBufferView& buffer, Group21Var6& output)
{
  return Parse::Many(buffer, output.flags, output.value, output.time);
}

void Group21Var6::Write(const Group21Var6& arg, openpal::WriteBufferView& buffer)
{
  UInt8::Write(buffer, arg.flags);
  buffer.Advance(1);
  UInt16::Write(buffer, arg.value);
  buffer.Advance(2);
  UInt48::Write(buffer, arg.time);
  buffer.Advance(6);
}


bool Group21Var6::ReadTarget(ReadBufferView& buff, FrozenCounter& output)
{
  Group21Var6 value;
  if(Read(buff, value))
  {
    output = FrozenCounterFactory::From(value.flags, value.value, value.time);
    return true;
  }
  else
  {
    return false;
  }
}

void Group21Var6::WriteTarget(const FrozenCounter& value, openpal::WriteBufferView& buff)
{
  Group21Var6::Write(ConvertGroup21Var6::Apply(value), buff);
}


bool Group21Var9::Read(ReadBufferView& buffer, Group21Var9& output)
{
  return Parse::Many(buffer, output.value);
}

void Group21Var9::Write(const Group21Var9& arg, openpal::WriteBufferView& buffer)
{
  UInt32::Write(buffer, arg.value);
  buffer.Advance(4);
}


bool Group21Var9::ReadTarget(ReadBufferView& buff, FrozenCounter& output)
{
  Group21Var9 value;
  if(Read(buff, value))
  {
    output = FrozenCounterFactory::From(value.value);
    return true;
  }
  else
  {
    return false;
  }
}

void Group21Var9::WriteTarget(const FrozenCounter& value, openpal::WriteBufferView& buff)
{
  Group21Var9::Write(ConvertGroup21Var9::Apply(value), buff);
}


bool Group21Var10::Read(ReadBufferView& buffer, Group21Var10& output)
{
  return Parse::Many(buffer, output.value);
}

void Group21Var10::Write(const Group21Var10& arg, openpal::WriteBufferView& buffer)
{
  UInt16::Write(buffer, arg.value);
  buffer.Advance(2);
}


bool Group21Var10::ReadTarget(ReadBufferView& buff, FrozenCounter& output)
{
  Group21Var10 value;
  if(Read(buff, value))
  {
    output = FrozenCounterFactory::From(value.value);
    return true;
  }
  else
  {
    return false;
  }
}

void Group21Var10::WriteTarget(const FrozenCounter& value, openpal::WriteBufferView& buff)
{
  Group21Var10::Write(ConvertGroup21Var10::Apply(value), buff);
}



}
