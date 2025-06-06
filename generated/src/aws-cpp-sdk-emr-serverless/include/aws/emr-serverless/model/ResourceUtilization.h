﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/emr-serverless/EMRServerless_EXPORTS.h>

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
namespace EMRServerless
{
namespace Model
{

  /**
   * <p>The resource utilization for memory, storage, and vCPU for
   * jobs.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/emr-serverless-2021-07-13/ResourceUtilization">AWS
   * API Reference</a></p>
   */
  class ResourceUtilization
  {
  public:
    AWS_EMRSERVERLESS_API ResourceUtilization() = default;
    AWS_EMRSERVERLESS_API ResourceUtilization(Aws::Utils::Json::JsonView jsonValue);
    AWS_EMRSERVERLESS_API ResourceUtilization& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_EMRSERVERLESS_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The aggregated vCPU used per hour from the time the job starts executing
     * until the job is terminated.</p>
     */
    inline double GetVCPUHour() const { return m_vCPUHour; }
    inline bool VCPUHourHasBeenSet() const { return m_vCPUHourHasBeenSet; }
    inline void SetVCPUHour(double value) { m_vCPUHourHasBeenSet = true; m_vCPUHour = value; }
    inline ResourceUtilization& WithVCPUHour(double value) { SetVCPUHour(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The aggregated memory used per hour from the time the job starts executing
     * until the job is terminated.</p>
     */
    inline double GetMemoryGBHour() const { return m_memoryGBHour; }
    inline bool MemoryGBHourHasBeenSet() const { return m_memoryGBHourHasBeenSet; }
    inline void SetMemoryGBHour(double value) { m_memoryGBHourHasBeenSet = true; m_memoryGBHour = value; }
    inline ResourceUtilization& WithMemoryGBHour(double value) { SetMemoryGBHour(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The aggregated storage used per hour from the time the job starts executing
     * until the job is terminated.</p>
     */
    inline double GetStorageGBHour() const { return m_storageGBHour; }
    inline bool StorageGBHourHasBeenSet() const { return m_storageGBHourHasBeenSet; }
    inline void SetStorageGBHour(double value) { m_storageGBHourHasBeenSet = true; m_storageGBHour = value; }
    inline ResourceUtilization& WithStorageGBHour(double value) { SetStorageGBHour(value); return *this;}
    ///@}
  private:

    double m_vCPUHour{0.0};
    bool m_vCPUHourHasBeenSet = false;

    double m_memoryGBHour{0.0};
    bool m_memoryGBHourHasBeenSet = false;

    double m_storageGBHour{0.0};
    bool m_storageGBHourHasBeenSet = false;
  };

} // namespace Model
} // namespace EMRServerless
} // namespace Aws
