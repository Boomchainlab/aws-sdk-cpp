﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/devicefarm/DeviceFarm_EXPORTS.h>
#include <aws/devicefarm/model/VPCEConfiguration.h>
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
namespace DeviceFarm
{
namespace Model
{
  class UpdateVPCEConfigurationResult
  {
  public:
    AWS_DEVICEFARM_API UpdateVPCEConfigurationResult() = default;
    AWS_DEVICEFARM_API UpdateVPCEConfigurationResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_DEVICEFARM_API UpdateVPCEConfigurationResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>An object that contains information about your VPC endpoint
     * configuration.</p>
     */
    inline const VPCEConfiguration& GetVpceConfiguration() const { return m_vpceConfiguration; }
    template<typename VpceConfigurationT = VPCEConfiguration>
    void SetVpceConfiguration(VpceConfigurationT&& value) { m_vpceConfigurationHasBeenSet = true; m_vpceConfiguration = std::forward<VpceConfigurationT>(value); }
    template<typename VpceConfigurationT = VPCEConfiguration>
    UpdateVPCEConfigurationResult& WithVpceConfiguration(VpceConfigurationT&& value) { SetVpceConfiguration(std::forward<VpceConfigurationT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    UpdateVPCEConfigurationResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    VPCEConfiguration m_vpceConfiguration;
    bool m_vpceConfigurationHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace DeviceFarm
} // namespace Aws
