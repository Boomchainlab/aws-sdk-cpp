﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/qconnect/model/UpdateAssistantAIAgentRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::QConnect::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

Aws::String UpdateAssistantAIAgentRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_aiAgentTypeHasBeenSet)
  {
   payload.WithString("aiAgentType", AIAgentTypeMapper::GetNameForAIAgentType(m_aiAgentType));
  }

  if(m_configurationHasBeenSet)
  {
   payload.WithObject("configuration", m_configuration.Jsonize());

  }

  return payload.View().WriteReadable();
}




