﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/chime-sdk-media-pipelines/model/FragmentSelector.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace ChimeSDKMediaPipelines
{
namespace Model
{

FragmentSelector::FragmentSelector(JsonView jsonValue)
{
  *this = jsonValue;
}

FragmentSelector& FragmentSelector::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("FragmentSelectorType"))
  {
    m_fragmentSelectorType = FragmentSelectorTypeMapper::GetFragmentSelectorTypeForName(jsonValue.GetString("FragmentSelectorType"));
    m_fragmentSelectorTypeHasBeenSet = true;
  }
  if(jsonValue.ValueExists("TimestampRange"))
  {
    m_timestampRange = jsonValue.GetObject("TimestampRange");
    m_timestampRangeHasBeenSet = true;
  }
  return *this;
}

JsonValue FragmentSelector::Jsonize() const
{
  JsonValue payload;

  if(m_fragmentSelectorTypeHasBeenSet)
  {
   payload.WithString("FragmentSelectorType", FragmentSelectorTypeMapper::GetNameForFragmentSelectorType(m_fragmentSelectorType));
  }

  if(m_timestampRangeHasBeenSet)
  {
   payload.WithObject("TimestampRange", m_timestampRange.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace ChimeSDKMediaPipelines
} // namespace Aws
