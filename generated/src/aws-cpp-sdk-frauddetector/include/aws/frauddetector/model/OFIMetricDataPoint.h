﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/frauddetector/FraudDetector_EXPORTS.h>

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
namespace FraudDetector
{
namespace Model
{

  /**
   * <p> The Online Fraud Insights (OFI) model performance metrics data points.
   * </p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/frauddetector-2019-11-15/OFIMetricDataPoint">AWS
   * API Reference</a></p>
   */
  class OFIMetricDataPoint
  {
  public:
    AWS_FRAUDDETECTOR_API OFIMetricDataPoint() = default;
    AWS_FRAUDDETECTOR_API OFIMetricDataPoint(Aws::Utils::Json::JsonView jsonValue);
    AWS_FRAUDDETECTOR_API OFIMetricDataPoint& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_FRAUDDETECTOR_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p> The false positive rate. This is the percentage of total legitimate events
     * that are incorrectly predicted as fraud. </p>
     */
    inline double GetFpr() const { return m_fpr; }
    inline bool FprHasBeenSet() const { return m_fprHasBeenSet; }
    inline void SetFpr(double value) { m_fprHasBeenSet = true; m_fpr = value; }
    inline OFIMetricDataPoint& WithFpr(double value) { SetFpr(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> The percentage of fraud events correctly predicted as fraudulent as compared
     * to all events predicted as fraudulent. </p>
     */
    inline double GetPrecision() const { return m_precision; }
    inline bool PrecisionHasBeenSet() const { return m_precisionHasBeenSet; }
    inline void SetPrecision(double value) { m_precisionHasBeenSet = true; m_precision = value; }
    inline OFIMetricDataPoint& WithPrecision(double value) { SetPrecision(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> The true positive rate. This is the percentage of total fraud the model
     * detects. Also known as capture rate. </p>
     */
    inline double GetTpr() const { return m_tpr; }
    inline bool TprHasBeenSet() const { return m_tprHasBeenSet; }
    inline void SetTpr(double value) { m_tprHasBeenSet = true; m_tpr = value; }
    inline OFIMetricDataPoint& WithTpr(double value) { SetTpr(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> The model threshold that specifies an acceptable fraud capture rate. For
     * example, a threshold of 500 means any model score 500 or above is labeled as
     * fraud. </p>
     */
    inline double GetThreshold() const { return m_threshold; }
    inline bool ThresholdHasBeenSet() const { return m_thresholdHasBeenSet; }
    inline void SetThreshold(double value) { m_thresholdHasBeenSet = true; m_threshold = value; }
    inline OFIMetricDataPoint& WithThreshold(double value) { SetThreshold(value); return *this;}
    ///@}
  private:

    double m_fpr{0.0};
    bool m_fprHasBeenSet = false;

    double m_precision{0.0};
    bool m_precisionHasBeenSet = false;

    double m_tpr{0.0};
    bool m_tprHasBeenSet = false;

    double m_threshold{0.0};
    bool m_thresholdHasBeenSet = false;
  };

} // namespace Model
} // namespace FraudDetector
} // namespace Aws
