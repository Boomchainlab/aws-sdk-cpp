﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/cleanroomsml/model/Destination.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace CleanRoomsML
{
namespace Model
{

Destination::Destination(JsonView jsonValue)
{
  *this = jsonValue;
}

Destination& Destination::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("s3Destination"))
  {
    m_s3Destination = jsonValue.GetObject("s3Destination");
    m_s3DestinationHasBeenSet = true;
  }
  return *this;
}

JsonValue Destination::Jsonize() const
{
  JsonValue payload;

  if(m_s3DestinationHasBeenSet)
  {
   payload.WithObject("s3Destination", m_s3Destination.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace CleanRoomsML
} // namespace Aws
