﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/imagebuilder/model/ComponentVersion.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace imagebuilder
{
namespace Model
{

ComponentVersion::ComponentVersion(JsonView jsonValue)
{
  *this = jsonValue;
}

ComponentVersion& ComponentVersion::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("arn"))
  {
    m_arn = jsonValue.GetString("arn");
    m_arnHasBeenSet = true;
  }
  if(jsonValue.ValueExists("name"))
  {
    m_name = jsonValue.GetString("name");
    m_nameHasBeenSet = true;
  }
  if(jsonValue.ValueExists("version"))
  {
    m_version = jsonValue.GetString("version");
    m_versionHasBeenSet = true;
  }
  if(jsonValue.ValueExists("description"))
  {
    m_description = jsonValue.GetString("description");
    m_descriptionHasBeenSet = true;
  }
  if(jsonValue.ValueExists("platform"))
  {
    m_platform = PlatformMapper::GetPlatformForName(jsonValue.GetString("platform"));
    m_platformHasBeenSet = true;
  }
  if(jsonValue.ValueExists("supportedOsVersions"))
  {
    Aws::Utils::Array<JsonView> supportedOsVersionsJsonList = jsonValue.GetArray("supportedOsVersions");
    for(unsigned supportedOsVersionsIndex = 0; supportedOsVersionsIndex < supportedOsVersionsJsonList.GetLength(); ++supportedOsVersionsIndex)
    {
      m_supportedOsVersions.push_back(supportedOsVersionsJsonList[supportedOsVersionsIndex].AsString());
    }
    m_supportedOsVersionsHasBeenSet = true;
  }
  if(jsonValue.ValueExists("type"))
  {
    m_type = ComponentTypeMapper::GetComponentTypeForName(jsonValue.GetString("type"));
    m_typeHasBeenSet = true;
  }
  if(jsonValue.ValueExists("owner"))
  {
    m_owner = jsonValue.GetString("owner");
    m_ownerHasBeenSet = true;
  }
  if(jsonValue.ValueExists("dateCreated"))
  {
    m_dateCreated = jsonValue.GetString("dateCreated");
    m_dateCreatedHasBeenSet = true;
  }
  if(jsonValue.ValueExists("status"))
  {
    m_status = ComponentStatusMapper::GetComponentStatusForName(jsonValue.GetString("status"));
    m_statusHasBeenSet = true;
  }
  if(jsonValue.ValueExists("productCodes"))
  {
    Aws::Utils::Array<JsonView> productCodesJsonList = jsonValue.GetArray("productCodes");
    for(unsigned productCodesIndex = 0; productCodesIndex < productCodesJsonList.GetLength(); ++productCodesIndex)
    {
      m_productCodes.push_back(productCodesJsonList[productCodesIndex].AsObject());
    }
    m_productCodesHasBeenSet = true;
  }
  return *this;
}

JsonValue ComponentVersion::Jsonize() const
{
  JsonValue payload;

  if(m_arnHasBeenSet)
  {
   payload.WithString("arn", m_arn);

  }

  if(m_nameHasBeenSet)
  {
   payload.WithString("name", m_name);

  }

  if(m_versionHasBeenSet)
  {
   payload.WithString("version", m_version);

  }

  if(m_descriptionHasBeenSet)
  {
   payload.WithString("description", m_description);

  }

  if(m_platformHasBeenSet)
  {
   payload.WithString("platform", PlatformMapper::GetNameForPlatform(m_platform));
  }

  if(m_supportedOsVersionsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> supportedOsVersionsJsonList(m_supportedOsVersions.size());
   for(unsigned supportedOsVersionsIndex = 0; supportedOsVersionsIndex < supportedOsVersionsJsonList.GetLength(); ++supportedOsVersionsIndex)
   {
     supportedOsVersionsJsonList[supportedOsVersionsIndex].AsString(m_supportedOsVersions[supportedOsVersionsIndex]);
   }
   payload.WithArray("supportedOsVersions", std::move(supportedOsVersionsJsonList));

  }

  if(m_typeHasBeenSet)
  {
   payload.WithString("type", ComponentTypeMapper::GetNameForComponentType(m_type));
  }

  if(m_ownerHasBeenSet)
  {
   payload.WithString("owner", m_owner);

  }

  if(m_dateCreatedHasBeenSet)
  {
   payload.WithString("dateCreated", m_dateCreated);

  }

  if(m_statusHasBeenSet)
  {
   payload.WithString("status", ComponentStatusMapper::GetNameForComponentStatus(m_status));
  }

  if(m_productCodesHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> productCodesJsonList(m_productCodes.size());
   for(unsigned productCodesIndex = 0; productCodesIndex < productCodesJsonList.GetLength(); ++productCodesIndex)
   {
     productCodesJsonList[productCodesIndex].AsObject(m_productCodes[productCodesIndex].Jsonize());
   }
   payload.WithArray("productCodes", std::move(productCodesJsonList));

  }

  return payload;
}

} // namespace Model
} // namespace imagebuilder
} // namespace Aws
