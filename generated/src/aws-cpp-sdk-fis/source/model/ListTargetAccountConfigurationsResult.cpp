﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/fis/model/ListTargetAccountConfigurationsResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::FIS::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

ListTargetAccountConfigurationsResult::ListTargetAccountConfigurationsResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

ListTargetAccountConfigurationsResult& ListTargetAccountConfigurationsResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("targetAccountConfigurations"))
  {
    Aws::Utils::Array<JsonView> targetAccountConfigurationsJsonList = jsonValue.GetArray("targetAccountConfigurations");
    for(unsigned targetAccountConfigurationsIndex = 0; targetAccountConfigurationsIndex < targetAccountConfigurationsJsonList.GetLength(); ++targetAccountConfigurationsIndex)
    {
      m_targetAccountConfigurations.push_back(targetAccountConfigurationsJsonList[targetAccountConfigurationsIndex].AsObject());
    }
    m_targetAccountConfigurationsHasBeenSet = true;
  }
  if(jsonValue.ValueExists("nextToken"))
  {
    m_nextToken = jsonValue.GetString("nextToken");
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
