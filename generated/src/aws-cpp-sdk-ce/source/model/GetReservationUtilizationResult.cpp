﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ce/model/GetReservationUtilizationResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::CostExplorer::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

GetReservationUtilizationResult::GetReservationUtilizationResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

GetReservationUtilizationResult& GetReservationUtilizationResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("UtilizationsByTime"))
  {
    Aws::Utils::Array<JsonView> utilizationsByTimeJsonList = jsonValue.GetArray("UtilizationsByTime");
    for(unsigned utilizationsByTimeIndex = 0; utilizationsByTimeIndex < utilizationsByTimeJsonList.GetLength(); ++utilizationsByTimeIndex)
    {
      m_utilizationsByTime.push_back(utilizationsByTimeJsonList[utilizationsByTimeIndex].AsObject());
    }
    m_utilizationsByTimeHasBeenSet = true;
  }
  if(jsonValue.ValueExists("Total"))
  {
    m_total = jsonValue.GetObject("Total");
    m_totalHasBeenSet = true;
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
