﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/opsworks/model/RdsDbInstance.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace OpsWorks
{
namespace Model
{

RdsDbInstance::RdsDbInstance(JsonView jsonValue)
{
  *this = jsonValue;
}

RdsDbInstance& RdsDbInstance::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("RdsDbInstanceArn"))
  {
    m_rdsDbInstanceArn = jsonValue.GetString("RdsDbInstanceArn");
    m_rdsDbInstanceArnHasBeenSet = true;
  }
  if(jsonValue.ValueExists("DbInstanceIdentifier"))
  {
    m_dbInstanceIdentifier = jsonValue.GetString("DbInstanceIdentifier");
    m_dbInstanceIdentifierHasBeenSet = true;
  }
  if(jsonValue.ValueExists("DbUser"))
  {
    m_dbUser = jsonValue.GetString("DbUser");
    m_dbUserHasBeenSet = true;
  }
  if(jsonValue.ValueExists("DbPassword"))
  {
    m_dbPassword = jsonValue.GetString("DbPassword");
    m_dbPasswordHasBeenSet = true;
  }
  if(jsonValue.ValueExists("Region"))
  {
    m_region = jsonValue.GetString("Region");
    m_regionHasBeenSet = true;
  }
  if(jsonValue.ValueExists("Address"))
  {
    m_address = jsonValue.GetString("Address");
    m_addressHasBeenSet = true;
  }
  if(jsonValue.ValueExists("Engine"))
  {
    m_engine = jsonValue.GetString("Engine");
    m_engineHasBeenSet = true;
  }
  if(jsonValue.ValueExists("StackId"))
  {
    m_stackId = jsonValue.GetString("StackId");
    m_stackIdHasBeenSet = true;
  }
  if(jsonValue.ValueExists("MissingOnRds"))
  {
    m_missingOnRds = jsonValue.GetBool("MissingOnRds");
    m_missingOnRdsHasBeenSet = true;
  }
  return *this;
}

JsonValue RdsDbInstance::Jsonize() const
{
  JsonValue payload;

  if(m_rdsDbInstanceArnHasBeenSet)
  {
   payload.WithString("RdsDbInstanceArn", m_rdsDbInstanceArn);

  }

  if(m_dbInstanceIdentifierHasBeenSet)
  {
   payload.WithString("DbInstanceIdentifier", m_dbInstanceIdentifier);

  }

  if(m_dbUserHasBeenSet)
  {
   payload.WithString("DbUser", m_dbUser);

  }

  if(m_dbPasswordHasBeenSet)
  {
   payload.WithString("DbPassword", m_dbPassword);

  }

  if(m_regionHasBeenSet)
  {
   payload.WithString("Region", m_region);

  }

  if(m_addressHasBeenSet)
  {
   payload.WithString("Address", m_address);

  }

  if(m_engineHasBeenSet)
  {
   payload.WithString("Engine", m_engine);

  }

  if(m_stackIdHasBeenSet)
  {
   payload.WithString("StackId", m_stackId);

  }

  if(m_missingOnRdsHasBeenSet)
  {
   payload.WithBool("MissingOnRds", m_missingOnRds);

  }

  return payload;
}

} // namespace Model
} // namespace OpsWorks
} // namespace Aws
