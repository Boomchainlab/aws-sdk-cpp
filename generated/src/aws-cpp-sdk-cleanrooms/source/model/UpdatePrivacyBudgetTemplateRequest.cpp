﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/cleanrooms/model/UpdatePrivacyBudgetTemplateRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::CleanRooms::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

Aws::String UpdatePrivacyBudgetTemplateRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_privacyBudgetTypeHasBeenSet)
  {
   payload.WithString("privacyBudgetType", PrivacyBudgetTypeMapper::GetNameForPrivacyBudgetType(m_privacyBudgetType));
  }

  if(m_parametersHasBeenSet)
  {
   payload.WithObject("parameters", m_parameters.Jsonize());

  }

  return payload.View().WriteReadable();
}




