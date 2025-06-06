﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/waf-regional/model/GetRateBasedRuleManagedKeysResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::WAFRegional::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

GetRateBasedRuleManagedKeysResult::GetRateBasedRuleManagedKeysResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

GetRateBasedRuleManagedKeysResult& GetRateBasedRuleManagedKeysResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("ManagedKeys"))
  {
    Aws::Utils::Array<JsonView> managedKeysJsonList = jsonValue.GetArray("ManagedKeys");
    for(unsigned managedKeysIndex = 0; managedKeysIndex < managedKeysJsonList.GetLength(); ++managedKeysIndex)
    {
      m_managedKeys.push_back(managedKeysJsonList[managedKeysIndex].AsString());
    }
    m_managedKeysHasBeenSet = true;
  }
  if(jsonValue.ValueExists("NextMarker"))
  {
    m_nextMarker = jsonValue.GetString("NextMarker");
    m_nextMarkerHasBeenSet = true;
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
