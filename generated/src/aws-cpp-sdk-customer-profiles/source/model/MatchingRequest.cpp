﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/customer-profiles/model/MatchingRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace CustomerProfiles
{
namespace Model
{

MatchingRequest::MatchingRequest(JsonView jsonValue)
{
  *this = jsonValue;
}

MatchingRequest& MatchingRequest::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Enabled"))
  {
    m_enabled = jsonValue.GetBool("Enabled");
    m_enabledHasBeenSet = true;
  }
  if(jsonValue.ValueExists("JobSchedule"))
  {
    m_jobSchedule = jsonValue.GetObject("JobSchedule");
    m_jobScheduleHasBeenSet = true;
  }
  if(jsonValue.ValueExists("AutoMerging"))
  {
    m_autoMerging = jsonValue.GetObject("AutoMerging");
    m_autoMergingHasBeenSet = true;
  }
  if(jsonValue.ValueExists("ExportingConfig"))
  {
    m_exportingConfig = jsonValue.GetObject("ExportingConfig");
    m_exportingConfigHasBeenSet = true;
  }
  return *this;
}

JsonValue MatchingRequest::Jsonize() const
{
  JsonValue payload;

  if(m_enabledHasBeenSet)
  {
   payload.WithBool("Enabled", m_enabled);

  }

  if(m_jobScheduleHasBeenSet)
  {
   payload.WithObject("JobSchedule", m_jobSchedule.Jsonize());

  }

  if(m_autoMergingHasBeenSet)
  {
   payload.WithObject("AutoMerging", m_autoMerging.Jsonize());

  }

  if(m_exportingConfigHasBeenSet)
  {
   payload.WithObject("ExportingConfig", m_exportingConfig.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace CustomerProfiles
} // namespace Aws
