﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ssm/model/DescribeAssociationExecutionTargetsResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::SSM::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

DescribeAssociationExecutionTargetsResult::DescribeAssociationExecutionTargetsResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

DescribeAssociationExecutionTargetsResult& DescribeAssociationExecutionTargetsResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("AssociationExecutionTargets"))
  {
    Aws::Utils::Array<JsonView> associationExecutionTargetsJsonList = jsonValue.GetArray("AssociationExecutionTargets");
    for(unsigned associationExecutionTargetsIndex = 0; associationExecutionTargetsIndex < associationExecutionTargetsJsonList.GetLength(); ++associationExecutionTargetsIndex)
    {
      m_associationExecutionTargets.push_back(associationExecutionTargetsJsonList[associationExecutionTargetsIndex].AsObject());
    }
    m_associationExecutionTargetsHasBeenSet = true;
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
