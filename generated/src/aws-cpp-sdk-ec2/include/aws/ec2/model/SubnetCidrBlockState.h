﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ec2/EC2_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSStreamFwd.h>
#include <aws/ec2/model/SubnetCidrBlockStateCode.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
   * <p>Describes the state of a CIDR block.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/SubnetCidrBlockState">AWS
   * API Reference</a></p>
   */
  class SubnetCidrBlockState
  {
  public:
    AWS_EC2_API SubnetCidrBlockState() = default;
    AWS_EC2_API SubnetCidrBlockState(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_EC2_API SubnetCidrBlockState& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    AWS_EC2_API void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    AWS_EC2_API void OutputToStream(Aws::OStream& oStream, const char* location) const;


    ///@{
    /**
     * <p>The state of a CIDR block.</p>
     */
    inline SubnetCidrBlockStateCode GetState() const { return m_state; }
    inline bool StateHasBeenSet() const { return m_stateHasBeenSet; }
    inline void SetState(SubnetCidrBlockStateCode value) { m_stateHasBeenSet = true; m_state = value; }
    inline SubnetCidrBlockState& WithState(SubnetCidrBlockStateCode value) { SetState(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A message about the status of the CIDR block, if applicable.</p>
     */
    inline const Aws::String& GetStatusMessage() const { return m_statusMessage; }
    inline bool StatusMessageHasBeenSet() const { return m_statusMessageHasBeenSet; }
    template<typename StatusMessageT = Aws::String>
    void SetStatusMessage(StatusMessageT&& value) { m_statusMessageHasBeenSet = true; m_statusMessage = std::forward<StatusMessageT>(value); }
    template<typename StatusMessageT = Aws::String>
    SubnetCidrBlockState& WithStatusMessage(StatusMessageT&& value) { SetStatusMessage(std::forward<StatusMessageT>(value)); return *this;}
    ///@}
  private:

    SubnetCidrBlockStateCode m_state{SubnetCidrBlockStateCode::NOT_SET};
    bool m_stateHasBeenSet = false;

    Aws::String m_statusMessage;
    bool m_statusMessageHasBeenSet = false;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
