﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ssm/SSM_EXPORTS.h>
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
namespace SSM
{
namespace Model
{

  /**
   * <p>The <a>PutResourcePolicy</a> API action enforces two limits. A policy can't
   * be greater than 1024 bytes in size. And only one policy can be attached to
   * <code>OpsItemGroup</code>. Verify these limits and try again.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/ssm-2014-11-06/ResourcePolicyLimitExceededException">AWS
   * API Reference</a></p>
   */
  class ResourcePolicyLimitExceededException
  {
  public:
    AWS_SSM_API ResourcePolicyLimitExceededException() = default;
    AWS_SSM_API ResourcePolicyLimitExceededException(Aws::Utils::Json::JsonView jsonValue);
    AWS_SSM_API ResourcePolicyLimitExceededException& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SSM_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    
    inline int GetLimit() const { return m_limit; }
    inline bool LimitHasBeenSet() const { return m_limitHasBeenSet; }
    inline void SetLimit(int value) { m_limitHasBeenSet = true; m_limit = value; }
    inline ResourcePolicyLimitExceededException& WithLimit(int value) { SetLimit(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetLimitType() const { return m_limitType; }
    inline bool LimitTypeHasBeenSet() const { return m_limitTypeHasBeenSet; }
    template<typename LimitTypeT = Aws::String>
    void SetLimitType(LimitTypeT&& value) { m_limitTypeHasBeenSet = true; m_limitType = std::forward<LimitTypeT>(value); }
    template<typename LimitTypeT = Aws::String>
    ResourcePolicyLimitExceededException& WithLimitType(LimitTypeT&& value) { SetLimitType(std::forward<LimitTypeT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetMessage() const { return m_message; }
    inline bool MessageHasBeenSet() const { return m_messageHasBeenSet; }
    template<typename MessageT = Aws::String>
    void SetMessage(MessageT&& value) { m_messageHasBeenSet = true; m_message = std::forward<MessageT>(value); }
    template<typename MessageT = Aws::String>
    ResourcePolicyLimitExceededException& WithMessage(MessageT&& value) { SetMessage(std::forward<MessageT>(value)); return *this;}
    ///@}
  private:

    int m_limit{0};
    bool m_limitHasBeenSet = false;

    Aws::String m_limitType;
    bool m_limitTypeHasBeenSet = false;

    Aws::String m_message;
    bool m_messageHasBeenSet = false;
  };

} // namespace Model
} // namespace SSM
} // namespace Aws
