﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/iotfleetwise/model/Branch.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace IoTFleetWise
{
namespace Model
{

Branch::Branch(JsonView jsonValue)
{
  *this = jsonValue;
}

Branch& Branch::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("fullyQualifiedName"))
  {
    m_fullyQualifiedName = jsonValue.GetString("fullyQualifiedName");
    m_fullyQualifiedNameHasBeenSet = true;
  }
  if(jsonValue.ValueExists("description"))
  {
    m_description = jsonValue.GetString("description");
    m_descriptionHasBeenSet = true;
  }
  if(jsonValue.ValueExists("deprecationMessage"))
  {
    m_deprecationMessage = jsonValue.GetString("deprecationMessage");
    m_deprecationMessageHasBeenSet = true;
  }
  if(jsonValue.ValueExists("comment"))
  {
    m_comment = jsonValue.GetString("comment");
    m_commentHasBeenSet = true;
  }
  return *this;
}

JsonValue Branch::Jsonize() const
{
  JsonValue payload;

  if(m_fullyQualifiedNameHasBeenSet)
  {
   payload.WithString("fullyQualifiedName", m_fullyQualifiedName);

  }

  if(m_descriptionHasBeenSet)
  {
   payload.WithString("description", m_description);

  }

  if(m_deprecationMessageHasBeenSet)
  {
   payload.WithString("deprecationMessage", m_deprecationMessage);

  }

  if(m_commentHasBeenSet)
  {
   payload.WithString("comment", m_comment);

  }

  return payload;
}

} // namespace Model
} // namespace IoTFleetWise
} // namespace Aws
