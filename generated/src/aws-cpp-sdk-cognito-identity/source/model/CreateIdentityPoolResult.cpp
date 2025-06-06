﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/cognito-identity/model/CreateIdentityPoolResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::CognitoIdentity::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

CreateIdentityPoolResult::CreateIdentityPoolResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

CreateIdentityPoolResult& CreateIdentityPoolResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("IdentityPoolId"))
  {
    m_identityPoolId = jsonValue.GetString("IdentityPoolId");
    m_identityPoolIdHasBeenSet = true;
  }
  if(jsonValue.ValueExists("IdentityPoolName"))
  {
    m_identityPoolName = jsonValue.GetString("IdentityPoolName");
    m_identityPoolNameHasBeenSet = true;
  }
  if(jsonValue.ValueExists("AllowUnauthenticatedIdentities"))
  {
    m_allowUnauthenticatedIdentities = jsonValue.GetBool("AllowUnauthenticatedIdentities");
    m_allowUnauthenticatedIdentitiesHasBeenSet = true;
  }
  if(jsonValue.ValueExists("AllowClassicFlow"))
  {
    m_allowClassicFlow = jsonValue.GetBool("AllowClassicFlow");
    m_allowClassicFlowHasBeenSet = true;
  }
  if(jsonValue.ValueExists("SupportedLoginProviders"))
  {
    Aws::Map<Aws::String, JsonView> supportedLoginProvidersJsonMap = jsonValue.GetObject("SupportedLoginProviders").GetAllObjects();
    for(auto& supportedLoginProvidersItem : supportedLoginProvidersJsonMap)
    {
      m_supportedLoginProviders[supportedLoginProvidersItem.first] = supportedLoginProvidersItem.second.AsString();
    }
    m_supportedLoginProvidersHasBeenSet = true;
  }
  if(jsonValue.ValueExists("DeveloperProviderName"))
  {
    m_developerProviderName = jsonValue.GetString("DeveloperProviderName");
    m_developerProviderNameHasBeenSet = true;
  }
  if(jsonValue.ValueExists("OpenIdConnectProviderARNs"))
  {
    Aws::Utils::Array<JsonView> openIdConnectProviderARNsJsonList = jsonValue.GetArray("OpenIdConnectProviderARNs");
    for(unsigned openIdConnectProviderARNsIndex = 0; openIdConnectProviderARNsIndex < openIdConnectProviderARNsJsonList.GetLength(); ++openIdConnectProviderARNsIndex)
    {
      m_openIdConnectProviderARNs.push_back(openIdConnectProviderARNsJsonList[openIdConnectProviderARNsIndex].AsString());
    }
    m_openIdConnectProviderARNsHasBeenSet = true;
  }
  if(jsonValue.ValueExists("CognitoIdentityProviders"))
  {
    Aws::Utils::Array<JsonView> cognitoIdentityProvidersJsonList = jsonValue.GetArray("CognitoIdentityProviders");
    for(unsigned cognitoIdentityProvidersIndex = 0; cognitoIdentityProvidersIndex < cognitoIdentityProvidersJsonList.GetLength(); ++cognitoIdentityProvidersIndex)
    {
      m_cognitoIdentityProviders.push_back(cognitoIdentityProvidersJsonList[cognitoIdentityProvidersIndex].AsObject());
    }
    m_cognitoIdentityProvidersHasBeenSet = true;
  }
  if(jsonValue.ValueExists("SamlProviderARNs"))
  {
    Aws::Utils::Array<JsonView> samlProviderARNsJsonList = jsonValue.GetArray("SamlProviderARNs");
    for(unsigned samlProviderARNsIndex = 0; samlProviderARNsIndex < samlProviderARNsJsonList.GetLength(); ++samlProviderARNsIndex)
    {
      m_samlProviderARNs.push_back(samlProviderARNsJsonList[samlProviderARNsIndex].AsString());
    }
    m_samlProviderARNsHasBeenSet = true;
  }
  if(jsonValue.ValueExists("IdentityPoolTags"))
  {
    Aws::Map<Aws::String, JsonView> identityPoolTagsJsonMap = jsonValue.GetObject("IdentityPoolTags").GetAllObjects();
    for(auto& identityPoolTagsItem : identityPoolTagsJsonMap)
    {
      m_identityPoolTags[identityPoolTagsItem.first] = identityPoolTagsItem.second.AsString();
    }
    m_identityPoolTagsHasBeenSet = true;
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
