﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/pinpoint-email/PinpointEmail_EXPORTS.h>
#include <aws/core/utils/DateTime.h>
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
namespace PinpointEmail
{
namespace Model
{

  /**
   * <p>Enable or disable collection of reputation metrics for emails that you send
   * using this configuration set in the current AWS Region. </p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/pinpoint-email-2018-07-26/ReputationOptions">AWS
   * API Reference</a></p>
   */
  class ReputationOptions
  {
  public:
    AWS_PINPOINTEMAIL_API ReputationOptions() = default;
    AWS_PINPOINTEMAIL_API ReputationOptions(Aws::Utils::Json::JsonView jsonValue);
    AWS_PINPOINTEMAIL_API ReputationOptions& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_PINPOINTEMAIL_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>If <code>true</code>, tracking of reputation metrics is enabled for the
     * configuration set. If <code>false</code>, tracking of reputation metrics is
     * disabled for the configuration set.</p>
     */
    inline bool GetReputationMetricsEnabled() const { return m_reputationMetricsEnabled; }
    inline bool ReputationMetricsEnabledHasBeenSet() const { return m_reputationMetricsEnabledHasBeenSet; }
    inline void SetReputationMetricsEnabled(bool value) { m_reputationMetricsEnabledHasBeenSet = true; m_reputationMetricsEnabled = value; }
    inline ReputationOptions& WithReputationMetricsEnabled(bool value) { SetReputationMetricsEnabled(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The date and time (in Unix time) when the reputation metrics were last given
     * a fresh start. When your account is given a fresh start, your reputation metrics
     * are calculated starting from the date of the fresh start.</p>
     */
    inline const Aws::Utils::DateTime& GetLastFreshStart() const { return m_lastFreshStart; }
    inline bool LastFreshStartHasBeenSet() const { return m_lastFreshStartHasBeenSet; }
    template<typename LastFreshStartT = Aws::Utils::DateTime>
    void SetLastFreshStart(LastFreshStartT&& value) { m_lastFreshStartHasBeenSet = true; m_lastFreshStart = std::forward<LastFreshStartT>(value); }
    template<typename LastFreshStartT = Aws::Utils::DateTime>
    ReputationOptions& WithLastFreshStart(LastFreshStartT&& value) { SetLastFreshStart(std::forward<LastFreshStartT>(value)); return *this;}
    ///@}
  private:

    bool m_reputationMetricsEnabled{false};
    bool m_reputationMetricsEnabledHasBeenSet = false;

    Aws::Utils::DateTime m_lastFreshStart{};
    bool m_lastFreshStartHasBeenSet = false;
  };

} // namespace Model
} // namespace PinpointEmail
} // namespace Aws
