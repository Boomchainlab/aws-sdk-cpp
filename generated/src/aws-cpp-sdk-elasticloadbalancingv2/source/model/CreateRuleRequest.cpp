﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/elasticloadbalancingv2/model/CreateRuleRequest.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

using namespace Aws::ElasticLoadBalancingv2::Model;
using namespace Aws::Utils;

Aws::String CreateRuleRequest::SerializePayload() const
{
  Aws::StringStream ss;
  ss << "Action=CreateRule&";
  if(m_listenerArnHasBeenSet)
  {
    ss << "ListenerArn=" << StringUtils::URLEncode(m_listenerArn.c_str()) << "&";
  }

  if(m_conditionsHasBeenSet)
  {
    if (m_conditions.empty())
    {
      ss << "Conditions=&";
    }
    else
    {
      unsigned conditionsCount = 1;
      for(auto& item : m_conditions)
      {
        item.OutputToStream(ss, "Conditions.member.", conditionsCount, "");
        conditionsCount++;
      }
    }
  }

  if(m_priorityHasBeenSet)
  {
    ss << "Priority=" << m_priority << "&";
  }

  if(m_actionsHasBeenSet)
  {
    if (m_actions.empty())
    {
      ss << "Actions=&";
    }
    else
    {
      unsigned actionsCount = 1;
      for(auto& item : m_actions)
      {
        item.OutputToStream(ss, "Actions.member.", actionsCount, "");
        actionsCount++;
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
        item.OutputToStream(ss, "Tags.member.", tagsCount, "");
        tagsCount++;
      }
    }
  }

  ss << "Version=2015-12-01";
  return ss.str();
}


void  CreateRuleRequest::DumpBodyToUrl(Aws::Http::URI& uri ) const
{
  uri.SetQueryString(SerializePayload());
}
