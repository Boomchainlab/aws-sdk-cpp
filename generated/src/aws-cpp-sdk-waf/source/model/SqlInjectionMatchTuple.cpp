﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/waf/model/SqlInjectionMatchTuple.h>
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

SqlInjectionMatchTuple::SqlInjectionMatchTuple(JsonView jsonValue)
{
  *this = jsonValue;
}

SqlInjectionMatchTuple& SqlInjectionMatchTuple::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("FieldToMatch"))
  {
    m_fieldToMatch = jsonValue.GetObject("FieldToMatch");
    m_fieldToMatchHasBeenSet = true;
  }
  if(jsonValue.ValueExists("TextTransformation"))
  {
    m_textTransformation = TextTransformationMapper::GetTextTransformationForName(jsonValue.GetString("TextTransformation"));
    m_textTransformationHasBeenSet = true;
  }
  return *this;
}

JsonValue SqlInjectionMatchTuple::Jsonize() const
{
  JsonValue payload;

  if(m_fieldToMatchHasBeenSet)
  {
   payload.WithObject("FieldToMatch", m_fieldToMatch.Jsonize());

  }

  if(m_textTransformationHasBeenSet)
  {
   payload.WithString("TextTransformation", TextTransformationMapper::GetNameForTextTransformation(m_textTransformation));
  }

  return payload;
}

} // namespace Model
} // namespace WAF
} // namespace Aws
