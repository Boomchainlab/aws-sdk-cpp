﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/route53resolver/Route53Resolver_EXPORTS.h>
#include <aws/route53resolver/Route53ResolverRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace Route53Resolver
{
namespace Model
{

  /**
   */
  class GetFirewallRuleGroupAssociationRequest : public Route53ResolverRequest
  {
  public:
    AWS_ROUTE53RESOLVER_API GetFirewallRuleGroupAssociationRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "GetFirewallRuleGroupAssociation"; }

    AWS_ROUTE53RESOLVER_API Aws::String SerializePayload() const override;

    AWS_ROUTE53RESOLVER_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p>The identifier of the <a>FirewallRuleGroupAssociation</a>. </p>
     */
    inline const Aws::String& GetFirewallRuleGroupAssociationId() const { return m_firewallRuleGroupAssociationId; }
    inline bool FirewallRuleGroupAssociationIdHasBeenSet() const { return m_firewallRuleGroupAssociationIdHasBeenSet; }
    template<typename FirewallRuleGroupAssociationIdT = Aws::String>
    void SetFirewallRuleGroupAssociationId(FirewallRuleGroupAssociationIdT&& value) { m_firewallRuleGroupAssociationIdHasBeenSet = true; m_firewallRuleGroupAssociationId = std::forward<FirewallRuleGroupAssociationIdT>(value); }
    template<typename FirewallRuleGroupAssociationIdT = Aws::String>
    GetFirewallRuleGroupAssociationRequest& WithFirewallRuleGroupAssociationId(FirewallRuleGroupAssociationIdT&& value) { SetFirewallRuleGroupAssociationId(std::forward<FirewallRuleGroupAssociationIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_firewallRuleGroupAssociationId;
    bool m_firewallRuleGroupAssociationIdHasBeenSet = false;
  };

} // namespace Model
} // namespace Route53Resolver
} // namespace Aws
