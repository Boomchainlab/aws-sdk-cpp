﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/connect/model/ListRulesResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::Connect::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

ListRulesResult::ListRulesResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

ListRulesResult& ListRulesResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("RuleSummaryList"))
  {
    Aws::Utils::Array<JsonView> ruleSummaryListJsonList = jsonValue.GetArray("RuleSummaryList");
    for(unsigned ruleSummaryListIndex = 0; ruleSummaryListIndex < ruleSummaryListJsonList.GetLength(); ++ruleSummaryListIndex)
    {
      m_ruleSummaryList.push_back(ruleSummaryListJsonList[ruleSummaryListIndex].AsObject());
    }
    m_ruleSummaryListHasBeenSet = true;
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
