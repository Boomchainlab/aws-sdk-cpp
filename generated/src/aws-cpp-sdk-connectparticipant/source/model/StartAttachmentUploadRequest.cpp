﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/connectparticipant/model/StartAttachmentUploadRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::ConnectParticipant::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

Aws::String StartAttachmentUploadRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_contentTypeHasBeenSet)
  {
   payload.WithString("ContentType", m_contentType);

  }

  if(m_attachmentSizeInBytesHasBeenSet)
  {
   payload.WithInt64("AttachmentSizeInBytes", m_attachmentSizeInBytes);

  }

  if(m_attachmentNameHasBeenSet)
  {
   payload.WithString("AttachmentName", m_attachmentName);

  }

  if(m_clientTokenHasBeenSet)
  {
   payload.WithString("ClientToken", m_clientToken);

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection StartAttachmentUploadRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  Aws::StringStream ss;
  if(m_connectionTokenHasBeenSet)
  {
    ss << m_connectionToken;
    headers.emplace("x-amz-bearer",  ss.str());
    ss.str("");
  }

  return headers;

}




