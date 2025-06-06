﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/textract/model/HumanLoopActivationOutput.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace Textract
{
namespace Model
{

HumanLoopActivationOutput::HumanLoopActivationOutput(JsonView jsonValue)
{
  *this = jsonValue;
}

HumanLoopActivationOutput& HumanLoopActivationOutput::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("HumanLoopArn"))
  {
    m_humanLoopArn = jsonValue.GetString("HumanLoopArn");
    m_humanLoopArnHasBeenSet = true;
  }
  if(jsonValue.ValueExists("HumanLoopActivationReasons"))
  {
    Aws::Utils::Array<JsonView> humanLoopActivationReasonsJsonList = jsonValue.GetArray("HumanLoopActivationReasons");
    for(unsigned humanLoopActivationReasonsIndex = 0; humanLoopActivationReasonsIndex < humanLoopActivationReasonsJsonList.GetLength(); ++humanLoopActivationReasonsIndex)
    {
      m_humanLoopActivationReasons.push_back(humanLoopActivationReasonsJsonList[humanLoopActivationReasonsIndex].AsString());
    }
    m_humanLoopActivationReasonsHasBeenSet = true;
  }
  if(jsonValue.ValueExists("HumanLoopActivationConditionsEvaluationResults"))
  {
    m_humanLoopActivationConditionsEvaluationResults = jsonValue.GetString("HumanLoopActivationConditionsEvaluationResults");
    m_humanLoopActivationConditionsEvaluationResultsHasBeenSet = true;
  }
  return *this;
}

JsonValue HumanLoopActivationOutput::Jsonize() const
{
  JsonValue payload;

  if(m_humanLoopArnHasBeenSet)
  {
   payload.WithString("HumanLoopArn", m_humanLoopArn);

  }

  if(m_humanLoopActivationReasonsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> humanLoopActivationReasonsJsonList(m_humanLoopActivationReasons.size());
   for(unsigned humanLoopActivationReasonsIndex = 0; humanLoopActivationReasonsIndex < humanLoopActivationReasonsJsonList.GetLength(); ++humanLoopActivationReasonsIndex)
   {
     humanLoopActivationReasonsJsonList[humanLoopActivationReasonsIndex].AsString(m_humanLoopActivationReasons[humanLoopActivationReasonsIndex]);
   }
   payload.WithArray("HumanLoopActivationReasons", std::move(humanLoopActivationReasonsJsonList));

  }

  if(m_humanLoopActivationConditionsEvaluationResultsHasBeenSet)
  {
   payload.WithString("HumanLoopActivationConditionsEvaluationResults", m_humanLoopActivationConditionsEvaluationResults);

  }

  return payload;
}

} // namespace Model
} // namespace Textract
} // namespace Aws
