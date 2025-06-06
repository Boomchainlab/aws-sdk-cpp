﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/quicksight/model/FolderSummary.h>
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

FolderSummary::FolderSummary(JsonView jsonValue)
{
  *this = jsonValue;
}

FolderSummary& FolderSummary::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Arn"))
  {
    m_arn = jsonValue.GetString("Arn");
    m_arnHasBeenSet = true;
  }
  if(jsonValue.ValueExists("FolderId"))
  {
    m_folderId = jsonValue.GetString("FolderId");
    m_folderIdHasBeenSet = true;
  }
  if(jsonValue.ValueExists("Name"))
  {
    m_name = jsonValue.GetString("Name");
    m_nameHasBeenSet = true;
  }
  if(jsonValue.ValueExists("FolderType"))
  {
    m_folderType = FolderTypeMapper::GetFolderTypeForName(jsonValue.GetString("FolderType"));
    m_folderTypeHasBeenSet = true;
  }
  if(jsonValue.ValueExists("CreatedTime"))
  {
    m_createdTime = jsonValue.GetDouble("CreatedTime");
    m_createdTimeHasBeenSet = true;
  }
  if(jsonValue.ValueExists("LastUpdatedTime"))
  {
    m_lastUpdatedTime = jsonValue.GetDouble("LastUpdatedTime");
    m_lastUpdatedTimeHasBeenSet = true;
  }
  if(jsonValue.ValueExists("SharingModel"))
  {
    m_sharingModel = SharingModelMapper::GetSharingModelForName(jsonValue.GetString("SharingModel"));
    m_sharingModelHasBeenSet = true;
  }
  return *this;
}

JsonValue FolderSummary::Jsonize() const
{
  JsonValue payload;

  if(m_arnHasBeenSet)
  {
   payload.WithString("Arn", m_arn);

  }

  if(m_folderIdHasBeenSet)
  {
   payload.WithString("FolderId", m_folderId);

  }

  if(m_nameHasBeenSet)
  {
   payload.WithString("Name", m_name);

  }

  if(m_folderTypeHasBeenSet)
  {
   payload.WithString("FolderType", FolderTypeMapper::GetNameForFolderType(m_folderType));
  }

  if(m_createdTimeHasBeenSet)
  {
   payload.WithDouble("CreatedTime", m_createdTime.SecondsWithMSPrecision());
  }

  if(m_lastUpdatedTimeHasBeenSet)
  {
   payload.WithDouble("LastUpdatedTime", m_lastUpdatedTime.SecondsWithMSPrecision());
  }

  if(m_sharingModelHasBeenSet)
  {
   payload.WithString("SharingModel", SharingModelMapper::GetNameForSharingModel(m_sharingModel));
  }

  return payload;
}

} // namespace Model
} // namespace QuickSight
} // namespace Aws
