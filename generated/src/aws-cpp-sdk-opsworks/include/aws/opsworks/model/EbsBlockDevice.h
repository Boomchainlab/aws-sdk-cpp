﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/opsworks/OpsWorks_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/opsworks/model/VolumeType.h>
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
namespace OpsWorks
{
namespace Model
{

  /**
   * <p>Describes an Amazon EBS volume. This data type maps directly to the Amazon
   * EC2 <a
   * href="https://docs.aws.amazon.com/AWSEC2/latest/APIReference/API_EbsBlockDevice.html">EbsBlockDevice</a>
   * data type.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/opsworks-2013-02-18/EbsBlockDevice">AWS
   * API Reference</a></p>
   */
  class EbsBlockDevice
  {
  public:
    AWS_OPSWORKS_API EbsBlockDevice() = default;
    AWS_OPSWORKS_API EbsBlockDevice(Aws::Utils::Json::JsonView jsonValue);
    AWS_OPSWORKS_API EbsBlockDevice& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_OPSWORKS_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The snapshot ID.</p>
     */
    inline const Aws::String& GetSnapshotId() const { return m_snapshotId; }
    inline bool SnapshotIdHasBeenSet() const { return m_snapshotIdHasBeenSet; }
    template<typename SnapshotIdT = Aws::String>
    void SetSnapshotId(SnapshotIdT&& value) { m_snapshotIdHasBeenSet = true; m_snapshotId = std::forward<SnapshotIdT>(value); }
    template<typename SnapshotIdT = Aws::String>
    EbsBlockDevice& WithSnapshotId(SnapshotIdT&& value) { SetSnapshotId(std::forward<SnapshotIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The number of I/O operations per second (IOPS) that the volume supports. For
     * more information, see <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/APIReference/API_EbsBlockDevice.html">EbsBlockDevice</a>.</p>
     */
    inline int GetIops() const { return m_iops; }
    inline bool IopsHasBeenSet() const { return m_iopsHasBeenSet; }
    inline void SetIops(int value) { m_iopsHasBeenSet = true; m_iops = value; }
    inline EbsBlockDevice& WithIops(int value) { SetIops(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The volume size, in GiB. For more information, see <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/APIReference/API_EbsBlockDevice.html">EbsBlockDevice</a>.</p>
     */
    inline int GetVolumeSize() const { return m_volumeSize; }
    inline bool VolumeSizeHasBeenSet() const { return m_volumeSizeHasBeenSet; }
    inline void SetVolumeSize(int value) { m_volumeSizeHasBeenSet = true; m_volumeSize = value; }
    inline EbsBlockDevice& WithVolumeSize(int value) { SetVolumeSize(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The volume type. <code>gp2</code> for General Purpose (SSD) volumes,
     * <code>io1</code> for Provisioned IOPS (SSD) volumes, <code>st1</code> for
     * Throughput Optimized hard disk drives (HDD), <code>sc1</code> for Cold HDD,and
     * <code>standard</code> for Magnetic volumes.</p> <p>If you specify the
     * <code>io1</code> volume type, you must also specify a value for the
     * <code>Iops</code> attribute. The maximum ratio of provisioned IOPS to requested
     * volume size (in GiB) is 50:1. Amazon Web Services uses the default volume size
     * (in GiB) specified in the AMI attributes to set IOPS to 50 x (volume size).</p>
     */
    inline VolumeType GetVolumeType() const { return m_volumeType; }
    inline bool VolumeTypeHasBeenSet() const { return m_volumeTypeHasBeenSet; }
    inline void SetVolumeType(VolumeType value) { m_volumeTypeHasBeenSet = true; m_volumeType = value; }
    inline EbsBlockDevice& WithVolumeType(VolumeType value) { SetVolumeType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Whether the volume is deleted on instance termination.</p>
     */
    inline bool GetDeleteOnTermination() const { return m_deleteOnTermination; }
    inline bool DeleteOnTerminationHasBeenSet() const { return m_deleteOnTerminationHasBeenSet; }
    inline void SetDeleteOnTermination(bool value) { m_deleteOnTerminationHasBeenSet = true; m_deleteOnTermination = value; }
    inline EbsBlockDevice& WithDeleteOnTermination(bool value) { SetDeleteOnTermination(value); return *this;}
    ///@}
  private:

    Aws::String m_snapshotId;
    bool m_snapshotIdHasBeenSet = false;

    int m_iops{0};
    bool m_iopsHasBeenSet = false;

    int m_volumeSize{0};
    bool m_volumeSizeHasBeenSet = false;

    VolumeType m_volumeType{VolumeType::NOT_SET};
    bool m_volumeTypeHasBeenSet = false;

    bool m_deleteOnTermination{false};
    bool m_deleteOnTerminationHasBeenSet = false;
  };

} // namespace Model
} // namespace OpsWorks
} // namespace Aws
