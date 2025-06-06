﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/fsx/model/NFSDataRepositoryConfiguration.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace FSx
{
namespace Model
{

NFSDataRepositoryConfiguration::NFSDataRepositoryConfiguration(JsonView jsonValue)
{
  *this = jsonValue;
}

NFSDataRepositoryConfiguration& NFSDataRepositoryConfiguration::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Version"))
  {
    m_version = NfsVersionMapper::GetNfsVersionForName(jsonValue.GetString("Version"));
    m_versionHasBeenSet = true;
  }
  if(jsonValue.ValueExists("DnsIps"))
  {
    Aws::Utils::Array<JsonView> dnsIpsJsonList = jsonValue.GetArray("DnsIps");
    for(unsigned dnsIpsIndex = 0; dnsIpsIndex < dnsIpsJsonList.GetLength(); ++dnsIpsIndex)
    {
      m_dnsIps.push_back(dnsIpsJsonList[dnsIpsIndex].AsString());
    }
    m_dnsIpsHasBeenSet = true;
  }
  if(jsonValue.ValueExists("AutoExportPolicy"))
  {
    m_autoExportPolicy = jsonValue.GetObject("AutoExportPolicy");
    m_autoExportPolicyHasBeenSet = true;
  }
  return *this;
}

JsonValue NFSDataRepositoryConfiguration::Jsonize() const
{
  JsonValue payload;

  if(m_versionHasBeenSet)
  {
   payload.WithString("Version", NfsVersionMapper::GetNameForNfsVersion(m_version));
  }

  if(m_dnsIpsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> dnsIpsJsonList(m_dnsIps.size());
   for(unsigned dnsIpsIndex = 0; dnsIpsIndex < dnsIpsJsonList.GetLength(); ++dnsIpsIndex)
   {
     dnsIpsJsonList[dnsIpsIndex].AsString(m_dnsIps[dnsIpsIndex]);
   }
   payload.WithArray("DnsIps", std::move(dnsIpsJsonList));

  }

  if(m_autoExportPolicyHasBeenSet)
  {
   payload.WithObject("AutoExportPolicy", m_autoExportPolicy.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace FSx
} // namespace Aws
