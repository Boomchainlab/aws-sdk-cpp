﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/config/model/GetAggregateComplianceDetailsByConfigRuleResult.h>
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

GetAggregateComplianceDetailsByConfigRuleResult::GetAggregateComplianceDetailsByConfigRuleResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

GetAggregateComplianceDetailsByConfigRuleResult& GetAggregateComplianceDetailsByConfigRuleResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("AggregateEvaluationResults"))
  {
    Aws::Utils::Array<JsonView> aggregateEvaluationResultsJsonList = jsonValue.GetArray("AggregateEvaluationResults");
    for(unsigned aggregateEvaluationResultsIndex = 0; aggregateEvaluationResultsIndex < aggregateEvaluationResultsJsonList.GetLength(); ++aggregateEvaluationResultsIndex)
    {
      m_aggregateEvaluationResults.push_back(aggregateEvaluationResultsJsonList[aggregateEvaluationResultsIndex].AsObject());
    }
    m_aggregateEvaluationResultsHasBeenSet = true;
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
