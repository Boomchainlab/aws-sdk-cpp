﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/gamelift/model/CreateGameServerGroupRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::GameLift::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

Aws::String CreateGameServerGroupRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_gameServerGroupNameHasBeenSet)
  {
   payload.WithString("GameServerGroupName", m_gameServerGroupName);

  }

  if(m_roleArnHasBeenSet)
  {
   payload.WithString("RoleArn", m_roleArn);

  }

  if(m_minSizeHasBeenSet)
  {
   payload.WithInteger("MinSize", m_minSize);

  }

  if(m_maxSizeHasBeenSet)
  {
   payload.WithInteger("MaxSize", m_maxSize);

  }

  if(m_launchTemplateHasBeenSet)
  {
   payload.WithObject("LaunchTemplate", m_launchTemplate.Jsonize());

  }

  if(m_instanceDefinitionsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> instanceDefinitionsJsonList(m_instanceDefinitions.size());
   for(unsigned instanceDefinitionsIndex = 0; instanceDefinitionsIndex < instanceDefinitionsJsonList.GetLength(); ++instanceDefinitionsIndex)
   {
     instanceDefinitionsJsonList[instanceDefinitionsIndex].AsObject(m_instanceDefinitions[instanceDefinitionsIndex].Jsonize());
   }
   payload.WithArray("InstanceDefinitions", std::move(instanceDefinitionsJsonList));

  }

  if(m_autoScalingPolicyHasBeenSet)
  {
   payload.WithObject("AutoScalingPolicy", m_autoScalingPolicy.Jsonize());

  }

  if(m_balancingStrategyHasBeenSet)
  {
   payload.WithString("BalancingStrategy", BalancingStrategyMapper::GetNameForBalancingStrategy(m_balancingStrategy));
  }

  if(m_gameServerProtectionPolicyHasBeenSet)
  {
   payload.WithString("GameServerProtectionPolicy", GameServerProtectionPolicyMapper::GetNameForGameServerProtectionPolicy(m_gameServerProtectionPolicy));
  }

  if(m_vpcSubnetsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> vpcSubnetsJsonList(m_vpcSubnets.size());
   for(unsigned vpcSubnetsIndex = 0; vpcSubnetsIndex < vpcSubnetsJsonList.GetLength(); ++vpcSubnetsIndex)
   {
     vpcSubnetsJsonList[vpcSubnetsIndex].AsString(m_vpcSubnets[vpcSubnetsIndex]);
   }
   payload.WithArray("VpcSubnets", std::move(vpcSubnetsJsonList));

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

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection CreateGameServerGroupRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "GameLift.CreateGameServerGroup"));
  return headers;

}




