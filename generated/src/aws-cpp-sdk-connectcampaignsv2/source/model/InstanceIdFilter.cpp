﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/connectcampaignsv2/model/InstanceIdFilter.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace ConnectCampaignsV2
{
namespace Model
{

InstanceIdFilter::InstanceIdFilter(JsonView jsonValue)
{
  *this = jsonValue;
}

InstanceIdFilter& InstanceIdFilter::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("value"))
  {
    m_value = jsonValue.GetString("value");
    m_valueHasBeenSet = true;
  }
  if(jsonValue.ValueExists("operator"))
  {
    m_operator = InstanceIdFilterOperatorMapper::GetInstanceIdFilterOperatorForName(jsonValue.GetString("operator"));
    m_operatorHasBeenSet = true;
  }
  return *this;
}

JsonValue InstanceIdFilter::Jsonize() const
{
  JsonValue payload;

  if(m_valueHasBeenSet)
  {
   payload.WithString("value", m_value);

  }

  if(m_operatorHasBeenSet)
  {
   payload.WithString("operator", InstanceIdFilterOperatorMapper::GetNameForInstanceIdFilterOperator(m_operator));
  }

  return payload;
}

} // namespace Model
} // namespace ConnectCampaignsV2
} // namespace Aws
