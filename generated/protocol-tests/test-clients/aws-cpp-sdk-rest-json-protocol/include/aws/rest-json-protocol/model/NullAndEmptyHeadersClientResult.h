﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/rest-json-protocol/RestJsonProtocol_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
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
namespace RestJsonProtocol
{
namespace Model
{
  class NullAndEmptyHeadersClientResult
  {
  public:
    AWS_RESTJSONPROTOCOL_API NullAndEmptyHeadersClientResult() = default;
    AWS_RESTJSONPROTOCOL_API NullAndEmptyHeadersClientResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_RESTJSONPROTOCOL_API NullAndEmptyHeadersClientResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    
    inline const Aws::String& GetA() const { return m_a; }
    template<typename AT = Aws::String>
    void SetA(AT&& value) { m_aHasBeenSet = true; m_a = std::forward<AT>(value); }
    template<typename AT = Aws::String>
    NullAndEmptyHeadersClientResult& WithA(AT&& value) { SetA(std::forward<AT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetB() const { return m_b; }
    template<typename BT = Aws::String>
    void SetB(BT&& value) { m_bHasBeenSet = true; m_b = std::forward<BT>(value); }
    template<typename BT = Aws::String>
    NullAndEmptyHeadersClientResult& WithB(BT&& value) { SetB(std::forward<BT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::Vector<Aws::String>& GetC() const { return m_c; }
    template<typename CT = Aws::Vector<Aws::String>>
    void SetC(CT&& value) { m_cHasBeenSet = true; m_c = std::forward<CT>(value); }
    template<typename CT = Aws::Vector<Aws::String>>
    NullAndEmptyHeadersClientResult& WithC(CT&& value) { SetC(std::forward<CT>(value)); return *this;}
    template<typename CT = Aws::String>
    NullAndEmptyHeadersClientResult& AddC(CT&& value) { m_cHasBeenSet = true; m_c.emplace_back(std::forward<CT>(value)); return *this; }
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    NullAndEmptyHeadersClientResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_a;
    bool m_aHasBeenSet = false;

    Aws::String m_b;
    bool m_bHasBeenSet = false;

    Aws::Vector<Aws::String> m_c;
    bool m_cHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace RestJsonProtocol
} // namespace Aws
