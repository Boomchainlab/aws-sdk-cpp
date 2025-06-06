﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/appmesh/model/VirtualNodeHttpConnectionPool.h>
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

VirtualNodeHttpConnectionPool::VirtualNodeHttpConnectionPool(JsonView jsonValue)
{
  *this = jsonValue;
}

VirtualNodeHttpConnectionPool& VirtualNodeHttpConnectionPool::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("maxConnections"))
  {
    m_maxConnections = jsonValue.GetInteger("maxConnections");
    m_maxConnectionsHasBeenSet = true;
  }
  if(jsonValue.ValueExists("maxPendingRequests"))
  {
    m_maxPendingRequests = jsonValue.GetInteger("maxPendingRequests");
    m_maxPendingRequestsHasBeenSet = true;
  }
  return *this;
}

JsonValue VirtualNodeHttpConnectionPool::Jsonize() const
{
  JsonValue payload;

  if(m_maxConnectionsHasBeenSet)
  {
   payload.WithInteger("maxConnections", m_maxConnections);

  }

  if(m_maxPendingRequestsHasBeenSet)
  {
   payload.WithInteger("maxPendingRequests", m_maxPendingRequests);

  }

  return payload;
}

} // namespace Model
} // namespace AppMesh
} // namespace Aws
