﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/firehose/model/SnowflakeBufferingHints.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace Firehose
{
namespace Model
{

SnowflakeBufferingHints::SnowflakeBufferingHints(JsonView jsonValue)
{
  *this = jsonValue;
}

SnowflakeBufferingHints& SnowflakeBufferingHints::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("SizeInMBs"))
  {
    m_sizeInMBs = jsonValue.GetInteger("SizeInMBs");
    m_sizeInMBsHasBeenSet = true;
  }
  if(jsonValue.ValueExists("IntervalInSeconds"))
  {
    m_intervalInSeconds = jsonValue.GetInteger("IntervalInSeconds");
    m_intervalInSecondsHasBeenSet = true;
  }
  return *this;
}

JsonValue SnowflakeBufferingHints::Jsonize() const
{
  JsonValue payload;

  if(m_sizeInMBsHasBeenSet)
  {
   payload.WithInteger("SizeInMBs", m_sizeInMBs);

  }

  if(m_intervalInSecondsHasBeenSet)
  {
   payload.WithInteger("IntervalInSeconds", m_intervalInSeconds);

  }

  return payload;
}

} // namespace Model
} // namespace Firehose
} // namespace Aws
