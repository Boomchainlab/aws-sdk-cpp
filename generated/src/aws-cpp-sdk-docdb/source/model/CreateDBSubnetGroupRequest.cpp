﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/docdb/model/CreateDBSubnetGroupRequest.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

using namespace Aws::DocDB::Model;
using namespace Aws::Utils;

Aws::String CreateDBSubnetGroupRequest::SerializePayload() const
{
  Aws::StringStream ss;
  ss << "Action=CreateDBSubnetGroup&";
  if(m_dBSubnetGroupNameHasBeenSet)
  {
    ss << "DBSubnetGroupName=" << StringUtils::URLEncode(m_dBSubnetGroupName.c_str()) << "&";
  }

  if(m_dBSubnetGroupDescriptionHasBeenSet)
  {
    ss << "DBSubnetGroupDescription=" << StringUtils::URLEncode(m_dBSubnetGroupDescription.c_str()) << "&";
  }

  if(m_subnetIdsHasBeenSet)
  {
    if (m_subnetIds.empty())
    {
      ss << "SubnetIds=&";
    }
    else
    {
      unsigned subnetIdsCount = 1;
      for(auto& item : m_subnetIds)
      {
        ss << "SubnetIds.SubnetIdentifier." << subnetIdsCount << "="
            << StringUtils::URLEncode(item.c_str()) << "&";
        subnetIdsCount++;
      }
    }
  }

  if(m_tagsHasBeenSet)
  {
    if (m_tags.empty())
    {
      ss << "Tags=&";
    }
    else
    {
      unsigned tagsCount = 1;
      for(auto& item : m_tags)
      {
        item.OutputToStream(ss, "Tags.Tag.", tagsCount, "");
        tagsCount++;
      }
    }
  }

  ss << "Version=2014-10-31";
  return ss.str();
}


void  CreateDBSubnetGroupRequest::DumpBodyToUrl(Aws::Http::URI& uri ) const
{
  uri.SetQueryString(SerializePayload());
}
