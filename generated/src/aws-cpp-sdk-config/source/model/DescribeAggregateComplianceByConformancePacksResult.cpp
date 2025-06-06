﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/config/model/DescribeAggregateComplianceByConformancePacksResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::ConfigService::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

DescribeAggregateComplianceByConformancePacksResult::DescribeAggregateComplianceByConformancePacksResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

DescribeAggregateComplianceByConformancePacksResult& DescribeAggregateComplianceByConformancePacksResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("AggregateComplianceByConformancePacks"))
  {
    Aws::Utils::Array<JsonView> aggregateComplianceByConformancePacksJsonList = jsonValue.GetArray("AggregateComplianceByConformancePacks");
    for(unsigned aggregateComplianceByConformancePacksIndex = 0; aggregateComplianceByConformancePacksIndex < aggregateComplianceByConformancePacksJsonList.GetLength(); ++aggregateComplianceByConformancePacksIndex)
    {
      m_aggregateComplianceByConformancePacks.push_back(aggregateComplianceByConformancePacksJsonList[aggregateComplianceByConformancePacksIndex].AsObject());
    }
    m_aggregateComplianceByConformancePacksHasBeenSet = true;
  }
  if(jsonValue.ValueExists("NextToken"))
  {
    m_nextToken = jsonValue.GetString("NextToken");
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
