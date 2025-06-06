﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/workspaces/model/FailedCreateWorkspaceRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace WorkSpaces
{
namespace Model
{

FailedCreateWorkspaceRequest::FailedCreateWorkspaceRequest(JsonView jsonValue)
{
  *this = jsonValue;
}

FailedCreateWorkspaceRequest& FailedCreateWorkspaceRequest::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("WorkspaceRequest"))
  {
    m_workspaceRequest = jsonValue.GetObject("WorkspaceRequest");
    m_workspaceRequestHasBeenSet = true;
  }
  if(jsonValue.ValueExists("ErrorCode"))
  {
    m_errorCode = jsonValue.GetString("ErrorCode");
    m_errorCodeHasBeenSet = true;
  }
  if(jsonValue.ValueExists("ErrorMessage"))
  {
    m_errorMessage = jsonValue.GetString("ErrorMessage");
    m_errorMessageHasBeenSet = true;
  }
  return *this;
}

JsonValue FailedCreateWorkspaceRequest::Jsonize() const
{
  JsonValue payload;

  if(m_workspaceRequestHasBeenSet)
  {
   payload.WithObject("WorkspaceRequest", m_workspaceRequest.Jsonize());

  }

  if(m_errorCodeHasBeenSet)
  {
   payload.WithString("ErrorCode", m_errorCode);

  }

  if(m_errorMessageHasBeenSet)
  {
   payload.WithString("ErrorMessage", m_errorMessage);

  }

  return payload;
}

} // namespace Model
} // namespace WorkSpaces
} // namespace Aws
