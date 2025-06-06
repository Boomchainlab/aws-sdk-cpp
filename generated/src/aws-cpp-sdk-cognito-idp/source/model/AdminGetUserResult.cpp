﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/cognito-idp/model/AdminGetUserResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::CognitoIdentityProvider::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

AdminGetUserResult::AdminGetUserResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

AdminGetUserResult& AdminGetUserResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("Username"))
  {
    m_username = jsonValue.GetString("Username");
    m_usernameHasBeenSet = true;
  }
  if(jsonValue.ValueExists("UserAttributes"))
  {
    Aws::Utils::Array<JsonView> userAttributesJsonList = jsonValue.GetArray("UserAttributes");
    for(unsigned userAttributesIndex = 0; userAttributesIndex < userAttributesJsonList.GetLength(); ++userAttributesIndex)
    {
      m_userAttributes.push_back(userAttributesJsonList[userAttributesIndex].AsObject());
    }
    m_userAttributesHasBeenSet = true;
  }
  if(jsonValue.ValueExists("UserCreateDate"))
  {
    m_userCreateDate = jsonValue.GetDouble("UserCreateDate");
    m_userCreateDateHasBeenSet = true;
  }
  if(jsonValue.ValueExists("UserLastModifiedDate"))
  {
    m_userLastModifiedDate = jsonValue.GetDouble("UserLastModifiedDate");
    m_userLastModifiedDateHasBeenSet = true;
  }
  if(jsonValue.ValueExists("Enabled"))
  {
    m_enabled = jsonValue.GetBool("Enabled");
    m_enabledHasBeenSet = true;
  }
  if(jsonValue.ValueExists("UserStatus"))
  {
    m_userStatus = UserStatusTypeMapper::GetUserStatusTypeForName(jsonValue.GetString("UserStatus"));
    m_userStatusHasBeenSet = true;
  }
  if(jsonValue.ValueExists("MFAOptions"))
  {
    Aws::Utils::Array<JsonView> mFAOptionsJsonList = jsonValue.GetArray("MFAOptions");
    for(unsigned mFAOptionsIndex = 0; mFAOptionsIndex < mFAOptionsJsonList.GetLength(); ++mFAOptionsIndex)
    {
      m_mFAOptions.push_back(mFAOptionsJsonList[mFAOptionsIndex].AsObject());
    }
    m_mFAOptionsHasBeenSet = true;
  }
  if(jsonValue.ValueExists("PreferredMfaSetting"))
  {
    m_preferredMfaSetting = jsonValue.GetString("PreferredMfaSetting");
    m_preferredMfaSettingHasBeenSet = true;
  }
  if(jsonValue.ValueExists("UserMFASettingList"))
  {
    Aws::Utils::Array<JsonView> userMFASettingListJsonList = jsonValue.GetArray("UserMFASettingList");
    for(unsigned userMFASettingListIndex = 0; userMFASettingListIndex < userMFASettingListJsonList.GetLength(); ++userMFASettingListIndex)
    {
      m_userMFASettingList.push_back(userMFASettingListJsonList[userMFASettingListIndex].AsString());
    }
    m_userMFASettingListHasBeenSet = true;
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
