﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/connectcases/model/CreateRelatedItemRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::ConnectCases::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

Aws::String CreateRelatedItemRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_contentHasBeenSet)
  {
   payload.WithObject("content", m_content.Jsonize());

  }

  if(m_performedByHasBeenSet)
  {
   payload.WithObject("performedBy", m_performedBy.Jsonize());

  }

  if(m_typeHasBeenSet)
  {
   payload.WithString("type", RelatedItemTypeMapper::GetNameForRelatedItemType(m_type));
  }

  return payload.View().WriteReadable();
}




