﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/email/model/GetCustomVerificationEmailTemplateRequest.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

using namespace Aws::SES::Model;
using namespace Aws::Utils;

Aws::String GetCustomVerificationEmailTemplateRequest::SerializePayload() const
{
  Aws::StringStream ss;
  ss << "Action=GetCustomVerificationEmailTemplate&";
  if(m_templateNameHasBeenSet)
  {
    ss << "TemplateName=" << StringUtils::URLEncode(m_templateName.c_str()) << "&";
  }

  ss << "Version=2010-12-01";
  return ss.str();
}


void  GetCustomVerificationEmailTemplateRequest::DumpBodyToUrl(Aws::Http::URI& uri ) const
{
  uri.SetQueryString(SerializePayload());
}
