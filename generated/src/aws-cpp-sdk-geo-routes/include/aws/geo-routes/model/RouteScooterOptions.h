﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/geo-routes/GeoRoutes_EXPORTS.h>
#include <aws/geo-routes/model/RouteEngineType.h>
#include <aws/geo-routes/model/RouteVehicleLicensePlate.h>
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
namespace GeoRoutes
{
namespace Model
{

  /**
   * <p>Travel mode options when the provided travel mode is <code>Scooter</code>
   * </p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/geo-routes-2020-11-19/RouteScooterOptions">AWS
   * API Reference</a></p>
   */
  class RouteScooterOptions
  {
  public:
    AWS_GEOROUTES_API RouteScooterOptions() = default;
    AWS_GEOROUTES_API RouteScooterOptions(Aws::Utils::Json::JsonView jsonValue);
    AWS_GEOROUTES_API RouteScooterOptions& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_GEOROUTES_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Engine type of the vehicle.</p>
     */
    inline RouteEngineType GetEngineType() const { return m_engineType; }
    inline bool EngineTypeHasBeenSet() const { return m_engineTypeHasBeenSet; }
    inline void SetEngineType(RouteEngineType value) { m_engineTypeHasBeenSet = true; m_engineType = value; }
    inline RouteScooterOptions& WithEngineType(RouteEngineType value) { SetEngineType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The vehicle License Plate.</p>
     */
    inline const RouteVehicleLicensePlate& GetLicensePlate() const { return m_licensePlate; }
    inline bool LicensePlateHasBeenSet() const { return m_licensePlateHasBeenSet; }
    template<typename LicensePlateT = RouteVehicleLicensePlate>
    void SetLicensePlate(LicensePlateT&& value) { m_licensePlateHasBeenSet = true; m_licensePlate = std::forward<LicensePlateT>(value); }
    template<typename LicensePlateT = RouteVehicleLicensePlate>
    RouteScooterOptions& WithLicensePlate(LicensePlateT&& value) { SetLicensePlate(std::forward<LicensePlateT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Maximum speed</p> <p> <b>Unit</b>: <code>KilometersPerHour</code> </p>
     */
    inline double GetMaxSpeed() const { return m_maxSpeed; }
    inline bool MaxSpeedHasBeenSet() const { return m_maxSpeedHasBeenSet; }
    inline void SetMaxSpeed(double value) { m_maxSpeedHasBeenSet = true; m_maxSpeed = value; }
    inline RouteScooterOptions& WithMaxSpeed(double value) { SetMaxSpeed(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The number of occupants in the vehicle.</p> <p>Default Value: <code>1</code>
     * </p>
     */
    inline int GetOccupancy() const { return m_occupancy; }
    inline bool OccupancyHasBeenSet() const { return m_occupancyHasBeenSet; }
    inline void SetOccupancy(int value) { m_occupancyHasBeenSet = true; m_occupancy = value; }
    inline RouteScooterOptions& WithOccupancy(int value) { SetOccupancy(value); return *this;}
    ///@}
  private:

    RouteEngineType m_engineType{RouteEngineType::NOT_SET};
    bool m_engineTypeHasBeenSet = false;

    RouteVehicleLicensePlate m_licensePlate;
    bool m_licensePlateHasBeenSet = false;

    double m_maxSpeed{0.0};
    bool m_maxSpeedHasBeenSet = false;

    int m_occupancy{0};
    bool m_occupancyHasBeenSet = false;
  };

} // namespace Model
} // namespace GeoRoutes
} // namespace Aws
