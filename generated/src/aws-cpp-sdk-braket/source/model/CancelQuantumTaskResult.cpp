﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/braket/model/CancelQuantumTaskResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::Braket::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

CancelQuantumTaskResult::CancelQuantumTaskResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

CancelQuantumTaskResult& CancelQuantumTaskResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("cancellationStatus"))
  {
    m_cancellationStatus = CancellationStatusMapper::GetCancellationStatusForName(jsonValue.GetString("cancellationStatus"));
    m_cancellationStatusHasBeenSet = true;
  }
  if(jsonValue.ValueExists("quantumTaskArn"))
  {
    m_quantumTaskArn = jsonValue.GetString("quantumTaskArn");
    m_quantumTaskArnHasBeenSet = true;
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
