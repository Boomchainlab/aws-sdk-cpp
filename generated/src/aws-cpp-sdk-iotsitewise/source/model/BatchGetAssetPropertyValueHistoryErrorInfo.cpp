﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/iotsitewise/model/BatchGetAssetPropertyValueHistoryErrorInfo.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace IoTSiteWise
{
namespace Model
{

BatchGetAssetPropertyValueHistoryErrorInfo::BatchGetAssetPropertyValueHistoryErrorInfo(JsonView jsonValue)
{
  *this = jsonValue;
}

BatchGetAssetPropertyValueHistoryErrorInfo& BatchGetAssetPropertyValueHistoryErrorInfo::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("errorCode"))
  {
    m_errorCode = BatchGetAssetPropertyValueHistoryErrorCodeMapper::GetBatchGetAssetPropertyValueHistoryErrorCodeForName(jsonValue.GetString("errorCode"));
    m_errorCodeHasBeenSet = true;
  }
  if(jsonValue.ValueExists("errorTimestamp"))
  {
    m_errorTimestamp = jsonValue.GetDouble("errorTimestamp");
    m_errorTimestampHasBeenSet = true;
  }
  return *this;
}

JsonValue BatchGetAssetPropertyValueHistoryErrorInfo::Jsonize() const
{
  JsonValue payload;

  if(m_errorCodeHasBeenSet)
  {
   payload.WithString("errorCode", BatchGetAssetPropertyValueHistoryErrorCodeMapper::GetNameForBatchGetAssetPropertyValueHistoryErrorCode(m_errorCode));
  }

  if(m_errorTimestampHasBeenSet)
  {
   payload.WithDouble("errorTimestamp", m_errorTimestamp.SecondsWithMSPrecision());
  }

  return payload;
}

} // namespace Model
} // namespace IoTSiteWise
} // namespace Aws
