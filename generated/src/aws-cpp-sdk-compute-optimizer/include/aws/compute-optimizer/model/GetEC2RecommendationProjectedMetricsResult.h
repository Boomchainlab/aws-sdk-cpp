﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/compute-optimizer/ComputeOptimizer_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/compute-optimizer/model/RecommendedOptionProjectedMetric.h>
#include <utility>

namespace Aws
{
template<typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils
{
namespace Json
{
  class JsonValue;
} // namespace Json
} // namespace Utils
namespace ComputeOptimizer
{
namespace Model
{
  class GetEC2RecommendationProjectedMetricsResult
  {
  public:
    AWS_COMPUTEOPTIMIZER_API GetEC2RecommendationProjectedMetricsResult() = default;
    AWS_COMPUTEOPTIMIZER_API GetEC2RecommendationProjectedMetricsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_COMPUTEOPTIMIZER_API GetEC2RecommendationProjectedMetricsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>An array of objects that describes projected metrics.</p>
     */
    inline const Aws::Vector<RecommendedOptionProjectedMetric>& GetRecommendedOptionProjectedMetrics() const { return m_recommendedOptionProjectedMetrics; }
    template<typename RecommendedOptionProjectedMetricsT = Aws::Vector<RecommendedOptionProjectedMetric>>
    void SetRecommendedOptionProjectedMetrics(RecommendedOptionProjectedMetricsT&& value) { m_recommendedOptionProjectedMetricsHasBeenSet = true; m_recommendedOptionProjectedMetrics = std::forward<RecommendedOptionProjectedMetricsT>(value); }
    template<typename RecommendedOptionProjectedMetricsT = Aws::Vector<RecommendedOptionProjectedMetric>>
    GetEC2RecommendationProjectedMetricsResult& WithRecommendedOptionProjectedMetrics(RecommendedOptionProjectedMetricsT&& value) { SetRecommendedOptionProjectedMetrics(std::forward<RecommendedOptionProjectedMetricsT>(value)); return *this;}
    template<typename RecommendedOptionProjectedMetricsT = RecommendedOptionProjectedMetric>
    GetEC2RecommendationProjectedMetricsResult& AddRecommendedOptionProjectedMetrics(RecommendedOptionProjectedMetricsT&& value) { m_recommendedOptionProjectedMetricsHasBeenSet = true; m_recommendedOptionProjectedMetrics.emplace_back(std::forward<RecommendedOptionProjectedMetricsT>(value)); return *this; }
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    GetEC2RecommendationProjectedMetricsResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<RecommendedOptionProjectedMetric> m_recommendedOptionProjectedMetrics;
    bool m_recommendedOptionProjectedMetricsHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace ComputeOptimizer
} // namespace Aws
