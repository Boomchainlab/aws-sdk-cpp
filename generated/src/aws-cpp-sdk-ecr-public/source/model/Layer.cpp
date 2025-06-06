﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ecr-public/model/Layer.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace ECRPublic
{
namespace Model
{

Layer::Layer(JsonView jsonValue)
{
  *this = jsonValue;
}

Layer& Layer::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("layerDigest"))
  {
    m_layerDigest = jsonValue.GetString("layerDigest");
    m_layerDigestHasBeenSet = true;
  }
  if(jsonValue.ValueExists("layerAvailability"))
  {
    m_layerAvailability = LayerAvailabilityMapper::GetLayerAvailabilityForName(jsonValue.GetString("layerAvailability"));
    m_layerAvailabilityHasBeenSet = true;
  }
  if(jsonValue.ValueExists("layerSize"))
  {
    m_layerSize = jsonValue.GetInt64("layerSize");
    m_layerSizeHasBeenSet = true;
  }
  if(jsonValue.ValueExists("mediaType"))
  {
    m_mediaType = jsonValue.GetString("mediaType");
    m_mediaTypeHasBeenSet = true;
  }
  return *this;
}

JsonValue Layer::Jsonize() const
{
  JsonValue payload;

  if(m_layerDigestHasBeenSet)
  {
   payload.WithString("layerDigest", m_layerDigest);

  }

  if(m_layerAvailabilityHasBeenSet)
  {
   payload.WithString("layerAvailability", LayerAvailabilityMapper::GetNameForLayerAvailability(m_layerAvailability));
  }

  if(m_layerSizeHasBeenSet)
  {
   payload.WithInt64("layerSize", m_layerSize);

  }

  if(m_mediaTypeHasBeenSet)
  {
   payload.WithString("mediaType", m_mediaType);

  }

  return payload;
}

} // namespace Model
} // namespace ECRPublic
} // namespace Aws
