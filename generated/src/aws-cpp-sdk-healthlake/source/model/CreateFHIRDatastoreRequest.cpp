﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/healthlake/model/CreateFHIRDatastoreRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::HealthLake::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

Aws::String CreateFHIRDatastoreRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_datastoreNameHasBeenSet)
  {
   payload.WithString("DatastoreName", m_datastoreName);

  }

  if(m_datastoreTypeVersionHasBeenSet)
  {
   payload.WithString("DatastoreTypeVersion", FHIRVersionMapper::GetNameForFHIRVersion(m_datastoreTypeVersion));
  }

  if(m_sseConfigurationHasBeenSet)
  {
   payload.WithObject("SseConfiguration", m_sseConfiguration.Jsonize());

  }

  if(m_preloadDataConfigHasBeenSet)
  {
   payload.WithObject("PreloadDataConfig", m_preloadDataConfig.Jsonize());

  }

  if(m_clientTokenHasBeenSet)
  {
   payload.WithString("ClientToken", m_clientToken);

  }

  if(m_tagsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> tagsJsonList(m_tags.size());
   for(unsigned tagsIndex = 0; tagsIndex < tagsJsonList.GetLength(); ++tagsIndex)
   {
     tagsJsonList[tagsIndex].AsObject(m_tags[tagsIndex].Jsonize());
   }
   payload.WithArray("Tags", std::move(tagsJsonList));

  }

  if(m_identityProviderConfigurationHasBeenSet)
  {
   payload.WithObject("IdentityProviderConfiguration", m_identityProviderConfiguration.Jsonize());

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection CreateFHIRDatastoreRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "HealthLake.CreateFHIRDatastore"));
  return headers;

}




