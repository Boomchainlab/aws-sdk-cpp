﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/mturk-requester/model/ReviewActionDetail.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace MTurk
{
namespace Model
{

ReviewActionDetail::ReviewActionDetail(JsonView jsonValue)
{
  *this = jsonValue;
}

ReviewActionDetail& ReviewActionDetail::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("ActionId"))
  {
    m_actionId = jsonValue.GetString("ActionId");
    m_actionIdHasBeenSet = true;
  }
  if(jsonValue.ValueExists("ActionName"))
  {
    m_actionName = jsonValue.GetString("ActionName");
    m_actionNameHasBeenSet = true;
  }
  if(jsonValue.ValueExists("TargetId"))
  {
    m_targetId = jsonValue.GetString("TargetId");
    m_targetIdHasBeenSet = true;
  }
  if(jsonValue.ValueExists("TargetType"))
  {
    m_targetType = jsonValue.GetString("TargetType");
    m_targetTypeHasBeenSet = true;
  }
  if(jsonValue.ValueExists("Status"))
  {
    m_status = ReviewActionStatusMapper::GetReviewActionStatusForName(jsonValue.GetString("Status"));
    m_statusHasBeenSet = true;
  }
  if(jsonValue.ValueExists("CompleteTime"))
  {
    m_completeTime = jsonValue.GetDouble("CompleteTime");
    m_completeTimeHasBeenSet = true;
  }
  if(jsonValue.ValueExists("Result"))
  {
    m_result = jsonValue.GetString("Result");
    m_resultHasBeenSet = true;
  }
  if(jsonValue.ValueExists("ErrorCode"))
  {
    m_errorCode = jsonValue.GetString("ErrorCode");
    m_errorCodeHasBeenSet = true;
  }
  return *this;
}

JsonValue ReviewActionDetail::Jsonize() const
{
  JsonValue payload;

  if(m_actionIdHasBeenSet)
  {
   payload.WithString("ActionId", m_actionId);

  }

  if(m_actionNameHasBeenSet)
  {
   payload.WithString("ActionName", m_actionName);

  }

  if(m_targetIdHasBeenSet)
  {
   payload.WithString("TargetId", m_targetId);

  }

  if(m_targetTypeHasBeenSet)
  {
   payload.WithString("TargetType", m_targetType);

  }

  if(m_statusHasBeenSet)
  {
   payload.WithString("Status", ReviewActionStatusMapper::GetNameForReviewActionStatus(m_status));
  }

  if(m_completeTimeHasBeenSet)
  {
   payload.WithDouble("CompleteTime", m_completeTime.SecondsWithMSPrecision());
  }

  if(m_resultHasBeenSet)
  {
   payload.WithString("Result", m_result);

  }

  if(m_errorCodeHasBeenSet)
  {
   payload.WithString("ErrorCode", m_errorCode);

  }

  return payload;
}

} // namespace Model
} // namespace MTurk
} // namespace Aws
