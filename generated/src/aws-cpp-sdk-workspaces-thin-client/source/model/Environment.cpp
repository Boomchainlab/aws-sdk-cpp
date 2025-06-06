﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/workspaces-thin-client/model/Environment.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace WorkSpacesThinClient
{
namespace Model
{

Environment::Environment(JsonView jsonValue)
{
  *this = jsonValue;
}

Environment& Environment::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("id"))
  {
    m_id = jsonValue.GetString("id");
    m_idHasBeenSet = true;
  }
  if(jsonValue.ValueExists("name"))
  {
    m_name = jsonValue.GetString("name");
    m_nameHasBeenSet = true;
  }
  if(jsonValue.ValueExists("desktopArn"))
  {
    m_desktopArn = jsonValue.GetString("desktopArn");
    m_desktopArnHasBeenSet = true;
  }
  if(jsonValue.ValueExists("desktopEndpoint"))
  {
    m_desktopEndpoint = jsonValue.GetString("desktopEndpoint");
    m_desktopEndpointHasBeenSet = true;
  }
  if(jsonValue.ValueExists("desktopType"))
  {
    m_desktopType = DesktopTypeMapper::GetDesktopTypeForName(jsonValue.GetString("desktopType"));
    m_desktopTypeHasBeenSet = true;
  }
  if(jsonValue.ValueExists("activationCode"))
  {
    m_activationCode = jsonValue.GetString("activationCode");
    m_activationCodeHasBeenSet = true;
  }
  if(jsonValue.ValueExists("registeredDevicesCount"))
  {
    m_registeredDevicesCount = jsonValue.GetInteger("registeredDevicesCount");
    m_registeredDevicesCountHasBeenSet = true;
  }
  if(jsonValue.ValueExists("softwareSetUpdateSchedule"))
  {
    m_softwareSetUpdateSchedule = SoftwareSetUpdateScheduleMapper::GetSoftwareSetUpdateScheduleForName(jsonValue.GetString("softwareSetUpdateSchedule"));
    m_softwareSetUpdateScheduleHasBeenSet = true;
  }
  if(jsonValue.ValueExists("maintenanceWindow"))
  {
    m_maintenanceWindow = jsonValue.GetObject("maintenanceWindow");
    m_maintenanceWindowHasBeenSet = true;
  }
  if(jsonValue.ValueExists("softwareSetUpdateMode"))
  {
    m_softwareSetUpdateMode = SoftwareSetUpdateModeMapper::GetSoftwareSetUpdateModeForName(jsonValue.GetString("softwareSetUpdateMode"));
    m_softwareSetUpdateModeHasBeenSet = true;
  }
  if(jsonValue.ValueExists("desiredSoftwareSetId"))
  {
    m_desiredSoftwareSetId = jsonValue.GetString("desiredSoftwareSetId");
    m_desiredSoftwareSetIdHasBeenSet = true;
  }
  if(jsonValue.ValueExists("pendingSoftwareSetId"))
  {
    m_pendingSoftwareSetId = jsonValue.GetString("pendingSoftwareSetId");
    m_pendingSoftwareSetIdHasBeenSet = true;
  }
  if(jsonValue.ValueExists("pendingSoftwareSetVersion"))
  {
    m_pendingSoftwareSetVersion = jsonValue.GetString("pendingSoftwareSetVersion");
    m_pendingSoftwareSetVersionHasBeenSet = true;
  }
  if(jsonValue.ValueExists("softwareSetComplianceStatus"))
  {
    m_softwareSetComplianceStatus = EnvironmentSoftwareSetComplianceStatusMapper::GetEnvironmentSoftwareSetComplianceStatusForName(jsonValue.GetString("softwareSetComplianceStatus"));
    m_softwareSetComplianceStatusHasBeenSet = true;
  }
  if(jsonValue.ValueExists("createdAt"))
  {
    m_createdAt = jsonValue.GetDouble("createdAt");
    m_createdAtHasBeenSet = true;
  }
  if(jsonValue.ValueExists("updatedAt"))
  {
    m_updatedAt = jsonValue.GetDouble("updatedAt");
    m_updatedAtHasBeenSet = true;
  }
  if(jsonValue.ValueExists("arn"))
  {
    m_arn = jsonValue.GetString("arn");
    m_arnHasBeenSet = true;
  }
  if(jsonValue.ValueExists("kmsKeyArn"))
  {
    m_kmsKeyArn = jsonValue.GetString("kmsKeyArn");
    m_kmsKeyArnHasBeenSet = true;
  }
  if(jsonValue.ValueExists("deviceCreationTags"))
  {
    Aws::Map<Aws::String, JsonView> deviceCreationTagsJsonMap = jsonValue.GetObject("deviceCreationTags").GetAllObjects();
    for(auto& deviceCreationTagsItem : deviceCreationTagsJsonMap)
    {
      m_deviceCreationTags[deviceCreationTagsItem.first] = deviceCreationTagsItem.second.AsString();
    }
    m_deviceCreationTagsHasBeenSet = true;
  }
  return *this;
}

JsonValue Environment::Jsonize() const
{
  JsonValue payload;

  if(m_idHasBeenSet)
  {
   payload.WithString("id", m_id);

  }

  if(m_nameHasBeenSet)
  {
   payload.WithString("name", m_name);

  }

  if(m_desktopArnHasBeenSet)
  {
   payload.WithString("desktopArn", m_desktopArn);

  }

  if(m_desktopEndpointHasBeenSet)
  {
   payload.WithString("desktopEndpoint", m_desktopEndpoint);

  }

  if(m_desktopTypeHasBeenSet)
  {
   payload.WithString("desktopType", DesktopTypeMapper::GetNameForDesktopType(m_desktopType));
  }

  if(m_activationCodeHasBeenSet)
  {
   payload.WithString("activationCode", m_activationCode);

  }

  if(m_registeredDevicesCountHasBeenSet)
  {
   payload.WithInteger("registeredDevicesCount", m_registeredDevicesCount);

  }

  if(m_softwareSetUpdateScheduleHasBeenSet)
  {
   payload.WithString("softwareSetUpdateSchedule", SoftwareSetUpdateScheduleMapper::GetNameForSoftwareSetUpdateSchedule(m_softwareSetUpdateSchedule));
  }

  if(m_maintenanceWindowHasBeenSet)
  {
   payload.WithObject("maintenanceWindow", m_maintenanceWindow.Jsonize());

  }

  if(m_softwareSetUpdateModeHasBeenSet)
  {
   payload.WithString("softwareSetUpdateMode", SoftwareSetUpdateModeMapper::GetNameForSoftwareSetUpdateMode(m_softwareSetUpdateMode));
  }

  if(m_desiredSoftwareSetIdHasBeenSet)
  {
   payload.WithString("desiredSoftwareSetId", m_desiredSoftwareSetId);

  }

  if(m_pendingSoftwareSetIdHasBeenSet)
  {
   payload.WithString("pendingSoftwareSetId", m_pendingSoftwareSetId);

  }

  if(m_pendingSoftwareSetVersionHasBeenSet)
  {
   payload.WithString("pendingSoftwareSetVersion", m_pendingSoftwareSetVersion);

  }

  if(m_softwareSetComplianceStatusHasBeenSet)
  {
   payload.WithString("softwareSetComplianceStatus", EnvironmentSoftwareSetComplianceStatusMapper::GetNameForEnvironmentSoftwareSetComplianceStatus(m_softwareSetComplianceStatus));
  }

  if(m_createdAtHasBeenSet)
  {
   payload.WithDouble("createdAt", m_createdAt.SecondsWithMSPrecision());
  }

  if(m_updatedAtHasBeenSet)
  {
   payload.WithDouble("updatedAt", m_updatedAt.SecondsWithMSPrecision());
  }

  if(m_arnHasBeenSet)
  {
   payload.WithString("arn", m_arn);

  }

  if(m_kmsKeyArnHasBeenSet)
  {
   payload.WithString("kmsKeyArn", m_kmsKeyArn);

  }

  if(m_deviceCreationTagsHasBeenSet)
  {
   JsonValue deviceCreationTagsJsonMap;
   for(auto& deviceCreationTagsItem : m_deviceCreationTags)
   {
     deviceCreationTagsJsonMap.WithString(deviceCreationTagsItem.first, deviceCreationTagsItem.second);
   }
   payload.WithObject("deviceCreationTags", std::move(deviceCreationTagsJsonMap));

  }

  return payload;
}

} // namespace Model
} // namespace WorkSpacesThinClient
} // namespace Aws
