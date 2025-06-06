﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/cloudfront/CloudFront_EXPORTS.h>
#include <aws/cloudfront/CloudFrontRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/cloudfront/model/Customizations.h>
#include <aws/cloudfront/model/ManagedCertificateRequest.h>
#include <aws/cloudfront/model/DomainItem.h>
#include <aws/cloudfront/model/Parameter.h>
#include <utility>

namespace Aws
{
namespace CloudFront
{
namespace Model
{

  /**
   */
  class UpdateDistributionTenant2020_05_31Request : public CloudFrontRequest
  {
  public:
    AWS_CLOUDFRONT_API UpdateDistributionTenant2020_05_31Request() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "UpdateDistributionTenant"; }

    AWS_CLOUDFRONT_API Aws::String SerializePayload() const override;

    AWS_CLOUDFRONT_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p>The ID of the distribution tenant.</p>
     */
    inline const Aws::String& GetId() const { return m_id; }
    inline bool IdHasBeenSet() const { return m_idHasBeenSet; }
    template<typename IdT = Aws::String>
    void SetId(IdT&& value) { m_idHasBeenSet = true; m_id = std::forward<IdT>(value); }
    template<typename IdT = Aws::String>
    UpdateDistributionTenant2020_05_31Request& WithId(IdT&& value) { SetId(std::forward<IdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID for the multi-tenant distribution.</p>
     */
    inline const Aws::String& GetDistributionId() const { return m_distributionId; }
    inline bool DistributionIdHasBeenSet() const { return m_distributionIdHasBeenSet; }
    template<typename DistributionIdT = Aws::String>
    void SetDistributionId(DistributionIdT&& value) { m_distributionIdHasBeenSet = true; m_distributionId = std::forward<DistributionIdT>(value); }
    template<typename DistributionIdT = Aws::String>
    UpdateDistributionTenant2020_05_31Request& WithDistributionId(DistributionIdT&& value) { SetDistributionId(std::forward<DistributionIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The domains to update for the distribution tenant. A domain object can
     * contain only a domain property. You must specify at least one domain. Each
     * distribution tenant can have up to 5 domains.</p>
     */
    inline const Aws::Vector<DomainItem>& GetDomains() const { return m_domains; }
    inline bool DomainsHasBeenSet() const { return m_domainsHasBeenSet; }
    template<typename DomainsT = Aws::Vector<DomainItem>>
    void SetDomains(DomainsT&& value) { m_domainsHasBeenSet = true; m_domains = std::forward<DomainsT>(value); }
    template<typename DomainsT = Aws::Vector<DomainItem>>
    UpdateDistributionTenant2020_05_31Request& WithDomains(DomainsT&& value) { SetDomains(std::forward<DomainsT>(value)); return *this;}
    template<typename DomainsT = DomainItem>
    UpdateDistributionTenant2020_05_31Request& AddDomains(DomainsT&& value) { m_domainsHasBeenSet = true; m_domains.emplace_back(std::forward<DomainsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Customizations for the distribution tenant. For each distribution tenant, you
     * can specify the geographic restrictions, and the Amazon Resource Names (ARNs)
     * for the ACM certificate and WAF web ACL. These are specific values that you can
     * override or disable from the multi-tenant distribution that was used to create
     * the distribution tenant.</p>
     */
    inline const Customizations& GetCustomizations() const { return m_customizations; }
    inline bool CustomizationsHasBeenSet() const { return m_customizationsHasBeenSet; }
    template<typename CustomizationsT = Customizations>
    void SetCustomizations(CustomizationsT&& value) { m_customizationsHasBeenSet = true; m_customizations = std::forward<CustomizationsT>(value); }
    template<typename CustomizationsT = Customizations>
    UpdateDistributionTenant2020_05_31Request& WithCustomizations(CustomizationsT&& value) { SetCustomizations(std::forward<CustomizationsT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A list of parameter values to add to the resource. A parameter is specified
     * as a key-value pair. A valid parameter value must exist for any parameter that
     * is marked as required in the multi-tenant distribution.</p>
     */
    inline const Aws::Vector<Parameter>& GetParameters() const { return m_parameters; }
    inline bool ParametersHasBeenSet() const { return m_parametersHasBeenSet; }
    template<typename ParametersT = Aws::Vector<Parameter>>
    void SetParameters(ParametersT&& value) { m_parametersHasBeenSet = true; m_parameters = std::forward<ParametersT>(value); }
    template<typename ParametersT = Aws::Vector<Parameter>>
    UpdateDistributionTenant2020_05_31Request& WithParameters(ParametersT&& value) { SetParameters(std::forward<ParametersT>(value)); return *this;}
    template<typename ParametersT = Parameter>
    UpdateDistributionTenant2020_05_31Request& AddParameters(ParametersT&& value) { m_parametersHasBeenSet = true; m_parameters.emplace_back(std::forward<ParametersT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The ID of the target connection group.</p>
     */
    inline const Aws::String& GetConnectionGroupId() const { return m_connectionGroupId; }
    inline bool ConnectionGroupIdHasBeenSet() const { return m_connectionGroupIdHasBeenSet; }
    template<typename ConnectionGroupIdT = Aws::String>
    void SetConnectionGroupId(ConnectionGroupIdT&& value) { m_connectionGroupIdHasBeenSet = true; m_connectionGroupId = std::forward<ConnectionGroupIdT>(value); }
    template<typename ConnectionGroupIdT = Aws::String>
    UpdateDistributionTenant2020_05_31Request& WithConnectionGroupId(ConnectionGroupIdT&& value) { SetConnectionGroupId(std::forward<ConnectionGroupIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The value of the <code>ETag</code> header that you received when retrieving
     * the distribution tenant to update. This value is returned in the response of the
     * <code>GetDistributionTenant</code> API operation.</p>
     */
    inline const Aws::String& GetIfMatch() const { return m_ifMatch; }
    inline bool IfMatchHasBeenSet() const { return m_ifMatchHasBeenSet; }
    template<typename IfMatchT = Aws::String>
    void SetIfMatch(IfMatchT&& value) { m_ifMatchHasBeenSet = true; m_ifMatch = std::forward<IfMatchT>(value); }
    template<typename IfMatchT = Aws::String>
    UpdateDistributionTenant2020_05_31Request& WithIfMatch(IfMatchT&& value) { SetIfMatch(std::forward<IfMatchT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>An object that contains the CloudFront managed ACM certificate request.</p>
     */
    inline const ManagedCertificateRequest& GetManagedCertificateRequest() const { return m_managedCertificateRequest; }
    inline bool ManagedCertificateRequestHasBeenSet() const { return m_managedCertificateRequestHasBeenSet; }
    template<typename ManagedCertificateRequestT = ManagedCertificateRequest>
    void SetManagedCertificateRequest(ManagedCertificateRequestT&& value) { m_managedCertificateRequestHasBeenSet = true; m_managedCertificateRequest = std::forward<ManagedCertificateRequestT>(value); }
    template<typename ManagedCertificateRequestT = ManagedCertificateRequest>
    UpdateDistributionTenant2020_05_31Request& WithManagedCertificateRequest(ManagedCertificateRequestT&& value) { SetManagedCertificateRequest(std::forward<ManagedCertificateRequestT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Indicates whether the distribution tenant should be updated to an enabled
     * state. If you update the distribution tenant and it's not enabled, the
     * distribution tenant won't serve traffic.</p>
     */
    inline bool GetEnabled() const { return m_enabled; }
    inline bool EnabledHasBeenSet() const { return m_enabledHasBeenSet; }
    inline void SetEnabled(bool value) { m_enabledHasBeenSet = true; m_enabled = value; }
    inline UpdateDistributionTenant2020_05_31Request& WithEnabled(bool value) { SetEnabled(value); return *this;}
    ///@}
  private:

    Aws::String m_id;
    bool m_idHasBeenSet = false;

    Aws::String m_distributionId;
    bool m_distributionIdHasBeenSet = false;

    Aws::Vector<DomainItem> m_domains;
    bool m_domainsHasBeenSet = false;

    Customizations m_customizations;
    bool m_customizationsHasBeenSet = false;

    Aws::Vector<Parameter> m_parameters;
    bool m_parametersHasBeenSet = false;

    Aws::String m_connectionGroupId;
    bool m_connectionGroupIdHasBeenSet = false;

    Aws::String m_ifMatch;
    bool m_ifMatchHasBeenSet = false;

    ManagedCertificateRequest m_managedCertificateRequest;
    bool m_managedCertificateRequestHasBeenSet = false;

    bool m_enabled{false};
    bool m_enabledHasBeenSet = false;
  };

} // namespace Model
} // namespace CloudFront
} // namespace Aws
