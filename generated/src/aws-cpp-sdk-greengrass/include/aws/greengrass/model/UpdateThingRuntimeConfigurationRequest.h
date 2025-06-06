﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/greengrass/Greengrass_EXPORTS.h>
#include <aws/greengrass/GreengrassRequest.h>
#include <aws/greengrass/model/TelemetryConfigurationUpdate.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace Greengrass
{
namespace Model
{

  /**
   */
  class UpdateThingRuntimeConfigurationRequest : public GreengrassRequest
  {
  public:
    AWS_GREENGRASS_API UpdateThingRuntimeConfigurationRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "UpdateThingRuntimeConfiguration"; }

    AWS_GREENGRASS_API Aws::String SerializePayload() const override;


    ///@{
    /**
     * Configuration for telemetry service.
     */
    inline const TelemetryConfigurationUpdate& GetTelemetryConfiguration() const { return m_telemetryConfiguration; }
    inline bool TelemetryConfigurationHasBeenSet() const { return m_telemetryConfigurationHasBeenSet; }
    template<typename TelemetryConfigurationT = TelemetryConfigurationUpdate>
    void SetTelemetryConfiguration(TelemetryConfigurationT&& value) { m_telemetryConfigurationHasBeenSet = true; m_telemetryConfiguration = std::forward<TelemetryConfigurationT>(value); }
    template<typename TelemetryConfigurationT = TelemetryConfigurationUpdate>
    UpdateThingRuntimeConfigurationRequest& WithTelemetryConfiguration(TelemetryConfigurationT&& value) { SetTelemetryConfiguration(std::forward<TelemetryConfigurationT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * The thing name.
     */
    inline const Aws::String& GetThingName() const { return m_thingName; }
    inline bool ThingNameHasBeenSet() const { return m_thingNameHasBeenSet; }
    template<typename ThingNameT = Aws::String>
    void SetThingName(ThingNameT&& value) { m_thingNameHasBeenSet = true; m_thingName = std::forward<ThingNameT>(value); }
    template<typename ThingNameT = Aws::String>
    UpdateThingRuntimeConfigurationRequest& WithThingName(ThingNameT&& value) { SetThingName(std::forward<ThingNameT>(value)); return *this;}
    ///@}
  private:

    TelemetryConfigurationUpdate m_telemetryConfiguration;
    bool m_telemetryConfigurationHasBeenSet = false;

    Aws::String m_thingName;
    bool m_thingNameHasBeenSet = false;
  };

} // namespace Model
} // namespace Greengrass
} // namespace Aws
