﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/autoscaling/model/DeleteLifecycleHookRequest.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

using namespace Aws::AutoScaling::Model;
using namespace Aws::Utils;

Aws::String DeleteLifecycleHookRequest::SerializePayload() const
{
  Aws::StringStream ss;
  ss << "Action=DeleteLifecycleHook&";
  if(m_lifecycleHookNameHasBeenSet)
  {
    ss << "LifecycleHookName=" << StringUtils::URLEncode(m_lifecycleHookName.c_str()) << "&";
  }

  if(m_autoScalingGroupNameHasBeenSet)
  {
    ss << "AutoScalingGroupName=" << StringUtils::URLEncode(m_autoScalingGroupName.c_str()) << "&";
  }

  ss << "Version=2011-01-01";
  return ss.str();
}


void  DeleteLifecycleHookRequest::DumpBodyToUrl(Aws::Http::URI& uri ) const
{
  uri.SetQueryString(SerializePayload());
}
