﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/deadline/model/S3Location.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace deadline
{
namespace Model
{

S3Location::S3Location(JsonView jsonValue)
{
  *this = jsonValue;
}

S3Location& S3Location::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("bucketName"))
  {
    m_bucketName = jsonValue.GetString("bucketName");
    m_bucketNameHasBeenSet = true;
  }
  if(jsonValue.ValueExists("key"))
  {
    m_key = jsonValue.GetString("key");
    m_keyHasBeenSet = true;
  }
  return *this;
}

JsonValue S3Location::Jsonize() const
{
  JsonValue payload;

  if(m_bucketNameHasBeenSet)
  {
   payload.WithString("bucketName", m_bucketName);

  }

  if(m_keyHasBeenSet)
  {
   payload.WithString("key", m_key);

  }

  return payload;
}

} // namespace Model
} // namespace deadline
} // namespace Aws
