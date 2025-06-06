﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/kendra/model/AttributeSuggestionsUpdateConfig.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace kendra
{
namespace Model
{

AttributeSuggestionsUpdateConfig::AttributeSuggestionsUpdateConfig(JsonView jsonValue)
{
  *this = jsonValue;
}

AttributeSuggestionsUpdateConfig& AttributeSuggestionsUpdateConfig::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("SuggestableConfigList"))
  {
    Aws::Utils::Array<JsonView> suggestableConfigListJsonList = jsonValue.GetArray("SuggestableConfigList");
    for(unsigned suggestableConfigListIndex = 0; suggestableConfigListIndex < suggestableConfigListJsonList.GetLength(); ++suggestableConfigListIndex)
    {
      m_suggestableConfigList.push_back(suggestableConfigListJsonList[suggestableConfigListIndex].AsObject());
    }
    m_suggestableConfigListHasBeenSet = true;
  }
  if(jsonValue.ValueExists("AttributeSuggestionsMode"))
  {
    m_attributeSuggestionsMode = AttributeSuggestionsModeMapper::GetAttributeSuggestionsModeForName(jsonValue.GetString("AttributeSuggestionsMode"));
    m_attributeSuggestionsModeHasBeenSet = true;
  }
  return *this;
}

JsonValue AttributeSuggestionsUpdateConfig::Jsonize() const
{
  JsonValue payload;

  if(m_suggestableConfigListHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> suggestableConfigListJsonList(m_suggestableConfigList.size());
   for(unsigned suggestableConfigListIndex = 0; suggestableConfigListIndex < suggestableConfigListJsonList.GetLength(); ++suggestableConfigListIndex)
   {
     suggestableConfigListJsonList[suggestableConfigListIndex].AsObject(m_suggestableConfigList[suggestableConfigListIndex].Jsonize());
   }
   payload.WithArray("SuggestableConfigList", std::move(suggestableConfigListJsonList));

  }

  if(m_attributeSuggestionsModeHasBeenSet)
  {
   payload.WithString("AttributeSuggestionsMode", AttributeSuggestionsModeMapper::GetNameForAttributeSuggestionsMode(m_attributeSuggestionsMode));
  }

  return payload;
}

} // namespace Model
} // namespace kendra
} // namespace Aws
