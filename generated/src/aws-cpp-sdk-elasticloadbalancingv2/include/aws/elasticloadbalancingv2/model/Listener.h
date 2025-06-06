﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/elasticloadbalancingv2/ElasticLoadBalancingv2_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSStreamFwd.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/elasticloadbalancingv2/model/ProtocolEnum.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/elasticloadbalancingv2/model/MutualAuthenticationAttributes.h>
#include <aws/elasticloadbalancingv2/model/Certificate.h>
#include <aws/elasticloadbalancingv2/model/Action.h>
#include <utility>

namespace Aws
{
namespace Utils
{
namespace Xml
{
  class XmlNode;
} // namespace Xml
} // namespace Utils
namespace ElasticLoadBalancingv2
{
namespace Model
{

  /**
   * <p>Information about a listener.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/elasticloadbalancingv2-2015-12-01/Listener">AWS
   * API Reference</a></p>
   */
  class Listener
  {
  public:
    AWS_ELASTICLOADBALANCINGV2_API Listener() = default;
    AWS_ELASTICLOADBALANCINGV2_API Listener(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_ELASTICLOADBALANCINGV2_API Listener& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    AWS_ELASTICLOADBALANCINGV2_API void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    AWS_ELASTICLOADBALANCINGV2_API void OutputToStream(Aws::OStream& oStream, const char* location) const;


    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the listener.</p>
     */
    inline const Aws::String& GetListenerArn() const { return m_listenerArn; }
    inline bool ListenerArnHasBeenSet() const { return m_listenerArnHasBeenSet; }
    template<typename ListenerArnT = Aws::String>
    void SetListenerArn(ListenerArnT&& value) { m_listenerArnHasBeenSet = true; m_listenerArn = std::forward<ListenerArnT>(value); }
    template<typename ListenerArnT = Aws::String>
    Listener& WithListenerArn(ListenerArnT&& value) { SetListenerArn(std::forward<ListenerArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the load balancer.</p>
     */
    inline const Aws::String& GetLoadBalancerArn() const { return m_loadBalancerArn; }
    inline bool LoadBalancerArnHasBeenSet() const { return m_loadBalancerArnHasBeenSet; }
    template<typename LoadBalancerArnT = Aws::String>
    void SetLoadBalancerArn(LoadBalancerArnT&& value) { m_loadBalancerArnHasBeenSet = true; m_loadBalancerArn = std::forward<LoadBalancerArnT>(value); }
    template<typename LoadBalancerArnT = Aws::String>
    Listener& WithLoadBalancerArn(LoadBalancerArnT&& value) { SetLoadBalancerArn(std::forward<LoadBalancerArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The port on which the load balancer is listening.</p>
     */
    inline int GetPort() const { return m_port; }
    inline bool PortHasBeenSet() const { return m_portHasBeenSet; }
    inline void SetPort(int value) { m_portHasBeenSet = true; m_port = value; }
    inline Listener& WithPort(int value) { SetPort(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The protocol for connections from clients to the load balancer.</p>
     */
    inline ProtocolEnum GetProtocol() const { return m_protocol; }
    inline bool ProtocolHasBeenSet() const { return m_protocolHasBeenSet; }
    inline void SetProtocol(ProtocolEnum value) { m_protocolHasBeenSet = true; m_protocol = value; }
    inline Listener& WithProtocol(ProtocolEnum value) { SetProtocol(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>[HTTPS or TLS listener] The default certificate for the listener.</p>
     */
    inline const Aws::Vector<Certificate>& GetCertificates() const { return m_certificates; }
    inline bool CertificatesHasBeenSet() const { return m_certificatesHasBeenSet; }
    template<typename CertificatesT = Aws::Vector<Certificate>>
    void SetCertificates(CertificatesT&& value) { m_certificatesHasBeenSet = true; m_certificates = std::forward<CertificatesT>(value); }
    template<typename CertificatesT = Aws::Vector<Certificate>>
    Listener& WithCertificates(CertificatesT&& value) { SetCertificates(std::forward<CertificatesT>(value)); return *this;}
    template<typename CertificatesT = Certificate>
    Listener& AddCertificates(CertificatesT&& value) { m_certificatesHasBeenSet = true; m_certificates.emplace_back(std::forward<CertificatesT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>[HTTPS or TLS listener] The security policy that defines which protocols and
     * ciphers are supported.</p>
     */
    inline const Aws::String& GetSslPolicy() const { return m_sslPolicy; }
    inline bool SslPolicyHasBeenSet() const { return m_sslPolicyHasBeenSet; }
    template<typename SslPolicyT = Aws::String>
    void SetSslPolicy(SslPolicyT&& value) { m_sslPolicyHasBeenSet = true; m_sslPolicy = std::forward<SslPolicyT>(value); }
    template<typename SslPolicyT = Aws::String>
    Listener& WithSslPolicy(SslPolicyT&& value) { SetSslPolicy(std::forward<SslPolicyT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The default actions for the listener.</p>
     */
    inline const Aws::Vector<Action>& GetDefaultActions() const { return m_defaultActions; }
    inline bool DefaultActionsHasBeenSet() const { return m_defaultActionsHasBeenSet; }
    template<typename DefaultActionsT = Aws::Vector<Action>>
    void SetDefaultActions(DefaultActionsT&& value) { m_defaultActionsHasBeenSet = true; m_defaultActions = std::forward<DefaultActionsT>(value); }
    template<typename DefaultActionsT = Aws::Vector<Action>>
    Listener& WithDefaultActions(DefaultActionsT&& value) { SetDefaultActions(std::forward<DefaultActionsT>(value)); return *this;}
    template<typename DefaultActionsT = Action>
    Listener& AddDefaultActions(DefaultActionsT&& value) { m_defaultActionsHasBeenSet = true; m_defaultActions.emplace_back(std::forward<DefaultActionsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>[TLS listener] The name of the Application-Layer Protocol Negotiation (ALPN)
     * policy.</p>
     */
    inline const Aws::Vector<Aws::String>& GetAlpnPolicy() const { return m_alpnPolicy; }
    inline bool AlpnPolicyHasBeenSet() const { return m_alpnPolicyHasBeenSet; }
    template<typename AlpnPolicyT = Aws::Vector<Aws::String>>
    void SetAlpnPolicy(AlpnPolicyT&& value) { m_alpnPolicyHasBeenSet = true; m_alpnPolicy = std::forward<AlpnPolicyT>(value); }
    template<typename AlpnPolicyT = Aws::Vector<Aws::String>>
    Listener& WithAlpnPolicy(AlpnPolicyT&& value) { SetAlpnPolicy(std::forward<AlpnPolicyT>(value)); return *this;}
    template<typename AlpnPolicyT = Aws::String>
    Listener& AddAlpnPolicy(AlpnPolicyT&& value) { m_alpnPolicyHasBeenSet = true; m_alpnPolicy.emplace_back(std::forward<AlpnPolicyT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The mutual authentication configuration information.</p>
     */
    inline const MutualAuthenticationAttributes& GetMutualAuthentication() const { return m_mutualAuthentication; }
    inline bool MutualAuthenticationHasBeenSet() const { return m_mutualAuthenticationHasBeenSet; }
    template<typename MutualAuthenticationT = MutualAuthenticationAttributes>
    void SetMutualAuthentication(MutualAuthenticationT&& value) { m_mutualAuthenticationHasBeenSet = true; m_mutualAuthentication = std::forward<MutualAuthenticationT>(value); }
    template<typename MutualAuthenticationT = MutualAuthenticationAttributes>
    Listener& WithMutualAuthentication(MutualAuthenticationT&& value) { SetMutualAuthentication(std::forward<MutualAuthenticationT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_listenerArn;
    bool m_listenerArnHasBeenSet = false;

    Aws::String m_loadBalancerArn;
    bool m_loadBalancerArnHasBeenSet = false;

    int m_port{0};
    bool m_portHasBeenSet = false;

    ProtocolEnum m_protocol{ProtocolEnum::NOT_SET};
    bool m_protocolHasBeenSet = false;

    Aws::Vector<Certificate> m_certificates;
    bool m_certificatesHasBeenSet = false;

    Aws::String m_sslPolicy;
    bool m_sslPolicyHasBeenSet = false;

    Aws::Vector<Action> m_defaultActions;
    bool m_defaultActionsHasBeenSet = false;

    Aws::Vector<Aws::String> m_alpnPolicy;
    bool m_alpnPolicyHasBeenSet = false;

    MutualAuthenticationAttributes m_mutualAuthentication;
    bool m_mutualAuthenticationHasBeenSet = false;
  };

} // namespace Model
} // namespace ElasticLoadBalancingv2
} // namespace Aws
