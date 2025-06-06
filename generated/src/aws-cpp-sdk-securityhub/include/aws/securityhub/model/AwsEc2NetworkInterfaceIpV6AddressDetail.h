﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/securityhub/SecurityHub_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace Utils
{
namespace Json
{
  class JsonValue;
  class JsonView;
} // namespace Json
} // namespace Utils
namespace SecurityHub
{
namespace Model
{

  /**
   * <p>Provides information about an IPV6 address that is associated with the
   * network interface.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/securityhub-2018-10-26/AwsEc2NetworkInterfaceIpV6AddressDetail">AWS
   * API Reference</a></p>
   */
  class AwsEc2NetworkInterfaceIpV6AddressDetail
  {
  public:
    AWS_SECURITYHUB_API AwsEc2NetworkInterfaceIpV6AddressDetail() = default;
    AWS_SECURITYHUB_API AwsEc2NetworkInterfaceIpV6AddressDetail(Aws::Utils::Json::JsonView jsonValue);
    AWS_SECURITYHUB_API AwsEc2NetworkInterfaceIpV6AddressDetail& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SECURITYHUB_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The IPV6 address.</p>
     */
    inline const Aws::String& GetIpV6Address() const { return m_ipV6Address; }
    inline bool IpV6AddressHasBeenSet() const { return m_ipV6AddressHasBeenSet; }
    template<typename IpV6AddressT = Aws::String>
    void SetIpV6Address(IpV6AddressT&& value) { m_ipV6AddressHasBeenSet = true; m_ipV6Address = std::forward<IpV6AddressT>(value); }
    template<typename IpV6AddressT = Aws::String>
    AwsEc2NetworkInterfaceIpV6AddressDetail& WithIpV6Address(IpV6AddressT&& value) { SetIpV6Address(std::forward<IpV6AddressT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_ipV6Address;
    bool m_ipV6AddressHasBeenSet = false;
  };

} // namespace Model
} // namespace SecurityHub
} // namespace Aws
