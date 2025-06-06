﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/backup/model/BackupRuleInput.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace Backup
{
namespace Model
{

BackupRuleInput::BackupRuleInput(JsonView jsonValue)
{
  *this = jsonValue;
}

BackupRuleInput& BackupRuleInput::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("RuleName"))
  {
    m_ruleName = jsonValue.GetString("RuleName");
    m_ruleNameHasBeenSet = true;
  }
  if(jsonValue.ValueExists("TargetBackupVaultName"))
  {
    m_targetBackupVaultName = jsonValue.GetString("TargetBackupVaultName");
    m_targetBackupVaultNameHasBeenSet = true;
  }
  if(jsonValue.ValueExists("ScheduleExpression"))
  {
    m_scheduleExpression = jsonValue.GetString("ScheduleExpression");
    m_scheduleExpressionHasBeenSet = true;
  }
  if(jsonValue.ValueExists("StartWindowMinutes"))
  {
    m_startWindowMinutes = jsonValue.GetInt64("StartWindowMinutes");
    m_startWindowMinutesHasBeenSet = true;
  }
  if(jsonValue.ValueExists("CompletionWindowMinutes"))
  {
    m_completionWindowMinutes = jsonValue.GetInt64("CompletionWindowMinutes");
    m_completionWindowMinutesHasBeenSet = true;
  }
  if(jsonValue.ValueExists("Lifecycle"))
  {
    m_lifecycle = jsonValue.GetObject("Lifecycle");
    m_lifecycleHasBeenSet = true;
  }
  if(jsonValue.ValueExists("RecoveryPointTags"))
  {
    Aws::Map<Aws::String, JsonView> recoveryPointTagsJsonMap = jsonValue.GetObject("RecoveryPointTags").GetAllObjects();
    for(auto& recoveryPointTagsItem : recoveryPointTagsJsonMap)
    {
      m_recoveryPointTags[recoveryPointTagsItem.first] = recoveryPointTagsItem.second.AsString();
    }
    m_recoveryPointTagsHasBeenSet = true;
  }
  if(jsonValue.ValueExists("CopyActions"))
  {
    Aws::Utils::Array<JsonView> copyActionsJsonList = jsonValue.GetArray("CopyActions");
    for(unsigned copyActionsIndex = 0; copyActionsIndex < copyActionsJsonList.GetLength(); ++copyActionsIndex)
    {
      m_copyActions.push_back(copyActionsJsonList[copyActionsIndex].AsObject());
    }
    m_copyActionsHasBeenSet = true;
  }
  if(jsonValue.ValueExists("EnableContinuousBackup"))
  {
    m_enableContinuousBackup = jsonValue.GetBool("EnableContinuousBackup");
    m_enableContinuousBackupHasBeenSet = true;
  }
  if(jsonValue.ValueExists("ScheduleExpressionTimezone"))
  {
    m_scheduleExpressionTimezone = jsonValue.GetString("ScheduleExpressionTimezone");
    m_scheduleExpressionTimezoneHasBeenSet = true;
  }
  if(jsonValue.ValueExists("IndexActions"))
  {
    Aws::Utils::Array<JsonView> indexActionsJsonList = jsonValue.GetArray("IndexActions");
    for(unsigned indexActionsIndex = 0; indexActionsIndex < indexActionsJsonList.GetLength(); ++indexActionsIndex)
    {
      m_indexActions.push_back(indexActionsJsonList[indexActionsIndex].AsObject());
    }
    m_indexActionsHasBeenSet = true;
  }
  return *this;
}

JsonValue BackupRuleInput::Jsonize() const
{
  JsonValue payload;

  if(m_ruleNameHasBeenSet)
  {
   payload.WithString("RuleName", m_ruleName);

  }

  if(m_targetBackupVaultNameHasBeenSet)
  {
   payload.WithString("TargetBackupVaultName", m_targetBackupVaultName);

  }

  if(m_scheduleExpressionHasBeenSet)
  {
   payload.WithString("ScheduleExpression", m_scheduleExpression);

  }

  if(m_startWindowMinutesHasBeenSet)
  {
   payload.WithInt64("StartWindowMinutes", m_startWindowMinutes);

  }

  if(m_completionWindowMinutesHasBeenSet)
  {
   payload.WithInt64("CompletionWindowMinutes", m_completionWindowMinutes);

  }

  if(m_lifecycleHasBeenSet)
  {
   payload.WithObject("Lifecycle", m_lifecycle.Jsonize());

  }

  if(m_recoveryPointTagsHasBeenSet)
  {
   JsonValue recoveryPointTagsJsonMap;
   for(auto& recoveryPointTagsItem : m_recoveryPointTags)
   {
     recoveryPointTagsJsonMap.WithString(recoveryPointTagsItem.first, recoveryPointTagsItem.second);
   }
   payload.WithObject("RecoveryPointTags", std::move(recoveryPointTagsJsonMap));

  }

  if(m_copyActionsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> copyActionsJsonList(m_copyActions.size());
   for(unsigned copyActionsIndex = 0; copyActionsIndex < copyActionsJsonList.GetLength(); ++copyActionsIndex)
   {
     copyActionsJsonList[copyActionsIndex].AsObject(m_copyActions[copyActionsIndex].Jsonize());
   }
   payload.WithArray("CopyActions", std::move(copyActionsJsonList));

  }

  if(m_enableContinuousBackupHasBeenSet)
  {
   payload.WithBool("EnableContinuousBackup", m_enableContinuousBackup);

  }

  if(m_scheduleExpressionTimezoneHasBeenSet)
  {
   payload.WithString("ScheduleExpressionTimezone", m_scheduleExpressionTimezone);

  }

  if(m_indexActionsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> indexActionsJsonList(m_indexActions.size());
   for(unsigned indexActionsIndex = 0; indexActionsIndex < indexActionsJsonList.GetLength(); ++indexActionsIndex)
   {
     indexActionsJsonList[indexActionsIndex].AsObject(m_indexActions[indexActionsIndex].Jsonize());
   }
   payload.WithArray("IndexActions", std::move(indexActionsJsonList));

  }

  return payload;
}

} // namespace Model
} // namespace Backup
} // namespace Aws
