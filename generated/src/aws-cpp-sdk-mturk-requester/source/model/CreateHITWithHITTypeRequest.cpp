﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/mturk-requester/model/CreateHITWithHITTypeRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::MTurk::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

Aws::String CreateHITWithHITTypeRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_hITTypeIdHasBeenSet)
  {
   payload.WithString("HITTypeId", m_hITTypeId);

  }

  if(m_maxAssignmentsHasBeenSet)
  {
   payload.WithInteger("MaxAssignments", m_maxAssignments);

  }

  if(m_lifetimeInSecondsHasBeenSet)
  {
   payload.WithInt64("LifetimeInSeconds", m_lifetimeInSeconds);

  }

  if(m_questionHasBeenSet)
  {
   payload.WithString("Question", m_question);

  }

  if(m_requesterAnnotationHasBeenSet)
  {
   payload.WithString("RequesterAnnotation", m_requesterAnnotation);

  }

  if(m_uniqueRequestTokenHasBeenSet)
  {
   payload.WithString("UniqueRequestToken", m_uniqueRequestToken);

  }

  if(m_assignmentReviewPolicyHasBeenSet)
  {
   payload.WithObject("AssignmentReviewPolicy", m_assignmentReviewPolicy.Jsonize());

  }

  if(m_hITReviewPolicyHasBeenSet)
  {
   payload.WithObject("HITReviewPolicy", m_hITReviewPolicy.Jsonize());

  }

  if(m_hITLayoutIdHasBeenSet)
  {
   payload.WithString("HITLayoutId", m_hITLayoutId);

  }

  if(m_hITLayoutParametersHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> hITLayoutParametersJsonList(m_hITLayoutParameters.size());
   for(unsigned hITLayoutParametersIndex = 0; hITLayoutParametersIndex < hITLayoutParametersJsonList.GetLength(); ++hITLayoutParametersIndex)
   {
     hITLayoutParametersJsonList[hITLayoutParametersIndex].AsObject(m_hITLayoutParameters[hITLayoutParametersIndex].Jsonize());
   }
   payload.WithArray("HITLayoutParameters", std::move(hITLayoutParametersJsonList));

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection CreateHITWithHITTypeRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "MTurkRequesterServiceV20170117.CreateHITWithHITType"));
  return headers;

}




