﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/lightsail/model/Origin.h>
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

Origin::Origin(JsonView jsonValue)
{
  *this = jsonValue;
}

Origin& Origin::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("name"))
  {
    m_name = jsonValue.GetString("name");
    m_nameHasBeenSet = true;
  }
  if(jsonValue.ValueExists("resourceType"))
  {
    m_resourceType = ResourceTypeMapper::GetResourceTypeForName(jsonValue.GetString("resourceType"));
    m_resourceTypeHasBeenSet = true;
  }
  if(jsonValue.ValueExists("regionName"))
  {
    m_regionName = RegionNameMapper::GetRegionNameForName(jsonValue.GetString("regionName"));
    m_regionNameHasBeenSet = true;
  }
  if(jsonValue.ValueExists("protocolPolicy"))
  {
    m_protocolPolicy = OriginProtocolPolicyEnumMapper::GetOriginProtocolPolicyEnumForName(jsonValue.GetString("protocolPolicy"));
    m_protocolPolicyHasBeenSet = true;
  }
  if(jsonValue.ValueExists("responseTimeout"))
  {
    m_responseTimeout = jsonValue.GetInteger("responseTimeout");
    m_responseTimeoutHasBeenSet = true;
  }
  return *this;
}

JsonValue Origin::Jsonize() const
{
  JsonValue payload;

  if(m_nameHasBeenSet)
  {
   payload.WithString("name", m_name);

  }

  if(m_resourceTypeHasBeenSet)
  {
   payload.WithString("resourceType", ResourceTypeMapper::GetNameForResourceType(m_resourceType));
  }

  if(m_regionNameHasBeenSet)
  {
   payload.WithString("regionName", RegionNameMapper::GetNameForRegionName(m_regionName));
  }

  if(m_protocolPolicyHasBeenSet)
  {
   payload.WithString("protocolPolicy", OriginProtocolPolicyEnumMapper::GetNameForOriginProtocolPolicyEnum(m_protocolPolicy));
  }

  if(m_responseTimeoutHasBeenSet)
  {
   payload.WithInteger("responseTimeout", m_responseTimeout);

  }

  return payload;
}

} // namespace Model
} // namespace Lightsail
} // namespace Aws
