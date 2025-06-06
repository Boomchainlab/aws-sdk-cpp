﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/chime-sdk-identity/model/AppInstanceRetentionSettings.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace ChimeSDKIdentity
{
namespace Model
{

AppInstanceRetentionSettings::AppInstanceRetentionSettings(JsonView jsonValue)
{
  *this = jsonValue;
}

AppInstanceRetentionSettings& AppInstanceRetentionSettings::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("ChannelRetentionSettings"))
  {
    m_channelRetentionSettings = jsonValue.GetObject("ChannelRetentionSettings");
    m_channelRetentionSettingsHasBeenSet = true;
  }
  return *this;
}

JsonValue AppInstanceRetentionSettings::Jsonize() const
{
  JsonValue payload;

  if(m_channelRetentionSettingsHasBeenSet)
  {
   payload.WithObject("ChannelRetentionSettings", m_channelRetentionSettings.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace ChimeSDKIdentity
} // namespace Aws
