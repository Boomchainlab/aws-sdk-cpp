﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ec2/EC2_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSStreamFwd.h>

namespace Aws
{
namespace Utils
{
namespace Xml
{
  class XmlNode;
} // namespace Xml
} // namespace Utils
namespace EC2
{
namespace Model
{

  /**
   * <p>Describes the VPC peering connection options.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/PeeringConnectionOptions">AWS
   * API Reference</a></p>
   */
  class PeeringConnectionOptions
  {
  public:
    AWS_EC2_API PeeringConnectionOptions() = default;
    AWS_EC2_API PeeringConnectionOptions(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_EC2_API PeeringConnectionOptions& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    AWS_EC2_API void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    AWS_EC2_API void OutputToStream(Aws::OStream& oStream, const char* location) const;


    ///@{
    /**
     * <p>If true, the public DNS hostnames of instances in the specified VPC resolve
     * to private IP addresses when queried from instances in the peer VPC.</p>
     */
    inline bool GetAllowDnsResolutionFromRemoteVpc() const { return m_allowDnsResolutionFromRemoteVpc; }
    inline bool AllowDnsResolutionFromRemoteVpcHasBeenSet() const { return m_allowDnsResolutionFromRemoteVpcHasBeenSet; }
    inline void SetAllowDnsResolutionFromRemoteVpc(bool value) { m_allowDnsResolutionFromRemoteVpcHasBeenSet = true; m_allowDnsResolutionFromRemoteVpc = value; }
    inline PeeringConnectionOptions& WithAllowDnsResolutionFromRemoteVpc(bool value) { SetAllowDnsResolutionFromRemoteVpc(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Deprecated.</p>
     */
    inline bool GetAllowEgressFromLocalClassicLinkToRemoteVpc() const { return m_allowEgressFromLocalClassicLinkToRemoteVpc; }
    inline bool AllowEgressFromLocalClassicLinkToRemoteVpcHasBeenSet() const { return m_allowEgressFromLocalClassicLinkToRemoteVpcHasBeenSet; }
    inline void SetAllowEgressFromLocalClassicLinkToRemoteVpc(bool value) { m_allowEgressFromLocalClassicLinkToRemoteVpcHasBeenSet = true; m_allowEgressFromLocalClassicLinkToRemoteVpc = value; }
    inline PeeringConnectionOptions& WithAllowEgressFromLocalClassicLinkToRemoteVpc(bool value) { SetAllowEgressFromLocalClassicLinkToRemoteVpc(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Deprecated.</p>
     */
    inline bool GetAllowEgressFromLocalVpcToRemoteClassicLink() const { return m_allowEgressFromLocalVpcToRemoteClassicLink; }
    inline bool AllowEgressFromLocalVpcToRemoteClassicLinkHasBeenSet() const { return m_allowEgressFromLocalVpcToRemoteClassicLinkHasBeenSet; }
    inline void SetAllowEgressFromLocalVpcToRemoteClassicLink(bool value) { m_allowEgressFromLocalVpcToRemoteClassicLinkHasBeenSet = true; m_allowEgressFromLocalVpcToRemoteClassicLink = value; }
    inline PeeringConnectionOptions& WithAllowEgressFromLocalVpcToRemoteClassicLink(bool value) { SetAllowEgressFromLocalVpcToRemoteClassicLink(value); return *this;}
    ///@}
  private:

    bool m_allowDnsResolutionFromRemoteVpc{false};
    bool m_allowDnsResolutionFromRemoteVpcHasBeenSet = false;

    bool m_allowEgressFromLocalClassicLinkToRemoteVpc{false};
    bool m_allowEgressFromLocalClassicLinkToRemoteVpcHasBeenSet = false;

    bool m_allowEgressFromLocalVpcToRemoteClassicLink{false};
    bool m_allowEgressFromLocalVpcToRemoteClassicLinkHasBeenSet = false;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
