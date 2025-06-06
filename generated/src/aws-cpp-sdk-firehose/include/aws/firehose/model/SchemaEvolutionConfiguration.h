﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/firehose/Firehose_EXPORTS.h>

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
namespace Firehose
{
namespace Model
{

  /**
   * <p>The configuration to enable schema evolution.</p> <p>Amazon Data Firehose is
   * in preview release and is subject to change.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/firehose-2015-08-04/SchemaEvolutionConfiguration">AWS
   * API Reference</a></p>
   */
  class SchemaEvolutionConfiguration
  {
  public:
    AWS_FIREHOSE_API SchemaEvolutionConfiguration() = default;
    AWS_FIREHOSE_API SchemaEvolutionConfiguration(Aws::Utils::Json::JsonView jsonValue);
    AWS_FIREHOSE_API SchemaEvolutionConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_FIREHOSE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p> Specify whether you want to enable schema evolution. </p> <p>Amazon Data
     * Firehose is in preview release and is subject to change.</p>
     */
    inline bool GetEnabled() const { return m_enabled; }
    inline bool EnabledHasBeenSet() const { return m_enabledHasBeenSet; }
    inline void SetEnabled(bool value) { m_enabledHasBeenSet = true; m_enabled = value; }
    inline SchemaEvolutionConfiguration& WithEnabled(bool value) { SetEnabled(value); return *this;}
    ///@}
  private:

    bool m_enabled{false};
    bool m_enabledHasBeenSet = false;
  };

} // namespace Model
} // namespace Firehose
} // namespace Aws
