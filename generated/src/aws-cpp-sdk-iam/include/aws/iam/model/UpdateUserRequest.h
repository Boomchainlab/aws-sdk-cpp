﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/iam/IAM_EXPORTS.h>
#include <aws/iam/IAMRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace IAM
{
namespace Model
{

  /**
   */
  class UpdateUserRequest : public IAMRequest
  {
  public:
    AWS_IAM_API UpdateUserRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "UpdateUser"; }

    AWS_IAM_API Aws::String SerializePayload() const override;

  protected:
    AWS_IAM_API void DumpBodyToUrl(Aws::Http::URI& uri ) const override;

  public:

    ///@{
    /**
     * <p>Name of the user to update. If you're changing the name of the user, this is
     * the original user name.</p> <p>This parameter allows (through its <a
     * href="http://wikipedia.org/wiki/regex">regex pattern</a>) a string of characters
     * consisting of upper and lowercase alphanumeric characters with no spaces. You
     * can also include any of the following characters: _+=,.@-</p>
     */
    inline const Aws::String& GetUserName() const { return m_userName; }
    inline bool UserNameHasBeenSet() const { return m_userNameHasBeenSet; }
    template<typename UserNameT = Aws::String>
    void SetUserName(UserNameT&& value) { m_userNameHasBeenSet = true; m_userName = std::forward<UserNameT>(value); }
    template<typename UserNameT = Aws::String>
    UpdateUserRequest& WithUserName(UserNameT&& value) { SetUserName(std::forward<UserNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>New path for the IAM user. Include this parameter only if you're changing the
     * user's path.</p> <p>This parameter allows (through its <a
     * href="http://wikipedia.org/wiki/regex">regex pattern</a>) a string of characters
     * consisting of either a forward slash (/) by itself or a string that must begin
     * and end with forward slashes. In addition, it can contain any ASCII character
     * from the ! (<code>\u0021</code>) through the DEL character
     * (<code>\u007F</code>), including most punctuation characters, digits, and upper
     * and lowercased letters.</p>
     */
    inline const Aws::String& GetNewPath() const { return m_newPath; }
    inline bool NewPathHasBeenSet() const { return m_newPathHasBeenSet; }
    template<typename NewPathT = Aws::String>
    void SetNewPath(NewPathT&& value) { m_newPathHasBeenSet = true; m_newPath = std::forward<NewPathT>(value); }
    template<typename NewPathT = Aws::String>
    UpdateUserRequest& WithNewPath(NewPathT&& value) { SetNewPath(std::forward<NewPathT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>New name for the user. Include this parameter only if you're changing the
     * user's name.</p> <p>IAM user, group, role, and policy names must be unique
     * within the account. Names are not distinguished by case. For example, you cannot
     * create resources named both "MyResource" and "myresource".</p>
     */
    inline const Aws::String& GetNewUserName() const { return m_newUserName; }
    inline bool NewUserNameHasBeenSet() const { return m_newUserNameHasBeenSet; }
    template<typename NewUserNameT = Aws::String>
    void SetNewUserName(NewUserNameT&& value) { m_newUserNameHasBeenSet = true; m_newUserName = std::forward<NewUserNameT>(value); }
    template<typename NewUserNameT = Aws::String>
    UpdateUserRequest& WithNewUserName(NewUserNameT&& value) { SetNewUserName(std::forward<NewUserNameT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_userName;
    bool m_userNameHasBeenSet = false;

    Aws::String m_newPath;
    bool m_newPathHasBeenSet = false;

    Aws::String m_newUserName;
    bool m_newUserNameHasBeenSet = false;
  };

} // namespace Model
} // namespace IAM
} // namespace Aws
