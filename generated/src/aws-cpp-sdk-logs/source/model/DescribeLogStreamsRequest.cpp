﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/logs/model/DescribeLogStreamsRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::CloudWatchLogs::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

Aws::String DescribeLogStreamsRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_logGroupNameHasBeenSet)
  {
   payload.WithString("logGroupName", m_logGroupName);

  }

  if(m_logGroupIdentifierHasBeenSet)
  {
   payload.WithString("logGroupIdentifier", m_logGroupIdentifier);

  }

  if(m_logStreamNamePrefixHasBeenSet)
  {
   payload.WithString("logStreamNamePrefix", m_logStreamNamePrefix);

  }

  if(m_orderByHasBeenSet)
  {
   payload.WithString("orderBy", OrderByMapper::GetNameForOrderBy(m_orderBy));
  }

  if(m_descendingHasBeenSet)
  {
   payload.WithBool("descending", m_descending);

  }

  if(m_nextTokenHasBeenSet)
  {
   payload.WithString("nextToken", m_nextToken);

  }

  if(m_limitHasBeenSet)
  {
   payload.WithInteger("limit", m_limit);

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection DescribeLogStreamsRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "Logs_20140328.DescribeLogStreams"));
  return headers;

}




