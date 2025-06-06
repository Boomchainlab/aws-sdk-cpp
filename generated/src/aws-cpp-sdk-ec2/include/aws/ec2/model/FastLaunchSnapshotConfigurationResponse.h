﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ec2/EC2_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSStreamFwd.h>

namespace Aws
{
namespace Utils
{
namespace Xml
{
  class XmlNode;
} // namespace Xml
} // namespace Utils
namespace EC2
{
namespace Model
{

  /**
   * <p>Configuration settings for creating and managing pre-provisioned snapshots
   * for a Windows fast launch enabled Windows AMI.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/FastLaunchSnapshotConfigurationResponse">AWS
   * API Reference</a></p>
   */
  class FastLaunchSnapshotConfigurationResponse
  {
  public:
    AWS_EC2_API FastLaunchSnapshotConfigurationResponse() = default;
    AWS_EC2_API FastLaunchSnapshotConfigurationResponse(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_EC2_API FastLaunchSnapshotConfigurationResponse& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    AWS_EC2_API void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    AWS_EC2_API void OutputToStream(Aws::OStream& oStream, const char* location) const;


    ///@{
    /**
     * <p>The number of pre-provisioned snapshots requested to keep on hand for a
     * Windows fast launch enabled AMI.</p>
     */
    inline int GetTargetResourceCount() const { return m_targetResourceCount; }
    inline bool TargetResourceCountHasBeenSet() const { return m_targetResourceCountHasBeenSet; }
    inline void SetTargetResourceCount(int value) { m_targetResourceCountHasBeenSet = true; m_targetResourceCount = value; }
    inline FastLaunchSnapshotConfigurationResponse& WithTargetResourceCount(int value) { SetTargetResourceCount(value); return *this;}
    ///@}
  private:

    int m_targetResourceCount{0};
    bool m_targetResourceCountHasBeenSet = false;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
