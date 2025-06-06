﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/iot/model/GetEffectivePoliciesResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::IoT::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

GetEffectivePoliciesResult::GetEffectivePoliciesResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

GetEffectivePoliciesResult& GetEffectivePoliciesResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("effectivePolicies"))
  {
    Aws::Utils::Array<JsonView> effectivePoliciesJsonList = jsonValue.GetArray("effectivePolicies");
    for(unsigned effectivePoliciesIndex = 0; effectivePoliciesIndex < effectivePoliciesJsonList.GetLength(); ++effectivePoliciesIndex)
    {
      m_effectivePolicies.push_back(effectivePoliciesJsonList[effectivePoliciesIndex].AsObject());
    }
    m_effectivePoliciesHasBeenSet = true;
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
