﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/dynamodb/model/DescribeLimitsResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::DynamoDB::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

DescribeLimitsResult::DescribeLimitsResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

DescribeLimitsResult& DescribeLimitsResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("AccountMaxReadCapacityUnits"))
  {
    m_accountMaxReadCapacityUnits = jsonValue.GetInt64("AccountMaxReadCapacityUnits");
    m_accountMaxReadCapacityUnitsHasBeenSet = true;
  }
  if(jsonValue.ValueExists("AccountMaxWriteCapacityUnits"))
  {
    m_accountMaxWriteCapacityUnits = jsonValue.GetInt64("AccountMaxWriteCapacityUnits");
    m_accountMaxWriteCapacityUnitsHasBeenSet = true;
  }
  if(jsonValue.ValueExists("TableMaxReadCapacityUnits"))
  {
    m_tableMaxReadCapacityUnits = jsonValue.GetInt64("TableMaxReadCapacityUnits");
    m_tableMaxReadCapacityUnitsHasBeenSet = true;
  }
  if(jsonValue.ValueExists("TableMaxWriteCapacityUnits"))
  {
    m_tableMaxWriteCapacityUnits = jsonValue.GetInt64("TableMaxWriteCapacityUnits");
    m_tableMaxWriteCapacityUnitsHasBeenSet = true;
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
