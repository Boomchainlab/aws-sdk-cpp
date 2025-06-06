﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/securityhub/SecurityHub_EXPORTS.h>

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
namespace SecurityHub
{
namespace Model
{

  /**
   * <p>Provides the latitude and longitude coordinates of a location.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/securityhub-2018-10-26/GeoLocation">AWS
   * API Reference</a></p>
   */
  class GeoLocation
  {
  public:
    AWS_SECURITYHUB_API GeoLocation() = default;
    AWS_SECURITYHUB_API GeoLocation(Aws::Utils::Json::JsonView jsonValue);
    AWS_SECURITYHUB_API GeoLocation& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SECURITYHUB_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The longitude of the location.</p>
     */
    inline double GetLon() const { return m_lon; }
    inline bool LonHasBeenSet() const { return m_lonHasBeenSet; }
    inline void SetLon(double value) { m_lonHasBeenSet = true; m_lon = value; }
    inline GeoLocation& WithLon(double value) { SetLon(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The latitude of the location.</p>
     */
    inline double GetLat() const { return m_lat; }
    inline bool LatHasBeenSet() const { return m_latHasBeenSet; }
    inline void SetLat(double value) { m_latHasBeenSet = true; m_lat = value; }
    inline GeoLocation& WithLat(double value) { SetLat(value); return *this;}
    ///@}
  private:

    double m_lon{0.0};
    bool m_lonHasBeenSet = false;

    double m_lat{0.0};
    bool m_latHasBeenSet = false;
  };

} // namespace Model
} // namespace SecurityHub
} // namespace Aws
