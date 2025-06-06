﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/glue/model/DataLakePrincipal.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace Glue
{
namespace Model
{

DataLakePrincipal::DataLakePrincipal(JsonView jsonValue)
{
  *this = jsonValue;
}

DataLakePrincipal& DataLakePrincipal::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("DataLakePrincipalIdentifier"))
  {
    m_dataLakePrincipalIdentifier = jsonValue.GetString("DataLakePrincipalIdentifier");
    m_dataLakePrincipalIdentifierHasBeenSet = true;
  }
  return *this;
}

JsonValue DataLakePrincipal::Jsonize() const
{
  JsonValue payload;

  if(m_dataLakePrincipalIdentifierHasBeenSet)
  {
   payload.WithString("DataLakePrincipalIdentifier", m_dataLakePrincipalIdentifier);

  }

  return payload;
}

} // namespace Model
} // namespace Glue
} // namespace Aws
