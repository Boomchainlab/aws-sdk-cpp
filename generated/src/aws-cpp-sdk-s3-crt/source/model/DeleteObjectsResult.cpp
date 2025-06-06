﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/s3-crt/model/DeleteObjectsResult.h>
#include <aws/core/utils/xml/XmlSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::S3Crt::Model;
using namespace Aws::Utils::Xml;
using namespace Aws::Utils;
using namespace Aws;

DeleteObjectsResult::DeleteObjectsResult(const Aws::AmazonWebServiceResult<XmlDocument>& result)
{
  *this = result;
}

DeleteObjectsResult& DeleteObjectsResult::operator =(const Aws::AmazonWebServiceResult<XmlDocument>& result)
{
  const XmlDocument& xmlDocument = result.GetPayload();
  XmlNode resultNode = xmlDocument.GetRootElement();

  if(!resultNode.IsNull())
  {
    XmlNode deletedNode = resultNode.FirstChild("Deleted");
    if(!deletedNode.IsNull())
    {
      XmlNode deletedMember = deletedNode;
      m_deletedHasBeenSet = !deletedMember.IsNull();
      while(!deletedMember.IsNull())
      {
        m_deleted.push_back(deletedMember);
        deletedMember = deletedMember.NextNode("Deleted");
      }

      m_deletedHasBeenSet = true;
    }
    XmlNode errorsNode = resultNode.FirstChild("Error");
    if(!errorsNode.IsNull())
    {
      XmlNode errorMember = errorsNode;
      m_errorsHasBeenSet = !errorMember.IsNull();
      while(!errorMember.IsNull())
      {
        m_errors.push_back(errorMember);
        errorMember = errorMember.NextNode("Error");
      }

      m_errorsHasBeenSet = true;
    }
  }

  const auto& headers = result.GetHeaderValueCollection();
  const auto& requestChargedIter = headers.find("x-amz-request-charged");
  if(requestChargedIter != headers.end())
  {
    m_requestCharged = RequestChargedMapper::GetRequestChargedForName(requestChargedIter->second);
    m_requestChargedHasBeenSet = true;
  }

  const auto& requestIdIter = headers.find("x-amz-request-id");
  if(requestIdIter != headers.end())
  {
    m_requestId = requestIdIter->second;
    m_requestIdHasBeenSet = true;
  }

  return *this;
}
