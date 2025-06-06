﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/medialive/MediaLive_EXPORTS.h>
#include <aws/medialive/model/CdiInputResolution.h>
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
namespace MediaLive
{
namespace Model
{

  /**
   * Placeholder documentation for CdiInputSpecification<p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/medialive-2017-10-14/CdiInputSpecification">AWS
   * API Reference</a></p>
   */
  class CdiInputSpecification
  {
  public:
    AWS_MEDIALIVE_API CdiInputSpecification() = default;
    AWS_MEDIALIVE_API CdiInputSpecification(Aws::Utils::Json::JsonView jsonValue);
    AWS_MEDIALIVE_API CdiInputSpecification& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_MEDIALIVE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * Maximum CDI input resolution
     */
    inline CdiInputResolution GetResolution() const { return m_resolution; }
    inline bool ResolutionHasBeenSet() const { return m_resolutionHasBeenSet; }
    inline void SetResolution(CdiInputResolution value) { m_resolutionHasBeenSet = true; m_resolution = value; }
    inline CdiInputSpecification& WithResolution(CdiInputResolution value) { SetResolution(value); return *this;}
    ///@}
  private:

    CdiInputResolution m_resolution{CdiInputResolution::NOT_SET};
    bool m_resolutionHasBeenSet = false;
  };

} // namespace Model
} // namespace MediaLive
} // namespace Aws
