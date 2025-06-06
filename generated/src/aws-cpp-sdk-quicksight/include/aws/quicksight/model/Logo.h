﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/quicksight/QuickSight_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/quicksight/model/LogoSet.h>
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
namespace QuickSight
{
namespace Model
{

  /**
   * <p>The logo configuration.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/quicksight-2018-04-01/Logo">AWS API
   * Reference</a></p>
   */
  class Logo
  {
  public:
    AWS_QUICKSIGHT_API Logo() = default;
    AWS_QUICKSIGHT_API Logo(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API Logo& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The alt text for the logo.</p>
     */
    inline const Aws::String& GetAltText() const { return m_altText; }
    inline bool AltTextHasBeenSet() const { return m_altTextHasBeenSet; }
    template<typename AltTextT = Aws::String>
    void SetAltText(AltTextT&& value) { m_altTextHasBeenSet = true; m_altText = std::forward<AltTextT>(value); }
    template<typename AltTextT = Aws::String>
    Logo& WithAltText(AltTextT&& value) { SetAltText(std::forward<AltTextT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A set of configured logos.</p>
     */
    inline const LogoSet& GetLogoSet() const { return m_logoSet; }
    inline bool LogoSetHasBeenSet() const { return m_logoSetHasBeenSet; }
    template<typename LogoSetT = LogoSet>
    void SetLogoSet(LogoSetT&& value) { m_logoSetHasBeenSet = true; m_logoSet = std::forward<LogoSetT>(value); }
    template<typename LogoSetT = LogoSet>
    Logo& WithLogoSet(LogoSetT&& value) { SetLogoSet(std::forward<LogoSetT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_altText;
    bool m_altTextHasBeenSet = false;

    LogoSet m_logoSet;
    bool m_logoSetHasBeenSet = false;
  };

} // namespace Model
} // namespace QuickSight
} // namespace Aws
