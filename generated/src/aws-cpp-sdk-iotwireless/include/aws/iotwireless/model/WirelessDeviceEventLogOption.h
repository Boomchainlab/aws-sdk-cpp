﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/iotwireless/IoTWireless_EXPORTS.h>
#include <aws/iotwireless/model/WirelessDeviceEvent.h>
#include <aws/iotwireless/model/LogLevel.h>
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
   * <p>The log options for a wireless device event and can be used to set log levels
   * for a specific wireless device event.</p> <p>For a LoRaWAN device, possible
   * events for a log messsage are: <code>Join</code>, <code>Rejoin</code>,
   * <code>Downlink_Data</code>, and <code>Uplink_Data</code>. For a Sidewalk device,
   * possible events for a log message are <code>Registration</code>,
   * <code>Downlink_Data</code>, and <code>Uplink_Data</code>.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/iotwireless-2020-11-22/WirelessDeviceEventLogOption">AWS
   * API Reference</a></p>
   */
  class WirelessDeviceEventLogOption
  {
  public:
    AWS_IOTWIRELESS_API WirelessDeviceEventLogOption() = default;
    AWS_IOTWIRELESS_API WirelessDeviceEventLogOption(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOTWIRELESS_API WirelessDeviceEventLogOption& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOTWIRELESS_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    
    inline WirelessDeviceEvent GetEvent() const { return m_event; }
    inline bool EventHasBeenSet() const { return m_eventHasBeenSet; }
    inline void SetEvent(WirelessDeviceEvent value) { m_eventHasBeenSet = true; m_event = value; }
    inline WirelessDeviceEventLogOption& WithEvent(WirelessDeviceEvent value) { SetEvent(value); return *this;}
    ///@}

    ///@{
    
    inline LogLevel GetLogLevel() const { return m_logLevel; }
    inline bool LogLevelHasBeenSet() const { return m_logLevelHasBeenSet; }
    inline void SetLogLevel(LogLevel value) { m_logLevelHasBeenSet = true; m_logLevel = value; }
    inline WirelessDeviceEventLogOption& WithLogLevel(LogLevel value) { SetLogLevel(value); return *this;}
    ///@}
  private:

    WirelessDeviceEvent m_event{WirelessDeviceEvent::NOT_SET};
    bool m_eventHasBeenSet = false;

    LogLevel m_logLevel{LogLevel::NOT_SET};
    bool m_logLevelHasBeenSet = false;
  };

} // namespace Model
} // namespace IoTWireless
} // namespace Aws
