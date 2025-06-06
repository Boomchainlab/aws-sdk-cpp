﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/wellarchitected/model/LensReviewSummary.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace WellArchitected
{
namespace Model
{

LensReviewSummary::LensReviewSummary(JsonView jsonValue)
{
  *this = jsonValue;
}

LensReviewSummary& LensReviewSummary::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("LensAlias"))
  {
    m_lensAlias = jsonValue.GetString("LensAlias");
    m_lensAliasHasBeenSet = true;
  }
  if(jsonValue.ValueExists("LensArn"))
  {
    m_lensArn = jsonValue.GetString("LensArn");
    m_lensArnHasBeenSet = true;
  }
  if(jsonValue.ValueExists("LensVersion"))
  {
    m_lensVersion = jsonValue.GetString("LensVersion");
    m_lensVersionHasBeenSet = true;
  }
  if(jsonValue.ValueExists("LensName"))
  {
    m_lensName = jsonValue.GetString("LensName");
    m_lensNameHasBeenSet = true;
  }
  if(jsonValue.ValueExists("LensStatus"))
  {
    m_lensStatus = LensStatusMapper::GetLensStatusForName(jsonValue.GetString("LensStatus"));
    m_lensStatusHasBeenSet = true;
  }
  if(jsonValue.ValueExists("UpdatedAt"))
  {
    m_updatedAt = jsonValue.GetDouble("UpdatedAt");
    m_updatedAtHasBeenSet = true;
  }
  if(jsonValue.ValueExists("RiskCounts"))
  {
    Aws::Map<Aws::String, JsonView> riskCountsJsonMap = jsonValue.GetObject("RiskCounts").GetAllObjects();
    for(auto& riskCountsItem : riskCountsJsonMap)
    {
      m_riskCounts[RiskMapper::GetRiskForName(riskCountsItem.first)] = riskCountsItem.second.AsInteger();
    }
    m_riskCountsHasBeenSet = true;
  }
  if(jsonValue.ValueExists("Profiles"))
  {
    Aws::Utils::Array<JsonView> profilesJsonList = jsonValue.GetArray("Profiles");
    for(unsigned profilesIndex = 0; profilesIndex < profilesJsonList.GetLength(); ++profilesIndex)
    {
      m_profiles.push_back(profilesJsonList[profilesIndex].AsObject());
    }
    m_profilesHasBeenSet = true;
  }
  if(jsonValue.ValueExists("PrioritizedRiskCounts"))
  {
    Aws::Map<Aws::String, JsonView> prioritizedRiskCountsJsonMap = jsonValue.GetObject("PrioritizedRiskCounts").GetAllObjects();
    for(auto& prioritizedRiskCountsItem : prioritizedRiskCountsJsonMap)
    {
      m_prioritizedRiskCounts[RiskMapper::GetRiskForName(prioritizedRiskCountsItem.first)] = prioritizedRiskCountsItem.second.AsInteger();
    }
    m_prioritizedRiskCountsHasBeenSet = true;
  }
  return *this;
}

JsonValue LensReviewSummary::Jsonize() const
{
  JsonValue payload;

  if(m_lensAliasHasBeenSet)
  {
   payload.WithString("LensAlias", m_lensAlias);

  }

  if(m_lensArnHasBeenSet)
  {
   payload.WithString("LensArn", m_lensArn);

  }

  if(m_lensVersionHasBeenSet)
  {
   payload.WithString("LensVersion", m_lensVersion);

  }

  if(m_lensNameHasBeenSet)
  {
   payload.WithString("LensName", m_lensName);

  }

  if(m_lensStatusHasBeenSet)
  {
   payload.WithString("LensStatus", LensStatusMapper::GetNameForLensStatus(m_lensStatus));
  }

  if(m_updatedAtHasBeenSet)
  {
   payload.WithDouble("UpdatedAt", m_updatedAt.SecondsWithMSPrecision());
  }

  if(m_riskCountsHasBeenSet)
  {
   JsonValue riskCountsJsonMap;
   for(auto& riskCountsItem : m_riskCounts)
   {
     riskCountsJsonMap.WithInteger(RiskMapper::GetNameForRisk(riskCountsItem.first), riskCountsItem.second);
   }
   payload.WithObject("RiskCounts", std::move(riskCountsJsonMap));

  }

  if(m_profilesHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> profilesJsonList(m_profiles.size());
   for(unsigned profilesIndex = 0; profilesIndex < profilesJsonList.GetLength(); ++profilesIndex)
   {
     profilesJsonList[profilesIndex].AsObject(m_profiles[profilesIndex].Jsonize());
   }
   payload.WithArray("Profiles", std::move(profilesJsonList));

  }

  if(m_prioritizedRiskCountsHasBeenSet)
  {
   JsonValue prioritizedRiskCountsJsonMap;
   for(auto& prioritizedRiskCountsItem : m_prioritizedRiskCounts)
   {
     prioritizedRiskCountsJsonMap.WithInteger(RiskMapper::GetNameForRisk(prioritizedRiskCountsItem.first), prioritizedRiskCountsItem.second);
   }
   payload.WithObject("PrioritizedRiskCounts", std::move(prioritizedRiskCountsJsonMap));

  }

  return payload;
}

} // namespace Model
} // namespace WellArchitected
} // namespace Aws
