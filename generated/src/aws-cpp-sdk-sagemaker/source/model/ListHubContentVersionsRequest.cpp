﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/sagemaker/model/ListHubContentVersionsRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::SageMaker::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

Aws::String ListHubContentVersionsRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_hubNameHasBeenSet)
  {
   payload.WithString("HubName", m_hubName);

  }

  if(m_hubContentTypeHasBeenSet)
  {
   payload.WithString("HubContentType", HubContentTypeMapper::GetNameForHubContentType(m_hubContentType));
  }

  if(m_hubContentNameHasBeenSet)
  {
   payload.WithString("HubContentName", m_hubContentName);

  }

  if(m_minVersionHasBeenSet)
  {
   payload.WithString("MinVersion", m_minVersion);

  }

  if(m_maxSchemaVersionHasBeenSet)
  {
   payload.WithString("MaxSchemaVersion", m_maxSchemaVersion);

  }

  if(m_creationTimeBeforeHasBeenSet)
  {
   payload.WithDouble("CreationTimeBefore", m_creationTimeBefore.SecondsWithMSPrecision());
  }

  if(m_creationTimeAfterHasBeenSet)
  {
   payload.WithDouble("CreationTimeAfter", m_creationTimeAfter.SecondsWithMSPrecision());
  }

  if(m_sortByHasBeenSet)
  {
   payload.WithString("SortBy", HubContentSortByMapper::GetNameForHubContentSortBy(m_sortBy));
  }

  if(m_sortOrderHasBeenSet)
  {
   payload.WithString("SortOrder", SortOrderMapper::GetNameForSortOrder(m_sortOrder));
  }

  if(m_maxResultsHasBeenSet)
  {
   payload.WithInteger("MaxResults", m_maxResults);

  }

  if(m_nextTokenHasBeenSet)
  {
   payload.WithString("NextToken", m_nextToken);

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection ListHubContentVersionsRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "SageMaker.ListHubContentVersions"));
  return headers;

}




