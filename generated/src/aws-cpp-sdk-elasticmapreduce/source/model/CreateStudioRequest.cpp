﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/elasticmapreduce/model/CreateStudioRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::EMR::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

Aws::String CreateStudioRequest::SerializePayload() const
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

  if(m_authModeHasBeenSet)
  {
   payload.WithString("AuthMode", AuthModeMapper::GetNameForAuthMode(m_authMode));
  }

  if(m_vpcIdHasBeenSet)
  {
   payload.WithString("VpcId", m_vpcId);

  }

  if(m_subnetIdsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> subnetIdsJsonList(m_subnetIds.size());
   for(unsigned subnetIdsIndex = 0; subnetIdsIndex < subnetIdsJsonList.GetLength(); ++subnetIdsIndex)
   {
     subnetIdsJsonList[subnetIdsIndex].AsString(m_subnetIds[subnetIdsIndex]);
   }
   payload.WithArray("SubnetIds", std::move(subnetIdsJsonList));

  }

  if(m_serviceRoleHasBeenSet)
  {
   payload.WithString("ServiceRole", m_serviceRole);

  }

  if(m_userRoleHasBeenSet)
  {
   payload.WithString("UserRole", m_userRole);

  }

  if(m_workspaceSecurityGroupIdHasBeenSet)
  {
   payload.WithString("WorkspaceSecurityGroupId", m_workspaceSecurityGroupId);

  }

  if(m_engineSecurityGroupIdHasBeenSet)
  {
   payload.WithString("EngineSecurityGroupId", m_engineSecurityGroupId);

  }

  if(m_defaultS3LocationHasBeenSet)
  {
   payload.WithString("DefaultS3Location", m_defaultS3Location);

  }

  if(m_idpAuthUrlHasBeenSet)
  {
   payload.WithString("IdpAuthUrl", m_idpAuthUrl);

  }

  if(m_idpRelayStateParameterNameHasBeenSet)
  {
   payload.WithString("IdpRelayStateParameterName", m_idpRelayStateParameterName);

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

  if(m_trustedIdentityPropagationEnabledHasBeenSet)
  {
   payload.WithBool("TrustedIdentityPropagationEnabled", m_trustedIdentityPropagationEnabled);

  }

  if(m_idcUserAssignmentHasBeenSet)
  {
   payload.WithString("IdcUserAssignment", IdcUserAssignmentMapper::GetNameForIdcUserAssignment(m_idcUserAssignment));
  }

  if(m_idcInstanceArnHasBeenSet)
  {
   payload.WithString("IdcInstanceArn", m_idcInstanceArn);

  }

  if(m_encryptionKeyArnHasBeenSet)
  {
   payload.WithString("EncryptionKeyArn", m_encryptionKeyArn);

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection CreateStudioRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "ElasticMapReduce.CreateStudio"));
  return headers;

}




