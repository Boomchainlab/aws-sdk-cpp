﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/backup/model/ListRestoreTestingSelectionsResult.h>
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

ListRestoreTestingSelectionsResult::ListRestoreTestingSelectionsResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

ListRestoreTestingSelectionsResult& ListRestoreTestingSelectionsResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("NextToken"))
  {
    m_nextToken = jsonValue.GetString("NextToken");
    m_nextTokenHasBeenSet = true;
  }
  if(jsonValue.ValueExists("RestoreTestingSelections"))
  {
    Aws::Utils::Array<JsonView> restoreTestingSelectionsJsonList = jsonValue.GetArray("RestoreTestingSelections");
    for(unsigned restoreTestingSelectionsIndex = 0; restoreTestingSelectionsIndex < restoreTestingSelectionsJsonList.GetLength(); ++restoreTestingSelectionsIndex)
    {
      m_restoreTestingSelections.push_back(restoreTestingSelectionsJsonList[restoreTestingSelectionsIndex].AsObject());
    }
    m_restoreTestingSelectionsHasBeenSet = true;
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
