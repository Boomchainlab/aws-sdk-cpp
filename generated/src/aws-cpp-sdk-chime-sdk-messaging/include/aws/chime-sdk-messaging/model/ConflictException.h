﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/chime-sdk-messaging/ChimeSDKMessaging_EXPORTS.h>
#include <aws/chime-sdk-messaging/model/ErrorCode.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
namespace ChimeSDKMessaging
{
namespace Model
{

  /**
   * <p>The request could not be processed because of conflict in the current state
   * of the resource.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/chime-sdk-messaging-2021-05-15/ConflictException">AWS
   * API Reference</a></p>
   */
  class ConflictException
  {
  public:
    AWS_CHIMESDKMESSAGING_API ConflictException() = default;
    AWS_CHIMESDKMESSAGING_API ConflictException(Aws::Utils::Json::JsonView jsonValue);
    AWS_CHIMESDKMESSAGING_API ConflictException& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CHIMESDKMESSAGING_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    
    inline ErrorCode GetCode() const { return m_code; }
    inline bool CodeHasBeenSet() const { return m_codeHasBeenSet; }
    inline void SetCode(ErrorCode value) { m_codeHasBeenSet = true; m_code = value; }
    inline ConflictException& WithCode(ErrorCode value) { SetCode(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetMessage() const { return m_message; }
    inline bool MessageHasBeenSet() const { return m_messageHasBeenSet; }
    template<typename MessageT = Aws::String>
    void SetMessage(MessageT&& value) { m_messageHasBeenSet = true; m_message = std::forward<MessageT>(value); }
    template<typename MessageT = Aws::String>
    ConflictException& WithMessage(MessageT&& value) { SetMessage(std::forward<MessageT>(value)); return *this;}
    ///@}
  private:

    ErrorCode m_code{ErrorCode::NOT_SET};
    bool m_codeHasBeenSet = false;

    Aws::String m_message;
    bool m_messageHasBeenSet = false;
  };

} // namespace Model
} // namespace ChimeSDKMessaging
} // namespace Aws
