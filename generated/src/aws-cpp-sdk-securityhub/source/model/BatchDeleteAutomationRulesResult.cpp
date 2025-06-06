﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/securityhub/model/BatchDeleteAutomationRulesResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::SecurityHub::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

BatchDeleteAutomationRulesResult::BatchDeleteAutomationRulesResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

BatchDeleteAutomationRulesResult& BatchDeleteAutomationRulesResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("ProcessedAutomationRules"))
  {
    Aws::Utils::Array<JsonView> processedAutomationRulesJsonList = jsonValue.GetArray("ProcessedAutomationRules");
    for(unsigned processedAutomationRulesIndex = 0; processedAutomationRulesIndex < processedAutomationRulesJsonList.GetLength(); ++processedAutomationRulesIndex)
    {
      m_processedAutomationRules.push_back(processedAutomationRulesJsonList[processedAutomationRulesIndex].AsString());
    }
    m_processedAutomationRulesHasBeenSet = true;
  }
  if(jsonValue.ValueExists("UnprocessedAutomationRules"))
  {
    Aws::Utils::Array<JsonView> unprocessedAutomationRulesJsonList = jsonValue.GetArray("UnprocessedAutomationRules");
    for(unsigned unprocessedAutomationRulesIndex = 0; unprocessedAutomationRulesIndex < unprocessedAutomationRulesJsonList.GetLength(); ++unprocessedAutomationRulesIndex)
    {
      m_unprocessedAutomationRules.push_back(unprocessedAutomationRulesJsonList[unprocessedAutomationRulesIndex].AsObject());
    }
    m_unprocessedAutomationRulesHasBeenSet = true;
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
