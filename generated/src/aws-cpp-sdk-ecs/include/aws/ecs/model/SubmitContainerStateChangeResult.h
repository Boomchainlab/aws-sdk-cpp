﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ecs/ECS_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
template<typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils
{
namespace Json
{
  class JsonValue;
} // namespace Json
} // namespace Utils
namespace ECS
{
namespace Model
{
  class SubmitContainerStateChangeResult
  {
  public:
    AWS_ECS_API SubmitContainerStateChangeResult() = default;
    AWS_ECS_API SubmitContainerStateChangeResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_ECS_API SubmitContainerStateChangeResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>Acknowledgement of the state change.</p>
     */
    inline const Aws::String& GetAcknowledgment() const { return m_acknowledgment; }
    template<typename AcknowledgmentT = Aws::String>
    void SetAcknowledgment(AcknowledgmentT&& value) { m_acknowledgmentHasBeenSet = true; m_acknowledgment = std::forward<AcknowledgmentT>(value); }
    template<typename AcknowledgmentT = Aws::String>
    SubmitContainerStateChangeResult& WithAcknowledgment(AcknowledgmentT&& value) { SetAcknowledgment(std::forward<AcknowledgmentT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    SubmitContainerStateChangeResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_acknowledgment;
    bool m_acknowledgmentHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace ECS
} // namespace Aws
