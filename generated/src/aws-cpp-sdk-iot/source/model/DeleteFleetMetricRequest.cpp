﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/iot/model/DeleteFleetMetricRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/http/URI.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::IoT::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws::Http;

Aws::String DeleteFleetMetricRequest::SerializePayload() const
{
  return {};
}

void DeleteFleetMetricRequest::AddQueryStringParameters(URI& uri) const
{
    Aws::StringStream ss;
    if(m_expectedVersionHasBeenSet)
    {
      ss << m_expectedVersion;
      uri.AddQueryStringParameter("expectedVersion", ss.str());
      ss.str("");
    }

}



