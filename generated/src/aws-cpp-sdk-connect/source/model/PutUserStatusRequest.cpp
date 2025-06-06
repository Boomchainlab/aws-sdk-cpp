﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/connect/model/PutUserStatusRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Connect::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

Aws::String PutUserStatusRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_agentStatusIdHasBeenSet)
  {
   payload.WithString("AgentStatusId", m_agentStatusId);

  }

  return payload.View().WriteReadable();
}




