﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/elasticmapreduce/model/ListNotebookExecutionsRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::EMR::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

Aws::String ListNotebookExecutionsRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_editorIdHasBeenSet)
  {
   payload.WithString("EditorId", m_editorId);

  }

  if(m_statusHasBeenSet)
  {
   payload.WithString("Status", NotebookExecutionStatusMapper::GetNameForNotebookExecutionStatus(m_status));
  }

  if(m_fromHasBeenSet)
  {
   payload.WithDouble("From", m_from.SecondsWithMSPrecision());
  }

  if(m_toHasBeenSet)
  {
   payload.WithDouble("To", m_to.SecondsWithMSPrecision());
  }

  if(m_markerHasBeenSet)
  {
   payload.WithString("Marker", m_marker);

  }

  if(m_executionEngineIdHasBeenSet)
  {
   payload.WithString("ExecutionEngineId", m_executionEngineId);

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection ListNotebookExecutionsRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "ElasticMapReduce.ListNotebookExecutions"));
  return headers;

}




