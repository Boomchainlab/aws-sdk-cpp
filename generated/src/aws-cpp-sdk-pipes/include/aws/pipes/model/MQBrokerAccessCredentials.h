﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/pipes/Pipes_EXPORTS.h>
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
namespace Pipes
{
namespace Model
{

  /**
   * <p>The Secrets Manager secret that stores your broker credentials.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/pipes-2015-10-07/MQBrokerAccessCredentials">AWS
   * API Reference</a></p>
   */
  class MQBrokerAccessCredentials
  {
  public:
    AWS_PIPES_API MQBrokerAccessCredentials() = default;
    AWS_PIPES_API MQBrokerAccessCredentials(Aws::Utils::Json::JsonView jsonValue);
    AWS_PIPES_API MQBrokerAccessCredentials& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_PIPES_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The ARN of the Secrets Manager secret.</p>
     */
    inline const Aws::String& GetBasicAuth() const { return m_basicAuth; }
    inline bool BasicAuthHasBeenSet() const { return m_basicAuthHasBeenSet; }
    template<typename BasicAuthT = Aws::String>
    void SetBasicAuth(BasicAuthT&& value) { m_basicAuthHasBeenSet = true; m_basicAuth = std::forward<BasicAuthT>(value); }
    template<typename BasicAuthT = Aws::String>
    MQBrokerAccessCredentials& WithBasicAuth(BasicAuthT&& value) { SetBasicAuth(std::forward<BasicAuthT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_basicAuth;
    bool m_basicAuthHasBeenSet = false;
  };

} // namespace Model
} // namespace Pipes
} // namespace Aws
