﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/batch/Batch_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/batch/model/ResourceType.h>
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
namespace Batch
{
namespace Model
{

  /**
   * <p>The type and amount of a resource to assign to a container. The supported
   * resources include <code>GPU</code>, <code>MEMORY</code>, and
   * <code>VCPU</code>.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/batch-2016-08-10/ResourceRequirement">AWS
   * API Reference</a></p>
   */
  class ResourceRequirement
  {
  public:
    AWS_BATCH_API ResourceRequirement() = default;
    AWS_BATCH_API ResourceRequirement(Aws::Utils::Json::JsonView jsonValue);
    AWS_BATCH_API ResourceRequirement& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_BATCH_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The quantity of the specified resource to reserve for the container. The
     * values vary based on the <code>type</code> specified.</p> <dl>
     * <dt>type="GPU"</dt> <dd> <p>The number of physical GPUs to reserve for the
     * container. Make sure that the number of GPUs reserved for all containers in a
     * job doesn't exceed the number of available GPUs on the compute resource that the
     * job is launched on.</p>  <p>GPUs aren't available for jobs that are
     * running on Fargate resources.</p>  </dd> <dt>type="MEMORY"</dt> <dd>
     * <p>The memory hard limit (in MiB) present to the container. This parameter is
     * supported for jobs that are running on Amazon EC2 resources. If your container
     * attempts to exceed the memory specified, the container is terminated. This
     * parameter maps to <code>Memory</code> in the <a
     * href="https://docs.docker.com/engine/api/v1.23/#create-a-container">Create a
     * container</a> section of the <a
     * href="https://docs.docker.com/engine/api/v1.23/">Docker Remote API</a> and the
     * <code>--memory</code> option to <a
     * href="https://docs.docker.com/engine/reference/run/">docker run</a>. You must
     * specify at least 4 MiB of memory for a job. This is required but can be
     * specified in several places for multi-node parallel (MNP) jobs. It must be
     * specified for each node at least once. This parameter maps to
     * <code>Memory</code> in the <a
     * href="https://docs.docker.com/engine/api/v1.23/#create-a-container">Create a
     * container</a> section of the <a
     * href="https://docs.docker.com/engine/api/v1.23/">Docker Remote API</a> and the
     * <code>--memory</code> option to <a
     * href="https://docs.docker.com/engine/reference/run/">docker run</a>.</p> 
     * <p>If you're trying to maximize your resource utilization by providing your jobs
     * as much memory as possible for a particular instance type, see <a
     * href="https://docs.aws.amazon.com/batch/latest/userguide/memory-management.html">Memory
     * management</a> in the <i>Batch User Guide</i>.</p>  <p>For jobs that are
     * running on Fargate resources, then <code>value</code> is the hard limit (in
     * MiB), and must match one of the supported values and the <code>VCPU</code>
     * values must be one of the values supported for that memory value.</p> <dl>
     * <dt>value = 512</dt> <dd> <p> <code>VCPU</code> = 0.25</p> </dd> <dt>value =
     * 1024</dt> <dd> <p> <code>VCPU</code> = 0.25 or 0.5</p> </dd> <dt>value =
     * 2048</dt> <dd> <p> <code>VCPU</code> = 0.25, 0.5, or 1</p> </dd> <dt>value =
     * 3072</dt> <dd> <p> <code>VCPU</code> = 0.5, or 1</p> </dd> <dt>value = 4096</dt>
     * <dd> <p> <code>VCPU</code> = 0.5, 1, or 2</p> </dd> <dt>value = 5120, 6144, or
     * 7168</dt> <dd> <p> <code>VCPU</code> = 1 or 2</p> </dd> <dt>value = 8192</dt>
     * <dd> <p> <code>VCPU</code> = 1, 2, or 4</p> </dd> <dt>value = 9216, 10240,
     * 11264, 12288, 13312, 14336, or 15360</dt> <dd> <p> <code>VCPU</code> = 2 or
     * 4</p> </dd> <dt>value = 16384</dt> <dd> <p> <code>VCPU</code> = 2, 4, or 8</p>
     * </dd> <dt>value = 17408, 18432, 19456, 21504, 22528, 23552, 25600, 26624, 27648,
     * 29696, or 30720</dt> <dd> <p> <code>VCPU</code> = 4</p> </dd> <dt>value = 20480,
     * 24576, or 28672</dt> <dd> <p> <code>VCPU</code> = 4 or 8</p> </dd> <dt>value =
     * 36864, 45056, 53248, or 61440</dt> <dd> <p> <code>VCPU</code> = 8</p> </dd>
     * <dt>value = 32768, 40960, 49152, or 57344</dt> <dd> <p> <code>VCPU</code> = 8 or
     * 16</p> </dd> <dt>value = 65536, 73728, 81920, 90112, 98304, 106496, 114688, or
     * 122880</dt> <dd> <p> <code>VCPU</code> = 16</p> </dd> </dl> </dd>
     * <dt>type="VCPU"</dt> <dd> <p>The number of vCPUs reserved for the container.
     * This parameter maps to <code>CpuShares</code> in the <a
     * href="https://docs.docker.com/engine/api/v1.23/#create-a-container">Create a
     * container</a> section of the <a
     * href="https://docs.docker.com/engine/api/v1.23/">Docker Remote API</a> and the
     * <code>--cpu-shares</code> option to <a
     * href="https://docs.docker.com/engine/reference/run/">docker run</a>. Each vCPU
     * is equivalent to 1,024 CPU shares. For Amazon EC2 resources, you must specify at
     * least one vCPU. This is required but can be specified in several places; it must
     * be specified for each node at least once.</p> <p>The default for the Fargate
     * On-Demand vCPU resource count quota is 6 vCPUs. For more information about
     * Fargate quotas, see <a
     * href="https://docs.aws.amazon.com/general/latest/gr/ecs-service.html#service-quotas-fargate">Fargate
     * quotas</a> in the <i>Amazon Web Services General Reference</i>.</p> <p>For jobs
     * that are running on Fargate resources, then <code>value</code> must match one of
     * the supported values and the <code>MEMORY</code> values must be one of the
     * values supported for that <code>VCPU</code> value. The supported values are
     * 0.25, 0.5, 1, 2, 4, 8, and 16</p> <dl> <dt>value = 0.25</dt> <dd> <p>
     * <code>MEMORY</code> = 512, 1024, or 2048</p> </dd> <dt>value = 0.5</dt> <dd> <p>
     * <code>MEMORY</code> = 1024, 2048, 3072, or 4096</p> </dd> <dt>value = 1</dt>
     * <dd> <p> <code>MEMORY</code> = 2048, 3072, 4096, 5120, 6144, 7168, or 8192</p>
     * </dd> <dt>value = 2</dt> <dd> <p> <code>MEMORY</code> = 4096, 5120, 6144, 7168,
     * 8192, 9216, 10240, 11264, 12288, 13312, 14336, 15360, or 16384</p> </dd>
     * <dt>value = 4</dt> <dd> <p> <code>MEMORY</code> = 8192, 9216, 10240, 11264,
     * 12288, 13312, 14336, 15360, 16384, 17408, 18432, 19456, 20480, 21504, 22528,
     * 23552, 24576, 25600, 26624, 27648, 28672, 29696, or 30720</p> </dd> <dt>value =
     * 8</dt> <dd> <p> <code>MEMORY</code> = 16384, 20480, 24576, 28672, 32768, 36864,
     * 40960, 45056, 49152, 53248, 57344, or 61440 </p> </dd> <dt>value = 16</dt> <dd>
     * <p> <code>MEMORY</code> = 32768, 40960, 49152, 57344, 65536, 73728, 81920,
     * 90112, 98304, 106496, 114688, or 122880 </p> </dd> </dl> </dd> </dl>
     */
    inline const Aws::String& GetValue() const { return m_value; }
    inline bool ValueHasBeenSet() const { return m_valueHasBeenSet; }
    template<typename ValueT = Aws::String>
    void SetValue(ValueT&& value) { m_valueHasBeenSet = true; m_value = std::forward<ValueT>(value); }
    template<typename ValueT = Aws::String>
    ResourceRequirement& WithValue(ValueT&& value) { SetValue(std::forward<ValueT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The type of resource to assign to a container. The supported resources
     * include <code>GPU</code>, <code>MEMORY</code>, and <code>VCPU</code>.</p>
     */
    inline ResourceType GetType() const { return m_type; }
    inline bool TypeHasBeenSet() const { return m_typeHasBeenSet; }
    inline void SetType(ResourceType value) { m_typeHasBeenSet = true; m_type = value; }
    inline ResourceRequirement& WithType(ResourceType value) { SetType(value); return *this;}
    ///@}
  private:

    Aws::String m_value;
    bool m_valueHasBeenSet = false;

    ResourceType m_type{ResourceType::NOT_SET};
    bool m_typeHasBeenSet = false;
  };

} // namespace Model
} // namespace Batch
} // namespace Aws
