﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/inspector/model/GetTelemetryMetadataResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::Inspector::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

GetTelemetryMetadataResult::GetTelemetryMetadataResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

GetTelemetryMetadataResult& GetTelemetryMetadataResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("telemetryMetadata"))
  {
    Aws::Utils::Array<JsonView> telemetryMetadataJsonList = jsonValue.GetArray("telemetryMetadata");
    for(unsigned telemetryMetadataIndex = 0; telemetryMetadataIndex < telemetryMetadataJsonList.GetLength(); ++telemetryMetadataIndex)
    {
      m_telemetryMetadata.push_back(telemetryMetadataJsonList[telemetryMetadataIndex].AsObject());
    }
    m_telemetryMetadataHasBeenSet = true;
  }

  const auto& headers = result.GetHeaderValueCollection();
  const auto& requestIdIter = headers.find("x-amzn-requestid");
  if(requestIdIter != headers.end())
  {
    m_requestId = requestIdIter->second;
    m_requestIdHasBeenSet = true;
  }


  return *this;
}
