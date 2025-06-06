﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/qbusiness/model/DocumentAttributeTarget.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace QBusiness
{
namespace Model
{

DocumentAttributeTarget::DocumentAttributeTarget(JsonView jsonValue)
{
  *this = jsonValue;
}

DocumentAttributeTarget& DocumentAttributeTarget::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("key"))
  {
    m_key = jsonValue.GetString("key");
    m_keyHasBeenSet = true;
  }
  if(jsonValue.ValueExists("value"))
  {
    m_value = jsonValue.GetObject("value");
    m_valueHasBeenSet = true;
  }
  if(jsonValue.ValueExists("attributeValueOperator"))
  {
    m_attributeValueOperator = AttributeValueOperatorMapper::GetAttributeValueOperatorForName(jsonValue.GetString("attributeValueOperator"));
    m_attributeValueOperatorHasBeenSet = true;
  }
  return *this;
}

JsonValue DocumentAttributeTarget::Jsonize() const
{
  JsonValue payload;

  if(m_keyHasBeenSet)
  {
   payload.WithString("key", m_key);

  }

  if(m_valueHasBeenSet)
  {
   payload.WithObject("value", m_value.Jsonize());

  }

  if(m_attributeValueOperatorHasBeenSet)
  {
   payload.WithString("attributeValueOperator", AttributeValueOperatorMapper::GetNameForAttributeValueOperator(m_attributeValueOperator));
  }

  return payload;
}

} // namespace Model
} // namespace QBusiness
} // namespace Aws
