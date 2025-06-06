﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/rds/model/DBSubnetGroup.h>
#include <aws/core/utils/xml/XmlSerializer.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::Utils::Xml;
using namespace Aws::Utils;

namespace Aws
{
namespace RDS
{
namespace Model
{

DBSubnetGroup::DBSubnetGroup(const XmlNode& xmlNode)
{
  *this = xmlNode;
}

DBSubnetGroup& DBSubnetGroup::operator =(const XmlNode& xmlNode)
{
  XmlNode resultNode = xmlNode;

  if(!resultNode.IsNull())
  {
    XmlNode dBSubnetGroupNameNode = resultNode.FirstChild("DBSubnetGroupName");
    if(!dBSubnetGroupNameNode.IsNull())
    {
      m_dBSubnetGroupName = Aws::Utils::Xml::DecodeEscapedXmlText(dBSubnetGroupNameNode.GetText());
      m_dBSubnetGroupNameHasBeenSet = true;
    }
    XmlNode dBSubnetGroupDescriptionNode = resultNode.FirstChild("DBSubnetGroupDescription");
    if(!dBSubnetGroupDescriptionNode.IsNull())
    {
      m_dBSubnetGroupDescription = Aws::Utils::Xml::DecodeEscapedXmlText(dBSubnetGroupDescriptionNode.GetText());
      m_dBSubnetGroupDescriptionHasBeenSet = true;
    }
    XmlNode vpcIdNode = resultNode.FirstChild("VpcId");
    if(!vpcIdNode.IsNull())
    {
      m_vpcId = Aws::Utils::Xml::DecodeEscapedXmlText(vpcIdNode.GetText());
      m_vpcIdHasBeenSet = true;
    }
    XmlNode subnetGroupStatusNode = resultNode.FirstChild("SubnetGroupStatus");
    if(!subnetGroupStatusNode.IsNull())
    {
      m_subnetGroupStatus = Aws::Utils::Xml::DecodeEscapedXmlText(subnetGroupStatusNode.GetText());
      m_subnetGroupStatusHasBeenSet = true;
    }
    XmlNode subnetsNode = resultNode.FirstChild("Subnets");
    if(!subnetsNode.IsNull())
    {
      XmlNode subnetsMember = subnetsNode.FirstChild("Subnet");
      m_subnetsHasBeenSet = !subnetsMember.IsNull();
      while(!subnetsMember.IsNull())
      {
        m_subnets.push_back(subnetsMember);
        subnetsMember = subnetsMember.NextNode("Subnet");
      }

      m_subnetsHasBeenSet = true;
    }
    XmlNode dBSubnetGroupArnNode = resultNode.FirstChild("DBSubnetGroupArn");
    if(!dBSubnetGroupArnNode.IsNull())
    {
      m_dBSubnetGroupArn = Aws::Utils::Xml::DecodeEscapedXmlText(dBSubnetGroupArnNode.GetText());
      m_dBSubnetGroupArnHasBeenSet = true;
    }
    XmlNode supportedNetworkTypesNode = resultNode.FirstChild("SupportedNetworkTypes");
    if(!supportedNetworkTypesNode.IsNull())
    {
      XmlNode supportedNetworkTypesMember = supportedNetworkTypesNode.FirstChild("member");
      m_supportedNetworkTypesHasBeenSet = !supportedNetworkTypesMember.IsNull();
      while(!supportedNetworkTypesMember.IsNull())
      {
        m_supportedNetworkTypes.push_back(supportedNetworkTypesMember.GetText());
        supportedNetworkTypesMember = supportedNetworkTypesMember.NextNode("member");
      }

      m_supportedNetworkTypesHasBeenSet = true;
    }
  }

  return *this;
}

void DBSubnetGroup::OutputToStream(Aws::OStream& oStream, const char* location, unsigned index, const char* locationValue) const
{
  if(m_dBSubnetGroupNameHasBeenSet)
  {
      oStream << location << index << locationValue << ".DBSubnetGroupName=" << StringUtils::URLEncode(m_dBSubnetGroupName.c_str()) << "&";
  }

  if(m_dBSubnetGroupDescriptionHasBeenSet)
  {
      oStream << location << index << locationValue << ".DBSubnetGroupDescription=" << StringUtils::URLEncode(m_dBSubnetGroupDescription.c_str()) << "&";
  }

  if(m_vpcIdHasBeenSet)
  {
      oStream << location << index << locationValue << ".VpcId=" << StringUtils::URLEncode(m_vpcId.c_str()) << "&";
  }

  if(m_subnetGroupStatusHasBeenSet)
  {
      oStream << location << index << locationValue << ".SubnetGroupStatus=" << StringUtils::URLEncode(m_subnetGroupStatus.c_str()) << "&";
  }

  if(m_subnetsHasBeenSet)
  {
      unsigned subnetsIdx = 1;
      for(auto& item : m_subnets)
      {
        Aws::StringStream subnetsSs;
        subnetsSs << location << index << locationValue << ".Subnets.Subnet." << subnetsIdx++;
        item.OutputToStream(oStream, subnetsSs.str().c_str());
      }
  }

  if(m_dBSubnetGroupArnHasBeenSet)
  {
      oStream << location << index << locationValue << ".DBSubnetGroupArn=" << StringUtils::URLEncode(m_dBSubnetGroupArn.c_str()) << "&";
  }

  if(m_supportedNetworkTypesHasBeenSet)
  {
      unsigned supportedNetworkTypesIdx = 1;
      for(auto& item : m_supportedNetworkTypes)
      {
        oStream << location << index << locationValue << ".SupportedNetworkTypes.member." << supportedNetworkTypesIdx++ << "=" << StringUtils::URLEncode(item.c_str()) << "&";
      }
  }

}

void DBSubnetGroup::OutputToStream(Aws::OStream& oStream, const char* location) const
{
  if(m_dBSubnetGroupNameHasBeenSet)
  {
      oStream << location << ".DBSubnetGroupName=" << StringUtils::URLEncode(m_dBSubnetGroupName.c_str()) << "&";
  }
  if(m_dBSubnetGroupDescriptionHasBeenSet)
  {
      oStream << location << ".DBSubnetGroupDescription=" << StringUtils::URLEncode(m_dBSubnetGroupDescription.c_str()) << "&";
  }
  if(m_vpcIdHasBeenSet)
  {
      oStream << location << ".VpcId=" << StringUtils::URLEncode(m_vpcId.c_str()) << "&";
  }
  if(m_subnetGroupStatusHasBeenSet)
  {
      oStream << location << ".SubnetGroupStatus=" << StringUtils::URLEncode(m_subnetGroupStatus.c_str()) << "&";
  }
  if(m_subnetsHasBeenSet)
  {
      unsigned subnetsIdx = 1;
      for(auto& item : m_subnets)
      {
        Aws::StringStream subnetsSs;
        subnetsSs << location << ".Subnets.Subnet." << subnetsIdx++;
        item.OutputToStream(oStream, subnetsSs.str().c_str());
      }
  }
  if(m_dBSubnetGroupArnHasBeenSet)
  {
      oStream << location << ".DBSubnetGroupArn=" << StringUtils::URLEncode(m_dBSubnetGroupArn.c_str()) << "&";
  }
  if(m_supportedNetworkTypesHasBeenSet)
  {
      unsigned supportedNetworkTypesIdx = 1;
      for(auto& item : m_supportedNetworkTypes)
      {
        oStream << location << ".SupportedNetworkTypes.member." << supportedNetworkTypesIdx++ << "=" << StringUtils::URLEncode(item.c_str()) << "&";
      }
  }
}

} // namespace Model
} // namespace RDS
} // namespace Aws
