﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/iottwinmaker/model/GetPropertyValueRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::IoTTwinMaker::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

Aws::String GetPropertyValueRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_componentNameHasBeenSet)
  {
   payload.WithString("componentName", m_componentName);

  }

  if(m_componentPathHasBeenSet)
  {
   payload.WithString("componentPath", m_componentPath);

  }

  if(m_componentTypeIdHasBeenSet)
  {
   payload.WithString("componentTypeId", m_componentTypeId);

  }

  if(m_entityIdHasBeenSet)
  {
   payload.WithString("entityId", m_entityId);

  }

  if(m_selectedPropertiesHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> selectedPropertiesJsonList(m_selectedProperties.size());
   for(unsigned selectedPropertiesIndex = 0; selectedPropertiesIndex < selectedPropertiesJsonList.GetLength(); ++selectedPropertiesIndex)
   {
     selectedPropertiesJsonList[selectedPropertiesIndex].AsString(m_selectedProperties[selectedPropertiesIndex]);
   }
   payload.WithArray("selectedProperties", std::move(selectedPropertiesJsonList));

  }

  if(m_maxResultsHasBeenSet)
  {
   payload.WithInteger("maxResults", m_maxResults);

  }

  if(m_nextTokenHasBeenSet)
  {
   payload.WithString("nextToken", m_nextToken);

  }

  if(m_propertyGroupNameHasBeenSet)
  {
   payload.WithString("propertyGroupName", m_propertyGroupName);

  }

  if(m_tabularConditionsHasBeenSet)
  {
   payload.WithObject("tabularConditions", m_tabularConditions.Jsonize());

  }

  return payload.View().WriteReadable();
}




