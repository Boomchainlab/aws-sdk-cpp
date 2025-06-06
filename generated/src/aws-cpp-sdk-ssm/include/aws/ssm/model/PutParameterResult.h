﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ssm/SSM_EXPORTS.h>
#include <aws/ssm/model/ParameterTier.h>
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
namespace SSM
{
namespace Model
{
  class PutParameterResult
  {
  public:
    AWS_SSM_API PutParameterResult() = default;
    AWS_SSM_API PutParameterResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_SSM_API PutParameterResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The new version number of a parameter. If you edit a parameter value,
     * Parameter Store automatically creates a new version and assigns this new version
     * a unique ID. You can reference a parameter version ID in API operations or in
     * Systems Manager documents (SSM documents). By default, if you don't specify a
     * specific version, the system returns the latest parameter value when a parameter
     * is called.</p>
     */
    inline long long GetVersion() const { return m_version; }
    inline void SetVersion(long long value) { m_versionHasBeenSet = true; m_version = value; }
    inline PutParameterResult& WithVersion(long long value) { SetVersion(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The tier assigned to the parameter.</p>
     */
    inline ParameterTier GetTier() const { return m_tier; }
    inline void SetTier(ParameterTier value) { m_tierHasBeenSet = true; m_tier = value; }
    inline PutParameterResult& WithTier(ParameterTier value) { SetTier(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    PutParameterResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    long long m_version{0};
    bool m_versionHasBeenSet = false;

    ParameterTier m_tier{ParameterTier::NOT_SET};
    bool m_tierHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace SSM
} // namespace Aws
