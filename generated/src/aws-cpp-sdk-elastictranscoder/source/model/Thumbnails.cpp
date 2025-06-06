﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/elastictranscoder/model/Thumbnails.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace ElasticTranscoder
{
namespace Model
{

Thumbnails::Thumbnails(JsonView jsonValue)
{
  *this = jsonValue;
}

Thumbnails& Thumbnails::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Format"))
  {
    m_format = jsonValue.GetString("Format");
    m_formatHasBeenSet = true;
  }
  if(jsonValue.ValueExists("Interval"))
  {
    m_interval = jsonValue.GetString("Interval");
    m_intervalHasBeenSet = true;
  }
  if(jsonValue.ValueExists("Resolution"))
  {
    m_resolution = jsonValue.GetString("Resolution");
    m_resolutionHasBeenSet = true;
  }
  if(jsonValue.ValueExists("AspectRatio"))
  {
    m_aspectRatio = jsonValue.GetString("AspectRatio");
    m_aspectRatioHasBeenSet = true;
  }
  if(jsonValue.ValueExists("MaxWidth"))
  {
    m_maxWidth = jsonValue.GetString("MaxWidth");
    m_maxWidthHasBeenSet = true;
  }
  if(jsonValue.ValueExists("MaxHeight"))
  {
    m_maxHeight = jsonValue.GetString("MaxHeight");
    m_maxHeightHasBeenSet = true;
  }
  if(jsonValue.ValueExists("SizingPolicy"))
  {
    m_sizingPolicy = jsonValue.GetString("SizingPolicy");
    m_sizingPolicyHasBeenSet = true;
  }
  if(jsonValue.ValueExists("PaddingPolicy"))
  {
    m_paddingPolicy = jsonValue.GetString("PaddingPolicy");
    m_paddingPolicyHasBeenSet = true;
  }
  return *this;
}

JsonValue Thumbnails::Jsonize() const
{
  JsonValue payload;

  if(m_formatHasBeenSet)
  {
   payload.WithString("Format", m_format);

  }

  if(m_intervalHasBeenSet)
  {
   payload.WithString("Interval", m_interval);

  }

  if(m_resolutionHasBeenSet)
  {
   payload.WithString("Resolution", m_resolution);

  }

  if(m_aspectRatioHasBeenSet)
  {
   payload.WithString("AspectRatio", m_aspectRatio);

  }

  if(m_maxWidthHasBeenSet)
  {
   payload.WithString("MaxWidth", m_maxWidth);

  }

  if(m_maxHeightHasBeenSet)
  {
   payload.WithString("MaxHeight", m_maxHeight);

  }

  if(m_sizingPolicyHasBeenSet)
  {
   payload.WithString("SizingPolicy", m_sizingPolicy);

  }

  if(m_paddingPolicyHasBeenSet)
  {
   payload.WithString("PaddingPolicy", m_paddingPolicy);

  }

  return payload;
}

} // namespace Model
} // namespace ElasticTranscoder
} // namespace Aws
