﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/swf/model/DecisionTaskTimedOutEventAttributes.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace SWF
{
namespace Model
{

DecisionTaskTimedOutEventAttributes::DecisionTaskTimedOutEventAttributes(JsonView jsonValue)
{
  *this = jsonValue;
}

DecisionTaskTimedOutEventAttributes& DecisionTaskTimedOutEventAttributes::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("timeoutType"))
  {
    m_timeoutType = DecisionTaskTimeoutTypeMapper::GetDecisionTaskTimeoutTypeForName(jsonValue.GetString("timeoutType"));
    m_timeoutTypeHasBeenSet = true;
  }
  if(jsonValue.ValueExists("scheduledEventId"))
  {
    m_scheduledEventId = jsonValue.GetInt64("scheduledEventId");
    m_scheduledEventIdHasBeenSet = true;
  }
  if(jsonValue.ValueExists("startedEventId"))
  {
    m_startedEventId = jsonValue.GetInt64("startedEventId");
    m_startedEventIdHasBeenSet = true;
  }
  return *this;
}

JsonValue DecisionTaskTimedOutEventAttributes::Jsonize() const
{
  JsonValue payload;

  if(m_timeoutTypeHasBeenSet)
  {
   payload.WithString("timeoutType", DecisionTaskTimeoutTypeMapper::GetNameForDecisionTaskTimeoutType(m_timeoutType));
  }

  if(m_scheduledEventIdHasBeenSet)
  {
   payload.WithInt64("scheduledEventId", m_scheduledEventId);

  }

  if(m_startedEventIdHasBeenSet)
  {
   payload.WithInt64("startedEventId", m_startedEventId);

  }

  return payload;
}

} // namespace Model
} // namespace SWF
} // namespace Aws
