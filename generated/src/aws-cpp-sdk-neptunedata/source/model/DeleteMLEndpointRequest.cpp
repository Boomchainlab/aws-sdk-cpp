﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/neptunedata/model/DeleteMLEndpointRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/http/URI.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::neptunedata::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws::Http;

Aws::String DeleteMLEndpointRequest::SerializePayload() const
{
  return {};
}

void DeleteMLEndpointRequest::AddQueryStringParameters(URI& uri) const
{
    Aws::StringStream ss;
    if(m_neptuneIamRoleArnHasBeenSet)
    {
      ss << m_neptuneIamRoleArn;
      uri.AddQueryStringParameter("neptuneIamRoleArn", ss.str());
      ss.str("");
    }

    if(m_cleanHasBeenSet)
    {
      ss << m_clean;
      uri.AddQueryStringParameter("clean", ss.str());
      ss.str("");
    }

}



