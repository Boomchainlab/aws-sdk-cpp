﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/backup/model/GetBackupVaultNotificationsResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::Backup::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

GetBackupVaultNotificationsResult::GetBackupVaultNotificationsResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

GetBackupVaultNotificationsResult& GetBackupVaultNotificationsResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("BackupVaultName"))
  {
    m_backupVaultName = jsonValue.GetString("BackupVaultName");
    m_backupVaultNameHasBeenSet = true;
  }
  if(jsonValue.ValueExists("BackupVaultArn"))
  {
    m_backupVaultArn = jsonValue.GetString("BackupVaultArn");
    m_backupVaultArnHasBeenSet = true;
  }
  if(jsonValue.ValueExists("SNSTopicArn"))
  {
    m_sNSTopicArn = jsonValue.GetString("SNSTopicArn");
    m_sNSTopicArnHasBeenSet = true;
  }
  if(jsonValue.ValueExists("BackupVaultEvents"))
  {
    Aws::Utils::Array<JsonView> backupVaultEventsJsonList = jsonValue.GetArray("BackupVaultEvents");
    for(unsigned backupVaultEventsIndex = 0; backupVaultEventsIndex < backupVaultEventsJsonList.GetLength(); ++backupVaultEventsIndex)
    {
      m_backupVaultEvents.push_back(BackupVaultEventMapper::GetBackupVaultEventForName(backupVaultEventsJsonList[backupVaultEventsIndex].AsString()));
    }
    m_backupVaultEventsHasBeenSet = true;
  }

  const auto& headers = result.GetHeaderValueCollection();
  const auto& requestIdIter = headers.find("x-amzn-requestid");
  if(requestIdIter != headers.end())
  {
    m_requestId = requestIdIter->second;
    m_requestIdHasBeenSet = true;
  }


  return *this;
}
