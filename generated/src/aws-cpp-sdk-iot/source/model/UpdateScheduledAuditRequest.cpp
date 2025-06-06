﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/iot/model/UpdateScheduledAuditRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::IoT::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

Aws::String UpdateScheduledAuditRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_frequencyHasBeenSet)
  {
   payload.WithString("frequency", AuditFrequencyMapper::GetNameForAuditFrequency(m_frequency));
  }

  if(m_dayOfMonthHasBeenSet)
  {
   payload.WithString("dayOfMonth", m_dayOfMonth);

  }

  if(m_dayOfWeekHasBeenSet)
  {
   payload.WithString("dayOfWeek", DayOfWeekMapper::GetNameForDayOfWeek(m_dayOfWeek));
  }

  if(m_targetCheckNamesHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> targetCheckNamesJsonList(m_targetCheckNames.size());
   for(unsigned targetCheckNamesIndex = 0; targetCheckNamesIndex < targetCheckNamesJsonList.GetLength(); ++targetCheckNamesIndex)
   {
     targetCheckNamesJsonList[targetCheckNamesIndex].AsString(m_targetCheckNames[targetCheckNamesIndex]);
   }
   payload.WithArray("targetCheckNames", std::move(targetCheckNamesJsonList));

  }

  return payload.View().WriteReadable();
}




