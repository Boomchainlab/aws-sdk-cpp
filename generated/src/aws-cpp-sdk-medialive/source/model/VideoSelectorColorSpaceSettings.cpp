﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/medialive/model/VideoSelectorColorSpaceSettings.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace MediaLive
{
namespace Model
{

VideoSelectorColorSpaceSettings::VideoSelectorColorSpaceSettings(JsonView jsonValue)
{
  *this = jsonValue;
}

VideoSelectorColorSpaceSettings& VideoSelectorColorSpaceSettings::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("hdr10Settings"))
  {
    m_hdr10Settings = jsonValue.GetObject("hdr10Settings");
    m_hdr10SettingsHasBeenSet = true;
  }
  return *this;
}

JsonValue VideoSelectorColorSpaceSettings::Jsonize() const
{
  JsonValue payload;

  if(m_hdr10SettingsHasBeenSet)
  {
   payload.WithObject("hdr10Settings", m_hdr10Settings.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace MediaLive
} // namespace Aws
