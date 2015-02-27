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

#include "Group51.h"

#include <openpal/serialization/Serialization.h>
#include <openpal/serialization/Parse.h>

using namespace openpal;

namespace opendnp3 {

bool Group51Var1::Read(ReadBufferView& buffer, Group51Var1& output)
{
  return Parse::Many(buffer, output.time);
}

void Group51Var1::Write(const Group51Var1& arg, openpal::WriteBufferView& buffer)
{
  UInt48::Write(buffer, arg.time);
  buffer.Advance(6);
}


bool Group51Var2::Read(ReadBufferView& buffer, Group51Var2& output)
{
  return Parse::Many(buffer, output.time);
}

void Group51Var2::Write(const Group51Var2& arg, openpal::WriteBufferView& buffer)
{
  UInt48::Write(buffer, arg.time);
  buffer.Advance(6);
}



}
