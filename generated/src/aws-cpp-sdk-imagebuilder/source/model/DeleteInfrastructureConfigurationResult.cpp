﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/imagebuilder/model/DeleteInfrastructureConfigurationResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::imagebuilder::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

DeleteInfrastructureConfigurationResult::DeleteInfrastructureConfigurationResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

DeleteInfrastructureConfigurationResult& DeleteInfrastructureConfigurationResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("requestId"))
  {
    m_requestId = jsonValue.GetString("requestId");
    m_requestIdHasBeenSet = true;
  }
  if(jsonValue.ValueExists("infrastructureConfigurationArn"))
  {
    m_infrastructureConfigurationArn = jsonValue.GetString("infrastructureConfigurationArn");
    m_infrastructureConfigurationArnHasBeenSet = true;
  }


  return *this;
}
