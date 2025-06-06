﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/connect/model/EndpointInfo.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace Connect
{
namespace Model
{

EndpointInfo::EndpointInfo(JsonView jsonValue)
{
  *this = jsonValue;
}

EndpointInfo& EndpointInfo::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Type"))
  {
    m_type = EndpointTypeMapper::GetEndpointTypeForName(jsonValue.GetString("Type"));
    m_typeHasBeenSet = true;
  }
  if(jsonValue.ValueExists("Address"))
  {
    m_address = jsonValue.GetString("Address");
    m_addressHasBeenSet = true;
  }
  if(jsonValue.ValueExists("DisplayName"))
  {
    m_displayName = jsonValue.GetString("DisplayName");
    m_displayNameHasBeenSet = true;
  }
  return *this;
}

JsonValue EndpointInfo::Jsonize() const
{
  JsonValue payload;

  if(m_typeHasBeenSet)
  {
   payload.WithString("Type", EndpointTypeMapper::GetNameForEndpointType(m_type));
  }

  if(m_addressHasBeenSet)
  {
   payload.WithString("Address", m_address);

  }

  if(m_displayNameHasBeenSet)
  {
   payload.WithString("DisplayName", m_displayName);

  }

  return payload;
}

} // namespace Model
} // namespace Connect
} // namespace Aws
