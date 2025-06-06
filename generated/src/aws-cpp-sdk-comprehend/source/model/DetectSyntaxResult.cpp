﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/comprehend/model/DetectSyntaxResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::Comprehend::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

DetectSyntaxResult::DetectSyntaxResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

DetectSyntaxResult& DetectSyntaxResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("SyntaxTokens"))
  {
    Aws::Utils::Array<JsonView> syntaxTokensJsonList = jsonValue.GetArray("SyntaxTokens");
    for(unsigned syntaxTokensIndex = 0; syntaxTokensIndex < syntaxTokensJsonList.GetLength(); ++syntaxTokensIndex)
    {
      m_syntaxTokens.push_back(syntaxTokensJsonList[syntaxTokensIndex].AsObject());
    }
    m_syntaxTokensHasBeenSet = true;
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
