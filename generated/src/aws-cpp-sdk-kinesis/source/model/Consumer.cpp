﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/kinesis/model/Consumer.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace Kinesis
{
namespace Model
{

Consumer::Consumer(JsonView jsonValue)
{
  *this = jsonValue;
}

Consumer& Consumer::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("ConsumerName"))
  {
    m_consumerName = jsonValue.GetString("ConsumerName");
    m_consumerNameHasBeenSet = true;
  }
  if(jsonValue.ValueExists("ConsumerARN"))
  {
    m_consumerARN = jsonValue.GetString("ConsumerARN");
    m_consumerARNHasBeenSet = true;
  }
  if(jsonValue.ValueExists("ConsumerStatus"))
  {
    m_consumerStatus = ConsumerStatusMapper::GetConsumerStatusForName(jsonValue.GetString("ConsumerStatus"));
    m_consumerStatusHasBeenSet = true;
  }
  if(jsonValue.ValueExists("ConsumerCreationTimestamp"))
  {
    m_consumerCreationTimestamp = jsonValue.GetDouble("ConsumerCreationTimestamp");
    m_consumerCreationTimestampHasBeenSet = true;
  }
  return *this;
}

JsonValue Consumer::Jsonize() const
{
  JsonValue payload;

  if(m_consumerNameHasBeenSet)
  {
   payload.WithString("ConsumerName", m_consumerName);

  }

  if(m_consumerARNHasBeenSet)
  {
   payload.WithString("ConsumerARN", m_consumerARN);

  }

  if(m_consumerStatusHasBeenSet)
  {
   payload.WithString("ConsumerStatus", ConsumerStatusMapper::GetNameForConsumerStatus(m_consumerStatus));
  }

  if(m_consumerCreationTimestampHasBeenSet)
  {
   payload.WithDouble("ConsumerCreationTimestamp", m_consumerCreationTimestamp.SecondsWithMSPrecision());
  }

  return payload;
}

} // namespace Model
} // namespace Kinesis
} // namespace Aws
