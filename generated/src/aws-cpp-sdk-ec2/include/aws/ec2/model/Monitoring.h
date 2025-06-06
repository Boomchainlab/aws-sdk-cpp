﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ec2/EC2_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSStreamFwd.h>
#include <aws/ec2/model/MonitoringState.h>
#include <utility>

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
   * <p>Describes the monitoring of an instance.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/Monitoring">AWS API
   * Reference</a></p>
   */
  class Monitoring
  {
  public:
    AWS_EC2_API Monitoring() = default;
    AWS_EC2_API Monitoring(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_EC2_API Monitoring& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    AWS_EC2_API void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    AWS_EC2_API void OutputToStream(Aws::OStream& oStream, const char* location) const;


    ///@{
    /**
     * <p>Indicates whether detailed monitoring is enabled. Otherwise, basic monitoring
     * is enabled.</p>
     */
    inline MonitoringState GetState() const { return m_state; }
    inline bool StateHasBeenSet() const { return m_stateHasBeenSet; }
    inline void SetState(MonitoringState value) { m_stateHasBeenSet = true; m_state = value; }
    inline Monitoring& WithState(MonitoringState value) { SetState(value); return *this;}
    ///@}
  private:

    MonitoringState m_state{MonitoringState::NOT_SET};
    bool m_stateHasBeenSet = false;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
