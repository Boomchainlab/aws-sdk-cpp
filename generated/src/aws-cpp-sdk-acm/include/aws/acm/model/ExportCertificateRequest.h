﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/acm/ACM_EXPORTS.h>
#include <aws/acm/ACMRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/Array.h>
#include <utility>

namespace Aws
{
namespace ACM
{
namespace Model
{

  /**
   */
  class ExportCertificateRequest : public ACMRequest
  {
  public:
    AWS_ACM_API ExportCertificateRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "ExportCertificate"; }

    AWS_ACM_API Aws::String SerializePayload() const override;

    AWS_ACM_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p>An Amazon Resource Name (ARN) of the issued certificate. This must be of the
     * form:</p> <p>
     * <code>arn:aws:acm:region:account:certificate/12345678-1234-1234-1234-123456789012</code>
     * </p>
     */
    inline const Aws::String& GetCertificateArn() const { return m_certificateArn; }
    inline bool CertificateArnHasBeenSet() const { return m_certificateArnHasBeenSet; }
    template<typename CertificateArnT = Aws::String>
    void SetCertificateArn(CertificateArnT&& value) { m_certificateArnHasBeenSet = true; m_certificateArn = std::forward<CertificateArnT>(value); }
    template<typename CertificateArnT = Aws::String>
    ExportCertificateRequest& WithCertificateArn(CertificateArnT&& value) { SetCertificateArn(std::forward<CertificateArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Passphrase to associate with the encrypted exported private key. </p> 
     * <p>When creating your passphrase, you can use any ASCII character except #, $,
     * or %.</p>  <p>If you want to later decrypt the private key, you must have
     * the passphrase. You can use the following OpenSSL command to decrypt a private
     * key. After entering the command, you are prompted for the passphrase.</p> <p>
     * <code>openssl rsa -in encrypted_key.pem -out decrypted_key.pem</code> </p>
     */
    inline const Aws::Utils::CryptoBuffer& GetPassphrase() const { return m_passphrase; }
    inline bool PassphraseHasBeenSet() const { return m_passphraseHasBeenSet; }
    template<typename PassphraseT = Aws::Utils::CryptoBuffer>
    void SetPassphrase(PassphraseT&& value) { m_passphraseHasBeenSet = true; m_passphrase = std::forward<PassphraseT>(value); }
    template<typename PassphraseT = Aws::Utils::CryptoBuffer>
    ExportCertificateRequest& WithPassphrase(PassphraseT&& value) { SetPassphrase(std::forward<PassphraseT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_certificateArn;
    bool m_certificateArnHasBeenSet = false;

    Aws::Utils::CryptoBuffer m_passphrase{};
    bool m_passphraseHasBeenSet = false;
  };

} // namespace Model
} // namespace ACM
} // namespace Aws
