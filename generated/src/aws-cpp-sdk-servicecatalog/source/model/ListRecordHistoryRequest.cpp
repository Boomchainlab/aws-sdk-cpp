﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/servicecatalog/model/ListRecordHistoryRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::ServiceCatalog::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

Aws::String ListRecordHistoryRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_acceptLanguageHasBeenSet)
  {
   payload.WithString("AcceptLanguage", m_acceptLanguage);

  }

  if(m_accessLevelFilterHasBeenSet)
  {
   payload.WithObject("AccessLevelFilter", m_accessLevelFilter.Jsonize());

  }

  if(m_searchFilterHasBeenSet)
  {
   payload.WithObject("SearchFilter", m_searchFilter.Jsonize());

  }

  if(m_pageSizeHasBeenSet)
  {
   payload.WithInteger("PageSize", m_pageSize);

  }

  if(m_pageTokenHasBeenSet)
  {
   payload.WithString("PageToken", m_pageToken);

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection ListRecordHistoryRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "AWS242ServiceCatalogService.ListRecordHistory"));
  return headers;

}




