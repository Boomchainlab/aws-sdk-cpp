﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/pinpoint/model/JourneysResponse.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace Pinpoint
{
namespace Model
{

JourneysResponse::JourneysResponse(JsonView jsonValue)
{
  *this = jsonValue;
}

JourneysResponse& JourneysResponse::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Item"))
  {
    Aws::Utils::Array<JsonView> itemJsonList = jsonValue.GetArray("Item");
    for(unsigned itemIndex = 0; itemIndex < itemJsonList.GetLength(); ++itemIndex)
    {
      m_item.push_back(itemJsonList[itemIndex].AsObject());
    }
    m_itemHasBeenSet = true;
  }
  if(jsonValue.ValueExists("NextToken"))
  {
    m_nextToken = jsonValue.GetString("NextToken");
    m_nextTokenHasBeenSet = true;
  }
  return *this;
}

JsonValue JourneysResponse::Jsonize() const
{
  JsonValue payload;

  if(m_itemHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> itemJsonList(m_item.size());
   for(unsigned itemIndex = 0; itemIndex < itemJsonList.GetLength(); ++itemIndex)
   {
     itemJsonList[itemIndex].AsObject(m_item[itemIndex].Jsonize());
   }
   payload.WithArray("Item", std::move(itemJsonList));

  }

  if(m_nextTokenHasBeenSet)
  {
   payload.WithString("NextToken", m_nextToken);

  }

  return payload;
}

} // namespace Model
} // namespace Pinpoint
} // namespace Aws
