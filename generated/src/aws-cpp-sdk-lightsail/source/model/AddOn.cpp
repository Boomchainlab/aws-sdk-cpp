﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/lightsail/model/AddOn.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace Lightsail
{
namespace Model
{

AddOn::AddOn(JsonView jsonValue)
{
  *this = jsonValue;
}

AddOn& AddOn::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("name"))
  {
    m_name = jsonValue.GetString("name");
    m_nameHasBeenSet = true;
  }
  if(jsonValue.ValueExists("status"))
  {
    m_status = jsonValue.GetString("status");
    m_statusHasBeenSet = true;
  }
  if(jsonValue.ValueExists("snapshotTimeOfDay"))
  {
    m_snapshotTimeOfDay = jsonValue.GetString("snapshotTimeOfDay");
    m_snapshotTimeOfDayHasBeenSet = true;
  }
  if(jsonValue.ValueExists("nextSnapshotTimeOfDay"))
  {
    m_nextSnapshotTimeOfDay = jsonValue.GetString("nextSnapshotTimeOfDay");
    m_nextSnapshotTimeOfDayHasBeenSet = true;
  }
  if(jsonValue.ValueExists("threshold"))
  {
    m_threshold = jsonValue.GetString("threshold");
    m_thresholdHasBeenSet = true;
  }
  if(jsonValue.ValueExists("duration"))
  {
    m_duration = jsonValue.GetString("duration");
    m_durationHasBeenSet = true;
  }
  return *this;
}

JsonValue AddOn::Jsonize() const
{
  JsonValue payload;

  if(m_nameHasBeenSet)
  {
   payload.WithString("name", m_name);

  }

  if(m_statusHasBeenSet)
  {
   payload.WithString("status", m_status);

  }

  if(m_snapshotTimeOfDayHasBeenSet)
  {
   payload.WithString("snapshotTimeOfDay", m_snapshotTimeOfDay);

  }

  if(m_nextSnapshotTimeOfDayHasBeenSet)
  {
   payload.WithString("nextSnapshotTimeOfDay", m_nextSnapshotTimeOfDay);

  }

  if(m_thresholdHasBeenSet)
  {
   payload.WithString("threshold", m_threshold);

  }

  if(m_durationHasBeenSet)
  {
   payload.WithString("duration", m_duration);

  }

  return payload;
}

} // namespace Model
} // namespace Lightsail
} // namespace Aws
