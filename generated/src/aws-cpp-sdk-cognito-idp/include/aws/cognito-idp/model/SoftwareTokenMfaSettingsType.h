﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/cognito-idp/CognitoIdentityProvider_EXPORTS.h>

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
namespace CognitoIdentityProvider
{
namespace Model
{

  /**
   * <p>A user's preference for using time-based one-time password (TOTP)
   * multi-factor authentication (MFA). Turns TOTP MFA on and off, and can set TOTP
   * as preferred when other MFA options are available. You can't turn off TOTP MFA
   * for any of your users when MFA is required in your user pool; you can only set
   * the type that your user prefers. </p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/cognito-idp-2016-04-18/SoftwareTokenMfaSettingsType">AWS
   * API Reference</a></p>
   */
  class SoftwareTokenMfaSettingsType
  {
  public:
    AWS_COGNITOIDENTITYPROVIDER_API SoftwareTokenMfaSettingsType() = default;
    AWS_COGNITOIDENTITYPROVIDER_API SoftwareTokenMfaSettingsType(Aws::Utils::Json::JsonView jsonValue);
    AWS_COGNITOIDENTITYPROVIDER_API SoftwareTokenMfaSettingsType& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_COGNITOIDENTITYPROVIDER_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Specifies whether software token MFA is activated. If an MFA type is
     * activated for a user, the user will be prompted for MFA during all sign-in
     * attempts, unless device tracking is turned on and the device has been
     * trusted.</p>
     */
    inline bool GetEnabled() const { return m_enabled; }
    inline bool EnabledHasBeenSet() const { return m_enabledHasBeenSet; }
    inline void SetEnabled(bool value) { m_enabledHasBeenSet = true; m_enabled = value; }
    inline SoftwareTokenMfaSettingsType& WithEnabled(bool value) { SetEnabled(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies whether software token MFA is the preferred MFA method.</p>
     */
    inline bool GetPreferredMfa() const { return m_preferredMfa; }
    inline bool PreferredMfaHasBeenSet() const { return m_preferredMfaHasBeenSet; }
    inline void SetPreferredMfa(bool value) { m_preferredMfaHasBeenSet = true; m_preferredMfa = value; }
    inline SoftwareTokenMfaSettingsType& WithPreferredMfa(bool value) { SetPreferredMfa(value); return *this;}
    ///@}
  private:

    bool m_enabled{false};
    bool m_enabledHasBeenSet = false;

    bool m_preferredMfa{false};
    bool m_preferredMfaHasBeenSet = false;
  };

} // namespace Model
} // namespace CognitoIdentityProvider
} // namespace Aws
