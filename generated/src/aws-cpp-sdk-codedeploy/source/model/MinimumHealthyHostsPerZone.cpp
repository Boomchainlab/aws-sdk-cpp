﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/codedeploy/model/MinimumHealthyHostsPerZone.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace CodeDeploy
{
namespace Model
{

MinimumHealthyHostsPerZone::MinimumHealthyHostsPerZone(JsonView jsonValue)
{
  *this = jsonValue;
}

MinimumHealthyHostsPerZone& MinimumHealthyHostsPerZone::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("type"))
  {
    m_type = MinimumHealthyHostsPerZoneTypeMapper::GetMinimumHealthyHostsPerZoneTypeForName(jsonValue.GetString("type"));
    m_typeHasBeenSet = true;
  }
  if(jsonValue.ValueExists("value"))
  {
    m_value = jsonValue.GetInteger("value");
    m_valueHasBeenSet = true;
  }
  return *this;
}

JsonValue MinimumHealthyHostsPerZone::Jsonize() const
{
  JsonValue payload;

  if(m_typeHasBeenSet)
  {
   payload.WithString("type", MinimumHealthyHostsPerZoneTypeMapper::GetNameForMinimumHealthyHostsPerZoneType(m_type));
  }

  if(m_valueHasBeenSet)
  {
   payload.WithInteger("value", m_value);

  }

  return payload;
}

} // namespace Model
} // namespace CodeDeploy
} // namespace Aws
