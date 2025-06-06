﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/securityhub/SecurityHub_EXPORTS.h>
#include <aws/securityhub/SecurityHubRequest.h>
#include <aws/securityhub/model/ControlFindingGenerator.h>
#include <utility>

namespace Aws
{
namespace SecurityHub
{
namespace Model
{

  /**
   */
  class UpdateSecurityHubConfigurationRequest : public SecurityHubRequest
  {
  public:
    AWS_SECURITYHUB_API UpdateSecurityHubConfigurationRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "UpdateSecurityHubConfiguration"; }

    AWS_SECURITYHUB_API Aws::String SerializePayload() const override;


    ///@{
    /**
     * <p>Whether to automatically enable new controls when they are added to standards
     * that are enabled.</p> <p>By default, this is set to <code>true</code>, and new
     * controls are enabled automatically. To not automatically enable new controls,
     * set this to <code>false</code>. </p> <p>When you automatically enable new
     * controls, you can interact with the controls in the console and programmatically
     * immediately after release. However, automatically enabled controls have a
     * temporary default status of <code>DISABLED</code>. It can take up to several
     * days for Security Hub to process the control release and designate the control
     * as <code>ENABLED</code> in your account. During the processing period, you can
     * manually enable or disable a control, and Security Hub will maintain that
     * designation regardless of whether you have <code>AutoEnableControls</code> set
     * to <code>true</code>.</p>
     */
    inline bool GetAutoEnableControls() const { return m_autoEnableControls; }
    inline bool AutoEnableControlsHasBeenSet() const { return m_autoEnableControlsHasBeenSet; }
    inline void SetAutoEnableControls(bool value) { m_autoEnableControlsHasBeenSet = true; m_autoEnableControls = value; }
    inline UpdateSecurityHubConfigurationRequest& WithAutoEnableControls(bool value) { SetAutoEnableControls(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Updates whether the calling account has consolidated control findings turned
     * on. If the value for this field is set to <code>SECURITY_CONTROL</code>,
     * Security Hub generates a single finding for a control check even when the check
     * applies to multiple enabled standards.</p> <p>If the value for this field is set
     * to <code>STANDARD_CONTROL</code>, Security Hub generates separate findings for a
     * control check when the check applies to multiple enabled standards.</p> <p>For
     * accounts that are part of an organization, this value can only be updated in the
     * administrator account.</p>
     */
    inline ControlFindingGenerator GetControlFindingGenerator() const { return m_controlFindingGenerator; }
    inline bool ControlFindingGeneratorHasBeenSet() const { return m_controlFindingGeneratorHasBeenSet; }
    inline void SetControlFindingGenerator(ControlFindingGenerator value) { m_controlFindingGeneratorHasBeenSet = true; m_controlFindingGenerator = value; }
    inline UpdateSecurityHubConfigurationRequest& WithControlFindingGenerator(ControlFindingGenerator value) { SetControlFindingGenerator(value); return *this;}
    ///@}
  private:

    bool m_autoEnableControls{false};
    bool m_autoEnableControlsHasBeenSet = false;

    ControlFindingGenerator m_controlFindingGenerator{ControlFindingGenerator::NOT_SET};
    bool m_controlFindingGeneratorHasBeenSet = false;
  };

} // namespace Model
} // namespace SecurityHub
} // namespace Aws
