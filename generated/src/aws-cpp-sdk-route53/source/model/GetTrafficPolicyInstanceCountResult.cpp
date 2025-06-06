﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/route53/model/GetTrafficPolicyInstanceCountResult.h>
#include <aws/core/utils/xml/XmlSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::Route53::Model;
using namespace Aws::Utils::Xml;
using namespace Aws::Utils;
using namespace Aws;

GetTrafficPolicyInstanceCountResult::GetTrafficPolicyInstanceCountResult(const Aws::AmazonWebServiceResult<XmlDocument>& result)
{
  *this = result;
}

GetTrafficPolicyInstanceCountResult& GetTrafficPolicyInstanceCountResult::operator =(const Aws::AmazonWebServiceResult<XmlDocument>& result)
{
  const XmlDocument& xmlDocument = result.GetPayload();
  XmlNode resultNode = xmlDocument.GetRootElement();

  if(!resultNode.IsNull())
  {
    XmlNode trafficPolicyInstanceCountNode = resultNode.FirstChild("TrafficPolicyInstanceCount");
    if(!trafficPolicyInstanceCountNode.IsNull())
    {
      m_trafficPolicyInstanceCount = StringUtils::ConvertToInt32(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(trafficPolicyInstanceCountNode.GetText()).c_str()).c_str());
      m_trafficPolicyInstanceCountHasBeenSet = true;
    }
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
