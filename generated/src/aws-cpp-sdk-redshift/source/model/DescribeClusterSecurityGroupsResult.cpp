﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/redshift/model/DescribeClusterSecurityGroupsResult.h>
#include <aws/core/utils/xml/XmlSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/logging/LogMacros.h>

#include <utility>

using namespace Aws::Redshift::Model;
using namespace Aws::Utils::Xml;
using namespace Aws::Utils::Logging;
using namespace Aws::Utils;
using namespace Aws;

DescribeClusterSecurityGroupsResult::DescribeClusterSecurityGroupsResult(const Aws::AmazonWebServiceResult<XmlDocument>& result)
{
  *this = result;
}

DescribeClusterSecurityGroupsResult& DescribeClusterSecurityGroupsResult::operator =(const Aws::AmazonWebServiceResult<XmlDocument>& result)
{
  const XmlDocument& xmlDocument = result.GetPayload();
  XmlNode rootNode = xmlDocument.GetRootElement();
  XmlNode resultNode = rootNode;
  if (!rootNode.IsNull() && (rootNode.GetName() != "DescribeClusterSecurityGroupsResult"))
  {
    resultNode = rootNode.FirstChild("DescribeClusterSecurityGroupsResult");
  }

  if(!resultNode.IsNull())
  {
    XmlNode markerNode = resultNode.FirstChild("Marker");
    if(!markerNode.IsNull())
    {
      m_marker = Aws::Utils::Xml::DecodeEscapedXmlText(markerNode.GetText());
      m_markerHasBeenSet = true;
    }
    XmlNode clusterSecurityGroupsNode = resultNode.FirstChild("ClusterSecurityGroups");
    if(!clusterSecurityGroupsNode.IsNull())
    {
      XmlNode clusterSecurityGroupsMember = clusterSecurityGroupsNode.FirstChild("ClusterSecurityGroup");
      m_clusterSecurityGroupsHasBeenSet = !clusterSecurityGroupsMember.IsNull();
      while(!clusterSecurityGroupsMember.IsNull())
      {
        m_clusterSecurityGroups.push_back(clusterSecurityGroupsMember);
        clusterSecurityGroupsMember = clusterSecurityGroupsMember.NextNode("ClusterSecurityGroup");
      }

      m_clusterSecurityGroupsHasBeenSet = true;
    }
  }

  if (!rootNode.IsNull()) {
    XmlNode responseMetadataNode = rootNode.FirstChild("ResponseMetadata");
    m_responseMetadata = responseMetadataNode;
    m_responseMetadataHasBeenSet = true;
    AWS_LOGSTREAM_DEBUG("Aws::Redshift::Model::DescribeClusterSecurityGroupsResult", "x-amzn-request-id: " << m_responseMetadata.GetRequestId() );
  }
  return *this;
}
