﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/elasticmapreduce/EMR_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/elasticmapreduce/model/EbsBlockDeviceConfig.h>
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
namespace EMR
{
namespace Model
{

  /**
   * <p>The Amazon EBS configuration of a cluster instance.</p><p><h3>See Also:</h3> 
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/elasticmapreduce-2009-03-31/EbsConfiguration">AWS
   * API Reference</a></p>
   */
  class EbsConfiguration
  {
  public:
    AWS_EMR_API EbsConfiguration() = default;
    AWS_EMR_API EbsConfiguration(Aws::Utils::Json::JsonView jsonValue);
    AWS_EMR_API EbsConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_EMR_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>An array of Amazon EBS volume specifications attached to a cluster
     * instance.</p>
     */
    inline const Aws::Vector<EbsBlockDeviceConfig>& GetEbsBlockDeviceConfigs() const { return m_ebsBlockDeviceConfigs; }
    inline bool EbsBlockDeviceConfigsHasBeenSet() const { return m_ebsBlockDeviceConfigsHasBeenSet; }
    template<typename EbsBlockDeviceConfigsT = Aws::Vector<EbsBlockDeviceConfig>>
    void SetEbsBlockDeviceConfigs(EbsBlockDeviceConfigsT&& value) { m_ebsBlockDeviceConfigsHasBeenSet = true; m_ebsBlockDeviceConfigs = std::forward<EbsBlockDeviceConfigsT>(value); }
    template<typename EbsBlockDeviceConfigsT = Aws::Vector<EbsBlockDeviceConfig>>
    EbsConfiguration& WithEbsBlockDeviceConfigs(EbsBlockDeviceConfigsT&& value) { SetEbsBlockDeviceConfigs(std::forward<EbsBlockDeviceConfigsT>(value)); return *this;}
    template<typename EbsBlockDeviceConfigsT = EbsBlockDeviceConfig>
    EbsConfiguration& AddEbsBlockDeviceConfigs(EbsBlockDeviceConfigsT&& value) { m_ebsBlockDeviceConfigsHasBeenSet = true; m_ebsBlockDeviceConfigs.emplace_back(std::forward<EbsBlockDeviceConfigsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Indicates whether an Amazon EBS volume is EBS-optimized. The default is
     * false. You should explicitly set this value to true to enable the Amazon
     * EBS-optimized setting for an EC2 instance.</p>
     */
    inline bool GetEbsOptimized() const { return m_ebsOptimized; }
    inline bool EbsOptimizedHasBeenSet() const { return m_ebsOptimizedHasBeenSet; }
    inline void SetEbsOptimized(bool value) { m_ebsOptimizedHasBeenSet = true; m_ebsOptimized = value; }
    inline EbsConfiguration& WithEbsOptimized(bool value) { SetEbsOptimized(value); return *this;}
    ///@}
  private:

    Aws::Vector<EbsBlockDeviceConfig> m_ebsBlockDeviceConfigs;
    bool m_ebsBlockDeviceConfigsHasBeenSet = false;

    bool m_ebsOptimized{false};
    bool m_ebsOptimizedHasBeenSet = false;
  };

} // namespace Model
} // namespace EMR
} // namespace Aws
