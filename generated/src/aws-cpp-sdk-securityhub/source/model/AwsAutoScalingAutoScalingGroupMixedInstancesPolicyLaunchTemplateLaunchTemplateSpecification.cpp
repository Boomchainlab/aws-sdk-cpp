﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/securityhub/model/AwsAutoScalingAutoScalingGroupMixedInstancesPolicyLaunchTemplateLaunchTemplateSpecification.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace SecurityHub
{
namespace Model
{

AwsAutoScalingAutoScalingGroupMixedInstancesPolicyLaunchTemplateLaunchTemplateSpecification::AwsAutoScalingAutoScalingGroupMixedInstancesPolicyLaunchTemplateLaunchTemplateSpecification(JsonView jsonValue)
{
  *this = jsonValue;
}

AwsAutoScalingAutoScalingGroupMixedInstancesPolicyLaunchTemplateLaunchTemplateSpecification& AwsAutoScalingAutoScalingGroupMixedInstancesPolicyLaunchTemplateLaunchTemplateSpecification::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("LaunchTemplateId"))
  {
    m_launchTemplateId = jsonValue.GetString("LaunchTemplateId");
    m_launchTemplateIdHasBeenSet = true;
  }
  if(jsonValue.ValueExists("LaunchTemplateName"))
  {
    m_launchTemplateName = jsonValue.GetString("LaunchTemplateName");
    m_launchTemplateNameHasBeenSet = true;
  }
  if(jsonValue.ValueExists("Version"))
  {
    m_version = jsonValue.GetString("Version");
    m_versionHasBeenSet = true;
  }
  return *this;
}

JsonValue AwsAutoScalingAutoScalingGroupMixedInstancesPolicyLaunchTemplateLaunchTemplateSpecification::Jsonize() const
{
  JsonValue payload;

  if(m_launchTemplateIdHasBeenSet)
  {
   payload.WithString("LaunchTemplateId", m_launchTemplateId);

  }

  if(m_launchTemplateNameHasBeenSet)
  {
   payload.WithString("LaunchTemplateName", m_launchTemplateName);

  }

  if(m_versionHasBeenSet)
  {
   payload.WithString("Version", m_version);

  }

  return payload;
}

} // namespace Model
} // namespace SecurityHub
} // namespace Aws
