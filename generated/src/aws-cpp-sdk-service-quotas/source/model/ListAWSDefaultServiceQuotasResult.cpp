﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/service-quotas/model/ListAWSDefaultServiceQuotasResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::ServiceQuotas::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

ListAWSDefaultServiceQuotasResult::ListAWSDefaultServiceQuotasResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

ListAWSDefaultServiceQuotasResult& ListAWSDefaultServiceQuotasResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("NextToken"))
  {
    m_nextToken = jsonValue.GetString("NextToken");
    m_nextTokenHasBeenSet = true;
  }
  if(jsonValue.ValueExists("Quotas"))
  {
    Aws::Utils::Array<JsonView> quotasJsonList = jsonValue.GetArray("Quotas");
    for(unsigned quotasIndex = 0; quotasIndex < quotasJsonList.GetLength(); ++quotasIndex)
    {
      m_quotas.push_back(quotasJsonList[quotasIndex].AsObject());
    }
    m_quotasHasBeenSet = true;
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
