﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/config/ConfigService_EXPORTS.h>
#include <aws/config/ConfigServiceRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace ConfigService
{
namespace Model
{

  /**
   * <p>The input for the <a>DeleteDeliveryChannel</a> action. The action accepts the
   * following data, in JSON format. </p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/config-2014-11-12/DeleteDeliveryChannelRequest">AWS
   * API Reference</a></p>
   */
  class DeleteDeliveryChannelRequest : public ConfigServiceRequest
  {
  public:
    AWS_CONFIGSERVICE_API DeleteDeliveryChannelRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DeleteDeliveryChannel"; }

    AWS_CONFIGSERVICE_API Aws::String SerializePayload() const override;

    AWS_CONFIGSERVICE_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p>The name of the delivery channel that you want to delete.</p>
     */
    inline const Aws::String& GetDeliveryChannelName() const { return m_deliveryChannelName; }
    inline bool DeliveryChannelNameHasBeenSet() const { return m_deliveryChannelNameHasBeenSet; }
    template<typename DeliveryChannelNameT = Aws::String>
    void SetDeliveryChannelName(DeliveryChannelNameT&& value) { m_deliveryChannelNameHasBeenSet = true; m_deliveryChannelName = std::forward<DeliveryChannelNameT>(value); }
    template<typename DeliveryChannelNameT = Aws::String>
    DeleteDeliveryChannelRequest& WithDeliveryChannelName(DeliveryChannelNameT&& value) { SetDeliveryChannelName(std::forward<DeliveryChannelNameT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_deliveryChannelName;
    bool m_deliveryChannelNameHasBeenSet = false;
  };

} // namespace Model
} // namespace ConfigService
} // namespace Aws
