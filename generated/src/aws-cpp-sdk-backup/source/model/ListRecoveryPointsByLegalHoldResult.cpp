﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/backup/model/ListRecoveryPointsByLegalHoldResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::Backup::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

ListRecoveryPointsByLegalHoldResult::ListRecoveryPointsByLegalHoldResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

ListRecoveryPointsByLegalHoldResult& ListRecoveryPointsByLegalHoldResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("RecoveryPoints"))
  {
    Aws::Utils::Array<JsonView> recoveryPointsJsonList = jsonValue.GetArray("RecoveryPoints");
    for(unsigned recoveryPointsIndex = 0; recoveryPointsIndex < recoveryPointsJsonList.GetLength(); ++recoveryPointsIndex)
    {
      m_recoveryPoints.push_back(recoveryPointsJsonList[recoveryPointsIndex].AsObject());
    }
    m_recoveryPointsHasBeenSet = true;
  }
  if(jsonValue.ValueExists("NextToken"))
  {
    m_nextToken = jsonValue.GetString("NextToken");
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
