﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/iotwireless/model/DisassociateAwsAccountFromPartnerAccountRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/http/URI.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::IoTWireless::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws::Http;

Aws::String DisassociateAwsAccountFromPartnerAccountRequest::SerializePayload() const
{
  return {};
}

void DisassociateAwsAccountFromPartnerAccountRequest::AddQueryStringParameters(URI& uri) const
{
    Aws::StringStream ss;
    if(m_partnerTypeHasBeenSet)
    {
      ss << PartnerTypeMapper::GetNameForPartnerType(m_partnerType);
      uri.AddQueryStringParameter("partnerType", ss.str());
      ss.str("");
    }

}



