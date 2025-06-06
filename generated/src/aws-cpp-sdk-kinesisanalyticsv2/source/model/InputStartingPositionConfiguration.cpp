﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/kinesisanalyticsv2/model/InputStartingPositionConfiguration.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace KinesisAnalyticsV2
{
namespace Model
{

InputStartingPositionConfiguration::InputStartingPositionConfiguration(JsonView jsonValue)
{
  *this = jsonValue;
}

InputStartingPositionConfiguration& InputStartingPositionConfiguration::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("InputStartingPosition"))
  {
    m_inputStartingPosition = InputStartingPositionMapper::GetInputStartingPositionForName(jsonValue.GetString("InputStartingPosition"));
    m_inputStartingPositionHasBeenSet = true;
  }
  return *this;
}

JsonValue InputStartingPositionConfiguration::Jsonize() const
{
  JsonValue payload;

  if(m_inputStartingPositionHasBeenSet)
  {
   payload.WithString("InputStartingPosition", InputStartingPositionMapper::GetNameForInputStartingPosition(m_inputStartingPosition));
  }

  return payload;
}

} // namespace Model
} // namespace KinesisAnalyticsV2
} // namespace Aws
