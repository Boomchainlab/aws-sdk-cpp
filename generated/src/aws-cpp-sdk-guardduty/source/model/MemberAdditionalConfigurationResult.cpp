﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/guardduty/model/MemberAdditionalConfigurationResult.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace GuardDuty
{
namespace Model
{

MemberAdditionalConfigurationResult::MemberAdditionalConfigurationResult(JsonView jsonValue)
{
  *this = jsonValue;
}

MemberAdditionalConfigurationResult& MemberAdditionalConfigurationResult::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("name"))
  {
    m_name = OrgFeatureAdditionalConfigurationMapper::GetOrgFeatureAdditionalConfigurationForName(jsonValue.GetString("name"));
    m_nameHasBeenSet = true;
  }
  if(jsonValue.ValueExists("status"))
  {
    m_status = FeatureStatusMapper::GetFeatureStatusForName(jsonValue.GetString("status"));
    m_statusHasBeenSet = true;
  }
  if(jsonValue.ValueExists("updatedAt"))
  {
    m_updatedAt = jsonValue.GetDouble("updatedAt");
    m_updatedAtHasBeenSet = true;
  }
  return *this;
}

JsonValue MemberAdditionalConfigurationResult::Jsonize() const
{
  JsonValue payload;

  if(m_nameHasBeenSet)
  {
   payload.WithString("name", OrgFeatureAdditionalConfigurationMapper::GetNameForOrgFeatureAdditionalConfiguration(m_name));
  }

  if(m_statusHasBeenSet)
  {
   payload.WithString("status", FeatureStatusMapper::GetNameForFeatureStatus(m_status));
  }

  if(m_updatedAtHasBeenSet)
  {
   payload.WithDouble("updatedAt", m_updatedAt.SecondsWithMSPrecision());
  }

  return payload;
}

} // namespace Model
} // namespace GuardDuty
} // namespace Aws
