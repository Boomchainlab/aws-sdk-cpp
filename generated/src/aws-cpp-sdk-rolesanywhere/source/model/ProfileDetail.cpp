﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/rolesanywhere/model/ProfileDetail.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace RolesAnywhere
{
namespace Model
{

ProfileDetail::ProfileDetail(JsonView jsonValue)
{
  *this = jsonValue;
}

ProfileDetail& ProfileDetail::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("acceptRoleSessionName"))
  {
    m_acceptRoleSessionName = jsonValue.GetBool("acceptRoleSessionName");
    m_acceptRoleSessionNameHasBeenSet = true;
  }
  if(jsonValue.ValueExists("attributeMappings"))
  {
    Aws::Utils::Array<JsonView> attributeMappingsJsonList = jsonValue.GetArray("attributeMappings");
    for(unsigned attributeMappingsIndex = 0; attributeMappingsIndex < attributeMappingsJsonList.GetLength(); ++attributeMappingsIndex)
    {
      m_attributeMappings.push_back(attributeMappingsJsonList[attributeMappingsIndex].AsObject());
    }
    m_attributeMappingsHasBeenSet = true;
  }
  if(jsonValue.ValueExists("createdAt"))
  {
    m_createdAt = jsonValue.GetString("createdAt");
    m_createdAtHasBeenSet = true;
  }
  if(jsonValue.ValueExists("createdBy"))
  {
    m_createdBy = jsonValue.GetString("createdBy");
    m_createdByHasBeenSet = true;
  }
  if(jsonValue.ValueExists("durationSeconds"))
  {
    m_durationSeconds = jsonValue.GetInteger("durationSeconds");
    m_durationSecondsHasBeenSet = true;
  }
  if(jsonValue.ValueExists("enabled"))
  {
    m_enabled = jsonValue.GetBool("enabled");
    m_enabledHasBeenSet = true;
  }
  if(jsonValue.ValueExists("managedPolicyArns"))
  {
    Aws::Utils::Array<JsonView> managedPolicyArnsJsonList = jsonValue.GetArray("managedPolicyArns");
    for(unsigned managedPolicyArnsIndex = 0; managedPolicyArnsIndex < managedPolicyArnsJsonList.GetLength(); ++managedPolicyArnsIndex)
    {
      m_managedPolicyArns.push_back(managedPolicyArnsJsonList[managedPolicyArnsIndex].AsString());
    }
    m_managedPolicyArnsHasBeenSet = true;
  }
  if(jsonValue.ValueExists("name"))
  {
    m_name = jsonValue.GetString("name");
    m_nameHasBeenSet = true;
  }
  if(jsonValue.ValueExists("profileArn"))
  {
    m_profileArn = jsonValue.GetString("profileArn");
    m_profileArnHasBeenSet = true;
  }
  if(jsonValue.ValueExists("profileId"))
  {
    m_profileId = jsonValue.GetString("profileId");
    m_profileIdHasBeenSet = true;
  }
  if(jsonValue.ValueExists("requireInstanceProperties"))
  {
    m_requireInstanceProperties = jsonValue.GetBool("requireInstanceProperties");
    m_requireInstancePropertiesHasBeenSet = true;
  }
  if(jsonValue.ValueExists("roleArns"))
  {
    Aws::Utils::Array<JsonView> roleArnsJsonList = jsonValue.GetArray("roleArns");
    for(unsigned roleArnsIndex = 0; roleArnsIndex < roleArnsJsonList.GetLength(); ++roleArnsIndex)
    {
      m_roleArns.push_back(roleArnsJsonList[roleArnsIndex].AsString());
    }
    m_roleArnsHasBeenSet = true;
  }
  if(jsonValue.ValueExists("sessionPolicy"))
  {
    m_sessionPolicy = jsonValue.GetString("sessionPolicy");
    m_sessionPolicyHasBeenSet = true;
  }
  if(jsonValue.ValueExists("updatedAt"))
  {
    m_updatedAt = jsonValue.GetString("updatedAt");
    m_updatedAtHasBeenSet = true;
  }
  return *this;
}

JsonValue ProfileDetail::Jsonize() const
{
  JsonValue payload;

  if(m_acceptRoleSessionNameHasBeenSet)
  {
   payload.WithBool("acceptRoleSessionName", m_acceptRoleSessionName);

  }

  if(m_attributeMappingsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> attributeMappingsJsonList(m_attributeMappings.size());
   for(unsigned attributeMappingsIndex = 0; attributeMappingsIndex < attributeMappingsJsonList.GetLength(); ++attributeMappingsIndex)
   {
     attributeMappingsJsonList[attributeMappingsIndex].AsObject(m_attributeMappings[attributeMappingsIndex].Jsonize());
   }
   payload.WithArray("attributeMappings", std::move(attributeMappingsJsonList));

  }

  if(m_createdAtHasBeenSet)
  {
   payload.WithString("createdAt", m_createdAt.ToGmtString(Aws::Utils::DateFormat::ISO_8601));
  }

  if(m_createdByHasBeenSet)
  {
   payload.WithString("createdBy", m_createdBy);

  }

  if(m_durationSecondsHasBeenSet)
  {
   payload.WithInteger("durationSeconds", m_durationSeconds);

  }

  if(m_enabledHasBeenSet)
  {
   payload.WithBool("enabled", m_enabled);

  }

  if(m_managedPolicyArnsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> managedPolicyArnsJsonList(m_managedPolicyArns.size());
   for(unsigned managedPolicyArnsIndex = 0; managedPolicyArnsIndex < managedPolicyArnsJsonList.GetLength(); ++managedPolicyArnsIndex)
   {
     managedPolicyArnsJsonList[managedPolicyArnsIndex].AsString(m_managedPolicyArns[managedPolicyArnsIndex]);
   }
   payload.WithArray("managedPolicyArns", std::move(managedPolicyArnsJsonList));

  }

  if(m_nameHasBeenSet)
  {
   payload.WithString("name", m_name);

  }

  if(m_profileArnHasBeenSet)
  {
   payload.WithString("profileArn", m_profileArn);

  }

  if(m_profileIdHasBeenSet)
  {
   payload.WithString("profileId", m_profileId);

  }

  if(m_requireInstancePropertiesHasBeenSet)
  {
   payload.WithBool("requireInstanceProperties", m_requireInstanceProperties);

  }

  if(m_roleArnsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> roleArnsJsonList(m_roleArns.size());
   for(unsigned roleArnsIndex = 0; roleArnsIndex < roleArnsJsonList.GetLength(); ++roleArnsIndex)
   {
     roleArnsJsonList[roleArnsIndex].AsString(m_roleArns[roleArnsIndex]);
   }
   payload.WithArray("roleArns", std::move(roleArnsJsonList));

  }

  if(m_sessionPolicyHasBeenSet)
  {
   payload.WithString("sessionPolicy", m_sessionPolicy);

  }

  if(m_updatedAtHasBeenSet)
  {
   payload.WithString("updatedAt", m_updatedAt.ToGmtString(Aws::Utils::DateFormat::ISO_8601));
  }

  return payload;
}

} // namespace Model
} // namespace RolesAnywhere
} // namespace Aws
