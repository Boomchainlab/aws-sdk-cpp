﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/cost-optimization-hub/CostOptimizationHub_EXPORTS.h>
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
namespace CostOptimizationHub
{
namespace Model
{

  /**
   * <p>The configuration for the EC2 Auto Scaling group with mixed instance
   * types.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/cost-optimization-hub-2022-07-26/MixedInstanceConfiguration">AWS
   * API Reference</a></p>
   */
  class MixedInstanceConfiguration
  {
  public:
    AWS_COSTOPTIMIZATIONHUB_API MixedInstanceConfiguration() = default;
    AWS_COSTOPTIMIZATIONHUB_API MixedInstanceConfiguration(Aws::Utils::Json::JsonView jsonValue);
    AWS_COSTOPTIMIZATIONHUB_API MixedInstanceConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_COSTOPTIMIZATIONHUB_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The instance type of the configuration.</p>
     */
    inline const Aws::String& GetType() const { return m_type; }
    inline bool TypeHasBeenSet() const { return m_typeHasBeenSet; }
    template<typename TypeT = Aws::String>
    void SetType(TypeT&& value) { m_typeHasBeenSet = true; m_type = std::forward<TypeT>(value); }
    template<typename TypeT = Aws::String>
    MixedInstanceConfiguration& WithType(TypeT&& value) { SetType(std::forward<TypeT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_type;
    bool m_typeHasBeenSet = false;
  };

} // namespace Model
} // namespace CostOptimizationHub
} // namespace Aws
