﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/elasticloadbalancingv2/model/DescribeTrustStoreRevocationsResult.h>
#include <aws/core/utils/xml/XmlSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/logging/LogMacros.h>

#include <utility>

using namespace Aws::ElasticLoadBalancingv2::Model;
using namespace Aws::Utils::Xml;
using namespace Aws::Utils::Logging;
using namespace Aws::Utils;
using namespace Aws;

DescribeTrustStoreRevocationsResult::DescribeTrustStoreRevocationsResult(const Aws::AmazonWebServiceResult<XmlDocument>& result)
{
  *this = result;
}

DescribeTrustStoreRevocationsResult& DescribeTrustStoreRevocationsResult::operator =(const Aws::AmazonWebServiceResult<XmlDocument>& result)
{
  const XmlDocument& xmlDocument = result.GetPayload();
  XmlNode rootNode = xmlDocument.GetRootElement();
  XmlNode resultNode = rootNode;
  if (!rootNode.IsNull() && (rootNode.GetName() != "DescribeTrustStoreRevocationsResult"))
  {
    resultNode = rootNode.FirstChild("DescribeTrustStoreRevocationsResult");
  }

  if(!resultNode.IsNull())
  {
    XmlNode trustStoreRevocationsNode = resultNode.FirstChild("TrustStoreRevocations");
    if(!trustStoreRevocationsNode.IsNull())
    {
      XmlNode trustStoreRevocationsMember = trustStoreRevocationsNode.FirstChild("member");
      m_trustStoreRevocationsHasBeenSet = !trustStoreRevocationsMember.IsNull();
      while(!trustStoreRevocationsMember.IsNull())
      {
        m_trustStoreRevocations.push_back(trustStoreRevocationsMember);
        trustStoreRevocationsMember = trustStoreRevocationsMember.NextNode("member");
      }

      m_trustStoreRevocationsHasBeenSet = true;
    }
    XmlNode nextMarkerNode = resultNode.FirstChild("NextMarker");
    if(!nextMarkerNode.IsNull())
    {
      m_nextMarker = Aws::Utils::Xml::DecodeEscapedXmlText(nextMarkerNode.GetText());
      m_nextMarkerHasBeenSet = true;
    }
  }

  if (!rootNode.IsNull()) {
    XmlNode responseMetadataNode = rootNode.FirstChild("ResponseMetadata");
    m_responseMetadata = responseMetadataNode;
    m_responseMetadataHasBeenSet = true;
    AWS_LOGSTREAM_DEBUG("Aws::ElasticLoadBalancingv2::Model::DescribeTrustStoreRevocationsResult", "x-amzn-request-id: " << m_responseMetadata.GetRequestId() );
  }
  return *this;
}
