﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/directconnect/DirectConnect_EXPORTS.h>
#include <aws/directconnect/DirectConnectRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace DirectConnect
{
namespace Model
{

  /**
   */
  class StopBgpFailoverTestRequest : public DirectConnectRequest
  {
  public:
    AWS_DIRECTCONNECT_API StopBgpFailoverTestRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "StopBgpFailoverTest"; }

    AWS_DIRECTCONNECT_API Aws::String SerializePayload() const override;

    AWS_DIRECTCONNECT_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p>The ID of the virtual interface you no longer want to test.</p>
     */
    inline const Aws::String& GetVirtualInterfaceId() const { return m_virtualInterfaceId; }
    inline bool VirtualInterfaceIdHasBeenSet() const { return m_virtualInterfaceIdHasBeenSet; }
    template<typename VirtualInterfaceIdT = Aws::String>
    void SetVirtualInterfaceId(VirtualInterfaceIdT&& value) { m_virtualInterfaceIdHasBeenSet = true; m_virtualInterfaceId = std::forward<VirtualInterfaceIdT>(value); }
    template<typename VirtualInterfaceIdT = Aws::String>
    StopBgpFailoverTestRequest& WithVirtualInterfaceId(VirtualInterfaceIdT&& value) { SetVirtualInterfaceId(std::forward<VirtualInterfaceIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_virtualInterfaceId;
    bool m_virtualInterfaceIdHasBeenSet = false;
  };

} // namespace Model
} // namespace DirectConnect
} // namespace Aws
