﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/states/SFN_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/states/model/HistoryEventExecutionDataDetails.h>
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
namespace SFN
{
namespace Model
{

  /**
   * <p>Contains details about an activity scheduled during an
   * execution.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/states-2016-11-23/ActivityScheduledEventDetails">AWS
   * API Reference</a></p>
   */
  class ActivityScheduledEventDetails
  {
  public:
    AWS_SFN_API ActivityScheduledEventDetails() = default;
    AWS_SFN_API ActivityScheduledEventDetails(Aws::Utils::Json::JsonView jsonValue);
    AWS_SFN_API ActivityScheduledEventDetails& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SFN_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the scheduled activity.</p>
     */
    inline const Aws::String& GetResource() const { return m_resource; }
    inline bool ResourceHasBeenSet() const { return m_resourceHasBeenSet; }
    template<typename ResourceT = Aws::String>
    void SetResource(ResourceT&& value) { m_resourceHasBeenSet = true; m_resource = std::forward<ResourceT>(value); }
    template<typename ResourceT = Aws::String>
    ActivityScheduledEventDetails& WithResource(ResourceT&& value) { SetResource(std::forward<ResourceT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The JSON data input to the activity task. Length constraints apply to the
     * payload size, and are expressed as bytes in UTF-8 encoding.</p>
     */
    inline const Aws::String& GetInput() const { return m_input; }
    inline bool InputHasBeenSet() const { return m_inputHasBeenSet; }
    template<typename InputT = Aws::String>
    void SetInput(InputT&& value) { m_inputHasBeenSet = true; m_input = std::forward<InputT>(value); }
    template<typename InputT = Aws::String>
    ActivityScheduledEventDetails& WithInput(InputT&& value) { SetInput(std::forward<InputT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Contains details about the input for an execution history event.</p>
     */
    inline const HistoryEventExecutionDataDetails& GetInputDetails() const { return m_inputDetails; }
    inline bool InputDetailsHasBeenSet() const { return m_inputDetailsHasBeenSet; }
    template<typename InputDetailsT = HistoryEventExecutionDataDetails>
    void SetInputDetails(InputDetailsT&& value) { m_inputDetailsHasBeenSet = true; m_inputDetails = std::forward<InputDetailsT>(value); }
    template<typename InputDetailsT = HistoryEventExecutionDataDetails>
    ActivityScheduledEventDetails& WithInputDetails(InputDetailsT&& value) { SetInputDetails(std::forward<InputDetailsT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The maximum allowed duration of the activity task.</p>
     */
    inline long long GetTimeoutInSeconds() const { return m_timeoutInSeconds; }
    inline bool TimeoutInSecondsHasBeenSet() const { return m_timeoutInSecondsHasBeenSet; }
    inline void SetTimeoutInSeconds(long long value) { m_timeoutInSecondsHasBeenSet = true; m_timeoutInSeconds = value; }
    inline ActivityScheduledEventDetails& WithTimeoutInSeconds(long long value) { SetTimeoutInSeconds(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The maximum allowed duration between two heartbeats for the activity
     * task.</p>
     */
    inline long long GetHeartbeatInSeconds() const { return m_heartbeatInSeconds; }
    inline bool HeartbeatInSecondsHasBeenSet() const { return m_heartbeatInSecondsHasBeenSet; }
    inline void SetHeartbeatInSeconds(long long value) { m_heartbeatInSecondsHasBeenSet = true; m_heartbeatInSeconds = value; }
    inline ActivityScheduledEventDetails& WithHeartbeatInSeconds(long long value) { SetHeartbeatInSeconds(value); return *this;}
    ///@}
  private:

    Aws::String m_resource;
    bool m_resourceHasBeenSet = false;

    Aws::String m_input;
    bool m_inputHasBeenSet = false;

    HistoryEventExecutionDataDetails m_inputDetails;
    bool m_inputDetailsHasBeenSet = false;

    long long m_timeoutInSeconds{0};
    bool m_timeoutInSecondsHasBeenSet = false;

    long long m_heartbeatInSeconds{0};
    bool m_heartbeatInSecondsHasBeenSet = false;
  };

} // namespace Model
} // namespace SFN
} // namespace Aws
