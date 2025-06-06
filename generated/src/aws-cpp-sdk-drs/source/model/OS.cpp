﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/drs/model/OS.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace drs
{
namespace Model
{

OS::OS(JsonView jsonValue)
{
  *this = jsonValue;
}

OS& OS::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("fullString"))
  {
    m_fullString = jsonValue.GetString("fullString");
    m_fullStringHasBeenSet = true;
  }
  return *this;
}

JsonValue OS::Jsonize() const
{
  JsonValue payload;

  if(m_fullStringHasBeenSet)
  {
   payload.WithString("fullString", m_fullString);

  }

  return payload;
}

} // namespace Model
} // namespace drs
} // namespace Aws
