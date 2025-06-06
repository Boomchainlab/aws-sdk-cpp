﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/pca-connector-ad/model/ServicePrincipalName.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace PcaConnectorAd
{
namespace Model
{

ServicePrincipalName::ServicePrincipalName(JsonView jsonValue)
{
  *this = jsonValue;
}

ServicePrincipalName& ServicePrincipalName::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("ConnectorArn"))
  {
    m_connectorArn = jsonValue.GetString("ConnectorArn");
    m_connectorArnHasBeenSet = true;
  }
  if(jsonValue.ValueExists("CreatedAt"))
  {
    m_createdAt = jsonValue.GetDouble("CreatedAt");
    m_createdAtHasBeenSet = true;
  }
  if(jsonValue.ValueExists("DirectoryRegistrationArn"))
  {
    m_directoryRegistrationArn = jsonValue.GetString("DirectoryRegistrationArn");
    m_directoryRegistrationArnHasBeenSet = true;
  }
  if(jsonValue.ValueExists("Status"))
  {
    m_status = ServicePrincipalNameStatusMapper::GetServicePrincipalNameStatusForName(jsonValue.GetString("Status"));
    m_statusHasBeenSet = true;
  }
  if(jsonValue.ValueExists("StatusReason"))
  {
    m_statusReason = ServicePrincipalNameStatusReasonMapper::GetServicePrincipalNameStatusReasonForName(jsonValue.GetString("StatusReason"));
    m_statusReasonHasBeenSet = true;
  }
  if(jsonValue.ValueExists("UpdatedAt"))
  {
    m_updatedAt = jsonValue.GetDouble("UpdatedAt");
    m_updatedAtHasBeenSet = true;
  }
  return *this;
}

JsonValue ServicePrincipalName::Jsonize() const
{
  JsonValue payload;

  if(m_connectorArnHasBeenSet)
  {
   payload.WithString("ConnectorArn", m_connectorArn);

  }

  if(m_createdAtHasBeenSet)
  {
   payload.WithDouble("CreatedAt", m_createdAt.SecondsWithMSPrecision());
  }

  if(m_directoryRegistrationArnHasBeenSet)
  {
   payload.WithString("DirectoryRegistrationArn", m_directoryRegistrationArn);

  }

  if(m_statusHasBeenSet)
  {
   payload.WithString("Status", ServicePrincipalNameStatusMapper::GetNameForServicePrincipalNameStatus(m_status));
  }

  if(m_statusReasonHasBeenSet)
  {
   payload.WithString("StatusReason", ServicePrincipalNameStatusReasonMapper::GetNameForServicePrincipalNameStatusReason(m_statusReason));
  }

  if(m_updatedAtHasBeenSet)
  {
   payload.WithDouble("UpdatedAt", m_updatedAt.SecondsWithMSPrecision());
  }

  return payload;
}

} // namespace Model
} // namespace PcaConnectorAd
} // namespace Aws
