﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/cleanrooms/model/ProtectedJobMemberOutputConfigurationInput.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace CleanRooms
{
namespace Model
{

ProtectedJobMemberOutputConfigurationInput::ProtectedJobMemberOutputConfigurationInput(JsonView jsonValue)
{
  *this = jsonValue;
}

ProtectedJobMemberOutputConfigurationInput& ProtectedJobMemberOutputConfigurationInput::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("accountId"))
  {
    m_accountId = jsonValue.GetString("accountId");
    m_accountIdHasBeenSet = true;
  }
  return *this;
}

JsonValue ProtectedJobMemberOutputConfigurationInput::Jsonize() const
{
  JsonValue payload;

  if(m_accountIdHasBeenSet)
  {
   payload.WithString("accountId", m_accountId);

  }

  return payload;
}

} // namespace Model
} // namespace CleanRooms
} // namespace Aws
