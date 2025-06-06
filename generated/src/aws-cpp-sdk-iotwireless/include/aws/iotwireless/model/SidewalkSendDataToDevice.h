﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/iotwireless/IoTWireless_EXPORTS.h>
#include <aws/iotwireless/model/MessageType.h>
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
   * <p>Information about a Sidewalk router.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/iotwireless-2020-11-22/SidewalkSendDataToDevice">AWS
   * API Reference</a></p>
   */
  class SidewalkSendDataToDevice
  {
  public:
    AWS_IOTWIRELESS_API SidewalkSendDataToDevice() = default;
    AWS_IOTWIRELESS_API SidewalkSendDataToDevice(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOTWIRELESS_API SidewalkSendDataToDevice& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOTWIRELESS_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The sequence number.</p>
     */
    inline int GetSeq() const { return m_seq; }
    inline bool SeqHasBeenSet() const { return m_seqHasBeenSet; }
    inline void SetSeq(int value) { m_seqHasBeenSet = true; m_seq = value; }
    inline SidewalkSendDataToDevice& WithSeq(int value) { SetSeq(value); return *this;}
    ///@}

    ///@{
    
    inline MessageType GetMessageType() const { return m_messageType; }
    inline bool MessageTypeHasBeenSet() const { return m_messageTypeHasBeenSet; }
    inline void SetMessageType(MessageType value) { m_messageTypeHasBeenSet = true; m_messageType = value; }
    inline SidewalkSendDataToDevice& WithMessageType(MessageType value) { SetMessageType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The duration of time in seconds to retry sending the ACK.</p>
     */
    inline int GetAckModeRetryDurationSecs() const { return m_ackModeRetryDurationSecs; }
    inline bool AckModeRetryDurationSecsHasBeenSet() const { return m_ackModeRetryDurationSecsHasBeenSet; }
    inline void SetAckModeRetryDurationSecs(int value) { m_ackModeRetryDurationSecsHasBeenSet = true; m_ackModeRetryDurationSecs = value; }
    inline SidewalkSendDataToDevice& WithAckModeRetryDurationSecs(int value) { SetAckModeRetryDurationSecs(value); return *this;}
    ///@}
  private:

    int m_seq{0};
    bool m_seqHasBeenSet = false;

    MessageType m_messageType{MessageType::NOT_SET};
    bool m_messageTypeHasBeenSet = false;

    int m_ackModeRetryDurationSecs{0};
    bool m_ackModeRetryDurationSecsHasBeenSet = false;
  };

} // namespace Model
} // namespace IoTWireless
} // namespace Aws
