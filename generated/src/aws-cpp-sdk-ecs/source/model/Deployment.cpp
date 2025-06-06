﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ecs/model/Deployment.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace ECS
{
namespace Model
{

Deployment::Deployment(JsonView jsonValue)
{
  *this = jsonValue;
}

Deployment& Deployment::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("id"))
  {
    m_id = jsonValue.GetString("id");
    m_idHasBeenSet = true;
  }
  if(jsonValue.ValueExists("status"))
  {
    m_status = jsonValue.GetString("status");
    m_statusHasBeenSet = true;
  }
  if(jsonValue.ValueExists("taskDefinition"))
  {
    m_taskDefinition = jsonValue.GetString("taskDefinition");
    m_taskDefinitionHasBeenSet = true;
  }
  if(jsonValue.ValueExists("desiredCount"))
  {
    m_desiredCount = jsonValue.GetInteger("desiredCount");
    m_desiredCountHasBeenSet = true;
  }
  if(jsonValue.ValueExists("pendingCount"))
  {
    m_pendingCount = jsonValue.GetInteger("pendingCount");
    m_pendingCountHasBeenSet = true;
  }
  if(jsonValue.ValueExists("runningCount"))
  {
    m_runningCount = jsonValue.GetInteger("runningCount");
    m_runningCountHasBeenSet = true;
  }
  if(jsonValue.ValueExists("failedTasks"))
  {
    m_failedTasks = jsonValue.GetInteger("failedTasks");
    m_failedTasksHasBeenSet = true;
  }
  if(jsonValue.ValueExists("createdAt"))
  {
    m_createdAt = jsonValue.GetDouble("createdAt");
    m_createdAtHasBeenSet = true;
  }
  if(jsonValue.ValueExists("updatedAt"))
  {
    m_updatedAt = jsonValue.GetDouble("updatedAt");
    m_updatedAtHasBeenSet = true;
  }
  if(jsonValue.ValueExists("capacityProviderStrategy"))
  {
    Aws::Utils::Array<JsonView> capacityProviderStrategyJsonList = jsonValue.GetArray("capacityProviderStrategy");
    for(unsigned capacityProviderStrategyIndex = 0; capacityProviderStrategyIndex < capacityProviderStrategyJsonList.GetLength(); ++capacityProviderStrategyIndex)
    {
      m_capacityProviderStrategy.push_back(capacityProviderStrategyJsonList[capacityProviderStrategyIndex].AsObject());
    }
    m_capacityProviderStrategyHasBeenSet = true;
  }
  if(jsonValue.ValueExists("launchType"))
  {
    m_launchType = LaunchTypeMapper::GetLaunchTypeForName(jsonValue.GetString("launchType"));
    m_launchTypeHasBeenSet = true;
  }
  if(jsonValue.ValueExists("platformVersion"))
  {
    m_platformVersion = jsonValue.GetString("platformVersion");
    m_platformVersionHasBeenSet = true;
  }
  if(jsonValue.ValueExists("platformFamily"))
  {
    m_platformFamily = jsonValue.GetString("platformFamily");
    m_platformFamilyHasBeenSet = true;
  }
  if(jsonValue.ValueExists("networkConfiguration"))
  {
    m_networkConfiguration = jsonValue.GetObject("networkConfiguration");
    m_networkConfigurationHasBeenSet = true;
  }
  if(jsonValue.ValueExists("rolloutState"))
  {
    m_rolloutState = DeploymentRolloutStateMapper::GetDeploymentRolloutStateForName(jsonValue.GetString("rolloutState"));
    m_rolloutStateHasBeenSet = true;
  }
  if(jsonValue.ValueExists("rolloutStateReason"))
  {
    m_rolloutStateReason = jsonValue.GetString("rolloutStateReason");
    m_rolloutStateReasonHasBeenSet = true;
  }
  if(jsonValue.ValueExists("serviceConnectConfiguration"))
  {
    m_serviceConnectConfiguration = jsonValue.GetObject("serviceConnectConfiguration");
    m_serviceConnectConfigurationHasBeenSet = true;
  }
  if(jsonValue.ValueExists("serviceConnectResources"))
  {
    Aws::Utils::Array<JsonView> serviceConnectResourcesJsonList = jsonValue.GetArray("serviceConnectResources");
    for(unsigned serviceConnectResourcesIndex = 0; serviceConnectResourcesIndex < serviceConnectResourcesJsonList.GetLength(); ++serviceConnectResourcesIndex)
    {
      m_serviceConnectResources.push_back(serviceConnectResourcesJsonList[serviceConnectResourcesIndex].AsObject());
    }
    m_serviceConnectResourcesHasBeenSet = true;
  }
  if(jsonValue.ValueExists("volumeConfigurations"))
  {
    Aws::Utils::Array<JsonView> volumeConfigurationsJsonList = jsonValue.GetArray("volumeConfigurations");
    for(unsigned volumeConfigurationsIndex = 0; volumeConfigurationsIndex < volumeConfigurationsJsonList.GetLength(); ++volumeConfigurationsIndex)
    {
      m_volumeConfigurations.push_back(volumeConfigurationsJsonList[volumeConfigurationsIndex].AsObject());
    }
    m_volumeConfigurationsHasBeenSet = true;
  }
  if(jsonValue.ValueExists("fargateEphemeralStorage"))
  {
    m_fargateEphemeralStorage = jsonValue.GetObject("fargateEphemeralStorage");
    m_fargateEphemeralStorageHasBeenSet = true;
  }
  if(jsonValue.ValueExists("vpcLatticeConfigurations"))
  {
    Aws::Utils::Array<JsonView> vpcLatticeConfigurationsJsonList = jsonValue.GetArray("vpcLatticeConfigurations");
    for(unsigned vpcLatticeConfigurationsIndex = 0; vpcLatticeConfigurationsIndex < vpcLatticeConfigurationsJsonList.GetLength(); ++vpcLatticeConfigurationsIndex)
    {
      m_vpcLatticeConfigurations.push_back(vpcLatticeConfigurationsJsonList[vpcLatticeConfigurationsIndex].AsObject());
    }
    m_vpcLatticeConfigurationsHasBeenSet = true;
  }
  return *this;
}

JsonValue Deployment::Jsonize() const
{
  JsonValue payload;

  if(m_idHasBeenSet)
  {
   payload.WithString("id", m_id);

  }

  if(m_statusHasBeenSet)
  {
   payload.WithString("status", m_status);

  }

  if(m_taskDefinitionHasBeenSet)
  {
   payload.WithString("taskDefinition", m_taskDefinition);

  }

  if(m_desiredCountHasBeenSet)
  {
   payload.WithInteger("desiredCount", m_desiredCount);

  }

  if(m_pendingCountHasBeenSet)
  {
   payload.WithInteger("pendingCount", m_pendingCount);

  }

  if(m_runningCountHasBeenSet)
  {
   payload.WithInteger("runningCount", m_runningCount);

  }

  if(m_failedTasksHasBeenSet)
  {
   payload.WithInteger("failedTasks", m_failedTasks);

  }

  if(m_createdAtHasBeenSet)
  {
   payload.WithDouble("createdAt", m_createdAt.SecondsWithMSPrecision());
  }

  if(m_updatedAtHasBeenSet)
  {
   payload.WithDouble("updatedAt", m_updatedAt.SecondsWithMSPrecision());
  }

  if(m_capacityProviderStrategyHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> capacityProviderStrategyJsonList(m_capacityProviderStrategy.size());
   for(unsigned capacityProviderStrategyIndex = 0; capacityProviderStrategyIndex < capacityProviderStrategyJsonList.GetLength(); ++capacityProviderStrategyIndex)
   {
     capacityProviderStrategyJsonList[capacityProviderStrategyIndex].AsObject(m_capacityProviderStrategy[capacityProviderStrategyIndex].Jsonize());
   }
   payload.WithArray("capacityProviderStrategy", std::move(capacityProviderStrategyJsonList));

  }

  if(m_launchTypeHasBeenSet)
  {
   payload.WithString("launchType", LaunchTypeMapper::GetNameForLaunchType(m_launchType));
  }

  if(m_platformVersionHasBeenSet)
  {
   payload.WithString("platformVersion", m_platformVersion);

  }

  if(m_platformFamilyHasBeenSet)
  {
   payload.WithString("platformFamily", m_platformFamily);

  }

  if(m_networkConfigurationHasBeenSet)
  {
   payload.WithObject("networkConfiguration", m_networkConfiguration.Jsonize());

  }

  if(m_rolloutStateHasBeenSet)
  {
   payload.WithString("rolloutState", DeploymentRolloutStateMapper::GetNameForDeploymentRolloutState(m_rolloutState));
  }

  if(m_rolloutStateReasonHasBeenSet)
  {
   payload.WithString("rolloutStateReason", m_rolloutStateReason);

  }

  if(m_serviceConnectConfigurationHasBeenSet)
  {
   payload.WithObject("serviceConnectConfiguration", m_serviceConnectConfiguration.Jsonize());

  }

  if(m_serviceConnectResourcesHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> serviceConnectResourcesJsonList(m_serviceConnectResources.size());
   for(unsigned serviceConnectResourcesIndex = 0; serviceConnectResourcesIndex < serviceConnectResourcesJsonList.GetLength(); ++serviceConnectResourcesIndex)
   {
     serviceConnectResourcesJsonList[serviceConnectResourcesIndex].AsObject(m_serviceConnectResources[serviceConnectResourcesIndex].Jsonize());
   }
   payload.WithArray("serviceConnectResources", std::move(serviceConnectResourcesJsonList));

  }

  if(m_volumeConfigurationsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> volumeConfigurationsJsonList(m_volumeConfigurations.size());
   for(unsigned volumeConfigurationsIndex = 0; volumeConfigurationsIndex < volumeConfigurationsJsonList.GetLength(); ++volumeConfigurationsIndex)
   {
     volumeConfigurationsJsonList[volumeConfigurationsIndex].AsObject(m_volumeConfigurations[volumeConfigurationsIndex].Jsonize());
   }
   payload.WithArray("volumeConfigurations", std::move(volumeConfigurationsJsonList));

  }

  if(m_fargateEphemeralStorageHasBeenSet)
  {
   payload.WithObject("fargateEphemeralStorage", m_fargateEphemeralStorage.Jsonize());

  }

  if(m_vpcLatticeConfigurationsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> vpcLatticeConfigurationsJsonList(m_vpcLatticeConfigurations.size());
   for(unsigned vpcLatticeConfigurationsIndex = 0; vpcLatticeConfigurationsIndex < vpcLatticeConfigurationsJsonList.GetLength(); ++vpcLatticeConfigurationsIndex)
   {
     vpcLatticeConfigurationsJsonList[vpcLatticeConfigurationsIndex].AsObject(m_vpcLatticeConfigurations[vpcLatticeConfigurationsIndex].Jsonize());
   }
   payload.WithArray("vpcLatticeConfigurations", std::move(vpcLatticeConfigurationsJsonList));

  }

  return payload;
}

} // namespace Model
} // namespace ECS
} // namespace Aws
