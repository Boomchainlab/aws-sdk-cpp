﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/drs/model/ExportSourceNetworkCfnTemplateRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::drs::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

Aws::String ExportSourceNetworkCfnTemplateRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_sourceNetworkIDHasBeenSet)
  {
   payload.WithString("sourceNetworkID", m_sourceNetworkID);

  }

  return payload.View().WriteReadable();
}




