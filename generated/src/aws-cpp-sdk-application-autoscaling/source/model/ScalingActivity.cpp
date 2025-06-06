﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/application-autoscaling/model/ScalingActivity.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace ApplicationAutoScaling
{
namespace Model
{

ScalingActivity::ScalingActivity(JsonView jsonValue)
{
  *this = jsonValue;
}

ScalingActivity& ScalingActivity::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("ActivityId"))
  {
    m_activityId = jsonValue.GetString("ActivityId");
    m_activityIdHasBeenSet = true;
  }
  if(jsonValue.ValueExists("ServiceNamespace"))
  {
    m_serviceNamespace = ServiceNamespaceMapper::GetServiceNamespaceForName(jsonValue.GetString("ServiceNamespace"));
    m_serviceNamespaceHasBeenSet = true;
  }
  if(jsonValue.ValueExists("ResourceId"))
  {
    m_resourceId = jsonValue.GetString("ResourceId");
    m_resourceIdHasBeenSet = true;
  }
  if(jsonValue.ValueExists("ScalableDimension"))
  {
    m_scalableDimension = ScalableDimensionMapper::GetScalableDimensionForName(jsonValue.GetString("ScalableDimension"));
    m_scalableDimensionHasBeenSet = true;
  }
  if(jsonValue.ValueExists("Description"))
  {
    m_description = jsonValue.GetString("Description");
    m_descriptionHasBeenSet = true;
  }
  if(jsonValue.ValueExists("Cause"))
  {
    m_cause = jsonValue.GetString("Cause");
    m_causeHasBeenSet = true;
  }
  if(jsonValue.ValueExists("StartTime"))
  {
    m_startTime = jsonValue.GetDouble("StartTime");
    m_startTimeHasBeenSet = true;
  }
  if(jsonValue.ValueExists("EndTime"))
  {
    m_endTime = jsonValue.GetDouble("EndTime");
    m_endTimeHasBeenSet = true;
  }
  if(jsonValue.ValueExists("StatusCode"))
  {
    m_statusCode = ScalingActivityStatusCodeMapper::GetScalingActivityStatusCodeForName(jsonValue.GetString("StatusCode"));
    m_statusCodeHasBeenSet = true;
  }
  if(jsonValue.ValueExists("StatusMessage"))
  {
    m_statusMessage = jsonValue.GetString("StatusMessage");
    m_statusMessageHasBeenSet = true;
  }
  if(jsonValue.ValueExists("Details"))
  {
    m_details = jsonValue.GetString("Details");
    m_detailsHasBeenSet = true;
  }
  if(jsonValue.ValueExists("NotScaledReasons"))
  {
    Aws::Utils::Array<JsonView> notScaledReasonsJsonList = jsonValue.GetArray("NotScaledReasons");
    for(unsigned notScaledReasonsIndex = 0; notScaledReasonsIndex < notScaledReasonsJsonList.GetLength(); ++notScaledReasonsIndex)
    {
      m_notScaledReasons.push_back(notScaledReasonsJsonList[notScaledReasonsIndex].AsObject());
    }
    m_notScaledReasonsHasBeenSet = true;
  }
  return *this;
}

JsonValue ScalingActivity::Jsonize() const
{
  JsonValue payload;

  if(m_activityIdHasBeenSet)
  {
   payload.WithString("ActivityId", m_activityId);

  }

  if(m_serviceNamespaceHasBeenSet)
  {
   payload.WithString("ServiceNamespace", ServiceNamespaceMapper::GetNameForServiceNamespace(m_serviceNamespace));
  }

  if(m_resourceIdHasBeenSet)
  {
   payload.WithString("ResourceId", m_resourceId);

  }

  if(m_scalableDimensionHasBeenSet)
  {
   payload.WithString("ScalableDimension", ScalableDimensionMapper::GetNameForScalableDimension(m_scalableDimension));
  }

  if(m_descriptionHasBeenSet)
  {
   payload.WithString("Description", m_description);

  }

  if(m_causeHasBeenSet)
  {
   payload.WithString("Cause", m_cause);

  }

  if(m_startTimeHasBeenSet)
  {
   payload.WithDouble("StartTime", m_startTime.SecondsWithMSPrecision());
  }

  if(m_endTimeHasBeenSet)
  {
   payload.WithDouble("EndTime", m_endTime.SecondsWithMSPrecision());
  }

  if(m_statusCodeHasBeenSet)
  {
   payload.WithString("StatusCode", ScalingActivityStatusCodeMapper::GetNameForScalingActivityStatusCode(m_statusCode));
  }

  if(m_statusMessageHasBeenSet)
  {
   payload.WithString("StatusMessage", m_statusMessage);

  }

  if(m_detailsHasBeenSet)
  {
   payload.WithString("Details", m_details);

  }

  if(m_notScaledReasonsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> notScaledReasonsJsonList(m_notScaledReasons.size());
   for(unsigned notScaledReasonsIndex = 0; notScaledReasonsIndex < notScaledReasonsJsonList.GetLength(); ++notScaledReasonsIndex)
   {
     notScaledReasonsJsonList[notScaledReasonsIndex].AsObject(m_notScaledReasons[notScaledReasonsIndex].Jsonize());
   }
   payload.WithArray("NotScaledReasons", std::move(notScaledReasonsJsonList));

  }

  return payload;
}

} // namespace Model
} // namespace ApplicationAutoScaling
} // namespace Aws
