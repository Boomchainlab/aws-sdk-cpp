﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/neptune/model/DBClusterEndpoint.h>
#include <aws/core/utils/xml/XmlSerializer.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::Utils::Xml;
using namespace Aws::Utils;

namespace Aws
{
namespace Neptune
{
namespace Model
{

DBClusterEndpoint::DBClusterEndpoint(const XmlNode& xmlNode)
{
  *this = xmlNode;
}

DBClusterEndpoint& DBClusterEndpoint::operator =(const XmlNode& xmlNode)
{
  XmlNode resultNode = xmlNode;

  if(!resultNode.IsNull())
  {
    XmlNode dBClusterEndpointIdentifierNode = resultNode.FirstChild("DBClusterEndpointIdentifier");
    if(!dBClusterEndpointIdentifierNode.IsNull())
    {
      m_dBClusterEndpointIdentifier = Aws::Utils::Xml::DecodeEscapedXmlText(dBClusterEndpointIdentifierNode.GetText());
      m_dBClusterEndpointIdentifierHasBeenSet = true;
    }
    XmlNode dBClusterIdentifierNode = resultNode.FirstChild("DBClusterIdentifier");
    if(!dBClusterIdentifierNode.IsNull())
    {
      m_dBClusterIdentifier = Aws::Utils::Xml::DecodeEscapedXmlText(dBClusterIdentifierNode.GetText());
      m_dBClusterIdentifierHasBeenSet = true;
    }
    XmlNode dBClusterEndpointResourceIdentifierNode = resultNode.FirstChild("DBClusterEndpointResourceIdentifier");
    if(!dBClusterEndpointResourceIdentifierNode.IsNull())
    {
      m_dBClusterEndpointResourceIdentifier = Aws::Utils::Xml::DecodeEscapedXmlText(dBClusterEndpointResourceIdentifierNode.GetText());
      m_dBClusterEndpointResourceIdentifierHasBeenSet = true;
    }
    XmlNode endpointNode = resultNode.FirstChild("Endpoint");
    if(!endpointNode.IsNull())
    {
      m_endpoint = Aws::Utils::Xml::DecodeEscapedXmlText(endpointNode.GetText());
      m_endpointHasBeenSet = true;
    }
    XmlNode statusNode = resultNode.FirstChild("Status");
    if(!statusNode.IsNull())
    {
      m_status = Aws::Utils::Xml::DecodeEscapedXmlText(statusNode.GetText());
      m_statusHasBeenSet = true;
    }
    XmlNode endpointTypeNode = resultNode.FirstChild("EndpointType");
    if(!endpointTypeNode.IsNull())
    {
      m_endpointType = Aws::Utils::Xml::DecodeEscapedXmlText(endpointTypeNode.GetText());
      m_endpointTypeHasBeenSet = true;
    }
    XmlNode customEndpointTypeNode = resultNode.FirstChild("CustomEndpointType");
    if(!customEndpointTypeNode.IsNull())
    {
      m_customEndpointType = Aws::Utils::Xml::DecodeEscapedXmlText(customEndpointTypeNode.GetText());
      m_customEndpointTypeHasBeenSet = true;
    }
    XmlNode staticMembersNode = resultNode.FirstChild("StaticMembers");
    if(!staticMembersNode.IsNull())
    {
      XmlNode staticMembersMember = staticMembersNode.FirstChild("member");
      m_staticMembersHasBeenSet = !staticMembersMember.IsNull();
      while(!staticMembersMember.IsNull())
      {
        m_staticMembers.push_back(staticMembersMember.GetText());
        staticMembersMember = staticMembersMember.NextNode("member");
      }

      m_staticMembersHasBeenSet = true;
    }
    XmlNode excludedMembersNode = resultNode.FirstChild("ExcludedMembers");
    if(!excludedMembersNode.IsNull())
    {
      XmlNode excludedMembersMember = excludedMembersNode.FirstChild("member");
      m_excludedMembersHasBeenSet = !excludedMembersMember.IsNull();
      while(!excludedMembersMember.IsNull())
      {
        m_excludedMembers.push_back(excludedMembersMember.GetText());
        excludedMembersMember = excludedMembersMember.NextNode("member");
      }

      m_excludedMembersHasBeenSet = true;
    }
    XmlNode dBClusterEndpointArnNode = resultNode.FirstChild("DBClusterEndpointArn");
    if(!dBClusterEndpointArnNode.IsNull())
    {
      m_dBClusterEndpointArn = Aws::Utils::Xml::DecodeEscapedXmlText(dBClusterEndpointArnNode.GetText());
      m_dBClusterEndpointArnHasBeenSet = true;
    }
  }

  return *this;
}

void DBClusterEndpoint::OutputToStream(Aws::OStream& oStream, const char* location, unsigned index, const char* locationValue) const
{
  if(m_dBClusterEndpointIdentifierHasBeenSet)
  {
      oStream << location << index << locationValue << ".DBClusterEndpointIdentifier=" << StringUtils::URLEncode(m_dBClusterEndpointIdentifier.c_str()) << "&";
  }

  if(m_dBClusterIdentifierHasBeenSet)
  {
      oStream << location << index << locationValue << ".DBClusterIdentifier=" << StringUtils::URLEncode(m_dBClusterIdentifier.c_str()) << "&";
  }

  if(m_dBClusterEndpointResourceIdentifierHasBeenSet)
  {
      oStream << location << index << locationValue << ".DBClusterEndpointResourceIdentifier=" << StringUtils::URLEncode(m_dBClusterEndpointResourceIdentifier.c_str()) << "&";
  }

  if(m_endpointHasBeenSet)
  {
      oStream << location << index << locationValue << ".Endpoint=" << StringUtils::URLEncode(m_endpoint.c_str()) << "&";
  }

  if(m_statusHasBeenSet)
  {
      oStream << location << index << locationValue << ".Status=" << StringUtils::URLEncode(m_status.c_str()) << "&";
  }

  if(m_endpointTypeHasBeenSet)
  {
      oStream << location << index << locationValue << ".EndpointType=" << StringUtils::URLEncode(m_endpointType.c_str()) << "&";
  }

  if(m_customEndpointTypeHasBeenSet)
  {
      oStream << location << index << locationValue << ".CustomEndpointType=" << StringUtils::URLEncode(m_customEndpointType.c_str()) << "&";
  }

  if(m_staticMembersHasBeenSet)
  {
      unsigned staticMembersIdx = 1;
      for(auto& item : m_staticMembers)
      {
        oStream << location << index << locationValue << ".StaticMembers.member." << staticMembersIdx++ << "=" << StringUtils::URLEncode(item.c_str()) << "&";
      }
  }

  if(m_excludedMembersHasBeenSet)
  {
      unsigned excludedMembersIdx = 1;
      for(auto& item : m_excludedMembers)
      {
        oStream << location << index << locationValue << ".ExcludedMembers.member." << excludedMembersIdx++ << "=" << StringUtils::URLEncode(item.c_str()) << "&";
      }
  }

  if(m_dBClusterEndpointArnHasBeenSet)
  {
      oStream << location << index << locationValue << ".DBClusterEndpointArn=" << StringUtils::URLEncode(m_dBClusterEndpointArn.c_str()) << "&";
  }

}

void DBClusterEndpoint::OutputToStream(Aws::OStream& oStream, const char* location) const
{
  if(m_dBClusterEndpointIdentifierHasBeenSet)
  {
      oStream << location << ".DBClusterEndpointIdentifier=" << StringUtils::URLEncode(m_dBClusterEndpointIdentifier.c_str()) << "&";
  }
  if(m_dBClusterIdentifierHasBeenSet)
  {
      oStream << location << ".DBClusterIdentifier=" << StringUtils::URLEncode(m_dBClusterIdentifier.c_str()) << "&";
  }
  if(m_dBClusterEndpointResourceIdentifierHasBeenSet)
  {
      oStream << location << ".DBClusterEndpointResourceIdentifier=" << StringUtils::URLEncode(m_dBClusterEndpointResourceIdentifier.c_str()) << "&";
  }
  if(m_endpointHasBeenSet)
  {
      oStream << location << ".Endpoint=" << StringUtils::URLEncode(m_endpoint.c_str()) << "&";
  }
  if(m_statusHasBeenSet)
  {
      oStream << location << ".Status=" << StringUtils::URLEncode(m_status.c_str()) << "&";
  }
  if(m_endpointTypeHasBeenSet)
  {
      oStream << location << ".EndpointType=" << StringUtils::URLEncode(m_endpointType.c_str()) << "&";
  }
  if(m_customEndpointTypeHasBeenSet)
  {
      oStream << location << ".CustomEndpointType=" << StringUtils::URLEncode(m_customEndpointType.c_str()) << "&";
  }
  if(m_staticMembersHasBeenSet)
  {
      unsigned staticMembersIdx = 1;
      for(auto& item : m_staticMembers)
      {
        oStream << location << ".StaticMembers.member." << staticMembersIdx++ << "=" << StringUtils::URLEncode(item.c_str()) << "&";
      }
  }
  if(m_excludedMembersHasBeenSet)
  {
      unsigned excludedMembersIdx = 1;
      for(auto& item : m_excludedMembers)
      {
        oStream << location << ".ExcludedMembers.member." << excludedMembersIdx++ << "=" << StringUtils::URLEncode(item.c_str()) << "&";
      }
  }
  if(m_dBClusterEndpointArnHasBeenSet)
  {
      oStream << location << ".DBClusterEndpointArn=" << StringUtils::URLEncode(m_dBClusterEndpointArn.c_str()) << "&";
  }
}

} // namespace Model
} // namespace Neptune
} // namespace Aws
