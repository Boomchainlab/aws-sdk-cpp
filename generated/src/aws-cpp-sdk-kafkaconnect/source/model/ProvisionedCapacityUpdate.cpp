﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/kafkaconnect/model/ProvisionedCapacityUpdate.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace KafkaConnect
{
namespace Model
{

ProvisionedCapacityUpdate::ProvisionedCapacityUpdate(JsonView jsonValue)
{
  *this = jsonValue;
}

ProvisionedCapacityUpdate& ProvisionedCapacityUpdate::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("mcuCount"))
  {
    m_mcuCount = jsonValue.GetInteger("mcuCount");
    m_mcuCountHasBeenSet = true;
  }
  if(jsonValue.ValueExists("workerCount"))
  {
    m_workerCount = jsonValue.GetInteger("workerCount");
    m_workerCountHasBeenSet = true;
  }
  return *this;
}

JsonValue ProvisionedCapacityUpdate::Jsonize() const
{
  JsonValue payload;

  if(m_mcuCountHasBeenSet)
  {
   payload.WithInteger("mcuCount", m_mcuCount);

  }

  if(m_workerCountHasBeenSet)
  {
   payload.WithInteger("workerCount", m_workerCount);

  }

  return payload;
}

} // namespace Model
} // namespace KafkaConnect
} // namespace Aws
