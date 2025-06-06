﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/route53resolver/model/CreateFirewallRuleRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Route53Resolver::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

Aws::String CreateFirewallRuleRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_creatorRequestIdHasBeenSet)
  {
   payload.WithString("CreatorRequestId", m_creatorRequestId);

  }

  if(m_firewallRuleGroupIdHasBeenSet)
  {
   payload.WithString("FirewallRuleGroupId", m_firewallRuleGroupId);

  }

  if(m_firewallDomainListIdHasBeenSet)
  {
   payload.WithString("FirewallDomainListId", m_firewallDomainListId);

  }

  if(m_priorityHasBeenSet)
  {
   payload.WithInteger("Priority", m_priority);

  }

  if(m_actionHasBeenSet)
  {
   payload.WithString("Action", ActionMapper::GetNameForAction(m_action));
  }

  if(m_blockResponseHasBeenSet)
  {
   payload.WithString("BlockResponse", BlockResponseMapper::GetNameForBlockResponse(m_blockResponse));
  }

  if(m_blockOverrideDomainHasBeenSet)
  {
   payload.WithString("BlockOverrideDomain", m_blockOverrideDomain);

  }

  if(m_blockOverrideDnsTypeHasBeenSet)
  {
   payload.WithString("BlockOverrideDnsType", BlockOverrideDnsTypeMapper::GetNameForBlockOverrideDnsType(m_blockOverrideDnsType));
  }

  if(m_blockOverrideTtlHasBeenSet)
  {
   payload.WithInteger("BlockOverrideTtl", m_blockOverrideTtl);

  }

  if(m_nameHasBeenSet)
  {
   payload.WithString("Name", m_name);

  }

  if(m_firewallDomainRedirectionActionHasBeenSet)
  {
   payload.WithString("FirewallDomainRedirectionAction", FirewallDomainRedirectionActionMapper::GetNameForFirewallDomainRedirectionAction(m_firewallDomainRedirectionAction));
  }

  if(m_qtypeHasBeenSet)
  {
   payload.WithString("Qtype", m_qtype);

  }

  if(m_dnsThreatProtectionHasBeenSet)
  {
   payload.WithString("DnsThreatProtection", DnsThreatProtectionMapper::GetNameForDnsThreatProtection(m_dnsThreatProtection));
  }

  if(m_confidenceThresholdHasBeenSet)
  {
   payload.WithString("ConfidenceThreshold", ConfidenceThresholdMapper::GetNameForConfidenceThreshold(m_confidenceThreshold));
  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection CreateFirewallRuleRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "Route53Resolver.CreateFirewallRule"));
  return headers;

}




