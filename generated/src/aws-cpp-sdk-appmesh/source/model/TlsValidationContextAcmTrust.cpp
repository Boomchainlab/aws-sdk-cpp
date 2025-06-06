﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/appmesh/model/TlsValidationContextAcmTrust.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace AppMesh
{
namespace Model
{

TlsValidationContextAcmTrust::TlsValidationContextAcmTrust(JsonView jsonValue)
{
  *this = jsonValue;
}

TlsValidationContextAcmTrust& TlsValidationContextAcmTrust::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("certificateAuthorityArns"))
  {
    Aws::Utils::Array<JsonView> certificateAuthorityArnsJsonList = jsonValue.GetArray("certificateAuthorityArns");
    for(unsigned certificateAuthorityArnsIndex = 0; certificateAuthorityArnsIndex < certificateAuthorityArnsJsonList.GetLength(); ++certificateAuthorityArnsIndex)
    {
      m_certificateAuthorityArns.push_back(certificateAuthorityArnsJsonList[certificateAuthorityArnsIndex].AsString());
    }
    m_certificateAuthorityArnsHasBeenSet = true;
  }
  return *this;
}

JsonValue TlsValidationContextAcmTrust::Jsonize() const
{
  JsonValue payload;

  if(m_certificateAuthorityArnsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> certificateAuthorityArnsJsonList(m_certificateAuthorityArns.size());
   for(unsigned certificateAuthorityArnsIndex = 0; certificateAuthorityArnsIndex < certificateAuthorityArnsJsonList.GetLength(); ++certificateAuthorityArnsIndex)
   {
     certificateAuthorityArnsJsonList[certificateAuthorityArnsIndex].AsString(m_certificateAuthorityArns[certificateAuthorityArnsIndex]);
   }
   payload.WithArray("certificateAuthorityArns", std::move(certificateAuthorityArnsJsonList));

  }

  return payload;
}

} // namespace Model
} // namespace AppMesh
} // namespace Aws
