﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ec2/model/CreateVpcEndpointServiceConfigurationRequest.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

using namespace Aws::EC2::Model;
using namespace Aws::Utils;

Aws::String CreateVpcEndpointServiceConfigurationRequest::SerializePayload() const
{
  Aws::StringStream ss;
  ss << "Action=CreateVpcEndpointServiceConfiguration&";
  if(m_dryRunHasBeenSet)
  {
    ss << "DryRun=" << std::boolalpha << m_dryRun << "&";
  }

  if(m_acceptanceRequiredHasBeenSet)
  {
    ss << "AcceptanceRequired=" << std::boolalpha << m_acceptanceRequired << "&";
  }

  if(m_privateDnsNameHasBeenSet)
  {
    ss << "PrivateDnsName=" << StringUtils::URLEncode(m_privateDnsName.c_str()) << "&";
  }

  if(m_networkLoadBalancerArnsHasBeenSet)
  {
    unsigned networkLoadBalancerArnsCount = 1;
    for(auto& item : m_networkLoadBalancerArns)
    {
      ss << "NetworkLoadBalancerArn." << networkLoadBalancerArnsCount << "="
          << StringUtils::URLEncode(item.c_str()) << "&";
      networkLoadBalancerArnsCount++;
    }
  }

  if(m_gatewayLoadBalancerArnsHasBeenSet)
  {
    unsigned gatewayLoadBalancerArnsCount = 1;
    for(auto& item : m_gatewayLoadBalancerArns)
    {
      ss << "GatewayLoadBalancerArn." << gatewayLoadBalancerArnsCount << "="
          << StringUtils::URLEncode(item.c_str()) << "&";
      gatewayLoadBalancerArnsCount++;
    }
  }

  if(m_supportedIpAddressTypesHasBeenSet)
  {
    unsigned supportedIpAddressTypesCount = 1;
    for(auto& item : m_supportedIpAddressTypes)
    {
      ss << "SupportedIpAddressType." << supportedIpAddressTypesCount << "="
          << StringUtils::URLEncode(item.c_str()) << "&";
      supportedIpAddressTypesCount++;
    }
  }

  if(m_supportedRegionsHasBeenSet)
  {
    unsigned supportedRegionsCount = 1;
    for(auto& item : m_supportedRegions)
    {
      ss << "SupportedRegion." << supportedRegionsCount << "="
          << StringUtils::URLEncode(item.c_str()) << "&";
      supportedRegionsCount++;
    }
  }

  if(m_clientTokenHasBeenSet)
  {
    ss << "ClientToken=" << StringUtils::URLEncode(m_clientToken.c_str()) << "&";
  }

  if(m_tagSpecificationsHasBeenSet)
  {
    unsigned tagSpecificationsCount = 1;
    for(auto& item : m_tagSpecifications)
    {
      item.OutputToStream(ss, "TagSpecification.", tagSpecificationsCount, "");
      tagSpecificationsCount++;
    }
  }

  ss << "Version=2016-11-15";
  return ss.str();
}


void  CreateVpcEndpointServiceConfigurationRequest::DumpBodyToUrl(Aws::Http::URI& uri ) const
{
  uri.SetQueryString(SerializePayload());
}
