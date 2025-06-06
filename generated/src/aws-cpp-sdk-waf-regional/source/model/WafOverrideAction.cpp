﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/waf-regional/model/WafOverrideAction.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace WAFRegional
{
namespace Model
{

WafOverrideAction::WafOverrideAction(JsonView jsonValue)
{
  *this = jsonValue;
}

WafOverrideAction& WafOverrideAction::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Type"))
  {
    m_type = WafOverrideActionTypeMapper::GetWafOverrideActionTypeForName(jsonValue.GetString("Type"));
    m_typeHasBeenSet = true;
  }
  return *this;
}

JsonValue WafOverrideAction::Jsonize() const
{
  JsonValue payload;

  if(m_typeHasBeenSet)
  {
   payload.WithString("Type", WafOverrideActionTypeMapper::GetNameForWafOverrideActionType(m_type));
  }

  return payload;
}

} // namespace Model
} // namespace WAFRegional
} // namespace Aws
