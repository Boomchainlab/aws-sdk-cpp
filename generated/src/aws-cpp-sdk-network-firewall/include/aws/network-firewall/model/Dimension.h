﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/network-firewall/NetworkFirewall_EXPORTS.h>
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
namespace NetworkFirewall
{
namespace Model
{

  /**
   * <p>The value to use in an Amazon CloudWatch custom metric dimension. This is
   * used in the <code>PublishMetrics</code> <a>CustomAction</a>. A CloudWatch custom
   * metric dimension is a name/value pair that's part of the identity of a metric.
   * </p> <p>Network Firewall sets the dimension name to <code>CustomAction</code>
   * and you provide the dimension value. </p> <p>For more information about
   * CloudWatch custom metric dimensions, see <a
   * href="https://docs.aws.amazon.com/AmazonCloudWatch/latest/monitoring/publishingMetrics.html#usingDimensions">Publishing
   * Custom Metrics</a> in the <a
   * href="https://docs.aws.amazon.com/AmazonCloudWatch/latest/monitoring/WhatIsCloudWatch.html">Amazon
   * CloudWatch User Guide</a>.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/network-firewall-2020-11-12/Dimension">AWS
   * API Reference</a></p>
   */
  class Dimension
  {
  public:
    AWS_NETWORKFIREWALL_API Dimension() = default;
    AWS_NETWORKFIREWALL_API Dimension(Aws::Utils::Json::JsonView jsonValue);
    AWS_NETWORKFIREWALL_API Dimension& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_NETWORKFIREWALL_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The value to use in the custom metric dimension.</p>
     */
    inline const Aws::String& GetValue() const { return m_value; }
    inline bool ValueHasBeenSet() const { return m_valueHasBeenSet; }
    template<typename ValueT = Aws::String>
    void SetValue(ValueT&& value) { m_valueHasBeenSet = true; m_value = std::forward<ValueT>(value); }
    template<typename ValueT = Aws::String>
    Dimension& WithValue(ValueT&& value) { SetValue(std::forward<ValueT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_value;
    bool m_valueHasBeenSet = false;
  };

} // namespace Model
} // namespace NetworkFirewall
} // namespace Aws
