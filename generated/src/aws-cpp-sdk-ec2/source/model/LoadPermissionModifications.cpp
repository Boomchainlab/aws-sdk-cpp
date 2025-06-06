﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ec2/model/LoadPermissionModifications.h>
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

LoadPermissionModifications::LoadPermissionModifications(const XmlNode& xmlNode)
{
  *this = xmlNode;
}

LoadPermissionModifications& LoadPermissionModifications::operator =(const XmlNode& xmlNode)
{
  XmlNode resultNode = xmlNode;

  if(!resultNode.IsNull())
  {
    XmlNode addNode = resultNode.FirstChild("Add");
    if(!addNode.IsNull())
    {
      XmlNode addMember = addNode.FirstChild("item");
      m_addHasBeenSet = !addMember.IsNull();
      while(!addMember.IsNull())
      {
        m_add.push_back(addMember);
        addMember = addMember.NextNode("item");
      }

      m_addHasBeenSet = true;
    }
    XmlNode removeNode = resultNode.FirstChild("Remove");
    if(!removeNode.IsNull())
    {
      XmlNode removeMember = removeNode.FirstChild("item");
      m_removeHasBeenSet = !removeMember.IsNull();
      while(!removeMember.IsNull())
      {
        m_remove.push_back(removeMember);
        removeMember = removeMember.NextNode("item");
      }

      m_removeHasBeenSet = true;
    }
  }

  return *this;
}

void LoadPermissionModifications::OutputToStream(Aws::OStream& oStream, const char* location, unsigned index, const char* locationValue) const
{
  if(m_addHasBeenSet)
  {
      unsigned addIdx = 1;
      for(auto& item : m_add)
      {
        Aws::StringStream addSs;
        addSs << location << index << locationValue << ".Add." << addIdx++;
        item.OutputToStream(oStream, addSs.str().c_str());
      }
  }

  if(m_removeHasBeenSet)
  {
      unsigned removeIdx = 1;
      for(auto& item : m_remove)
      {
        Aws::StringStream removeSs;
        removeSs << location << index << locationValue << ".Remove." << removeIdx++;
        item.OutputToStream(oStream, removeSs.str().c_str());
      }
  }

}

void LoadPermissionModifications::OutputToStream(Aws::OStream& oStream, const char* location) const
{
  if(m_addHasBeenSet)
  {
      unsigned addIdx = 1;
      for(auto& item : m_add)
      {
        Aws::StringStream addSs;
        addSs << location << ".Add." << addIdx++;
        item.OutputToStream(oStream, addSs.str().c_str());
      }
  }
  if(m_removeHasBeenSet)
  {
      unsigned removeIdx = 1;
      for(auto& item : m_remove)
      {
        Aws::StringStream removeSs;
        removeSs << location << ".Remove." << removeIdx++;
        item.OutputToStream(oStream, removeSs.str().c_str());
      }
  }
}

} // namespace Model
} // namespace EC2
} // namespace Aws
