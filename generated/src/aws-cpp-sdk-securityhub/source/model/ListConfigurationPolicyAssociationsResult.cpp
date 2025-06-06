﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/securityhub/model/ListConfigurationPolicyAssociationsResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::SecurityHub::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

ListConfigurationPolicyAssociationsResult::ListConfigurationPolicyAssociationsResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

ListConfigurationPolicyAssociationsResult& ListConfigurationPolicyAssociationsResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("ConfigurationPolicyAssociationSummaries"))
  {
    Aws::Utils::Array<JsonView> configurationPolicyAssociationSummariesJsonList = jsonValue.GetArray("ConfigurationPolicyAssociationSummaries");
    for(unsigned configurationPolicyAssociationSummariesIndex = 0; configurationPolicyAssociationSummariesIndex < configurationPolicyAssociationSummariesJsonList.GetLength(); ++configurationPolicyAssociationSummariesIndex)
    {
      m_configurationPolicyAssociationSummaries.push_back(configurationPolicyAssociationSummariesJsonList[configurationPolicyAssociationSummariesIndex].AsObject());
    }
    m_configurationPolicyAssociationSummariesHasBeenSet = true;
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
