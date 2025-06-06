﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/servicecatalog/model/ServiceActionSummary.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace ServiceCatalog
{
namespace Model
{

ServiceActionSummary::ServiceActionSummary(JsonView jsonValue)
{
  *this = jsonValue;
}

ServiceActionSummary& ServiceActionSummary::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Id"))
  {
    m_id = jsonValue.GetString("Id");
    m_idHasBeenSet = true;
  }
  if(jsonValue.ValueExists("Name"))
  {
    m_name = jsonValue.GetString("Name");
    m_nameHasBeenSet = true;
  }
  if(jsonValue.ValueExists("Description"))
  {
    m_description = jsonValue.GetString("Description");
    m_descriptionHasBeenSet = true;
  }
  if(jsonValue.ValueExists("DefinitionType"))
  {
    m_definitionType = ServiceActionDefinitionTypeMapper::GetServiceActionDefinitionTypeForName(jsonValue.GetString("DefinitionType"));
    m_definitionTypeHasBeenSet = true;
  }
  return *this;
}

JsonValue ServiceActionSummary::Jsonize() const
{
  JsonValue payload;

  if(m_idHasBeenSet)
  {
   payload.WithString("Id", m_id);

  }

  if(m_nameHasBeenSet)
  {
   payload.WithString("Name", m_name);

  }

  if(m_descriptionHasBeenSet)
  {
   payload.WithString("Description", m_description);

  }

  if(m_definitionTypeHasBeenSet)
  {
   payload.WithString("DefinitionType", ServiceActionDefinitionTypeMapper::GetNameForServiceActionDefinitionType(m_definitionType));
  }

  return payload;
}

} // namespace Model
} // namespace ServiceCatalog
} // namespace Aws
