﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ec2/EC2_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace EC2
{
namespace Model
{
  enum class VpcEncryptionControlExclusionState
  {
    NOT_SET,
    enabling,
    enabled,
    disabling,
    disabled
  };

namespace VpcEncryptionControlExclusionStateMapper
{
AWS_EC2_API VpcEncryptionControlExclusionState GetVpcEncryptionControlExclusionStateForName(const Aws::String& name);

AWS_EC2_API Aws::String GetNameForVpcEncryptionControlExclusionState(VpcEncryptionControlExclusionState value);
} // namespace VpcEncryptionControlExclusionStateMapper
} // namespace Model
} // namespace EC2
} // namespace Aws
