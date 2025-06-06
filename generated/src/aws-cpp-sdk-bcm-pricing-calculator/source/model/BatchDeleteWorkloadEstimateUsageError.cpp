﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/bcm-pricing-calculator/model/BatchDeleteWorkloadEstimateUsageError.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace BCMPricingCalculator
{
namespace Model
{

BatchDeleteWorkloadEstimateUsageError::BatchDeleteWorkloadEstimateUsageError(JsonView jsonValue)
{
  *this = jsonValue;
}

BatchDeleteWorkloadEstimateUsageError& BatchDeleteWorkloadEstimateUsageError::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("id"))
  {
    m_id = jsonValue.GetString("id");
    m_idHasBeenSet = true;
  }
  if(jsonValue.ValueExists("errorMessage"))
  {
    m_errorMessage = jsonValue.GetString("errorMessage");
    m_errorMessageHasBeenSet = true;
  }
  if(jsonValue.ValueExists("errorCode"))
  {
    m_errorCode = WorkloadEstimateUpdateUsageErrorCodeMapper::GetWorkloadEstimateUpdateUsageErrorCodeForName(jsonValue.GetString("errorCode"));
    m_errorCodeHasBeenSet = true;
  }
  return *this;
}

JsonValue BatchDeleteWorkloadEstimateUsageError::Jsonize() const
{
  JsonValue payload;

  if(m_idHasBeenSet)
  {
   payload.WithString("id", m_id);

  }

  if(m_errorMessageHasBeenSet)
  {
   payload.WithString("errorMessage", m_errorMessage);

  }

  if(m_errorCodeHasBeenSet)
  {
   payload.WithString("errorCode", WorkloadEstimateUpdateUsageErrorCodeMapper::GetNameForWorkloadEstimateUpdateUsageErrorCode(m_errorCode));
  }

  return payload;
}

} // namespace Model
} // namespace BCMPricingCalculator
} // namespace Aws
