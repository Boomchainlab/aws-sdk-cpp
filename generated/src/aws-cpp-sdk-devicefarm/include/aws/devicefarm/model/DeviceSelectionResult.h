﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/devicefarm/DeviceFarm_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/devicefarm/model/DeviceFilter.h>
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
namespace DeviceFarm
{
namespace Model
{

  /**
   * <p>Contains the run results requested by the device selection configuration and
   * how many devices were returned. For an example of the JSON response syntax, see
   * <a>ScheduleRun</a>.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/devicefarm-2015-06-23/DeviceSelectionResult">AWS
   * API Reference</a></p>
   */
  class DeviceSelectionResult
  {
  public:
    AWS_DEVICEFARM_API DeviceSelectionResult() = default;
    AWS_DEVICEFARM_API DeviceSelectionResult(Aws::Utils::Json::JsonView jsonValue);
    AWS_DEVICEFARM_API DeviceSelectionResult& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_DEVICEFARM_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The filters in a device selection result.</p>
     */
    inline const Aws::Vector<DeviceFilter>& GetFilters() const { return m_filters; }
    inline bool FiltersHasBeenSet() const { return m_filtersHasBeenSet; }
    template<typename FiltersT = Aws::Vector<DeviceFilter>>
    void SetFilters(FiltersT&& value) { m_filtersHasBeenSet = true; m_filters = std::forward<FiltersT>(value); }
    template<typename FiltersT = Aws::Vector<DeviceFilter>>
    DeviceSelectionResult& WithFilters(FiltersT&& value) { SetFilters(std::forward<FiltersT>(value)); return *this;}
    template<typename FiltersT = DeviceFilter>
    DeviceSelectionResult& AddFilters(FiltersT&& value) { m_filtersHasBeenSet = true; m_filters.emplace_back(std::forward<FiltersT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The number of devices that matched the device filter selection criteria.</p>
     */
    inline int GetMatchedDevicesCount() const { return m_matchedDevicesCount; }
    inline bool MatchedDevicesCountHasBeenSet() const { return m_matchedDevicesCountHasBeenSet; }
    inline void SetMatchedDevicesCount(int value) { m_matchedDevicesCountHasBeenSet = true; m_matchedDevicesCount = value; }
    inline DeviceSelectionResult& WithMatchedDevicesCount(int value) { SetMatchedDevicesCount(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The maximum number of devices to be selected by a device filter and included
     * in a test run.</p>
     */
    inline int GetMaxDevices() const { return m_maxDevices; }
    inline bool MaxDevicesHasBeenSet() const { return m_maxDevicesHasBeenSet; }
    inline void SetMaxDevices(int value) { m_maxDevicesHasBeenSet = true; m_maxDevices = value; }
    inline DeviceSelectionResult& WithMaxDevices(int value) { SetMaxDevices(value); return *this;}
    ///@}
  private:

    Aws::Vector<DeviceFilter> m_filters;
    bool m_filtersHasBeenSet = false;

    int m_matchedDevicesCount{0};
    bool m_matchedDevicesCountHasBeenSet = false;

    int m_maxDevices{0};
    bool m_maxDevicesHasBeenSet = false;
  };

} // namespace Model
} // namespace DeviceFarm
} // namespace Aws
