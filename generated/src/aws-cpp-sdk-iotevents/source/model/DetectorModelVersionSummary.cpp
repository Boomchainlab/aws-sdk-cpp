﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/iotevents/model/DetectorModelVersionSummary.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace IoTEvents
{
namespace Model
{

DetectorModelVersionSummary::DetectorModelVersionSummary(JsonView jsonValue)
{
  *this = jsonValue;
}

DetectorModelVersionSummary& DetectorModelVersionSummary::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("detectorModelName"))
  {
    m_detectorModelName = jsonValue.GetString("detectorModelName");
    m_detectorModelNameHasBeenSet = true;
  }
  if(jsonValue.ValueExists("detectorModelVersion"))
  {
    m_detectorModelVersion = jsonValue.GetString("detectorModelVersion");
    m_detectorModelVersionHasBeenSet = true;
  }
  if(jsonValue.ValueExists("detectorModelArn"))
  {
    m_detectorModelArn = jsonValue.GetString("detectorModelArn");
    m_detectorModelArnHasBeenSet = true;
  }
  if(jsonValue.ValueExists("roleArn"))
  {
    m_roleArn = jsonValue.GetString("roleArn");
    m_roleArnHasBeenSet = true;
  }
  if(jsonValue.ValueExists("creationTime"))
  {
    m_creationTime = jsonValue.GetDouble("creationTime");
    m_creationTimeHasBeenSet = true;
  }
  if(jsonValue.ValueExists("lastUpdateTime"))
  {
    m_lastUpdateTime = jsonValue.GetDouble("lastUpdateTime");
    m_lastUpdateTimeHasBeenSet = true;
  }
  if(jsonValue.ValueExists("status"))
  {
    m_status = DetectorModelVersionStatusMapper::GetDetectorModelVersionStatusForName(jsonValue.GetString("status"));
    m_statusHasBeenSet = true;
  }
  if(jsonValue.ValueExists("evaluationMethod"))
  {
    m_evaluationMethod = EvaluationMethodMapper::GetEvaluationMethodForName(jsonValue.GetString("evaluationMethod"));
    m_evaluationMethodHasBeenSet = true;
  }
  return *this;
}

JsonValue DetectorModelVersionSummary::Jsonize() const
{
  JsonValue payload;

  if(m_detectorModelNameHasBeenSet)
  {
   payload.WithString("detectorModelName", m_detectorModelName);

  }

  if(m_detectorModelVersionHasBeenSet)
  {
   payload.WithString("detectorModelVersion", m_detectorModelVersion);

  }

  if(m_detectorModelArnHasBeenSet)
  {
   payload.WithString("detectorModelArn", m_detectorModelArn);

  }

  if(m_roleArnHasBeenSet)
  {
   payload.WithString("roleArn", m_roleArn);

  }

  if(m_creationTimeHasBeenSet)
  {
   payload.WithDouble("creationTime", m_creationTime.SecondsWithMSPrecision());
  }

  if(m_lastUpdateTimeHasBeenSet)
  {
   payload.WithDouble("lastUpdateTime", m_lastUpdateTime.SecondsWithMSPrecision());
  }

  if(m_statusHasBeenSet)
  {
   payload.WithString("status", DetectorModelVersionStatusMapper::GetNameForDetectorModelVersionStatus(m_status));
  }

  if(m_evaluationMethodHasBeenSet)
  {
   payload.WithString("evaluationMethod", EvaluationMethodMapper::GetNameForEvaluationMethod(m_evaluationMethod));
  }

  return payload;
}

} // namespace Model
} // namespace IoTEvents
} // namespace Aws
