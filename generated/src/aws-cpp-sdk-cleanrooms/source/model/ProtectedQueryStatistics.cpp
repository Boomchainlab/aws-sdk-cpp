﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/cleanrooms/model/ProtectedQueryStatistics.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace CleanRooms
{
namespace Model
{

ProtectedQueryStatistics::ProtectedQueryStatistics(JsonView jsonValue)
{
  *this = jsonValue;
}

ProtectedQueryStatistics& ProtectedQueryStatistics::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("totalDurationInMillis"))
  {
    m_totalDurationInMillis = jsonValue.GetInt64("totalDurationInMillis");
    m_totalDurationInMillisHasBeenSet = true;
  }
  if(jsonValue.ValueExists("billedResourceUtilization"))
  {
    m_billedResourceUtilization = jsonValue.GetObject("billedResourceUtilization");
    m_billedResourceUtilizationHasBeenSet = true;
  }
  return *this;
}

JsonValue ProtectedQueryStatistics::Jsonize() const
{
  JsonValue payload;

  if(m_totalDurationInMillisHasBeenSet)
  {
   payload.WithInt64("totalDurationInMillis", m_totalDurationInMillis);

  }

  if(m_billedResourceUtilizationHasBeenSet)
  {
   payload.WithObject("billedResourceUtilization", m_billedResourceUtilization.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace CleanRooms
} // namespace Aws
