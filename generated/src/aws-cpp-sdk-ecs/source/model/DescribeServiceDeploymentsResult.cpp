﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ecs/model/DescribeServiceDeploymentsResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::ECS::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

DescribeServiceDeploymentsResult::DescribeServiceDeploymentsResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

DescribeServiceDeploymentsResult& DescribeServiceDeploymentsResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("serviceDeployments"))
  {
    Aws::Utils::Array<JsonView> serviceDeploymentsJsonList = jsonValue.GetArray("serviceDeployments");
    for(unsigned serviceDeploymentsIndex = 0; serviceDeploymentsIndex < serviceDeploymentsJsonList.GetLength(); ++serviceDeploymentsIndex)
    {
      m_serviceDeployments.push_back(serviceDeploymentsJsonList[serviceDeploymentsIndex].AsObject());
    }
    m_serviceDeploymentsHasBeenSet = true;
  }
  if(jsonValue.ValueExists("failures"))
  {
    Aws::Utils::Array<JsonView> failuresJsonList = jsonValue.GetArray("failures");
    for(unsigned failuresIndex = 0; failuresIndex < failuresJsonList.GetLength(); ++failuresIndex)
    {
      m_failures.push_back(failuresJsonList[failuresIndex].AsObject());
    }
    m_failuresHasBeenSet = true;
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
