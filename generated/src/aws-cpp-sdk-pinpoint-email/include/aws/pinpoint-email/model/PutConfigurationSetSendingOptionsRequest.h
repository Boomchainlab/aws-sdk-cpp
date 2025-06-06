﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/pinpoint-email/PinpointEmail_EXPORTS.h>
#include <aws/pinpoint-email/PinpointEmailRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace PinpointEmail
{
namespace Model
{

  /**
   * <p>A request to enable or disable the ability of Amazon Pinpoint to send emails
   * that use a specific configuration set.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/pinpoint-email-2018-07-26/PutConfigurationSetSendingOptionsRequest">AWS
   * API Reference</a></p>
   */
  class PutConfigurationSetSendingOptionsRequest : public PinpointEmailRequest
  {
  public:
    AWS_PINPOINTEMAIL_API PutConfigurationSetSendingOptionsRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "PutConfigurationSetSendingOptions"; }

    AWS_PINPOINTEMAIL_API Aws::String SerializePayload() const override;


    ///@{
    /**
     * <p>The name of the configuration set that you want to enable or disable email
     * sending for.</p>
     */
    inline const Aws::String& GetConfigurationSetName() const { return m_configurationSetName; }
    inline bool ConfigurationSetNameHasBeenSet() const { return m_configurationSetNameHasBeenSet; }
    template<typename ConfigurationSetNameT = Aws::String>
    void SetConfigurationSetName(ConfigurationSetNameT&& value) { m_configurationSetNameHasBeenSet = true; m_configurationSetName = std::forward<ConfigurationSetNameT>(value); }
    template<typename ConfigurationSetNameT = Aws::String>
    PutConfigurationSetSendingOptionsRequest& WithConfigurationSetName(ConfigurationSetNameT&& value) { SetConfigurationSetName(std::forward<ConfigurationSetNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>If <code>true</code>, email sending is enabled for the configuration set. If
     * <code>false</code>, email sending is disabled for the configuration set.</p>
     */
    inline bool GetSendingEnabled() const { return m_sendingEnabled; }
    inline bool SendingEnabledHasBeenSet() const { return m_sendingEnabledHasBeenSet; }
    inline void SetSendingEnabled(bool value) { m_sendingEnabledHasBeenSet = true; m_sendingEnabled = value; }
    inline PutConfigurationSetSendingOptionsRequest& WithSendingEnabled(bool value) { SetSendingEnabled(value); return *this;}
    ///@}
  private:

    Aws::String m_configurationSetName;
    bool m_configurationSetNameHasBeenSet = false;

    bool m_sendingEnabled{false};
    bool m_sendingEnabledHasBeenSet = false;
  };

} // namespace Model
} // namespace PinpointEmail
} // namespace Aws
