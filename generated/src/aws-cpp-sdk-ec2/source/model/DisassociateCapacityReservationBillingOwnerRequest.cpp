﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ec2/model/DisassociateCapacityReservationBillingOwnerRequest.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

using namespace Aws::EC2::Model;
using namespace Aws::Utils;

Aws::String DisassociateCapacityReservationBillingOwnerRequest::SerializePayload() const
{
  Aws::StringStream ss;
  ss << "Action=DisassociateCapacityReservationBillingOwner&";
  if(m_dryRunHasBeenSet)
  {
    ss << "DryRun=" << std::boolalpha << m_dryRun << "&";
  }

  if(m_capacityReservationIdHasBeenSet)
  {
    ss << "CapacityReservationId=" << StringUtils::URLEncode(m_capacityReservationId.c_str()) << "&";
  }

  if(m_unusedReservationBillingOwnerIdHasBeenSet)
  {
    ss << "UnusedReservationBillingOwnerId=" << StringUtils::URLEncode(m_unusedReservationBillingOwnerId.c_str()) << "&";
  }

  ss << "Version=2016-11-15";
  return ss.str();
}


void  DisassociateCapacityReservationBillingOwnerRequest::DumpBodyToUrl(Aws::Http::URI& uri ) const
{
  uri.SetQueryString(SerializePayload());
}
