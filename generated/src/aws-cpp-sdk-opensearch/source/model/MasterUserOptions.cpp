﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/opensearch/model/MasterUserOptions.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace OpenSearchService
{
namespace Model
{

MasterUserOptions::MasterUserOptions(JsonView jsonValue)
{
  *this = jsonValue;
}

MasterUserOptions& MasterUserOptions::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("MasterUserARN"))
  {
    m_masterUserARN = jsonValue.GetString("MasterUserARN");
    m_masterUserARNHasBeenSet = true;
  }
  if(jsonValue.ValueExists("MasterUserName"))
  {
    m_masterUserName = jsonValue.GetString("MasterUserName");
    m_masterUserNameHasBeenSet = true;
  }
  if(jsonValue.ValueExists("MasterUserPassword"))
  {
    m_masterUserPassword = jsonValue.GetString("MasterUserPassword");
    m_masterUserPasswordHasBeenSet = true;
  }
  return *this;
}

JsonValue MasterUserOptions::Jsonize() const
{
  JsonValue payload;

  if(m_masterUserARNHasBeenSet)
  {
   payload.WithString("MasterUserARN", m_masterUserARN);

  }

  if(m_masterUserNameHasBeenSet)
  {
   payload.WithString("MasterUserName", m_masterUserName);

  }

  if(m_masterUserPasswordHasBeenSet)
  {
   payload.WithString("MasterUserPassword", m_masterUserPassword);

  }

  return payload;
}

} // namespace Model
} // namespace OpenSearchService
} // namespace Aws
