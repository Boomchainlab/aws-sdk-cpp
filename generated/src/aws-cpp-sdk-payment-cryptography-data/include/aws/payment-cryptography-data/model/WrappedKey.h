﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/payment-cryptography-data/PaymentCryptographyData_EXPORTS.h>
#include <aws/payment-cryptography-data/model/WrappedKeyMaterial.h>
#include <aws/payment-cryptography-data/model/KeyCheckValueAlgorithm.h>
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
namespace PaymentCryptographyData
{
namespace Model
{

  /**
   * <p>Parameter information of a WrappedKeyBlock for encryption key
   * exchange.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/payment-cryptography-data-2022-02-03/WrappedKey">AWS
   * API Reference</a></p>
   */
  class WrappedKey
  {
  public:
    AWS_PAYMENTCRYPTOGRAPHYDATA_API WrappedKey() = default;
    AWS_PAYMENTCRYPTOGRAPHYDATA_API WrappedKey(Aws::Utils::Json::JsonView jsonValue);
    AWS_PAYMENTCRYPTOGRAPHYDATA_API WrappedKey& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_PAYMENTCRYPTOGRAPHYDATA_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Parameter information of a WrappedKeyBlock for encryption key exchange.</p>
     */
    inline const WrappedKeyMaterial& GetWrappedKeyMaterial() const { return m_wrappedKeyMaterial; }
    inline bool WrappedKeyMaterialHasBeenSet() const { return m_wrappedKeyMaterialHasBeenSet; }
    template<typename WrappedKeyMaterialT = WrappedKeyMaterial>
    void SetWrappedKeyMaterial(WrappedKeyMaterialT&& value) { m_wrappedKeyMaterialHasBeenSet = true; m_wrappedKeyMaterial = std::forward<WrappedKeyMaterialT>(value); }
    template<typename WrappedKeyMaterialT = WrappedKeyMaterial>
    WrappedKey& WithWrappedKeyMaterial(WrappedKeyMaterialT&& value) { SetWrappedKeyMaterial(std::forward<WrappedKeyMaterialT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The algorithm that Amazon Web Services Payment Cryptography uses to calculate
     * the key check value (KCV). It is used to validate the key integrity.</p> <p>For
     * TDES keys, the KCV is computed by encrypting 8 bytes, each with value of zero,
     * with the key to be checked and retaining the 3 highest order bytes of the
     * encrypted result. For AES keys, the KCV is computed using a CMAC algorithm where
     * the input data is 16 bytes of zero and retaining the 3 highest order bytes of
     * the encrypted result.</p>
     */
    inline KeyCheckValueAlgorithm GetKeyCheckValueAlgorithm() const { return m_keyCheckValueAlgorithm; }
    inline bool KeyCheckValueAlgorithmHasBeenSet() const { return m_keyCheckValueAlgorithmHasBeenSet; }
    inline void SetKeyCheckValueAlgorithm(KeyCheckValueAlgorithm value) { m_keyCheckValueAlgorithmHasBeenSet = true; m_keyCheckValueAlgorithm = value; }
    inline WrappedKey& WithKeyCheckValueAlgorithm(KeyCheckValueAlgorithm value) { SetKeyCheckValueAlgorithm(value); return *this;}
    ///@}
  private:

    WrappedKeyMaterial m_wrappedKeyMaterial;
    bool m_wrappedKeyMaterialHasBeenSet = false;

    KeyCheckValueAlgorithm m_keyCheckValueAlgorithm{KeyCheckValueAlgorithm::NOT_SET};
    bool m_keyCheckValueAlgorithmHasBeenSet = false;
  };

} // namespace Model
} // namespace PaymentCryptographyData
} // namespace Aws
