﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/elasticmapreduce/model/ListStepsResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::EMR::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

ListStepsResult::ListStepsResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

ListStepsResult& ListStepsResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("Steps"))
  {
    Aws::Utils::Array<JsonView> stepsJsonList = jsonValue.GetArray("Steps");
    for(unsigned stepsIndex = 0; stepsIndex < stepsJsonList.GetLength(); ++stepsIndex)
    {
      m_steps.push_back(stepsJsonList[stepsIndex].AsObject());
    }
    m_stepsHasBeenSet = true;
  }
  if(jsonValue.ValueExists("Marker"))
  {
    m_marker = jsonValue.GetString("Marker");
    m_markerHasBeenSet = true;
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
