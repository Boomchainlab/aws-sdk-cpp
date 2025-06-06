﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/iotwireless/IoTWireless_EXPORTS.h>
#include <aws/iotwireless/model/SidewalkEventNotificationConfigurations.h>
#include <aws/iotwireless/model/EventNotificationTopicStatus.h>
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
namespace IoTWireless
{
namespace Model
{

  /**
   * <p>Message delivery status event configuration object for enabling and disabling
   * relevant topics.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/iotwireless-2020-11-22/MessageDeliveryStatusEventConfiguration">AWS
   * API Reference</a></p>
   */
  class MessageDeliveryStatusEventConfiguration
  {
  public:
    AWS_IOTWIRELESS_API MessageDeliveryStatusEventConfiguration() = default;
    AWS_IOTWIRELESS_API MessageDeliveryStatusEventConfiguration(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOTWIRELESS_API MessageDeliveryStatusEventConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOTWIRELESS_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    
    inline const SidewalkEventNotificationConfigurations& GetSidewalk() const { return m_sidewalk; }
    inline bool SidewalkHasBeenSet() const { return m_sidewalkHasBeenSet; }
    template<typename SidewalkT = SidewalkEventNotificationConfigurations>
    void SetSidewalk(SidewalkT&& value) { m_sidewalkHasBeenSet = true; m_sidewalk = std::forward<SidewalkT>(value); }
    template<typename SidewalkT = SidewalkEventNotificationConfigurations>
    MessageDeliveryStatusEventConfiguration& WithSidewalk(SidewalkT&& value) { SetSidewalk(std::forward<SidewalkT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Denotes whether the wireless device ID message delivery status event topic is
     * enabled or disabled.</p>
     */
    inline EventNotificationTopicStatus GetWirelessDeviceIdEventTopic() const { return m_wirelessDeviceIdEventTopic; }
    inline bool WirelessDeviceIdEventTopicHasBeenSet() const { return m_wirelessDeviceIdEventTopicHasBeenSet; }
    inline void SetWirelessDeviceIdEventTopic(EventNotificationTopicStatus value) { m_wirelessDeviceIdEventTopicHasBeenSet = true; m_wirelessDeviceIdEventTopic = value; }
    inline MessageDeliveryStatusEventConfiguration& WithWirelessDeviceIdEventTopic(EventNotificationTopicStatus value) { SetWirelessDeviceIdEventTopic(value); return *this;}
    ///@}
  private:

    SidewalkEventNotificationConfigurations m_sidewalk;
    bool m_sidewalkHasBeenSet = false;

    EventNotificationTopicStatus m_wirelessDeviceIdEventTopic{EventNotificationTopicStatus::NOT_SET};
    bool m_wirelessDeviceIdEventTopicHasBeenSet = false;
  };

} // namespace Model
} // namespace IoTWireless
} // namespace Aws
