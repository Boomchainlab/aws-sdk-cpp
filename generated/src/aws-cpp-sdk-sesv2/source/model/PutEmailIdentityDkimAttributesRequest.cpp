﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/sesv2/model/PutEmailIdentityDkimAttributesRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::SESV2::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

Aws::String PutEmailIdentityDkimAttributesRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_signingEnabledHasBeenSet)
  {
   payload.WithBool("SigningEnabled", m_signingEnabled);

  }

  return payload.View().WriteReadable();
}




