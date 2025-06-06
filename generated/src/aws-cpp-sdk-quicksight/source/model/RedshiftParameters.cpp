﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/quicksight/model/RedshiftParameters.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace QuickSight
{
namespace Model
{

RedshiftParameters::RedshiftParameters(JsonView jsonValue)
{
  *this = jsonValue;
}

RedshiftParameters& RedshiftParameters::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Host"))
  {
    m_host = jsonValue.GetString("Host");
    m_hostHasBeenSet = true;
  }
  if(jsonValue.ValueExists("Port"))
  {
    m_port = jsonValue.GetInteger("Port");
    m_portHasBeenSet = true;
  }
  if(jsonValue.ValueExists("Database"))
  {
    m_database = jsonValue.GetString("Database");
    m_databaseHasBeenSet = true;
  }
  if(jsonValue.ValueExists("ClusterId"))
  {
    m_clusterId = jsonValue.GetString("ClusterId");
    m_clusterIdHasBeenSet = true;
  }
  if(jsonValue.ValueExists("IAMParameters"))
  {
    m_iAMParameters = jsonValue.GetObject("IAMParameters");
    m_iAMParametersHasBeenSet = true;
  }
  if(jsonValue.ValueExists("IdentityCenterConfiguration"))
  {
    m_identityCenterConfiguration = jsonValue.GetObject("IdentityCenterConfiguration");
    m_identityCenterConfigurationHasBeenSet = true;
  }
  return *this;
}

JsonValue RedshiftParameters::Jsonize() const
{
  JsonValue payload;

  if(m_hostHasBeenSet)
  {
   payload.WithString("Host", m_host);

  }

  if(m_portHasBeenSet)
  {
   payload.WithInteger("Port", m_port);

  }

  if(m_databaseHasBeenSet)
  {
   payload.WithString("Database", m_database);

  }

  if(m_clusterIdHasBeenSet)
  {
   payload.WithString("ClusterId", m_clusterId);

  }

  if(m_iAMParametersHasBeenSet)
  {
   payload.WithObject("IAMParameters", m_iAMParameters.Jsonize());

  }

  if(m_identityCenterConfigurationHasBeenSet)
  {
   payload.WithObject("IdentityCenterConfiguration", m_identityCenterConfiguration.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace QuickSight
} // namespace Aws
