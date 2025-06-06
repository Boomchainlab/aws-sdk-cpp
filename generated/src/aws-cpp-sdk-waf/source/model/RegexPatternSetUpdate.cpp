﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/waf/model/RegexPatternSetUpdate.h>
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

RegexPatternSetUpdate::RegexPatternSetUpdate(JsonView jsonValue)
{
  *this = jsonValue;
}

RegexPatternSetUpdate& RegexPatternSetUpdate::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Action"))
  {
    m_action = ChangeActionMapper::GetChangeActionForName(jsonValue.GetString("Action"));
    m_actionHasBeenSet = true;
  }
  if(jsonValue.ValueExists("RegexPatternString"))
  {
    m_regexPatternString = jsonValue.GetString("RegexPatternString");
    m_regexPatternStringHasBeenSet = true;
  }
  return *this;
}

JsonValue RegexPatternSetUpdate::Jsonize() const
{
  JsonValue payload;

  if(m_actionHasBeenSet)
  {
   payload.WithString("Action", ChangeActionMapper::GetNameForChangeAction(m_action));
  }

  if(m_regexPatternStringHasBeenSet)
  {
   payload.WithString("RegexPatternString", m_regexPatternString);

  }

  return payload;
}

} // namespace Model
} // namespace WAF
} // namespace Aws
