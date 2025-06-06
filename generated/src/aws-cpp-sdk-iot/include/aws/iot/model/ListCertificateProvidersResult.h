﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/iot/IoT_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/iot/model/CertificateProviderSummary.h>
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
namespace IoT
{
namespace Model
{
  class ListCertificateProvidersResult
  {
  public:
    AWS_IOT_API ListCertificateProvidersResult() = default;
    AWS_IOT_API ListCertificateProvidersResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_IOT_API ListCertificateProvidersResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The list of certificate providers in your Amazon Web Services account.</p>
     */
    inline const Aws::Vector<CertificateProviderSummary>& GetCertificateProviders() const { return m_certificateProviders; }
    template<typename CertificateProvidersT = Aws::Vector<CertificateProviderSummary>>
    void SetCertificateProviders(CertificateProvidersT&& value) { m_certificateProvidersHasBeenSet = true; m_certificateProviders = std::forward<CertificateProvidersT>(value); }
    template<typename CertificateProvidersT = Aws::Vector<CertificateProviderSummary>>
    ListCertificateProvidersResult& WithCertificateProviders(CertificateProvidersT&& value) { SetCertificateProviders(std::forward<CertificateProvidersT>(value)); return *this;}
    template<typename CertificateProvidersT = CertificateProviderSummary>
    ListCertificateProvidersResult& AddCertificateProviders(CertificateProvidersT&& value) { m_certificateProvidersHasBeenSet = true; m_certificateProviders.emplace_back(std::forward<CertificateProvidersT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The token for the next set of results, or <code>null</code> if there are no
     * more results.</p>
     */
    inline const Aws::String& GetNextToken() const { return m_nextToken; }
    template<typename NextTokenT = Aws::String>
    void SetNextToken(NextTokenT&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::forward<NextTokenT>(value); }
    template<typename NextTokenT = Aws::String>
    ListCertificateProvidersResult& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    ListCertificateProvidersResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<CertificateProviderSummary> m_certificateProviders;
    bool m_certificateProvidersHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace IoT
} // namespace Aws
