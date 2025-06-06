﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/qbusiness/model/AccessControl.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace QBusiness
{
namespace Model
{

AccessControl::AccessControl(JsonView jsonValue)
{
  *this = jsonValue;
}

AccessControl& AccessControl::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("principals"))
  {
    Aws::Utils::Array<JsonView> principalsJsonList = jsonValue.GetArray("principals");
    for(unsigned principalsIndex = 0; principalsIndex < principalsJsonList.GetLength(); ++principalsIndex)
    {
      m_principals.push_back(principalsJsonList[principalsIndex].AsObject());
    }
    m_principalsHasBeenSet = true;
  }
  if(jsonValue.ValueExists("memberRelation"))
  {
    m_memberRelation = MemberRelationMapper::GetMemberRelationForName(jsonValue.GetString("memberRelation"));
    m_memberRelationHasBeenSet = true;
  }
  return *this;
}

JsonValue AccessControl::Jsonize() const
{
  JsonValue payload;

  if(m_principalsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> principalsJsonList(m_principals.size());
   for(unsigned principalsIndex = 0; principalsIndex < principalsJsonList.GetLength(); ++principalsIndex)
   {
     principalsJsonList[principalsIndex].AsObject(m_principals[principalsIndex].Jsonize());
   }
   payload.WithArray("principals", std::move(principalsJsonList));

  }

  if(m_memberRelationHasBeenSet)
  {
   payload.WithString("memberRelation", MemberRelationMapper::GetNameForMemberRelation(m_memberRelation));
  }

  return payload;
}

} // namespace Model
} // namespace QBusiness
} // namespace Aws
