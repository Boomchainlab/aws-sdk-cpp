﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/iot/model/CreateProvisioningClaimResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::IoT::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

CreateProvisioningClaimResult::CreateProvisioningClaimResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

CreateProvisioningClaimResult& CreateProvisioningClaimResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("certificateId"))
  {
    m_certificateId = jsonValue.GetString("certificateId");
    m_certificateIdHasBeenSet = true;
  }
  if(jsonValue.ValueExists("certificatePem"))
  {
    m_certificatePem = jsonValue.GetString("certificatePem");
    m_certificatePemHasBeenSet = true;
  }
  if(jsonValue.ValueExists("keyPair"))
  {
    m_keyPair = jsonValue.GetObject("keyPair");
    m_keyPairHasBeenSet = true;
  }
  if(jsonValue.ValueExists("expiration"))
  {
    m_expiration = jsonValue.GetDouble("expiration");
    m_expirationHasBeenSet = true;
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
