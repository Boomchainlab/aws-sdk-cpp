﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/kinesisanalyticsv2/model/DestinationSchema.h>
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

DestinationSchema::DestinationSchema(JsonView jsonValue)
{
  *this = jsonValue;
}

DestinationSchema& DestinationSchema::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("RecordFormatType"))
  {
    m_recordFormatType = RecordFormatTypeMapper::GetRecordFormatTypeForName(jsonValue.GetString("RecordFormatType"));
    m_recordFormatTypeHasBeenSet = true;
  }
  return *this;
}

JsonValue DestinationSchema::Jsonize() const
{
  JsonValue payload;

  if(m_recordFormatTypeHasBeenSet)
  {
   payload.WithString("RecordFormatType", RecordFormatTypeMapper::GetNameForRecordFormatType(m_recordFormatType));
  }

  return payload;
}

} // namespace Model
} // namespace KinesisAnalyticsV2
} // namespace Aws
