﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/dms/model/DescribeEventSubscriptionsResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::DatabaseMigrationService::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

DescribeEventSubscriptionsResult::DescribeEventSubscriptionsResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

DescribeEventSubscriptionsResult& DescribeEventSubscriptionsResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("Marker"))
  {
    m_marker = jsonValue.GetString("Marker");
    m_markerHasBeenSet = true;
  }
  if(jsonValue.ValueExists("EventSubscriptionsList"))
  {
    Aws::Utils::Array<JsonView> eventSubscriptionsListJsonList = jsonValue.GetArray("EventSubscriptionsList");
    for(unsigned eventSubscriptionsListIndex = 0; eventSubscriptionsListIndex < eventSubscriptionsListJsonList.GetLength(); ++eventSubscriptionsListIndex)
    {
      m_eventSubscriptionsList.push_back(eventSubscriptionsListJsonList[eventSubscriptionsListIndex].AsObject());
    }
    m_eventSubscriptionsListHasBeenSet = true;
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
