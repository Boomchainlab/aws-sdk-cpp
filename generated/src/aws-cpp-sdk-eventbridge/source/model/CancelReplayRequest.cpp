﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/eventbridge/model/CancelReplayRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::EventBridge::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

Aws::String CancelReplayRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_replayNameHasBeenSet)
  {
   payload.WithString("ReplayName", m_replayName);

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection CancelReplayRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "AWSEvents.CancelReplay"));
  return headers;

}




