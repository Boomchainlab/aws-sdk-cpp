﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/pinpoint-sms-voice-v2/model/AssociateProtectConfigurationResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::PinpointSMSVoiceV2::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

AssociateProtectConfigurationResult::AssociateProtectConfigurationResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

AssociateProtectConfigurationResult& AssociateProtectConfigurationResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("ConfigurationSetArn"))
  {
    m_configurationSetArn = jsonValue.GetString("ConfigurationSetArn");
    m_configurationSetArnHasBeenSet = true;
  }
  if(jsonValue.ValueExists("ConfigurationSetName"))
  {
    m_configurationSetName = jsonValue.GetString("ConfigurationSetName");
    m_configurationSetNameHasBeenSet = true;
  }
  if(jsonValue.ValueExists("ProtectConfigurationArn"))
  {
    m_protectConfigurationArn = jsonValue.GetString("ProtectConfigurationArn");
    m_protectConfigurationArnHasBeenSet = true;
  }
  if(jsonValue.ValueExists("ProtectConfigurationId"))
  {
    m_protectConfigurationId = jsonValue.GetString("ProtectConfigurationId");
    m_protectConfigurationIdHasBeenSet = true;
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
