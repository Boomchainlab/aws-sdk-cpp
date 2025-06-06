﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/appsync/AppSync_EXPORTS.h>
#include <aws/appsync/model/FunctionConfiguration.h>
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
namespace AppSync
{
namespace Model
{
  class CreateFunctionResult
  {
  public:
    AWS_APPSYNC_API CreateFunctionResult() = default;
    AWS_APPSYNC_API CreateFunctionResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_APPSYNC_API CreateFunctionResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The <code>Function</code> object.</p>
     */
    inline const FunctionConfiguration& GetFunctionConfiguration() const { return m_functionConfiguration; }
    template<typename FunctionConfigurationT = FunctionConfiguration>
    void SetFunctionConfiguration(FunctionConfigurationT&& value) { m_functionConfigurationHasBeenSet = true; m_functionConfiguration = std::forward<FunctionConfigurationT>(value); }
    template<typename FunctionConfigurationT = FunctionConfiguration>
    CreateFunctionResult& WithFunctionConfiguration(FunctionConfigurationT&& value) { SetFunctionConfiguration(std::forward<FunctionConfigurationT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    CreateFunctionResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    FunctionConfiguration m_functionConfiguration;
    bool m_functionConfigurationHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace AppSync
} // namespace Aws
