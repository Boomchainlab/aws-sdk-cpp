﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/connect/model/AssociateQueueQuickConnectsRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Connect::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

Aws::String AssociateQueueQuickConnectsRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_quickConnectIdsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> quickConnectIdsJsonList(m_quickConnectIds.size());
   for(unsigned quickConnectIdsIndex = 0; quickConnectIdsIndex < quickConnectIdsJsonList.GetLength(); ++quickConnectIdsIndex)
   {
     quickConnectIdsJsonList[quickConnectIdsIndex].AsString(m_quickConnectIds[quickConnectIdsIndex]);
   }
   payload.WithArray("QuickConnectIds", std::move(quickConnectIdsJsonList));

  }

  return payload.View().WriteReadable();
}




