﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/oam/OAM_EXPORTS.h>
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
namespace OAM
{
namespace Model
{

  /**
   * <p>A parameter is specified incorrectly.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/oam-2022-06-10/InvalidParameterException">AWS
   * API Reference</a></p>
   */
  class InvalidParameterException
  {
  public:
    AWS_OAM_API InvalidParameterException() = default;
    AWS_OAM_API InvalidParameterException(Aws::Utils::Json::JsonView jsonValue);
    AWS_OAM_API InvalidParameterException& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_OAM_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The name of the exception.</p>
     */
    inline const Aws::String& GetAmznErrorType() const { return m_amznErrorType; }
    inline bool AmznErrorTypeHasBeenSet() const { return m_amznErrorTypeHasBeenSet; }
    template<typename AmznErrorTypeT = Aws::String>
    void SetAmznErrorType(AmznErrorTypeT&& value) { m_amznErrorTypeHasBeenSet = true; m_amznErrorType = std::forward<AmznErrorTypeT>(value); }
    template<typename AmznErrorTypeT = Aws::String>
    InvalidParameterException& WithAmznErrorType(AmznErrorTypeT&& value) { SetAmznErrorType(std::forward<AmznErrorTypeT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetMessage() const { return m_message; }
    inline bool MessageHasBeenSet() const { return m_messageHasBeenSet; }
    template<typename MessageT = Aws::String>
    void SetMessage(MessageT&& value) { m_messageHasBeenSet = true; m_message = std::forward<MessageT>(value); }
    template<typename MessageT = Aws::String>
    InvalidParameterException& WithMessage(MessageT&& value) { SetMessage(std::forward<MessageT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_amznErrorType;
    bool m_amznErrorTypeHasBeenSet = false;

    Aws::String m_message;
    bool m_messageHasBeenSet = false;
  };

} // namespace Model
} // namespace OAM
} // namespace Aws
