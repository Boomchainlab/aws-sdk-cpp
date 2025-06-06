﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/rds/model/ResourcePendingMaintenanceActions.h>
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

ResourcePendingMaintenanceActions::ResourcePendingMaintenanceActions(const XmlNode& xmlNode)
{
  *this = xmlNode;
}

ResourcePendingMaintenanceActions& ResourcePendingMaintenanceActions::operator =(const XmlNode& xmlNode)
{
  XmlNode resultNode = xmlNode;

  if(!resultNode.IsNull())
  {
    XmlNode resourceIdentifierNode = resultNode.FirstChild("ResourceIdentifier");
    if(!resourceIdentifierNode.IsNull())
    {
      m_resourceIdentifier = Aws::Utils::Xml::DecodeEscapedXmlText(resourceIdentifierNode.GetText());
      m_resourceIdentifierHasBeenSet = true;
    }
    XmlNode pendingMaintenanceActionDetailsNode = resultNode.FirstChild("PendingMaintenanceActionDetails");
    if(!pendingMaintenanceActionDetailsNode.IsNull())
    {
      XmlNode pendingMaintenanceActionDetailsMember = pendingMaintenanceActionDetailsNode.FirstChild("PendingMaintenanceAction");
      m_pendingMaintenanceActionDetailsHasBeenSet = !pendingMaintenanceActionDetailsMember.IsNull();
      while(!pendingMaintenanceActionDetailsMember.IsNull())
      {
        m_pendingMaintenanceActionDetails.push_back(pendingMaintenanceActionDetailsMember);
        pendingMaintenanceActionDetailsMember = pendingMaintenanceActionDetailsMember.NextNode("PendingMaintenanceAction");
      }

      m_pendingMaintenanceActionDetailsHasBeenSet = true;
    }
  }

  return *this;
}

void ResourcePendingMaintenanceActions::OutputToStream(Aws::OStream& oStream, const char* location, unsigned index, const char* locationValue) const
{
  if(m_resourceIdentifierHasBeenSet)
  {
      oStream << location << index << locationValue << ".ResourceIdentifier=" << StringUtils::URLEncode(m_resourceIdentifier.c_str()) << "&";
  }

  if(m_pendingMaintenanceActionDetailsHasBeenSet)
  {
      unsigned pendingMaintenanceActionDetailsIdx = 1;
      for(auto& item : m_pendingMaintenanceActionDetails)
      {
        Aws::StringStream pendingMaintenanceActionDetailsSs;
        pendingMaintenanceActionDetailsSs << location << index << locationValue << ".PendingMaintenanceActionDetails.PendingMaintenanceAction." << pendingMaintenanceActionDetailsIdx++;
        item.OutputToStream(oStream, pendingMaintenanceActionDetailsSs.str().c_str());
      }
  }

}

void ResourcePendingMaintenanceActions::OutputToStream(Aws::OStream& oStream, const char* location) const
{
  if(m_resourceIdentifierHasBeenSet)
  {
      oStream << location << ".ResourceIdentifier=" << StringUtils::URLEncode(m_resourceIdentifier.c_str()) << "&";
  }
  if(m_pendingMaintenanceActionDetailsHasBeenSet)
  {
      unsigned pendingMaintenanceActionDetailsIdx = 1;
      for(auto& item : m_pendingMaintenanceActionDetails)
      {
        Aws::StringStream pendingMaintenanceActionDetailsSs;
        pendingMaintenanceActionDetailsSs << location << ".PendingMaintenanceActionDetails.PendingMaintenanceAction." << pendingMaintenanceActionDetailsIdx++;
        item.OutputToStream(oStream, pendingMaintenanceActionDetailsSs.str().c_str());
      }
  }
}

} // namespace Model
} // namespace RDS
} // namespace Aws
