﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/machinelearning/model/RDSDataSpec.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace MachineLearning
{
namespace Model
{

RDSDataSpec::RDSDataSpec(JsonView jsonValue)
{
  *this = jsonValue;
}

RDSDataSpec& RDSDataSpec::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("DatabaseInformation"))
  {
    m_databaseInformation = jsonValue.GetObject("DatabaseInformation");
    m_databaseInformationHasBeenSet = true;
  }
  if(jsonValue.ValueExists("SelectSqlQuery"))
  {
    m_selectSqlQuery = jsonValue.GetString("SelectSqlQuery");
    m_selectSqlQueryHasBeenSet = true;
  }
  if(jsonValue.ValueExists("DatabaseCredentials"))
  {
    m_databaseCredentials = jsonValue.GetObject("DatabaseCredentials");
    m_databaseCredentialsHasBeenSet = true;
  }
  if(jsonValue.ValueExists("S3StagingLocation"))
  {
    m_s3StagingLocation = jsonValue.GetString("S3StagingLocation");
    m_s3StagingLocationHasBeenSet = true;
  }
  if(jsonValue.ValueExists("DataRearrangement"))
  {
    m_dataRearrangement = jsonValue.GetString("DataRearrangement");
    m_dataRearrangementHasBeenSet = true;
  }
  if(jsonValue.ValueExists("DataSchema"))
  {
    m_dataSchema = jsonValue.GetString("DataSchema");
    m_dataSchemaHasBeenSet = true;
  }
  if(jsonValue.ValueExists("DataSchemaUri"))
  {
    m_dataSchemaUri = jsonValue.GetString("DataSchemaUri");
    m_dataSchemaUriHasBeenSet = true;
  }
  if(jsonValue.ValueExists("ResourceRole"))
  {
    m_resourceRole = jsonValue.GetString("ResourceRole");
    m_resourceRoleHasBeenSet = true;
  }
  if(jsonValue.ValueExists("ServiceRole"))
  {
    m_serviceRole = jsonValue.GetString("ServiceRole");
    m_serviceRoleHasBeenSet = true;
  }
  if(jsonValue.ValueExists("SubnetId"))
  {
    m_subnetId = jsonValue.GetString("SubnetId");
    m_subnetIdHasBeenSet = true;
  }
  if(jsonValue.ValueExists("SecurityGroupIds"))
  {
    Aws::Utils::Array<JsonView> securityGroupIdsJsonList = jsonValue.GetArray("SecurityGroupIds");
    for(unsigned securityGroupIdsIndex = 0; securityGroupIdsIndex < securityGroupIdsJsonList.GetLength(); ++securityGroupIdsIndex)
    {
      m_securityGroupIds.push_back(securityGroupIdsJsonList[securityGroupIdsIndex].AsString());
    }
    m_securityGroupIdsHasBeenSet = true;
  }
  return *this;
}

JsonValue RDSDataSpec::Jsonize() const
{
  JsonValue payload;

  if(m_databaseInformationHasBeenSet)
  {
   payload.WithObject("DatabaseInformation", m_databaseInformation.Jsonize());

  }

  if(m_selectSqlQueryHasBeenSet)
  {
   payload.WithString("SelectSqlQuery", m_selectSqlQuery);

  }

  if(m_databaseCredentialsHasBeenSet)
  {
   payload.WithObject("DatabaseCredentials", m_databaseCredentials.Jsonize());

  }

  if(m_s3StagingLocationHasBeenSet)
  {
   payload.WithString("S3StagingLocation", m_s3StagingLocation);

  }

  if(m_dataRearrangementHasBeenSet)
  {
   payload.WithString("DataRearrangement", m_dataRearrangement);

  }

  if(m_dataSchemaHasBeenSet)
  {
   payload.WithString("DataSchema", m_dataSchema);

  }

  if(m_dataSchemaUriHasBeenSet)
  {
   payload.WithString("DataSchemaUri", m_dataSchemaUri);

  }

  if(m_resourceRoleHasBeenSet)
  {
   payload.WithString("ResourceRole", m_resourceRole);

  }

  if(m_serviceRoleHasBeenSet)
  {
   payload.WithString("ServiceRole", m_serviceRole);

  }

  if(m_subnetIdHasBeenSet)
  {
   payload.WithString("SubnetId", m_subnetId);

  }

  if(m_securityGroupIdsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> securityGroupIdsJsonList(m_securityGroupIds.size());
   for(unsigned securityGroupIdsIndex = 0; securityGroupIdsIndex < securityGroupIdsJsonList.GetLength(); ++securityGroupIdsIndex)
   {
     securityGroupIdsJsonList[securityGroupIdsIndex].AsString(m_securityGroupIds[securityGroupIdsIndex]);
   }
   payload.WithArray("SecurityGroupIds", std::move(securityGroupIdsJsonList));

  }

  return payload;
}

} // namespace Model
} // namespace MachineLearning
} // namespace Aws
