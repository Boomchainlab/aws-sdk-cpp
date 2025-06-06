﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/appmesh/model/VirtualGatewayHealthCheckPolicy.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace AppMesh
{
namespace Model
{

VirtualGatewayHealthCheckPolicy::VirtualGatewayHealthCheckPolicy(JsonView jsonValue)
{
  *this = jsonValue;
}

VirtualGatewayHealthCheckPolicy& VirtualGatewayHealthCheckPolicy::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("healthyThreshold"))
  {
    m_healthyThreshold = jsonValue.GetInteger("healthyThreshold");
    m_healthyThresholdHasBeenSet = true;
  }
  if(jsonValue.ValueExists("intervalMillis"))
  {
    m_intervalMillis = jsonValue.GetInt64("intervalMillis");
    m_intervalMillisHasBeenSet = true;
  }
  if(jsonValue.ValueExists("path"))
  {
    m_path = jsonValue.GetString("path");
    m_pathHasBeenSet = true;
  }
  if(jsonValue.ValueExists("port"))
  {
    m_port = jsonValue.GetInteger("port");
    m_portHasBeenSet = true;
  }
  if(jsonValue.ValueExists("protocol"))
  {
    m_protocol = VirtualGatewayPortProtocolMapper::GetVirtualGatewayPortProtocolForName(jsonValue.GetString("protocol"));
    m_protocolHasBeenSet = true;
  }
  if(jsonValue.ValueExists("timeoutMillis"))
  {
    m_timeoutMillis = jsonValue.GetInt64("timeoutMillis");
    m_timeoutMillisHasBeenSet = true;
  }
  if(jsonValue.ValueExists("unhealthyThreshold"))
  {
    m_unhealthyThreshold = jsonValue.GetInteger("unhealthyThreshold");
    m_unhealthyThresholdHasBeenSet = true;
  }
  return *this;
}

JsonValue VirtualGatewayHealthCheckPolicy::Jsonize() const
{
  JsonValue payload;

  if(m_healthyThresholdHasBeenSet)
  {
   payload.WithInteger("healthyThreshold", m_healthyThreshold);

  }

  if(m_intervalMillisHasBeenSet)
  {
   payload.WithInt64("intervalMillis", m_intervalMillis);

  }

  if(m_pathHasBeenSet)
  {
   payload.WithString("path", m_path);

  }

  if(m_portHasBeenSet)
  {
   payload.WithInteger("port", m_port);

  }

  if(m_protocolHasBeenSet)
  {
   payload.WithString("protocol", VirtualGatewayPortProtocolMapper::GetNameForVirtualGatewayPortProtocol(m_protocol));
  }

  if(m_timeoutMillisHasBeenSet)
  {
   payload.WithInt64("timeoutMillis", m_timeoutMillis);

  }

  if(m_unhealthyThresholdHasBeenSet)
  {
   payload.WithInteger("unhealthyThreshold", m_unhealthyThreshold);

  }

  return payload;
}

} // namespace Model
} // namespace AppMesh
} // namespace Aws
