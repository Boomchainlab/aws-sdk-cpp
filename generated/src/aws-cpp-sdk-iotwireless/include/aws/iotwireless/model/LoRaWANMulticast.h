﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/iotwireless/IoTWireless_EXPORTS.h>
#include <aws/iotwireless/model/SupportedRfRegion.h>
#include <aws/iotwireless/model/DlClass.h>
#include <aws/iotwireless/model/ParticipatingGatewaysMulticast.h>
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
namespace IoTWireless
{
namespace Model
{

  /**
   * <p>The LoRaWAN information that is to be used with the multicast
   * group.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/iotwireless-2020-11-22/LoRaWANMulticast">AWS
   * API Reference</a></p>
   */
  class LoRaWANMulticast
  {
  public:
    AWS_IOTWIRELESS_API LoRaWANMulticast() = default;
    AWS_IOTWIRELESS_API LoRaWANMulticast(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOTWIRELESS_API LoRaWANMulticast& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOTWIRELESS_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    
    inline SupportedRfRegion GetRfRegion() const { return m_rfRegion; }
    inline bool RfRegionHasBeenSet() const { return m_rfRegionHasBeenSet; }
    inline void SetRfRegion(SupportedRfRegion value) { m_rfRegionHasBeenSet = true; m_rfRegion = value; }
    inline LoRaWANMulticast& WithRfRegion(SupportedRfRegion value) { SetRfRegion(value); return *this;}
    ///@}

    ///@{
    
    inline DlClass GetDlClass() const { return m_dlClass; }
    inline bool DlClassHasBeenSet() const { return m_dlClassHasBeenSet; }
    inline void SetDlClass(DlClass value) { m_dlClassHasBeenSet = true; m_dlClass = value; }
    inline LoRaWANMulticast& WithDlClass(DlClass value) { SetDlClass(value); return *this;}
    ///@}

    ///@{
    
    inline const ParticipatingGatewaysMulticast& GetParticipatingGateways() const { return m_participatingGateways; }
    inline bool ParticipatingGatewaysHasBeenSet() const { return m_participatingGatewaysHasBeenSet; }
    template<typename ParticipatingGatewaysT = ParticipatingGatewaysMulticast>
    void SetParticipatingGateways(ParticipatingGatewaysT&& value) { m_participatingGatewaysHasBeenSet = true; m_participatingGateways = std::forward<ParticipatingGatewaysT>(value); }
    template<typename ParticipatingGatewaysT = ParticipatingGatewaysMulticast>
    LoRaWANMulticast& WithParticipatingGateways(ParticipatingGatewaysT&& value) { SetParticipatingGateways(std::forward<ParticipatingGatewaysT>(value)); return *this;}
    ///@}
  private:

    SupportedRfRegion m_rfRegion{SupportedRfRegion::NOT_SET};
    bool m_rfRegionHasBeenSet = false;

    DlClass m_dlClass{DlClass::NOT_SET};
    bool m_dlClassHasBeenSet = false;

    ParticipatingGatewaysMulticast m_participatingGateways;
    bool m_participatingGatewaysHasBeenSet = false;
  };

} // namespace Model
} // namespace IoTWireless
} // namespace Aws
