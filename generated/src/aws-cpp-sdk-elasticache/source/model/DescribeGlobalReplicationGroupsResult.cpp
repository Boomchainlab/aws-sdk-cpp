﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/elasticache/model/DescribeGlobalReplicationGroupsResult.h>
#include <aws/core/utils/xml/XmlSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/logging/LogMacros.h>

#include <utility>

using namespace Aws::ElastiCache::Model;
using namespace Aws::Utils::Xml;
using namespace Aws::Utils::Logging;
using namespace Aws::Utils;
using namespace Aws;

DescribeGlobalReplicationGroupsResult::DescribeGlobalReplicationGroupsResult(const Aws::AmazonWebServiceResult<XmlDocument>& result)
{
  *this = result;
}

DescribeGlobalReplicationGroupsResult& DescribeGlobalReplicationGroupsResult::operator =(const Aws::AmazonWebServiceResult<XmlDocument>& result)
{
  const XmlDocument& xmlDocument = result.GetPayload();
  XmlNode rootNode = xmlDocument.GetRootElement();
  XmlNode resultNode = rootNode;
  if (!rootNode.IsNull() && (rootNode.GetName() != "DescribeGlobalReplicationGroupsResult"))
  {
    resultNode = rootNode.FirstChild("DescribeGlobalReplicationGroupsResult");
  }

  if(!resultNode.IsNull())
  {
    XmlNode markerNode = resultNode.FirstChild("Marker");
    if(!markerNode.IsNull())
    {
      m_marker = Aws::Utils::Xml::DecodeEscapedXmlText(markerNode.GetText());
      m_markerHasBeenSet = true;
    }
    XmlNode globalReplicationGroupsNode = resultNode.FirstChild("GlobalReplicationGroups");
    if(!globalReplicationGroupsNode.IsNull())
    {
      XmlNode globalReplicationGroupsMember = globalReplicationGroupsNode.FirstChild("GlobalReplicationGroup");
      m_globalReplicationGroupsHasBeenSet = !globalReplicationGroupsMember.IsNull();
      while(!globalReplicationGroupsMember.IsNull())
      {
        m_globalReplicationGroups.push_back(globalReplicationGroupsMember);
        globalReplicationGroupsMember = globalReplicationGroupsMember.NextNode("GlobalReplicationGroup");
      }

      m_globalReplicationGroupsHasBeenSet = true;
    }
  }

  if (!rootNode.IsNull()) {
    XmlNode responseMetadataNode = rootNode.FirstChild("ResponseMetadata");
    m_responseMetadata = responseMetadataNode;
    m_responseMetadataHasBeenSet = true;
    AWS_LOGSTREAM_DEBUG("Aws::ElastiCache::Model::DescribeGlobalReplicationGroupsResult", "x-amzn-request-id: " << m_responseMetadata.GetRequestId() );
  }
  return *this;
}
