﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/servicecatalog/model/ListServiceActionsForProvisioningArtifactResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::ServiceCatalog::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

ListServiceActionsForProvisioningArtifactResult::ListServiceActionsForProvisioningArtifactResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

ListServiceActionsForProvisioningArtifactResult& ListServiceActionsForProvisioningArtifactResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("ServiceActionSummaries"))
  {
    Aws::Utils::Array<JsonView> serviceActionSummariesJsonList = jsonValue.GetArray("ServiceActionSummaries");
    for(unsigned serviceActionSummariesIndex = 0; serviceActionSummariesIndex < serviceActionSummariesJsonList.GetLength(); ++serviceActionSummariesIndex)
    {
      m_serviceActionSummaries.push_back(serviceActionSummariesJsonList[serviceActionSummariesIndex].AsObject());
    }
    m_serviceActionSummariesHasBeenSet = true;
  }
  if(jsonValue.ValueExists("NextPageToken"))
  {
    m_nextPageToken = jsonValue.GetString("NextPageToken");
    m_nextPageTokenHasBeenSet = true;
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
