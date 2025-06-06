﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/wellarchitected/model/LensShareSummary.h>
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

LensShareSummary::LensShareSummary(JsonView jsonValue)
{
  *this = jsonValue;
}

LensShareSummary& LensShareSummary::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("ShareId"))
  {
    m_shareId = jsonValue.GetString("ShareId");
    m_shareIdHasBeenSet = true;
  }
  if(jsonValue.ValueExists("SharedWith"))
  {
    m_sharedWith = jsonValue.GetString("SharedWith");
    m_sharedWithHasBeenSet = true;
  }
  if(jsonValue.ValueExists("Status"))
  {
    m_status = ShareStatusMapper::GetShareStatusForName(jsonValue.GetString("Status"));
    m_statusHasBeenSet = true;
  }
  if(jsonValue.ValueExists("StatusMessage"))
  {
    m_statusMessage = jsonValue.GetString("StatusMessage");
    m_statusMessageHasBeenSet = true;
  }
  return *this;
}

JsonValue LensShareSummary::Jsonize() const
{
  JsonValue payload;

  if(m_shareIdHasBeenSet)
  {
   payload.WithString("ShareId", m_shareId);

  }

  if(m_sharedWithHasBeenSet)
  {
   payload.WithString("SharedWith", m_sharedWith);

  }

  if(m_statusHasBeenSet)
  {
   payload.WithString("Status", ShareStatusMapper::GetNameForShareStatus(m_status));
  }

  if(m_statusMessageHasBeenSet)
  {
   payload.WithString("StatusMessage", m_statusMessage);

  }

  return payload;
}

} // namespace Model
} // namespace WellArchitected
} // namespace Aws
