﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/opensearch/model/DomainPackageDetails.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace OpenSearchService
{
namespace Model
{

DomainPackageDetails::DomainPackageDetails(JsonView jsonValue)
{
  *this = jsonValue;
}

DomainPackageDetails& DomainPackageDetails::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("PackageID"))
  {
    m_packageID = jsonValue.GetString("PackageID");
    m_packageIDHasBeenSet = true;
  }
  if(jsonValue.ValueExists("PackageName"))
  {
    m_packageName = jsonValue.GetString("PackageName");
    m_packageNameHasBeenSet = true;
  }
  if(jsonValue.ValueExists("PackageType"))
  {
    m_packageType = PackageTypeMapper::GetPackageTypeForName(jsonValue.GetString("PackageType"));
    m_packageTypeHasBeenSet = true;
  }
  if(jsonValue.ValueExists("LastUpdated"))
  {
    m_lastUpdated = jsonValue.GetDouble("LastUpdated");
    m_lastUpdatedHasBeenSet = true;
  }
  if(jsonValue.ValueExists("DomainName"))
  {
    m_domainName = jsonValue.GetString("DomainName");
    m_domainNameHasBeenSet = true;
  }
  if(jsonValue.ValueExists("DomainPackageStatus"))
  {
    m_domainPackageStatus = DomainPackageStatusMapper::GetDomainPackageStatusForName(jsonValue.GetString("DomainPackageStatus"));
    m_domainPackageStatusHasBeenSet = true;
  }
  if(jsonValue.ValueExists("PackageVersion"))
  {
    m_packageVersion = jsonValue.GetString("PackageVersion");
    m_packageVersionHasBeenSet = true;
  }
  if(jsonValue.ValueExists("PrerequisitePackageIDList"))
  {
    Aws::Utils::Array<JsonView> prerequisitePackageIDListJsonList = jsonValue.GetArray("PrerequisitePackageIDList");
    for(unsigned prerequisitePackageIDListIndex = 0; prerequisitePackageIDListIndex < prerequisitePackageIDListJsonList.GetLength(); ++prerequisitePackageIDListIndex)
    {
      m_prerequisitePackageIDList.push_back(prerequisitePackageIDListJsonList[prerequisitePackageIDListIndex].AsString());
    }
    m_prerequisitePackageIDListHasBeenSet = true;
  }
  if(jsonValue.ValueExists("ReferencePath"))
  {
    m_referencePath = jsonValue.GetString("ReferencePath");
    m_referencePathHasBeenSet = true;
  }
  if(jsonValue.ValueExists("ErrorDetails"))
  {
    m_errorDetails = jsonValue.GetObject("ErrorDetails");
    m_errorDetailsHasBeenSet = true;
  }
  if(jsonValue.ValueExists("AssociationConfiguration"))
  {
    m_associationConfiguration = jsonValue.GetObject("AssociationConfiguration");
    m_associationConfigurationHasBeenSet = true;
  }
  return *this;
}

JsonValue DomainPackageDetails::Jsonize() const
{
  JsonValue payload;

  if(m_packageIDHasBeenSet)
  {
   payload.WithString("PackageID", m_packageID);

  }

  if(m_packageNameHasBeenSet)
  {
   payload.WithString("PackageName", m_packageName);

  }

  if(m_packageTypeHasBeenSet)
  {
   payload.WithString("PackageType", PackageTypeMapper::GetNameForPackageType(m_packageType));
  }

  if(m_lastUpdatedHasBeenSet)
  {
   payload.WithDouble("LastUpdated", m_lastUpdated.SecondsWithMSPrecision());
  }

  if(m_domainNameHasBeenSet)
  {
   payload.WithString("DomainName", m_domainName);

  }

  if(m_domainPackageStatusHasBeenSet)
  {
   payload.WithString("DomainPackageStatus", DomainPackageStatusMapper::GetNameForDomainPackageStatus(m_domainPackageStatus));
  }

  if(m_packageVersionHasBeenSet)
  {
   payload.WithString("PackageVersion", m_packageVersion);

  }

  if(m_prerequisitePackageIDListHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> prerequisitePackageIDListJsonList(m_prerequisitePackageIDList.size());
   for(unsigned prerequisitePackageIDListIndex = 0; prerequisitePackageIDListIndex < prerequisitePackageIDListJsonList.GetLength(); ++prerequisitePackageIDListIndex)
   {
     prerequisitePackageIDListJsonList[prerequisitePackageIDListIndex].AsString(m_prerequisitePackageIDList[prerequisitePackageIDListIndex]);
   }
   payload.WithArray("PrerequisitePackageIDList", std::move(prerequisitePackageIDListJsonList));

  }

  if(m_referencePathHasBeenSet)
  {
   payload.WithString("ReferencePath", m_referencePath);

  }

  if(m_errorDetailsHasBeenSet)
  {
   payload.WithObject("ErrorDetails", m_errorDetails.Jsonize());

  }

  if(m_associationConfigurationHasBeenSet)
  {
   payload.WithObject("AssociationConfiguration", m_associationConfiguration.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace OpenSearchService
} // namespace Aws
