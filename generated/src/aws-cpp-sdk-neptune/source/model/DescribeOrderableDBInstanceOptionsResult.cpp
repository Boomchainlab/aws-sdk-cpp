﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/neptune/model/DescribeOrderableDBInstanceOptionsResult.h>
#include <aws/core/utils/xml/XmlSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/logging/LogMacros.h>

#include <utility>

using namespace Aws::Neptune::Model;
using namespace Aws::Utils::Xml;
using namespace Aws::Utils::Logging;
using namespace Aws::Utils;
using namespace Aws;

DescribeOrderableDBInstanceOptionsResult::DescribeOrderableDBInstanceOptionsResult(const Aws::AmazonWebServiceResult<XmlDocument>& result)
{
  *this = result;
}

DescribeOrderableDBInstanceOptionsResult& DescribeOrderableDBInstanceOptionsResult::operator =(const Aws::AmazonWebServiceResult<XmlDocument>& result)
{
  const XmlDocument& xmlDocument = result.GetPayload();
  XmlNode rootNode = xmlDocument.GetRootElement();
  XmlNode resultNode = rootNode;
  if (!rootNode.IsNull() && (rootNode.GetName() != "DescribeOrderableDBInstanceOptionsResult"))
  {
    resultNode = rootNode.FirstChild("DescribeOrderableDBInstanceOptionsResult");
  }

  if(!resultNode.IsNull())
  {
    XmlNode orderableDBInstanceOptionsNode = resultNode.FirstChild("OrderableDBInstanceOptions");
    if(!orderableDBInstanceOptionsNode.IsNull())
    {
      XmlNode orderableDBInstanceOptionsMember = orderableDBInstanceOptionsNode.FirstChild("OrderableDBInstanceOption");
      m_orderableDBInstanceOptionsHasBeenSet = !orderableDBInstanceOptionsMember.IsNull();
      while(!orderableDBInstanceOptionsMember.IsNull())
      {
        m_orderableDBInstanceOptions.push_back(orderableDBInstanceOptionsMember);
        orderableDBInstanceOptionsMember = orderableDBInstanceOptionsMember.NextNode("OrderableDBInstanceOption");
      }

      m_orderableDBInstanceOptionsHasBeenSet = true;
    }
    XmlNode markerNode = resultNode.FirstChild("Marker");
    if(!markerNode.IsNull())
    {
      m_marker = Aws::Utils::Xml::DecodeEscapedXmlText(markerNode.GetText());
      m_markerHasBeenSet = true;
    }
  }

  if (!rootNode.IsNull()) {
    XmlNode responseMetadataNode = rootNode.FirstChild("ResponseMetadata");
    m_responseMetadata = responseMetadataNode;
    m_responseMetadataHasBeenSet = true;
    AWS_LOGSTREAM_DEBUG("Aws::Neptune::Model::DescribeOrderableDBInstanceOptionsResult", "x-amzn-request-id: " << m_responseMetadata.GetRequestId() );
  }
  return *this;
}
