﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ec2/model/SearchTransitGatewayRoutesResponse.h>
#include <aws/core/utils/xml/XmlSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/logging/LogMacros.h>

#include <utility>

using namespace Aws::EC2::Model;
using namespace Aws::Utils::Xml;
using namespace Aws::Utils::Logging;
using namespace Aws::Utils;
using namespace Aws;

SearchTransitGatewayRoutesResponse::SearchTransitGatewayRoutesResponse(const Aws::AmazonWebServiceResult<XmlDocument>& result)
{
  *this = result;
}

SearchTransitGatewayRoutesResponse& SearchTransitGatewayRoutesResponse::operator =(const Aws::AmazonWebServiceResult<XmlDocument>& result)
{
  const XmlDocument& xmlDocument = result.GetPayload();
  XmlNode rootNode = xmlDocument.GetRootElement();
  XmlNode resultNode = rootNode;
  if (!rootNode.IsNull() && (rootNode.GetName() != "SearchTransitGatewayRoutesResponse"))
  {
    resultNode = rootNode.FirstChild("SearchTransitGatewayRoutesResponse");
  }

  if(!resultNode.IsNull())
  {
    XmlNode routesNode = resultNode.FirstChild("routeSet");
    if(!routesNode.IsNull())
    {
      XmlNode routesMember = routesNode.FirstChild("item");
      m_routesHasBeenSet = !routesMember.IsNull();
      while(!routesMember.IsNull())
      {
        m_routes.push_back(routesMember);
        routesMember = routesMember.NextNode("item");
      }

      m_routesHasBeenSet = true;
    }
    XmlNode additionalRoutesAvailableNode = resultNode.FirstChild("additionalRoutesAvailable");
    if(!additionalRoutesAvailableNode.IsNull())
    {
      m_additionalRoutesAvailable = StringUtils::ConvertToBool(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(additionalRoutesAvailableNode.GetText()).c_str()).c_str());
      m_additionalRoutesAvailableHasBeenSet = true;
    }
  }

  if (!rootNode.IsNull()) {
    XmlNode requestIdNode = rootNode.FirstChild("requestId");
    if (!requestIdNode.IsNull())
    {
      m_responseMetadata.SetRequestId(StringUtils::Trim(requestIdNode.GetText().c_str()));
      m_responseMetadataHasBeenSet = true;
    }
    AWS_LOGSTREAM_DEBUG("Aws::EC2::Model::SearchTransitGatewayRoutesResponse", "x-amzn-request-id: " << m_responseMetadata.GetRequestId() );
  }
  return *this;
}
