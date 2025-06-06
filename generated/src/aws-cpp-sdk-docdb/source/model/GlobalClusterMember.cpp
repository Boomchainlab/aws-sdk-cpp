﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/docdb/model/GlobalClusterMember.h>
#include <aws/core/utils/xml/XmlSerializer.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::Utils::Xml;
using namespace Aws::Utils;

namespace Aws
{
namespace DocDB
{
namespace Model
{

GlobalClusterMember::GlobalClusterMember(const XmlNode& xmlNode)
{
  *this = xmlNode;
}

GlobalClusterMember& GlobalClusterMember::operator =(const XmlNode& xmlNode)
{
  XmlNode resultNode = xmlNode;

  if(!resultNode.IsNull())
  {
    XmlNode dBClusterArnNode = resultNode.FirstChild("DBClusterArn");
    if(!dBClusterArnNode.IsNull())
    {
      m_dBClusterArn = Aws::Utils::Xml::DecodeEscapedXmlText(dBClusterArnNode.GetText());
      m_dBClusterArnHasBeenSet = true;
    }
    XmlNode readersNode = resultNode.FirstChild("Readers");
    if(!readersNode.IsNull())
    {
      XmlNode readersMember = readersNode.FirstChild("member");
      m_readersHasBeenSet = !readersMember.IsNull();
      while(!readersMember.IsNull())
      {
        m_readers.push_back(readersMember.GetText());
        readersMember = readersMember.NextNode("member");
      }

      m_readersHasBeenSet = true;
    }
    XmlNode isWriterNode = resultNode.FirstChild("IsWriter");
    if(!isWriterNode.IsNull())
    {
      m_isWriter = StringUtils::ConvertToBool(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(isWriterNode.GetText()).c_str()).c_str());
      m_isWriterHasBeenSet = true;
    }
  }

  return *this;
}

void GlobalClusterMember::OutputToStream(Aws::OStream& oStream, const char* location, unsigned index, const char* locationValue) const
{
  if(m_dBClusterArnHasBeenSet)
  {
      oStream << location << index << locationValue << ".DBClusterArn=" << StringUtils::URLEncode(m_dBClusterArn.c_str()) << "&";
  }

  if(m_readersHasBeenSet)
  {
      unsigned readersIdx = 1;
      for(auto& item : m_readers)
      {
        oStream << location << index << locationValue << ".Readers.member." << readersIdx++ << "=" << StringUtils::URLEncode(item.c_str()) << "&";
      }
  }

  if(m_isWriterHasBeenSet)
  {
      oStream << location << index << locationValue << ".IsWriter=" << std::boolalpha << m_isWriter << "&";
  }

}

void GlobalClusterMember::OutputToStream(Aws::OStream& oStream, const char* location) const
{
  if(m_dBClusterArnHasBeenSet)
  {
      oStream << location << ".DBClusterArn=" << StringUtils::URLEncode(m_dBClusterArn.c_str()) << "&";
  }
  if(m_readersHasBeenSet)
  {
      unsigned readersIdx = 1;
      for(auto& item : m_readers)
      {
        oStream << location << ".Readers.member." << readersIdx++ << "=" << StringUtils::URLEncode(item.c_str()) << "&";
      }
  }
  if(m_isWriterHasBeenSet)
  {
      oStream << location << ".IsWriter=" << std::boolalpha << m_isWriter << "&";
  }
}

} // namespace Model
} // namespace DocDB
} // namespace Aws
