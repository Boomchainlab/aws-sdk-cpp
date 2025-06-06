﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/logs/model/SubstituteString.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace CloudWatchLogs
{
namespace Model
{

SubstituteString::SubstituteString(JsonView jsonValue)
{
  *this = jsonValue;
}

SubstituteString& SubstituteString::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("entries"))
  {
    Aws::Utils::Array<JsonView> entriesJsonList = jsonValue.GetArray("entries");
    for(unsigned entriesIndex = 0; entriesIndex < entriesJsonList.GetLength(); ++entriesIndex)
    {
      m_entries.push_back(entriesJsonList[entriesIndex].AsObject());
    }
    m_entriesHasBeenSet = true;
  }
  return *this;
}

JsonValue SubstituteString::Jsonize() const
{
  JsonValue payload;

  if(m_entriesHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> entriesJsonList(m_entries.size());
   for(unsigned entriesIndex = 0; entriesIndex < entriesJsonList.GetLength(); ++entriesIndex)
   {
     entriesJsonList[entriesIndex].AsObject(m_entries[entriesIndex].Jsonize());
   }
   payload.WithArray("entries", std::move(entriesJsonList));

  }

  return payload;
}

} // namespace Model
} // namespace CloudWatchLogs
} // namespace Aws
