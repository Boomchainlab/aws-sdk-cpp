﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/sesv2/model/GetDomainStatisticsReportResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::SESV2::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

GetDomainStatisticsReportResult::GetDomainStatisticsReportResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

GetDomainStatisticsReportResult& GetDomainStatisticsReportResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("OverallVolume"))
  {
    m_overallVolume = jsonValue.GetObject("OverallVolume");
    m_overallVolumeHasBeenSet = true;
  }
  if(jsonValue.ValueExists("DailyVolumes"))
  {
    Aws::Utils::Array<JsonView> dailyVolumesJsonList = jsonValue.GetArray("DailyVolumes");
    for(unsigned dailyVolumesIndex = 0; dailyVolumesIndex < dailyVolumesJsonList.GetLength(); ++dailyVolumesIndex)
    {
      m_dailyVolumes.push_back(dailyVolumesJsonList[dailyVolumesIndex].AsObject());
    }
    m_dailyVolumesHasBeenSet = true;
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
