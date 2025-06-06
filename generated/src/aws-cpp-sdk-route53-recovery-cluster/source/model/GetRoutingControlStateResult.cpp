﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/route53-recovery-cluster/model/GetRoutingControlStateResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::Route53RecoveryCluster::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

GetRoutingControlStateResult::GetRoutingControlStateResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

GetRoutingControlStateResult& GetRoutingControlStateResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("RoutingControlArn"))
  {
    m_routingControlArn = jsonValue.GetString("RoutingControlArn");
    m_routingControlArnHasBeenSet = true;
  }
  if(jsonValue.ValueExists("RoutingControlState"))
  {
    m_routingControlState = RoutingControlStateMapper::GetRoutingControlStateForName(jsonValue.GetString("RoutingControlState"));
    m_routingControlStateHasBeenSet = true;
  }
  if(jsonValue.ValueExists("RoutingControlName"))
  {
    m_routingControlName = jsonValue.GetString("RoutingControlName");
    m_routingControlNameHasBeenSet = true;
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
