﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/dms/model/Subnet.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace DatabaseMigrationService
{
namespace Model
{

Subnet::Subnet(JsonView jsonValue)
{
  *this = jsonValue;
}

Subnet& Subnet::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("SubnetIdentifier"))
  {
    m_subnetIdentifier = jsonValue.GetString("SubnetIdentifier");
    m_subnetIdentifierHasBeenSet = true;
  }
  if(jsonValue.ValueExists("SubnetAvailabilityZone"))
  {
    m_subnetAvailabilityZone = jsonValue.GetObject("SubnetAvailabilityZone");
    m_subnetAvailabilityZoneHasBeenSet = true;
  }
  if(jsonValue.ValueExists("SubnetStatus"))
  {
    m_subnetStatus = jsonValue.GetString("SubnetStatus");
    m_subnetStatusHasBeenSet = true;
  }
  return *this;
}

JsonValue Subnet::Jsonize() const
{
  JsonValue payload;

  if(m_subnetIdentifierHasBeenSet)
  {
   payload.WithString("SubnetIdentifier", m_subnetIdentifier);

  }

  if(m_subnetAvailabilityZoneHasBeenSet)
  {
   payload.WithObject("SubnetAvailabilityZone", m_subnetAvailabilityZone.Jsonize());

  }

  if(m_subnetStatusHasBeenSet)
  {
   payload.WithString("SubnetStatus", m_subnetStatus);

  }

  return payload;
}

} // namespace Model
} // namespace DatabaseMigrationService
} // namespace Aws
