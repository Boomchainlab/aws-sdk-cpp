﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/cleanrooms/model/PrivacyBudgetTemplateParametersInput.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace CleanRooms
{
namespace Model
{

PrivacyBudgetTemplateParametersInput::PrivacyBudgetTemplateParametersInput(JsonView jsonValue)
{
  *this = jsonValue;
}

PrivacyBudgetTemplateParametersInput& PrivacyBudgetTemplateParametersInput::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("differentialPrivacy"))
  {
    m_differentialPrivacy = jsonValue.GetObject("differentialPrivacy");
    m_differentialPrivacyHasBeenSet = true;
  }
  return *this;
}

JsonValue PrivacyBudgetTemplateParametersInput::Jsonize() const
{
  JsonValue payload;

  if(m_differentialPrivacyHasBeenSet)
  {
   payload.WithObject("differentialPrivacy", m_differentialPrivacy.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace CleanRooms
} // namespace Aws
