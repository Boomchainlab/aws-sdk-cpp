﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/lookoutmetrics/model/AutoDetectionMetricSource.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace LookoutMetrics
{
namespace Model
{

AutoDetectionMetricSource::AutoDetectionMetricSource(JsonView jsonValue)
{
  *this = jsonValue;
}

AutoDetectionMetricSource& AutoDetectionMetricSource::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("S3SourceConfig"))
  {
    m_s3SourceConfig = jsonValue.GetObject("S3SourceConfig");
    m_s3SourceConfigHasBeenSet = true;
  }
  return *this;
}

JsonValue AutoDetectionMetricSource::Jsonize() const
{
  JsonValue payload;

  if(m_s3SourceConfigHasBeenSet)
  {
   payload.WithObject("S3SourceConfig", m_s3SourceConfig.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace LookoutMetrics
} // namespace Aws
