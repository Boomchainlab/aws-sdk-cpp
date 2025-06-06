﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/codepipeline/model/PollForJobsRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::CodePipeline::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

Aws::String PollForJobsRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_actionTypeIdHasBeenSet)
  {
   payload.WithObject("actionTypeId", m_actionTypeId.Jsonize());

  }

  if(m_maxBatchSizeHasBeenSet)
  {
   payload.WithInteger("maxBatchSize", m_maxBatchSize);

  }

  if(m_queryParamHasBeenSet)
  {
   JsonValue queryParamJsonMap;
   for(auto& queryParamItem : m_queryParam)
   {
     queryParamJsonMap.WithString(queryParamItem.first, queryParamItem.second);
   }
   payload.WithObject("queryParam", std::move(queryParamJsonMap));

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection PollForJobsRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "CodePipeline_20150709.PollForJobs"));
  return headers;

}




