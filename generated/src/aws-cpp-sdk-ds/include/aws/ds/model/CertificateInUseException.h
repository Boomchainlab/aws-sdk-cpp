﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ds/DirectoryService_EXPORTS.h>
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
namespace DirectoryService
{
namespace Model
{

  /**
   * <p>The certificate is being used for the LDAP security connection and cannot be
   * removed without disabling LDAP security.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/ds-2015-04-16/CertificateInUseException">AWS
   * API Reference</a></p>
   */
  class CertificateInUseException
  {
  public:
    AWS_DIRECTORYSERVICE_API CertificateInUseException() = default;
    AWS_DIRECTORYSERVICE_API CertificateInUseException(Aws::Utils::Json::JsonView jsonValue);
    AWS_DIRECTORYSERVICE_API CertificateInUseException& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_DIRECTORYSERVICE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    
    inline const Aws::String& GetMessage() const { return m_message; }
    inline bool MessageHasBeenSet() const { return m_messageHasBeenSet; }
    template<typename MessageT = Aws::String>
    void SetMessage(MessageT&& value) { m_messageHasBeenSet = true; m_message = std::forward<MessageT>(value); }
    template<typename MessageT = Aws::String>
    CertificateInUseException& WithMessage(MessageT&& value) { SetMessage(std::forward<MessageT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    inline bool RequestIdHasBeenSet() const { return m_requestIdHasBeenSet; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    CertificateInUseException& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_message;
    bool m_messageHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace DirectoryService
} // namespace Aws
