﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/sagemaker/model/ProductionVariantSummary.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace SageMaker
{
namespace Model
{

ProductionVariantSummary::ProductionVariantSummary(JsonView jsonValue)
{
  *this = jsonValue;
}

ProductionVariantSummary& ProductionVariantSummary::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("VariantName"))
  {
    m_variantName = jsonValue.GetString("VariantName");
    m_variantNameHasBeenSet = true;
  }
  if(jsonValue.ValueExists("DeployedImages"))
  {
    Aws::Utils::Array<JsonView> deployedImagesJsonList = jsonValue.GetArray("DeployedImages");
    for(unsigned deployedImagesIndex = 0; deployedImagesIndex < deployedImagesJsonList.GetLength(); ++deployedImagesIndex)
    {
      m_deployedImages.push_back(deployedImagesJsonList[deployedImagesIndex].AsObject());
    }
    m_deployedImagesHasBeenSet = true;
  }
  if(jsonValue.ValueExists("CurrentWeight"))
  {
    m_currentWeight = jsonValue.GetDouble("CurrentWeight");
    m_currentWeightHasBeenSet = true;
  }
  if(jsonValue.ValueExists("DesiredWeight"))
  {
    m_desiredWeight = jsonValue.GetDouble("DesiredWeight");
    m_desiredWeightHasBeenSet = true;
  }
  if(jsonValue.ValueExists("CurrentInstanceCount"))
  {
    m_currentInstanceCount = jsonValue.GetInteger("CurrentInstanceCount");
    m_currentInstanceCountHasBeenSet = true;
  }
  if(jsonValue.ValueExists("DesiredInstanceCount"))
  {
    m_desiredInstanceCount = jsonValue.GetInteger("DesiredInstanceCount");
    m_desiredInstanceCountHasBeenSet = true;
  }
  if(jsonValue.ValueExists("VariantStatus"))
  {
    Aws::Utils::Array<JsonView> variantStatusJsonList = jsonValue.GetArray("VariantStatus");
    for(unsigned variantStatusIndex = 0; variantStatusIndex < variantStatusJsonList.GetLength(); ++variantStatusIndex)
    {
      m_variantStatus.push_back(variantStatusJsonList[variantStatusIndex].AsObject());
    }
    m_variantStatusHasBeenSet = true;
  }
  if(jsonValue.ValueExists("CurrentServerlessConfig"))
  {
    m_currentServerlessConfig = jsonValue.GetObject("CurrentServerlessConfig");
    m_currentServerlessConfigHasBeenSet = true;
  }
  if(jsonValue.ValueExists("DesiredServerlessConfig"))
  {
    m_desiredServerlessConfig = jsonValue.GetObject("DesiredServerlessConfig");
    m_desiredServerlessConfigHasBeenSet = true;
  }
  if(jsonValue.ValueExists("ManagedInstanceScaling"))
  {
    m_managedInstanceScaling = jsonValue.GetObject("ManagedInstanceScaling");
    m_managedInstanceScalingHasBeenSet = true;
  }
  if(jsonValue.ValueExists("RoutingConfig"))
  {
    m_routingConfig = jsonValue.GetObject("RoutingConfig");
    m_routingConfigHasBeenSet = true;
  }
  if(jsonValue.ValueExists("CapacityReservationConfig"))
  {
    m_capacityReservationConfig = jsonValue.GetObject("CapacityReservationConfig");
    m_capacityReservationConfigHasBeenSet = true;
  }
  return *this;
}

JsonValue ProductionVariantSummary::Jsonize() const
{
  JsonValue payload;

  if(m_variantNameHasBeenSet)
  {
   payload.WithString("VariantName", m_variantName);

  }

  if(m_deployedImagesHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> deployedImagesJsonList(m_deployedImages.size());
   for(unsigned deployedImagesIndex = 0; deployedImagesIndex < deployedImagesJsonList.GetLength(); ++deployedImagesIndex)
   {
     deployedImagesJsonList[deployedImagesIndex].AsObject(m_deployedImages[deployedImagesIndex].Jsonize());
   }
   payload.WithArray("DeployedImages", std::move(deployedImagesJsonList));

  }

  if(m_currentWeightHasBeenSet)
  {
   payload.WithDouble("CurrentWeight", m_currentWeight);

  }

  if(m_desiredWeightHasBeenSet)
  {
   payload.WithDouble("DesiredWeight", m_desiredWeight);

  }

  if(m_currentInstanceCountHasBeenSet)
  {
   payload.WithInteger("CurrentInstanceCount", m_currentInstanceCount);

  }

  if(m_desiredInstanceCountHasBeenSet)
  {
   payload.WithInteger("DesiredInstanceCount", m_desiredInstanceCount);

  }

  if(m_variantStatusHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> variantStatusJsonList(m_variantStatus.size());
   for(unsigned variantStatusIndex = 0; variantStatusIndex < variantStatusJsonList.GetLength(); ++variantStatusIndex)
   {
     variantStatusJsonList[variantStatusIndex].AsObject(m_variantStatus[variantStatusIndex].Jsonize());
   }
   payload.WithArray("VariantStatus", std::move(variantStatusJsonList));

  }

  if(m_currentServerlessConfigHasBeenSet)
  {
   payload.WithObject("CurrentServerlessConfig", m_currentServerlessConfig.Jsonize());

  }

  if(m_desiredServerlessConfigHasBeenSet)
  {
   payload.WithObject("DesiredServerlessConfig", m_desiredServerlessConfig.Jsonize());

  }

  if(m_managedInstanceScalingHasBeenSet)
  {
   payload.WithObject("ManagedInstanceScaling", m_managedInstanceScaling.Jsonize());

  }

  if(m_routingConfigHasBeenSet)
  {
   payload.WithObject("RoutingConfig", m_routingConfig.Jsonize());

  }

  if(m_capacityReservationConfigHasBeenSet)
  {
   payload.WithObject("CapacityReservationConfig", m_capacityReservationConfig.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace SageMaker
} // namespace Aws
