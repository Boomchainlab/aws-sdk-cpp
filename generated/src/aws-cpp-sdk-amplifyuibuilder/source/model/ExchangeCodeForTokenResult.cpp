﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/amplifyuibuilder/model/ExchangeCodeForTokenResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::AmplifyUIBuilder::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

ExchangeCodeForTokenResult::ExchangeCodeForTokenResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

ExchangeCodeForTokenResult& ExchangeCodeForTokenResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("accessToken"))
  {
    m_accessToken = jsonValue.GetString("accessToken");
    m_accessTokenHasBeenSet = true;
  }
  if(jsonValue.ValueExists("expiresIn"))
  {
    m_expiresIn = jsonValue.GetInteger("expiresIn");
    m_expiresInHasBeenSet = true;
  }
  if(jsonValue.ValueExists("refreshToken"))
  {
    m_refreshToken = jsonValue.GetString("refreshToken");
    m_refreshTokenHasBeenSet = true;
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
