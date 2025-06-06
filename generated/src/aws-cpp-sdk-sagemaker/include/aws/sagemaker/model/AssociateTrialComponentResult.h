﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/sagemaker/SageMaker_EXPORTS.h>
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
namespace SageMaker
{
namespace Model
{
  class AssociateTrialComponentResult
  {
  public:
    AWS_SAGEMAKER_API AssociateTrialComponentResult() = default;
    AWS_SAGEMAKER_API AssociateTrialComponentResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_SAGEMAKER_API AssociateTrialComponentResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the trial component.</p>
     */
    inline const Aws::String& GetTrialComponentArn() const { return m_trialComponentArn; }
    template<typename TrialComponentArnT = Aws::String>
    void SetTrialComponentArn(TrialComponentArnT&& value) { m_trialComponentArnHasBeenSet = true; m_trialComponentArn = std::forward<TrialComponentArnT>(value); }
    template<typename TrialComponentArnT = Aws::String>
    AssociateTrialComponentResult& WithTrialComponentArn(TrialComponentArnT&& value) { SetTrialComponentArn(std::forward<TrialComponentArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the trial.</p>
     */
    inline const Aws::String& GetTrialArn() const { return m_trialArn; }
    template<typename TrialArnT = Aws::String>
    void SetTrialArn(TrialArnT&& value) { m_trialArnHasBeenSet = true; m_trialArn = std::forward<TrialArnT>(value); }
    template<typename TrialArnT = Aws::String>
    AssociateTrialComponentResult& WithTrialArn(TrialArnT&& value) { SetTrialArn(std::forward<TrialArnT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    AssociateTrialComponentResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_trialComponentArn;
    bool m_trialComponentArnHasBeenSet = false;

    Aws::String m_trialArn;
    bool m_trialArnHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace SageMaker
} // namespace Aws
