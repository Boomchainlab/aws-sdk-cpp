﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/qapps/model/ImportDocumentRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::QApps::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

Aws::String ImportDocumentRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_cardIdHasBeenSet)
  {
   payload.WithString("cardId", m_cardId);

  }

  if(m_appIdHasBeenSet)
  {
   payload.WithString("appId", m_appId);

  }

  if(m_fileContentsBase64HasBeenSet)
  {
   payload.WithString("fileContentsBase64", m_fileContentsBase64);

  }

  if(m_fileNameHasBeenSet)
  {
   payload.WithString("fileName", m_fileName);

  }

  if(m_scopeHasBeenSet)
  {
   payload.WithString("scope", DocumentScopeMapper::GetNameForDocumentScope(m_scope));
  }

  if(m_sessionIdHasBeenSet)
  {
   payload.WithString("sessionId", m_sessionId);

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection ImportDocumentRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  Aws::StringStream ss;
  if(m_instanceIdHasBeenSet)
  {
    ss << m_instanceId;
    headers.emplace("instance-id",  ss.str());
    ss.str("");
  }

  return headers;

}




