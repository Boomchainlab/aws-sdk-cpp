﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/s3-crt/model/ListBucketIntelligentTieringConfigurationsResult.h>
#include <aws/core/utils/xml/XmlSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::S3Crt::Model;
using namespace Aws::Utils::Xml;
using namespace Aws::Utils;
using namespace Aws;

ListBucketIntelligentTieringConfigurationsResult::ListBucketIntelligentTieringConfigurationsResult(const Aws::AmazonWebServiceResult<XmlDocument>& result)
{
  *this = result;
}

ListBucketIntelligentTieringConfigurationsResult& ListBucketIntelligentTieringConfigurationsResult::operator =(const Aws::AmazonWebServiceResult<XmlDocument>& result)
{
  const XmlDocument& xmlDocument = result.GetPayload();
  XmlNode resultNode = xmlDocument.GetRootElement();

  if(!resultNode.IsNull())
  {
    XmlNode isTruncatedNode = resultNode.FirstChild("IsTruncated");
    if(!isTruncatedNode.IsNull())
    {
      m_isTruncated = StringUtils::ConvertToBool(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(isTruncatedNode.GetText()).c_str()).c_str());
      m_isTruncatedHasBeenSet = true;
    }
    XmlNode continuationTokenNode = resultNode.FirstChild("ContinuationToken");
    if(!continuationTokenNode.IsNull())
    {
      m_continuationToken = Aws::Utils::Xml::DecodeEscapedXmlText(continuationTokenNode.GetText());
      m_continuationTokenHasBeenSet = true;
    }
    XmlNode nextContinuationTokenNode = resultNode.FirstChild("NextContinuationToken");
    if(!nextContinuationTokenNode.IsNull())
    {
      m_nextContinuationToken = Aws::Utils::Xml::DecodeEscapedXmlText(nextContinuationTokenNode.GetText());
      m_nextContinuationTokenHasBeenSet = true;
    }
    XmlNode intelligentTieringConfigurationListNode = resultNode.FirstChild("IntelligentTieringConfiguration");
    if(!intelligentTieringConfigurationListNode.IsNull())
    {
      XmlNode intelligentTieringConfigurationMember = intelligentTieringConfigurationListNode;
      m_intelligentTieringConfigurationListHasBeenSet = !intelligentTieringConfigurationMember.IsNull();
      while(!intelligentTieringConfigurationMember.IsNull())
      {
        m_intelligentTieringConfigurationList.push_back(intelligentTieringConfigurationMember);
        intelligentTieringConfigurationMember = intelligentTieringConfigurationMember.NextNode("IntelligentTieringConfiguration");
      }

      m_intelligentTieringConfigurationListHasBeenSet = true;
    }
  }

  const auto& headers = result.GetHeaderValueCollection();
  const auto& requestIdIter = headers.find("x-amz-request-id");
  if(requestIdIter != headers.end())
  {
    m_requestId = requestIdIter->second;
    m_requestIdHasBeenSet = true;
  }

  return *this;
}
