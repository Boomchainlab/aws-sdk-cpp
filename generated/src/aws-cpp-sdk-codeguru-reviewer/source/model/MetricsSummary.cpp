﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/codeguru-reviewer/model/MetricsSummary.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace CodeGuruReviewer
{
namespace Model
{

MetricsSummary::MetricsSummary(JsonView jsonValue)
{
  *this = jsonValue;
}

MetricsSummary& MetricsSummary::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("MeteredLinesOfCodeCount"))
  {
    m_meteredLinesOfCodeCount = jsonValue.GetInt64("MeteredLinesOfCodeCount");
    m_meteredLinesOfCodeCountHasBeenSet = true;
  }
  if(jsonValue.ValueExists("SuppressedLinesOfCodeCount"))
  {
    m_suppressedLinesOfCodeCount = jsonValue.GetInt64("SuppressedLinesOfCodeCount");
    m_suppressedLinesOfCodeCountHasBeenSet = true;
  }
  if(jsonValue.ValueExists("FindingsCount"))
  {
    m_findingsCount = jsonValue.GetInt64("FindingsCount");
    m_findingsCountHasBeenSet = true;
  }
  return *this;
}

JsonValue MetricsSummary::Jsonize() const
{
  JsonValue payload;

  if(m_meteredLinesOfCodeCountHasBeenSet)
  {
   payload.WithInt64("MeteredLinesOfCodeCount", m_meteredLinesOfCodeCount);

  }

  if(m_suppressedLinesOfCodeCountHasBeenSet)
  {
   payload.WithInt64("SuppressedLinesOfCodeCount", m_suppressedLinesOfCodeCount);

  }

  if(m_findingsCountHasBeenSet)
  {
   payload.WithInt64("FindingsCount", m_findingsCount);

  }

  return payload;
}

} // namespace Model
} // namespace CodeGuruReviewer
} // namespace Aws
