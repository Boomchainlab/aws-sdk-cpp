﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/waf-regional/model/XssMatchTuple.h>
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

XssMatchTuple::XssMatchTuple(JsonView jsonValue)
{
  *this = jsonValue;
}

XssMatchTuple& XssMatchTuple::operator =(JsonView jsonValue)
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

JsonValue XssMatchTuple::Jsonize() const
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
} // namespace WAFRegional
} // namespace Aws
