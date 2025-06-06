﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/sesv2/model/Body.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace SESV2
{
namespace Model
{

Body::Body(JsonView jsonValue)
{
  *this = jsonValue;
}

Body& Body::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Text"))
  {
    m_text = jsonValue.GetObject("Text");
    m_textHasBeenSet = true;
  }
  if(jsonValue.ValueExists("Html"))
  {
    m_html = jsonValue.GetObject("Html");
    m_htmlHasBeenSet = true;
  }
  return *this;
}

JsonValue Body::Jsonize() const
{
  JsonValue payload;

  if(m_textHasBeenSet)
  {
   payload.WithObject("Text", m_text.Jsonize());

  }

  if(m_htmlHasBeenSet)
  {
   payload.WithObject("Html", m_html.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace SESV2
} // namespace Aws
