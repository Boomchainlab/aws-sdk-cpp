﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/elasticmapreduce/model/StartNotebookExecutionRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::EMR::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

Aws::String StartNotebookExecutionRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_editorIdHasBeenSet)
  {
   payload.WithString("EditorId", m_editorId);

  }

  if(m_relativePathHasBeenSet)
  {
   payload.WithString("RelativePath", m_relativePath);

  }

  if(m_notebookExecutionNameHasBeenSet)
  {
   payload.WithString("NotebookExecutionName", m_notebookExecutionName);

  }

  if(m_notebookParamsHasBeenSet)
  {
   payload.WithString("NotebookParams", m_notebookParams);

  }

  if(m_executionEngineHasBeenSet)
  {
   payload.WithObject("ExecutionEngine", m_executionEngine.Jsonize());

  }

  if(m_serviceRoleHasBeenSet)
  {
   payload.WithString("ServiceRole", m_serviceRole);

  }

  if(m_notebookInstanceSecurityGroupIdHasBeenSet)
  {
   payload.WithString("NotebookInstanceSecurityGroupId", m_notebookInstanceSecurityGroupId);

  }

  if(m_tagsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> tagsJsonList(m_tags.size());
   for(unsigned tagsIndex = 0; tagsIndex < tagsJsonList.GetLength(); ++tagsIndex)
   {
     tagsJsonList[tagsIndex].AsObject(m_tags[tagsIndex].Jsonize());
   }
   payload.WithArray("Tags", std::move(tagsJsonList));

  }

  if(m_notebookS3LocationHasBeenSet)
  {
   payload.WithObject("NotebookS3Location", m_notebookS3Location.Jsonize());

  }

  if(m_outputNotebookS3LocationHasBeenSet)
  {
   payload.WithObject("OutputNotebookS3Location", m_outputNotebookS3Location.Jsonize());

  }

  if(m_outputNotebookFormatHasBeenSet)
  {
   payload.WithString("OutputNotebookFormat", OutputNotebookFormatMapper::GetNameForOutputNotebookFormat(m_outputNotebookFormat));
  }

  if(m_environmentVariablesHasBeenSet)
  {
   JsonValue environmentVariablesJsonMap;
   for(auto& environmentVariablesItem : m_environmentVariables)
   {
     environmentVariablesJsonMap.WithString(environmentVariablesItem.first, environmentVariablesItem.second);
   }
   payload.WithObject("EnvironmentVariables", std::move(environmentVariablesJsonMap));

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection StartNotebookExecutionRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "ElasticMapReduce.StartNotebookExecution"));
  return headers;

}




