﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/connect/model/StartChatContactResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::Connect::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

StartChatContactResult::StartChatContactResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

StartChatContactResult& StartChatContactResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("ContactId"))
  {
    m_contactId = jsonValue.GetString("ContactId");
    m_contactIdHasBeenSet = true;
  }
  if(jsonValue.ValueExists("ParticipantId"))
  {
    m_participantId = jsonValue.GetString("ParticipantId");
    m_participantIdHasBeenSet = true;
  }
  if(jsonValue.ValueExists("ParticipantToken"))
  {
    m_participantToken = jsonValue.GetString("ParticipantToken");
    m_participantTokenHasBeenSet = true;
  }
  if(jsonValue.ValueExists("ContinuedFromContactId"))
  {
    m_continuedFromContactId = jsonValue.GetString("ContinuedFromContactId");
    m_continuedFromContactIdHasBeenSet = true;
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
