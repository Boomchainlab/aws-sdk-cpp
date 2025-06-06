﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/devops-guru/model/PerformanceInsightsMetricQuery.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace DevOpsGuru
{
namespace Model
{

PerformanceInsightsMetricQuery::PerformanceInsightsMetricQuery(JsonView jsonValue)
{
  *this = jsonValue;
}

PerformanceInsightsMetricQuery& PerformanceInsightsMetricQuery::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Metric"))
  {
    m_metric = jsonValue.GetString("Metric");
    m_metricHasBeenSet = true;
  }
  if(jsonValue.ValueExists("GroupBy"))
  {
    m_groupBy = jsonValue.GetObject("GroupBy");
    m_groupByHasBeenSet = true;
  }
  if(jsonValue.ValueExists("Filter"))
  {
    Aws::Map<Aws::String, JsonView> filterJsonMap = jsonValue.GetObject("Filter").GetAllObjects();
    for(auto& filterItem : filterJsonMap)
    {
      m_filter[filterItem.first] = filterItem.second.AsString();
    }
    m_filterHasBeenSet = true;
  }
  return *this;
}

JsonValue PerformanceInsightsMetricQuery::Jsonize() const
{
  JsonValue payload;

  if(m_metricHasBeenSet)
  {
   payload.WithString("Metric", m_metric);

  }

  if(m_groupByHasBeenSet)
  {
   payload.WithObject("GroupBy", m_groupBy.Jsonize());

  }

  if(m_filterHasBeenSet)
  {
   JsonValue filterJsonMap;
   for(auto& filterItem : m_filter)
   {
     filterJsonMap.WithString(filterItem.first, filterItem.second);
   }
   payload.WithObject("Filter", std::move(filterJsonMap));

  }

  return payload;
}

} // namespace Model
} // namespace DevOpsGuru
} // namespace Aws
