﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/support/model/CaseDetails.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace Support
{
namespace Model
{

CaseDetails::CaseDetails(JsonView jsonValue)
{
  *this = jsonValue;
}

CaseDetails& CaseDetails::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("caseId"))
  {
    m_caseId = jsonValue.GetString("caseId");
    m_caseIdHasBeenSet = true;
  }
  if(jsonValue.ValueExists("displayId"))
  {
    m_displayId = jsonValue.GetString("displayId");
    m_displayIdHasBeenSet = true;
  }
  if(jsonValue.ValueExists("subject"))
  {
    m_subject = jsonValue.GetString("subject");
    m_subjectHasBeenSet = true;
  }
  if(jsonValue.ValueExists("status"))
  {
    m_status = jsonValue.GetString("status");
    m_statusHasBeenSet = true;
  }
  if(jsonValue.ValueExists("serviceCode"))
  {
    m_serviceCode = jsonValue.GetString("serviceCode");
    m_serviceCodeHasBeenSet = true;
  }
  if(jsonValue.ValueExists("categoryCode"))
  {
    m_categoryCode = jsonValue.GetString("categoryCode");
    m_categoryCodeHasBeenSet = true;
  }
  if(jsonValue.ValueExists("severityCode"))
  {
    m_severityCode = jsonValue.GetString("severityCode");
    m_severityCodeHasBeenSet = true;
  }
  if(jsonValue.ValueExists("submittedBy"))
  {
    m_submittedBy = jsonValue.GetString("submittedBy");
    m_submittedByHasBeenSet = true;
  }
  if(jsonValue.ValueExists("timeCreated"))
  {
    m_timeCreated = jsonValue.GetString("timeCreated");
    m_timeCreatedHasBeenSet = true;
  }
  if(jsonValue.ValueExists("recentCommunications"))
  {
    m_recentCommunications = jsonValue.GetObject("recentCommunications");
    m_recentCommunicationsHasBeenSet = true;
  }
  if(jsonValue.ValueExists("ccEmailAddresses"))
  {
    Aws::Utils::Array<JsonView> ccEmailAddressesJsonList = jsonValue.GetArray("ccEmailAddresses");
    for(unsigned ccEmailAddressesIndex = 0; ccEmailAddressesIndex < ccEmailAddressesJsonList.GetLength(); ++ccEmailAddressesIndex)
    {
      m_ccEmailAddresses.push_back(ccEmailAddressesJsonList[ccEmailAddressesIndex].AsString());
    }
    m_ccEmailAddressesHasBeenSet = true;
  }
  if(jsonValue.ValueExists("language"))
  {
    m_language = jsonValue.GetString("language");
    m_languageHasBeenSet = true;
  }
  return *this;
}

JsonValue CaseDetails::Jsonize() const
{
  JsonValue payload;

  if(m_caseIdHasBeenSet)
  {
   payload.WithString("caseId", m_caseId);

  }

  if(m_displayIdHasBeenSet)
  {
   payload.WithString("displayId", m_displayId);

  }

  if(m_subjectHasBeenSet)
  {
   payload.WithString("subject", m_subject);

  }

  if(m_statusHasBeenSet)
  {
   payload.WithString("status", m_status);

  }

  if(m_serviceCodeHasBeenSet)
  {
   payload.WithString("serviceCode", m_serviceCode);

  }

  if(m_categoryCodeHasBeenSet)
  {
   payload.WithString("categoryCode", m_categoryCode);

  }

  if(m_severityCodeHasBeenSet)
  {
   payload.WithString("severityCode", m_severityCode);

  }

  if(m_submittedByHasBeenSet)
  {
   payload.WithString("submittedBy", m_submittedBy);

  }

  if(m_timeCreatedHasBeenSet)
  {
   payload.WithString("timeCreated", m_timeCreated);

  }

  if(m_recentCommunicationsHasBeenSet)
  {
   payload.WithObject("recentCommunications", m_recentCommunications.Jsonize());

  }

  if(m_ccEmailAddressesHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> ccEmailAddressesJsonList(m_ccEmailAddresses.size());
   for(unsigned ccEmailAddressesIndex = 0; ccEmailAddressesIndex < ccEmailAddressesJsonList.GetLength(); ++ccEmailAddressesIndex)
   {
     ccEmailAddressesJsonList[ccEmailAddressesIndex].AsString(m_ccEmailAddresses[ccEmailAddressesIndex]);
   }
   payload.WithArray("ccEmailAddresses", std::move(ccEmailAddressesJsonList));

  }

  if(m_languageHasBeenSet)
  {
   payload.WithString("language", m_language);

  }

  return payload;
}

} // namespace Model
} // namespace Support
} // namespace Aws
