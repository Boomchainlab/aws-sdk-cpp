﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/auditmanager/model/ListAssessmentControlInsightsByControlDomainRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/http/URI.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::AuditManager::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws::Http;

Aws::String ListAssessmentControlInsightsByControlDomainRequest::SerializePayload() const
{
  return {};
}

void ListAssessmentControlInsightsByControlDomainRequest::AddQueryStringParameters(URI& uri) const
{
    Aws::StringStream ss;
    if(m_controlDomainIdHasBeenSet)
    {
      ss << m_controlDomainId;
      uri.AddQueryStringParameter("controlDomainId", ss.str());
      ss.str("");
    }

    if(m_assessmentIdHasBeenSet)
    {
      ss << m_assessmentId;
      uri.AddQueryStringParameter("assessmentId", ss.str());
      ss.str("");
    }

    if(m_nextTokenHasBeenSet)
    {
      ss << m_nextToken;
      uri.AddQueryStringParameter("nextToken", ss.str());
      ss.str("");
    }

    if(m_maxResultsHasBeenSet)
    {
      ss << m_maxResults;
      uri.AddQueryStringParameter("maxResults", ss.str());
      ss.str("");
    }

}



