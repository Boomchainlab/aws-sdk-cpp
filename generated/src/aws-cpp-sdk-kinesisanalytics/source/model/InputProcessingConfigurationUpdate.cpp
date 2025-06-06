﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/kinesisanalytics/model/InputProcessingConfigurationUpdate.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace KinesisAnalytics
{
namespace Model
{

InputProcessingConfigurationUpdate::InputProcessingConfigurationUpdate(JsonView jsonValue)
{
  *this = jsonValue;
}

InputProcessingConfigurationUpdate& InputProcessingConfigurationUpdate::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("InputLambdaProcessorUpdate"))
  {
    m_inputLambdaProcessorUpdate = jsonValue.GetObject("InputLambdaProcessorUpdate");
    m_inputLambdaProcessorUpdateHasBeenSet = true;
  }
  return *this;
}

JsonValue InputProcessingConfigurationUpdate::Jsonize() const
{
  JsonValue payload;

  if(m_inputLambdaProcessorUpdateHasBeenSet)
  {
   payload.WithObject("InputLambdaProcessorUpdate", m_inputLambdaProcessorUpdate.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace KinesisAnalytics
} // namespace Aws
