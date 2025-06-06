﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/waf/model/GeoMatchSetUpdate.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace WAF
{
namespace Model
{

GeoMatchSetUpdate::GeoMatchSetUpdate(JsonView jsonValue)
{
  *this = jsonValue;
}

GeoMatchSetUpdate& GeoMatchSetUpdate::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Action"))
  {
    m_action = ChangeActionMapper::GetChangeActionForName(jsonValue.GetString("Action"));
    m_actionHasBeenSet = true;
  }
  if(jsonValue.ValueExists("GeoMatchConstraint"))
  {
    m_geoMatchConstraint = jsonValue.GetObject("GeoMatchConstraint");
    m_geoMatchConstraintHasBeenSet = true;
  }
  return *this;
}

JsonValue GeoMatchSetUpdate::Jsonize() const
{
  JsonValue payload;

  if(m_actionHasBeenSet)
  {
   payload.WithString("Action", ChangeActionMapper::GetNameForChangeAction(m_action));
  }

  if(m_geoMatchConstraintHasBeenSet)
  {
   payload.WithObject("GeoMatchConstraint", m_geoMatchConstraint.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace WAF
} // namespace Aws
