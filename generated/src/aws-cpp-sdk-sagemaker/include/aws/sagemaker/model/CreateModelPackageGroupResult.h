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
  class CreateModelPackageGroupResult
  {
  public:
    AWS_SAGEMAKER_API CreateModelPackageGroupResult() = default;
    AWS_SAGEMAKER_API CreateModelPackageGroupResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_SAGEMAKER_API CreateModelPackageGroupResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the model group.</p>
     */
    inline const Aws::String& GetModelPackageGroupArn() const { return m_modelPackageGroupArn; }
    template<typename ModelPackageGroupArnT = Aws::String>
    void SetModelPackageGroupArn(ModelPackageGroupArnT&& value) { m_modelPackageGroupArnHasBeenSet = true; m_modelPackageGroupArn = std::forward<ModelPackageGroupArnT>(value); }
    template<typename ModelPackageGroupArnT = Aws::String>
    CreateModelPackageGroupResult& WithModelPackageGroupArn(ModelPackageGroupArnT&& value) { SetModelPackageGroupArn(std::forward<ModelPackageGroupArnT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    CreateModelPackageGroupResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_modelPackageGroupArn;
    bool m_modelPackageGroupArnHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace SageMaker
} // namespace Aws
