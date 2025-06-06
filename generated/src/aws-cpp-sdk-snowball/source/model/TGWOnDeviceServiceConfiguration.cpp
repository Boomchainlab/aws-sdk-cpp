﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/snowball/model/TGWOnDeviceServiceConfiguration.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace Snowball
{
namespace Model
{

TGWOnDeviceServiceConfiguration::TGWOnDeviceServiceConfiguration(JsonView jsonValue)
{
  *this = jsonValue;
}

TGWOnDeviceServiceConfiguration& TGWOnDeviceServiceConfiguration::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("StorageLimit"))
  {
    m_storageLimit = jsonValue.GetInteger("StorageLimit");
    m_storageLimitHasBeenSet = true;
  }
  if(jsonValue.ValueExists("StorageUnit"))
  {
    m_storageUnit = StorageUnitMapper::GetStorageUnitForName(jsonValue.GetString("StorageUnit"));
    m_storageUnitHasBeenSet = true;
  }
  return *this;
}

JsonValue TGWOnDeviceServiceConfiguration::Jsonize() const
{
  JsonValue payload;

  if(m_storageLimitHasBeenSet)
  {
   payload.WithInteger("StorageLimit", m_storageLimit);

  }

  if(m_storageUnitHasBeenSet)
  {
   payload.WithString("StorageUnit", StorageUnitMapper::GetNameForStorageUnit(m_storageUnit));
  }

  return payload;
}

} // namespace Model
} // namespace Snowball
} // namespace Aws
