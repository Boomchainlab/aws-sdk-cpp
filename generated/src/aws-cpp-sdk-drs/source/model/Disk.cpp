﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/drs/model/Disk.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace drs
{
namespace Model
{

Disk::Disk(JsonView jsonValue)
{
  *this = jsonValue;
}

Disk& Disk::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("bytes"))
  {
    m_bytes = jsonValue.GetInt64("bytes");
    m_bytesHasBeenSet = true;
  }
  if(jsonValue.ValueExists("deviceName"))
  {
    m_deviceName = jsonValue.GetString("deviceName");
    m_deviceNameHasBeenSet = true;
  }
  return *this;
}

JsonValue Disk::Jsonize() const
{
  JsonValue payload;

  if(m_bytesHasBeenSet)
  {
   payload.WithInt64("bytes", m_bytes);

  }

  if(m_deviceNameHasBeenSet)
  {
   payload.WithString("deviceName", m_deviceName);

  }

  return payload;
}

} // namespace Model
} // namespace drs
} // namespace Aws
