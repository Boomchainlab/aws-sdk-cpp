﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/rds/model/DeleteIntegrationRequest.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

using namespace Aws::RDS::Model;
using namespace Aws::Utils;

Aws::String DeleteIntegrationRequest::SerializePayload() const
{
  Aws::StringStream ss;
  ss << "Action=DeleteIntegration&";
  if(m_integrationIdentifierHasBeenSet)
  {
    ss << "IntegrationIdentifier=" << StringUtils::URLEncode(m_integrationIdentifier.c_str()) << "&";
  }

  ss << "Version=2014-10-31";
  return ss.str();
}


void  DeleteIntegrationRequest::DumpBodyToUrl(Aws::Http::URI& uri ) const
{
  uri.SetQueryString(SerializePayload());
}
