﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/bedrock-agent/model/APISchema.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace BedrockAgent
{
namespace Model
{

APISchema::APISchema(JsonView jsonValue)
{
  *this = jsonValue;
}

APISchema& APISchema::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("payload"))
  {
    m_payload = jsonValue.GetString("payload");
    m_payloadHasBeenSet = true;
  }
  if(jsonValue.ValueExists("s3"))
  {
    m_s3 = jsonValue.GetObject("s3");
    m_s3HasBeenSet = true;
  }
  return *this;
}

JsonValue APISchema::Jsonize() const
{
  JsonValue payload;

  if(m_payloadHasBeenSet)
  {
   payload.WithString("payload", m_payload);

  }

  if(m_s3HasBeenSet)
  {
   payload.WithObject("s3", m_s3.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace BedrockAgent
} // namespace Aws
