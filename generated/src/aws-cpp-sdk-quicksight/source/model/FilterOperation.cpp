﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/quicksight/model/FilterOperation.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace QuickSight
{
namespace Model
{

FilterOperation::FilterOperation(JsonView jsonValue)
{
  *this = jsonValue;
}

FilterOperation& FilterOperation::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("ConditionExpression"))
  {
    m_conditionExpression = jsonValue.GetString("ConditionExpression");
    m_conditionExpressionHasBeenSet = true;
  }
  return *this;
}

JsonValue FilterOperation::Jsonize() const
{
  JsonValue payload;

  if(m_conditionExpressionHasBeenSet)
  {
   payload.WithString("ConditionExpression", m_conditionExpression);

  }

  return payload;
}

} // namespace Model
} // namespace QuickSight
} // namespace Aws
