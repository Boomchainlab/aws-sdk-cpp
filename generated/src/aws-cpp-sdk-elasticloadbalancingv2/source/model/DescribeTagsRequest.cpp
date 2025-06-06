﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/elasticloadbalancingv2/model/DescribeTagsRequest.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

using namespace Aws::ElasticLoadBalancingv2::Model;
using namespace Aws::Utils;

Aws::String DescribeTagsRequest::SerializePayload() const
{
  Aws::StringStream ss;
  ss << "Action=DescribeTags&";
  if(m_resourceArnsHasBeenSet)
  {
    if (m_resourceArns.empty())
    {
      ss << "ResourceArns=&";
    }
    else
    {
      unsigned resourceArnsCount = 1;
      for(auto& item : m_resourceArns)
      {
        ss << "ResourceArns.member." << resourceArnsCount << "="
            << StringUtils::URLEncode(item.c_str()) << "&";
        resourceArnsCount++;
      }
    }
  }

  ss << "Version=2015-12-01";
  return ss.str();
}


void  DescribeTagsRequest::DumpBodyToUrl(Aws::Http::URI& uri ) const
{
  uri.SetQueryString(SerializePayload());
}
