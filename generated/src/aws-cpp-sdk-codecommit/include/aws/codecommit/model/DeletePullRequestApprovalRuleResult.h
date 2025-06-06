﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/codecommit/CodeCommit_EXPORTS.h>
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
namespace CodeCommit
{
namespace Model
{
  class DeletePullRequestApprovalRuleResult
  {
  public:
    AWS_CODECOMMIT_API DeletePullRequestApprovalRuleResult() = default;
    AWS_CODECOMMIT_API DeletePullRequestApprovalRuleResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_CODECOMMIT_API DeletePullRequestApprovalRuleResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The ID of the deleted approval rule. </p>  <p>If the approval rule was
     * deleted in an earlier API call, the response is 200 OK without content.</p>
     * 
     */
    inline const Aws::String& GetApprovalRuleId() const { return m_approvalRuleId; }
    template<typename ApprovalRuleIdT = Aws::String>
    void SetApprovalRuleId(ApprovalRuleIdT&& value) { m_approvalRuleIdHasBeenSet = true; m_approvalRuleId = std::forward<ApprovalRuleIdT>(value); }
    template<typename ApprovalRuleIdT = Aws::String>
    DeletePullRequestApprovalRuleResult& WithApprovalRuleId(ApprovalRuleIdT&& value) { SetApprovalRuleId(std::forward<ApprovalRuleIdT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    DeletePullRequestApprovalRuleResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_approvalRuleId;
    bool m_approvalRuleIdHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace CodeCommit
} // namespace Aws
