﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ec2/model/TransitGatewayRoute.h>
#include <aws/core/utils/xml/XmlSerializer.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::Utils::Xml;
using namespace Aws::Utils;

namespace Aws
{
namespace EC2
{
namespace Model
{

TransitGatewayRoute::TransitGatewayRoute(const XmlNode& xmlNode)
{
  *this = xmlNode;
}

TransitGatewayRoute& TransitGatewayRoute::operator =(const XmlNode& xmlNode)
{
  XmlNode resultNode = xmlNode;

  if(!resultNode.IsNull())
  {
    XmlNode destinationCidrBlockNode = resultNode.FirstChild("destinationCidrBlock");
    if(!destinationCidrBlockNode.IsNull())
    {
      m_destinationCidrBlock = Aws::Utils::Xml::DecodeEscapedXmlText(destinationCidrBlockNode.GetText());
      m_destinationCidrBlockHasBeenSet = true;
    }
    XmlNode prefixListIdNode = resultNode.FirstChild("prefixListId");
    if(!prefixListIdNode.IsNull())
    {
      m_prefixListId = Aws::Utils::Xml::DecodeEscapedXmlText(prefixListIdNode.GetText());
      m_prefixListIdHasBeenSet = true;
    }
    XmlNode transitGatewayRouteTableAnnouncementIdNode = resultNode.FirstChild("transitGatewayRouteTableAnnouncementId");
    if(!transitGatewayRouteTableAnnouncementIdNode.IsNull())
    {
      m_transitGatewayRouteTableAnnouncementId = Aws::Utils::Xml::DecodeEscapedXmlText(transitGatewayRouteTableAnnouncementIdNode.GetText());
      m_transitGatewayRouteTableAnnouncementIdHasBeenSet = true;
    }
    XmlNode transitGatewayAttachmentsNode = resultNode.FirstChild("transitGatewayAttachments");
    if(!transitGatewayAttachmentsNode.IsNull())
    {
      XmlNode transitGatewayAttachmentsMember = transitGatewayAttachmentsNode.FirstChild("item");
      m_transitGatewayAttachmentsHasBeenSet = !transitGatewayAttachmentsMember.IsNull();
      while(!transitGatewayAttachmentsMember.IsNull())
      {
        m_transitGatewayAttachments.push_back(transitGatewayAttachmentsMember);
        transitGatewayAttachmentsMember = transitGatewayAttachmentsMember.NextNode("item");
      }

      m_transitGatewayAttachmentsHasBeenSet = true;
    }
    XmlNode typeNode = resultNode.FirstChild("type");
    if(!typeNode.IsNull())
    {
      m_type = TransitGatewayRouteTypeMapper::GetTransitGatewayRouteTypeForName(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(typeNode.GetText()).c_str()));
      m_typeHasBeenSet = true;
    }
    XmlNode stateNode = resultNode.FirstChild("state");
    if(!stateNode.IsNull())
    {
      m_state = TransitGatewayRouteStateMapper::GetTransitGatewayRouteStateForName(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(stateNode.GetText()).c_str()));
      m_stateHasBeenSet = true;
    }
  }

  return *this;
}

void TransitGatewayRoute::OutputToStream(Aws::OStream& oStream, const char* location, unsigned index, const char* locationValue) const
{
  if(m_destinationCidrBlockHasBeenSet)
  {
      oStream << location << index << locationValue << ".DestinationCidrBlock=" << StringUtils::URLEncode(m_destinationCidrBlock.c_str()) << "&";
  }

  if(m_prefixListIdHasBeenSet)
  {
      oStream << location << index << locationValue << ".PrefixListId=" << StringUtils::URLEncode(m_prefixListId.c_str()) << "&";
  }

  if(m_transitGatewayRouteTableAnnouncementIdHasBeenSet)
  {
      oStream << location << index << locationValue << ".TransitGatewayRouteTableAnnouncementId=" << StringUtils::URLEncode(m_transitGatewayRouteTableAnnouncementId.c_str()) << "&";
  }

  if(m_transitGatewayAttachmentsHasBeenSet)
  {
      unsigned transitGatewayAttachmentsIdx = 1;
      for(auto& item : m_transitGatewayAttachments)
      {
        Aws::StringStream transitGatewayAttachmentsSs;
        transitGatewayAttachmentsSs << location << index << locationValue << ".TransitGatewayAttachments." << transitGatewayAttachmentsIdx++;
        item.OutputToStream(oStream, transitGatewayAttachmentsSs.str().c_str());
      }
  }

  if(m_typeHasBeenSet)
  {
      oStream << location << index << locationValue << ".Type=" << StringUtils::URLEncode(TransitGatewayRouteTypeMapper::GetNameForTransitGatewayRouteType(m_type)) << "&";
  }

  if(m_stateHasBeenSet)
  {
      oStream << location << index << locationValue << ".State=" << StringUtils::URLEncode(TransitGatewayRouteStateMapper::GetNameForTransitGatewayRouteState(m_state)) << "&";
  }

}

void TransitGatewayRoute::OutputToStream(Aws::OStream& oStream, const char* location) const
{
  if(m_destinationCidrBlockHasBeenSet)
  {
      oStream << location << ".DestinationCidrBlock=" << StringUtils::URLEncode(m_destinationCidrBlock.c_str()) << "&";
  }
  if(m_prefixListIdHasBeenSet)
  {
      oStream << location << ".PrefixListId=" << StringUtils::URLEncode(m_prefixListId.c_str()) << "&";
  }
  if(m_transitGatewayRouteTableAnnouncementIdHasBeenSet)
  {
      oStream << location << ".TransitGatewayRouteTableAnnouncementId=" << StringUtils::URLEncode(m_transitGatewayRouteTableAnnouncementId.c_str()) << "&";
  }
  if(m_transitGatewayAttachmentsHasBeenSet)
  {
      unsigned transitGatewayAttachmentsIdx = 1;
      for(auto& item : m_transitGatewayAttachments)
      {
        Aws::StringStream transitGatewayAttachmentsSs;
        transitGatewayAttachmentsSs << location << ".TransitGatewayAttachments." << transitGatewayAttachmentsIdx++;
        item.OutputToStream(oStream, transitGatewayAttachmentsSs.str().c_str());
      }
  }
  if(m_typeHasBeenSet)
  {
      oStream << location << ".Type=" << StringUtils::URLEncode(TransitGatewayRouteTypeMapper::GetNameForTransitGatewayRouteType(m_type)) << "&";
  }
  if(m_stateHasBeenSet)
  {
      oStream << location << ".State=" << StringUtils::URLEncode(TransitGatewayRouteStateMapper::GetNameForTransitGatewayRouteState(m_state)) << "&";
  }
}

} // namespace Model
} // namespace EC2
} // namespace Aws
