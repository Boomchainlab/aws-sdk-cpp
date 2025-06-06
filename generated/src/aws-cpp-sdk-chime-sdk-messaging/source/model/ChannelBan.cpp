﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/chime-sdk-messaging/model/ChannelBan.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace ChimeSDKMessaging
{
namespace Model
{

ChannelBan::ChannelBan(JsonView jsonValue)
{
  *this = jsonValue;
}

ChannelBan& ChannelBan::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Member"))
  {
    m_member = jsonValue.GetObject("Member");
    m_memberHasBeenSet = true;
  }
  if(jsonValue.ValueExists("ChannelArn"))
  {
    m_channelArn = jsonValue.GetString("ChannelArn");
    m_channelArnHasBeenSet = true;
  }
  if(jsonValue.ValueExists("CreatedTimestamp"))
  {
    m_createdTimestamp = jsonValue.GetDouble("CreatedTimestamp");
    m_createdTimestampHasBeenSet = true;
  }
  if(jsonValue.ValueExists("CreatedBy"))
  {
    m_createdBy = jsonValue.GetObject("CreatedBy");
    m_createdByHasBeenSet = true;
  }
  return *this;
}

JsonValue ChannelBan::Jsonize() const
{
  JsonValue payload;

  if(m_memberHasBeenSet)
  {
   payload.WithObject("Member", m_member.Jsonize());

  }

  if(m_channelArnHasBeenSet)
  {
   payload.WithString("ChannelArn", m_channelArn);

  }

  if(m_createdTimestampHasBeenSet)
  {
   payload.WithDouble("CreatedTimestamp", m_createdTimestamp.SecondsWithMSPrecision());
  }

  if(m_createdByHasBeenSet)
  {
   payload.WithObject("CreatedBy", m_createdBy.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace ChimeSDKMessaging
} // namespace Aws
