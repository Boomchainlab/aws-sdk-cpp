﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/quicksight/model/GeospatialMapVisual.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace QuickSight
{
namespace Model
{

GeospatialMapVisual::GeospatialMapVisual(JsonView jsonValue)
{
  *this = jsonValue;
}

GeospatialMapVisual& GeospatialMapVisual::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("VisualId"))
  {
    m_visualId = jsonValue.GetString("VisualId");
    m_visualIdHasBeenSet = true;
  }
  if(jsonValue.ValueExists("Title"))
  {
    m_title = jsonValue.GetObject("Title");
    m_titleHasBeenSet = true;
  }
  if(jsonValue.ValueExists("Subtitle"))
  {
    m_subtitle = jsonValue.GetObject("Subtitle");
    m_subtitleHasBeenSet = true;
  }
  if(jsonValue.ValueExists("ChartConfiguration"))
  {
    m_chartConfiguration = jsonValue.GetObject("ChartConfiguration");
    m_chartConfigurationHasBeenSet = true;
  }
  if(jsonValue.ValueExists("ColumnHierarchies"))
  {
    Aws::Utils::Array<JsonView> columnHierarchiesJsonList = jsonValue.GetArray("ColumnHierarchies");
    for(unsigned columnHierarchiesIndex = 0; columnHierarchiesIndex < columnHierarchiesJsonList.GetLength(); ++columnHierarchiesIndex)
    {
      m_columnHierarchies.push_back(columnHierarchiesJsonList[columnHierarchiesIndex].AsObject());
    }
    m_columnHierarchiesHasBeenSet = true;
  }
  if(jsonValue.ValueExists("Actions"))
  {
    Aws::Utils::Array<JsonView> actionsJsonList = jsonValue.GetArray("Actions");
    for(unsigned actionsIndex = 0; actionsIndex < actionsJsonList.GetLength(); ++actionsIndex)
    {
      m_actions.push_back(actionsJsonList[actionsIndex].AsObject());
    }
    m_actionsHasBeenSet = true;
  }
  if(jsonValue.ValueExists("VisualContentAltText"))
  {
    m_visualContentAltText = jsonValue.GetString("VisualContentAltText");
    m_visualContentAltTextHasBeenSet = true;
  }
  return *this;
}

JsonValue GeospatialMapVisual::Jsonize() const
{
  JsonValue payload;

  if(m_visualIdHasBeenSet)
  {
   payload.WithString("VisualId", m_visualId);

  }

  if(m_titleHasBeenSet)
  {
   payload.WithObject("Title", m_title.Jsonize());

  }

  if(m_subtitleHasBeenSet)
  {
   payload.WithObject("Subtitle", m_subtitle.Jsonize());

  }

  if(m_chartConfigurationHasBeenSet)
  {
   payload.WithObject("ChartConfiguration", m_chartConfiguration.Jsonize());

  }

  if(m_columnHierarchiesHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> columnHierarchiesJsonList(m_columnHierarchies.size());
   for(unsigned columnHierarchiesIndex = 0; columnHierarchiesIndex < columnHierarchiesJsonList.GetLength(); ++columnHierarchiesIndex)
   {
     columnHierarchiesJsonList[columnHierarchiesIndex].AsObject(m_columnHierarchies[columnHierarchiesIndex].Jsonize());
   }
   payload.WithArray("ColumnHierarchies", std::move(columnHierarchiesJsonList));

  }

  if(m_actionsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> actionsJsonList(m_actions.size());
   for(unsigned actionsIndex = 0; actionsIndex < actionsJsonList.GetLength(); ++actionsIndex)
   {
     actionsJsonList[actionsIndex].AsObject(m_actions[actionsIndex].Jsonize());
   }
   payload.WithArray("Actions", std::move(actionsJsonList));

  }

  if(m_visualContentAltTextHasBeenSet)
  {
   payload.WithString("VisualContentAltText", m_visualContentAltText);

  }

  return payload;
}

} // namespace Model
} // namespace QuickSight
} // namespace Aws
