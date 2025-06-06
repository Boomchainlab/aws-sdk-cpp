﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/appconfig/model/CreateHostedConfigurationVersionRequest.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>
#include <aws/core/utils/HashingUtils.h>

#include <utility>

using namespace Aws::AppConfig::Model;
using namespace Aws::Utils::Stream;
using namespace Aws::Utils;
using namespace Aws;



Aws::Http::HeaderValueCollection CreateHostedConfigurationVersionRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  Aws::StringStream ss;
  if(m_descriptionHasBeenSet)
  {
    ss << m_description;
    headers.emplace("description",  ss.str());
    ss.str("");
  }

  if(m_latestVersionNumberHasBeenSet)
  {
    ss << m_latestVersionNumber;
    headers.emplace("latest-version-number",  ss.str());
    ss.str("");
  }

  if(m_versionLabelHasBeenSet)
  {
    ss << m_versionLabel;
    headers.emplace("versionlabel",  ss.str());
    ss.str("");
  }

  return headers;

}
