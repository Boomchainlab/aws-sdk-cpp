﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/codebuild/model/BatchGetBuildBatchesResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::CodeBuild::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

BatchGetBuildBatchesResult::BatchGetBuildBatchesResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

BatchGetBuildBatchesResult& BatchGetBuildBatchesResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("buildBatches"))
  {
    Aws::Utils::Array<JsonView> buildBatchesJsonList = jsonValue.GetArray("buildBatches");
    for(unsigned buildBatchesIndex = 0; buildBatchesIndex < buildBatchesJsonList.GetLength(); ++buildBatchesIndex)
    {
      m_buildBatches.push_back(buildBatchesJsonList[buildBatchesIndex].AsObject());
    }
    m_buildBatchesHasBeenSet = true;
  }
  if(jsonValue.ValueExists("buildBatchesNotFound"))
  {
    Aws::Utils::Array<JsonView> buildBatchesNotFoundJsonList = jsonValue.GetArray("buildBatchesNotFound");
    for(unsigned buildBatchesNotFoundIndex = 0; buildBatchesNotFoundIndex < buildBatchesNotFoundJsonList.GetLength(); ++buildBatchesNotFoundIndex)
    {
      m_buildBatchesNotFound.push_back(buildBatchesNotFoundJsonList[buildBatchesNotFoundIndex].AsString());
    }
    m_buildBatchesNotFoundHasBeenSet = true;
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
