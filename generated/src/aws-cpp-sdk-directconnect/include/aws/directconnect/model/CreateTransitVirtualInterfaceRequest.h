﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/directconnect/DirectConnect_EXPORTS.h>
#include <aws/directconnect/DirectConnectRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/directconnect/model/NewTransitVirtualInterface.h>
#include <utility>

namespace Aws
{
namespace DirectConnect
{
namespace Model
{

  /**
   */
  class CreateTransitVirtualInterfaceRequest : public DirectConnectRequest
  {
  public:
    AWS_DIRECTCONNECT_API CreateTransitVirtualInterfaceRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreateTransitVirtualInterface"; }

    AWS_DIRECTCONNECT_API Aws::String SerializePayload() const override;

    AWS_DIRECTCONNECT_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p>The ID of the connection.</p>
     */
    inline const Aws::String& GetConnectionId() const { return m_connectionId; }
    inline bool ConnectionIdHasBeenSet() const { return m_connectionIdHasBeenSet; }
    template<typename ConnectionIdT = Aws::String>
    void SetConnectionId(ConnectionIdT&& value) { m_connectionIdHasBeenSet = true; m_connectionId = std::forward<ConnectionIdT>(value); }
    template<typename ConnectionIdT = Aws::String>
    CreateTransitVirtualInterfaceRequest& WithConnectionId(ConnectionIdT&& value) { SetConnectionId(std::forward<ConnectionIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Information about the transit virtual interface.</p>
     */
    inline const NewTransitVirtualInterface& GetNewTransitVirtualInterface() const { return m_newTransitVirtualInterface; }
    inline bool NewTransitVirtualInterfaceHasBeenSet() const { return m_newTransitVirtualInterfaceHasBeenSet; }
    template<typename NewTransitVirtualInterfaceT = NewTransitVirtualInterface>
    void SetNewTransitVirtualInterface(NewTransitVirtualInterfaceT&& value) { m_newTransitVirtualInterfaceHasBeenSet = true; m_newTransitVirtualInterface = std::forward<NewTransitVirtualInterfaceT>(value); }
    template<typename NewTransitVirtualInterfaceT = NewTransitVirtualInterface>
    CreateTransitVirtualInterfaceRequest& WithNewTransitVirtualInterface(NewTransitVirtualInterfaceT&& value) { SetNewTransitVirtualInterface(std::forward<NewTransitVirtualInterfaceT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_connectionId;
    bool m_connectionIdHasBeenSet = false;

    NewTransitVirtualInterface m_newTransitVirtualInterface;
    bool m_newTransitVirtualInterfaceHasBeenSet = false;
  };

} // namespace Model
} // namespace DirectConnect
} // namespace Aws
