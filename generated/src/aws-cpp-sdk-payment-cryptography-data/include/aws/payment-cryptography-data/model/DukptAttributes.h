﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/payment-cryptography-data/PaymentCryptographyData_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/payment-cryptography-data/model/DukptDerivationType.h>
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
   * <p>Parameters that are used for Derived Unique Key Per Transaction (DUKPT)
   * derivation algorithm.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/payment-cryptography-data-2022-02-03/DukptAttributes">AWS
   * API Reference</a></p>
   */
  class DukptAttributes
  {
  public:
    AWS_PAYMENTCRYPTOGRAPHYDATA_API DukptAttributes() = default;
    AWS_PAYMENTCRYPTOGRAPHYDATA_API DukptAttributes(Aws::Utils::Json::JsonView jsonValue);
    AWS_PAYMENTCRYPTOGRAPHYDATA_API DukptAttributes& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_PAYMENTCRYPTOGRAPHYDATA_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The unique identifier known as Key Serial Number (KSN) that comes from an
     * encrypting device using DUKPT encryption method. The KSN is derived from the
     * encrypting device unique identifier and an internal transaction counter.</p>
     */
    inline const Aws::String& GetKeySerialNumber() const { return m_keySerialNumber; }
    inline bool KeySerialNumberHasBeenSet() const { return m_keySerialNumberHasBeenSet; }
    template<typename KeySerialNumberT = Aws::String>
    void SetKeySerialNumber(KeySerialNumberT&& value) { m_keySerialNumberHasBeenSet = true; m_keySerialNumber = std::forward<KeySerialNumberT>(value); }
    template<typename KeySerialNumberT = Aws::String>
    DukptAttributes& WithKeySerialNumber(KeySerialNumberT&& value) { SetKeySerialNumber(std::forward<KeySerialNumberT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The key type derived using DUKPT from a Base Derivation Key (BDK) and Key
     * Serial Number (KSN). This must be less than or equal to the strength of the BDK.
     * For example, you can't use <code>AES_128</code> as a derivation type for a BDK
     * of <code>AES_128</code> or <code>TDES_2KEY</code>.</p>
     */
    inline DukptDerivationType GetDukptDerivationType() const { return m_dukptDerivationType; }
    inline bool DukptDerivationTypeHasBeenSet() const { return m_dukptDerivationTypeHasBeenSet; }
    inline void SetDukptDerivationType(DukptDerivationType value) { m_dukptDerivationTypeHasBeenSet = true; m_dukptDerivationType = value; }
    inline DukptAttributes& WithDukptDerivationType(DukptDerivationType value) { SetDukptDerivationType(value); return *this;}
    ///@}
  private:

    Aws::String m_keySerialNumber;
    bool m_keySerialNumberHasBeenSet = false;

    DukptDerivationType m_dukptDerivationType{DukptDerivationType::NOT_SET};
    bool m_dukptDerivationTypeHasBeenSet = false;
  };

} // namespace Model
} // namespace PaymentCryptographyData
} // namespace Aws
