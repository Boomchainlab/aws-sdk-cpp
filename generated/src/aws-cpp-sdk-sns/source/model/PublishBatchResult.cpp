﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/sns/model/PublishBatchResult.h>
#include <aws/core/utils/xml/XmlSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/logging/LogMacros.h>

#include <utility>

using namespace Aws::SNS::Model;
using namespace Aws::Utils::Xml;
using namespace Aws::Utils::Logging;
using namespace Aws::Utils;
using namespace Aws;

PublishBatchResult::PublishBatchResult(const Aws::AmazonWebServiceResult<XmlDocument>& result)
{
  *this = result;
}

PublishBatchResult& PublishBatchResult::operator =(const Aws::AmazonWebServiceResult<XmlDocument>& result)
{
  const XmlDocument& xmlDocument = result.GetPayload();
  XmlNode rootNode = xmlDocument.GetRootElement();
  XmlNode resultNode = rootNode;
  if (!rootNode.IsNull() && (rootNode.GetName() != "PublishBatchResult"))
  {
    resultNode = rootNode.FirstChild("PublishBatchResult");
  }

  if(!resultNode.IsNull())
  {
    XmlNode successfulNode = resultNode.FirstChild("Successful");
    if(!successfulNode.IsNull())
    {
      XmlNode successfulMember = successfulNode.FirstChild("member");
      m_successfulHasBeenSet = !successfulMember.IsNull();
      while(!successfulMember.IsNull())
      {
        m_successful.push_back(successfulMember);
        successfulMember = successfulMember.NextNode("member");
      }

      m_successfulHasBeenSet = true;
    }
    XmlNode failedNode = resultNode.FirstChild("Failed");
    if(!failedNode.IsNull())
    {
      XmlNode failedMember = failedNode.FirstChild("member");
      m_failedHasBeenSet = !failedMember.IsNull();
      while(!failedMember.IsNull())
      {
        m_failed.push_back(failedMember);
        failedMember = failedMember.NextNode("member");
      }

      m_failedHasBeenSet = true;
    }
  }

  if (!rootNode.IsNull()) {
    XmlNode responseMetadataNode = rootNode.FirstChild("ResponseMetadata");
    m_responseMetadata = responseMetadataNode;
    m_responseMetadataHasBeenSet = true;
    AWS_LOGSTREAM_DEBUG("Aws::SNS::Model::PublishBatchResult", "x-amzn-request-id: " << m_responseMetadata.GetRequestId() );
  }
  return *this;
}
