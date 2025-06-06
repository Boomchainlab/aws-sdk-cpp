﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/apigateway/model/UpdateAccountResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::APIGateway::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

UpdateAccountResult::UpdateAccountResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

UpdateAccountResult& UpdateAccountResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("cloudwatchRoleArn"))
  {
    m_cloudwatchRoleArn = jsonValue.GetString("cloudwatchRoleArn");
    m_cloudwatchRoleArnHasBeenSet = true;
  }
  if(jsonValue.ValueExists("throttleSettings"))
  {
    m_throttleSettings = jsonValue.GetObject("throttleSettings");
    m_throttleSettingsHasBeenSet = true;
  }
  if(jsonValue.ValueExists("features"))
  {
    Aws::Utils::Array<JsonView> featuresJsonList = jsonValue.GetArray("features");
    for(unsigned featuresIndex = 0; featuresIndex < featuresJsonList.GetLength(); ++featuresIndex)
    {
      m_features.push_back(featuresJsonList[featuresIndex].AsString());
    }
    m_featuresHasBeenSet = true;
  }
  if(jsonValue.ValueExists("apiKeyVersion"))
  {
    m_apiKeyVersion = jsonValue.GetString("apiKeyVersion");
    m_apiKeyVersionHasBeenSet = true;
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
