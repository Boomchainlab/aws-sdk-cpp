﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/medialive/MediaLive_EXPORTS.h>
#include <aws/medialive/MediaLiveRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace MediaLive
{
namespace Model
{

  /**
   * Placeholder documentation for DescribeInputSecurityGroupRequest<p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/medialive-2017-10-14/DescribeInputSecurityGroupRequest">AWS
   * API Reference</a></p>
   */
  class DescribeInputSecurityGroupRequest : public MediaLiveRequest
  {
  public:
    AWS_MEDIALIVE_API DescribeInputSecurityGroupRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DescribeInputSecurityGroup"; }

    AWS_MEDIALIVE_API Aws::String SerializePayload() const override;


    ///@{
    /**
     * The id of the Input Security Group to describe
     */
    inline const Aws::String& GetInputSecurityGroupId() const { return m_inputSecurityGroupId; }
    inline bool InputSecurityGroupIdHasBeenSet() const { return m_inputSecurityGroupIdHasBeenSet; }
    template<typename InputSecurityGroupIdT = Aws::String>
    void SetInputSecurityGroupId(InputSecurityGroupIdT&& value) { m_inputSecurityGroupIdHasBeenSet = true; m_inputSecurityGroupId = std::forward<InputSecurityGroupIdT>(value); }
    template<typename InputSecurityGroupIdT = Aws::String>
    DescribeInputSecurityGroupRequest& WithInputSecurityGroupId(InputSecurityGroupIdT&& value) { SetInputSecurityGroupId(std::forward<InputSecurityGroupIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_inputSecurityGroupId;
    bool m_inputSecurityGroupIdHasBeenSet = false;
  };

} // namespace Model
} // namespace MediaLive
} // namespace Aws
