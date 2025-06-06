﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/servicecatalog/model/BatchAssociateServiceActionWithProvisioningArtifactResult.h>
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

BatchAssociateServiceActionWithProvisioningArtifactResult::BatchAssociateServiceActionWithProvisioningArtifactResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

BatchAssociateServiceActionWithProvisioningArtifactResult& BatchAssociateServiceActionWithProvisioningArtifactResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("FailedServiceActionAssociations"))
  {
    Aws::Utils::Array<JsonView> failedServiceActionAssociationsJsonList = jsonValue.GetArray("FailedServiceActionAssociations");
    for(unsigned failedServiceActionAssociationsIndex = 0; failedServiceActionAssociationsIndex < failedServiceActionAssociationsJsonList.GetLength(); ++failedServiceActionAssociationsIndex)
    {
      m_failedServiceActionAssociations.push_back(failedServiceActionAssociationsJsonList[failedServiceActionAssociationsIndex].AsObject());
    }
    m_failedServiceActionAssociationsHasBeenSet = true;
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
