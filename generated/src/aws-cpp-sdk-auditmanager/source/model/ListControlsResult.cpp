﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/auditmanager/model/ListControlsResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::AuditManager::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

ListControlsResult::ListControlsResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

ListControlsResult& ListControlsResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("controlMetadataList"))
  {
    Aws::Utils::Array<JsonView> controlMetadataListJsonList = jsonValue.GetArray("controlMetadataList");
    for(unsigned controlMetadataListIndex = 0; controlMetadataListIndex < controlMetadataListJsonList.GetLength(); ++controlMetadataListIndex)
    {
      m_controlMetadataList.push_back(controlMetadataListJsonList[controlMetadataListIndex].AsObject());
    }
    m_controlMetadataListHasBeenSet = true;
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
