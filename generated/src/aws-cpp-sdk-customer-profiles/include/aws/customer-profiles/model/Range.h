﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/customer-profiles/CustomerProfiles_EXPORTS.h>
#include <aws/customer-profiles/model/Unit.h>
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
namespace CustomerProfiles
{
namespace Model
{

  /**
   * <p>The relative time period over which data is included in the
   * aggregation.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/customer-profiles-2020-08-15/Range">AWS
   * API Reference</a></p>
   */
  class Range
  {
  public:
    AWS_CUSTOMERPROFILES_API Range() = default;
    AWS_CUSTOMERPROFILES_API Range(Aws::Utils::Json::JsonView jsonValue);
    AWS_CUSTOMERPROFILES_API Range& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CUSTOMERPROFILES_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The amount of time of the specified unit.</p>
     */
    inline int GetValue() const { return m_value; }
    inline bool ValueHasBeenSet() const { return m_valueHasBeenSet; }
    inline void SetValue(int value) { m_valueHasBeenSet = true; m_value = value; }
    inline Range& WithValue(int value) { SetValue(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The unit of time.</p>
     */
    inline Unit GetUnit() const { return m_unit; }
    inline bool UnitHasBeenSet() const { return m_unitHasBeenSet; }
    inline void SetUnit(Unit value) { m_unitHasBeenSet = true; m_unit = value; }
    inline Range& WithUnit(Unit value) { SetUnit(value); return *this;}
    ///@}
  private:

    int m_value{0};
    bool m_valueHasBeenSet = false;

    Unit m_unit{Unit::NOT_SET};
    bool m_unitHasBeenSet = false;
  };

} // namespace Model
} // namespace CustomerProfiles
} // namespace Aws
