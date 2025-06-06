﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/iotsitewise/model/ListGatewaysResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::IoTSiteWise::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

ListGatewaysResult::ListGatewaysResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

ListGatewaysResult& ListGatewaysResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("gatewaySummaries"))
  {
    Aws::Utils::Array<JsonView> gatewaySummariesJsonList = jsonValue.GetArray("gatewaySummaries");
    for(unsigned gatewaySummariesIndex = 0; gatewaySummariesIndex < gatewaySummariesJsonList.GetLength(); ++gatewaySummariesIndex)
    {
      m_gatewaySummaries.push_back(gatewaySummariesJsonList[gatewaySummariesIndex].AsObject());
    }
    m_gatewaySummariesHasBeenSet = true;
  }
  if(jsonValue.ValueExists("nextToken"))
  {
    m_nextToken = jsonValue.GetString("nextToken");
    m_nextTokenHasBeenSet = true;
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
