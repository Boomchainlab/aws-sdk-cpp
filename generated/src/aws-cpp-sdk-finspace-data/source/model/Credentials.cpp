﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/finspace-data/model/Credentials.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace FinSpaceData
{
namespace Model
{

Credentials::Credentials(JsonView jsonValue)
{
  *this = jsonValue;
}

Credentials& Credentials::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("accessKeyId"))
  {
    m_accessKeyId = jsonValue.GetString("accessKeyId");
    m_accessKeyIdHasBeenSet = true;
  }
  if(jsonValue.ValueExists("secretAccessKey"))
  {
    m_secretAccessKey = jsonValue.GetString("secretAccessKey");
    m_secretAccessKeyHasBeenSet = true;
  }
  if(jsonValue.ValueExists("sessionToken"))
  {
    m_sessionToken = jsonValue.GetString("sessionToken");
    m_sessionTokenHasBeenSet = true;
  }
  return *this;
}

JsonValue Credentials::Jsonize() const
{
  JsonValue payload;

  if(m_accessKeyIdHasBeenSet)
  {
   payload.WithString("accessKeyId", m_accessKeyId);

  }

  if(m_secretAccessKeyHasBeenSet)
  {
   payload.WithString("secretAccessKey", m_secretAccessKey);

  }

  if(m_sessionTokenHasBeenSet)
  {
   payload.WithString("sessionToken", m_sessionToken);

  }

  return payload;
}

} // namespace Model
} // namespace FinSpaceData
} // namespace Aws
