﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/m2/model/UpdateEnvironmentRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::MainframeModernization::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

Aws::String UpdateEnvironmentRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_applyDuringMaintenanceWindowHasBeenSet)
  {
   payload.WithBool("applyDuringMaintenanceWindow", m_applyDuringMaintenanceWindow);

  }

  if(m_desiredCapacityHasBeenSet)
  {
   payload.WithInteger("desiredCapacity", m_desiredCapacity);

  }

  if(m_engineVersionHasBeenSet)
  {
   payload.WithString("engineVersion", m_engineVersion);

  }

  if(m_forceUpdateHasBeenSet)
  {
   payload.WithBool("forceUpdate", m_forceUpdate);

  }

  if(m_instanceTypeHasBeenSet)
  {
   payload.WithString("instanceType", m_instanceType);

  }

  if(m_preferredMaintenanceWindowHasBeenSet)
  {
   payload.WithString("preferredMaintenanceWindow", m_preferredMaintenanceWindow);

  }

  return payload.View().WriteReadable();
}




