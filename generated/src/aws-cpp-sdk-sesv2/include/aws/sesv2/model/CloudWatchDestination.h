﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/sesv2/SESV2_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/sesv2/model/CloudWatchDimensionConfiguration.h>
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
namespace SESV2
{
namespace Model
{

  /**
   * <p>An object that defines an Amazon CloudWatch destination for email events. You
   * can use Amazon CloudWatch to monitor and gain insights on your email sending
   * metrics.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/sesv2-2019-09-27/CloudWatchDestination">AWS
   * API Reference</a></p>
   */
  class CloudWatchDestination
  {
  public:
    AWS_SESV2_API CloudWatchDestination() = default;
    AWS_SESV2_API CloudWatchDestination(Aws::Utils::Json::JsonView jsonValue);
    AWS_SESV2_API CloudWatchDestination& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SESV2_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>An array of objects that define the dimensions to use when you send email
     * events to Amazon CloudWatch.</p>
     */
    inline const Aws::Vector<CloudWatchDimensionConfiguration>& GetDimensionConfigurations() const { return m_dimensionConfigurations; }
    inline bool DimensionConfigurationsHasBeenSet() const { return m_dimensionConfigurationsHasBeenSet; }
    template<typename DimensionConfigurationsT = Aws::Vector<CloudWatchDimensionConfiguration>>
    void SetDimensionConfigurations(DimensionConfigurationsT&& value) { m_dimensionConfigurationsHasBeenSet = true; m_dimensionConfigurations = std::forward<DimensionConfigurationsT>(value); }
    template<typename DimensionConfigurationsT = Aws::Vector<CloudWatchDimensionConfiguration>>
    CloudWatchDestination& WithDimensionConfigurations(DimensionConfigurationsT&& value) { SetDimensionConfigurations(std::forward<DimensionConfigurationsT>(value)); return *this;}
    template<typename DimensionConfigurationsT = CloudWatchDimensionConfiguration>
    CloudWatchDestination& AddDimensionConfigurations(DimensionConfigurationsT&& value) { m_dimensionConfigurationsHasBeenSet = true; m_dimensionConfigurations.emplace_back(std::forward<DimensionConfigurationsT>(value)); return *this; }
    ///@}
  private:

    Aws::Vector<CloudWatchDimensionConfiguration> m_dimensionConfigurations;
    bool m_dimensionConfigurationsHasBeenSet = false;
  };

} // namespace Model
} // namespace SESV2
} // namespace Aws
