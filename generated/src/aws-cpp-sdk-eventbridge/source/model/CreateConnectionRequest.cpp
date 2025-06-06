﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/eventbridge/model/CreateConnectionRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::EventBridge::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

Aws::String CreateConnectionRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_nameHasBeenSet)
  {
   payload.WithString("Name", m_name);

  }

  if(m_descriptionHasBeenSet)
  {
   payload.WithString("Description", m_description);

  }

  if(m_authorizationTypeHasBeenSet)
  {
   payload.WithString("AuthorizationType", ConnectionAuthorizationTypeMapper::GetNameForConnectionAuthorizationType(m_authorizationType));
  }

  if(m_authParametersHasBeenSet)
  {
   payload.WithObject("AuthParameters", m_authParameters.Jsonize());

  }

  if(m_invocationConnectivityParametersHasBeenSet)
  {
   payload.WithObject("InvocationConnectivityParameters", m_invocationConnectivityParameters.Jsonize());

  }

  if(m_kmsKeyIdentifierHasBeenSet)
  {
   payload.WithString("KmsKeyIdentifier", m_kmsKeyIdentifier);

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection CreateConnectionRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "AWSEvents.CreateConnection"));
  return headers;

}




