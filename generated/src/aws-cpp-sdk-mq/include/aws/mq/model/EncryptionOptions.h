﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/mq/MQ_EXPORTS.h>
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
namespace MQ
{
namespace Model
{

  /**
   * <p>Encryption options for the broker.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/mq-2017-11-27/EncryptionOptions">AWS
   * API Reference</a></p>
   */
  class EncryptionOptions
  {
  public:
    AWS_MQ_API EncryptionOptions() = default;
    AWS_MQ_API EncryptionOptions(Aws::Utils::Json::JsonView jsonValue);
    AWS_MQ_API EncryptionOptions& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_MQ_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The customer master key (CMK) to use for the A KMS (KMS). This key is used to
     * encrypt your data at rest. If not provided, Amazon MQ will use a default CMK to
     * encrypt your data.</p>
     */
    inline const Aws::String& GetKmsKeyId() const { return m_kmsKeyId; }
    inline bool KmsKeyIdHasBeenSet() const { return m_kmsKeyIdHasBeenSet; }
    template<typename KmsKeyIdT = Aws::String>
    void SetKmsKeyId(KmsKeyIdT&& value) { m_kmsKeyIdHasBeenSet = true; m_kmsKeyId = std::forward<KmsKeyIdT>(value); }
    template<typename KmsKeyIdT = Aws::String>
    EncryptionOptions& WithKmsKeyId(KmsKeyIdT&& value) { SetKmsKeyId(std::forward<KmsKeyIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Enables the use of an Amazon Web Services owned CMK using KMS (KMS). Set to
     * true by default, if no value is provided, for example, for RabbitMQ brokers.</p>
     */
    inline bool GetUseAwsOwnedKey() const { return m_useAwsOwnedKey; }
    inline bool UseAwsOwnedKeyHasBeenSet() const { return m_useAwsOwnedKeyHasBeenSet; }
    inline void SetUseAwsOwnedKey(bool value) { m_useAwsOwnedKeyHasBeenSet = true; m_useAwsOwnedKey = value; }
    inline EncryptionOptions& WithUseAwsOwnedKey(bool value) { SetUseAwsOwnedKey(value); return *this;}
    ///@}
  private:

    Aws::String m_kmsKeyId;
    bool m_kmsKeyIdHasBeenSet = false;

    bool m_useAwsOwnedKey{false};
    bool m_useAwsOwnedKeyHasBeenSet = false;
  };

} // namespace Model
} // namespace MQ
} // namespace Aws
