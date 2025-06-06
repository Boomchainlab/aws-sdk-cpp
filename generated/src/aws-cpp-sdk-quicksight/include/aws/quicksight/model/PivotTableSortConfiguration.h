﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/quicksight/QuickSight_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/quicksight/model/PivotFieldSortOptions.h>
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
   * <p>The sort configuration for a <code>PivotTableVisual</code>.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/quicksight-2018-04-01/PivotTableSortConfiguration">AWS
   * API Reference</a></p>
   */
  class PivotTableSortConfiguration
  {
  public:
    AWS_QUICKSIGHT_API PivotTableSortConfiguration() = default;
    AWS_QUICKSIGHT_API PivotTableSortConfiguration(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API PivotTableSortConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The field sort options for a pivot table sort configuration.</p>
     */
    inline const Aws::Vector<PivotFieldSortOptions>& GetFieldSortOptions() const { return m_fieldSortOptions; }
    inline bool FieldSortOptionsHasBeenSet() const { return m_fieldSortOptionsHasBeenSet; }
    template<typename FieldSortOptionsT = Aws::Vector<PivotFieldSortOptions>>
    void SetFieldSortOptions(FieldSortOptionsT&& value) { m_fieldSortOptionsHasBeenSet = true; m_fieldSortOptions = std::forward<FieldSortOptionsT>(value); }
    template<typename FieldSortOptionsT = Aws::Vector<PivotFieldSortOptions>>
    PivotTableSortConfiguration& WithFieldSortOptions(FieldSortOptionsT&& value) { SetFieldSortOptions(std::forward<FieldSortOptionsT>(value)); return *this;}
    template<typename FieldSortOptionsT = PivotFieldSortOptions>
    PivotTableSortConfiguration& AddFieldSortOptions(FieldSortOptionsT&& value) { m_fieldSortOptionsHasBeenSet = true; m_fieldSortOptions.emplace_back(std::forward<FieldSortOptionsT>(value)); return *this; }
    ///@}
  private:

    Aws::Vector<PivotFieldSortOptions> m_fieldSortOptions;
    bool m_fieldSortOptionsHasBeenSet = false;
  };

} // namespace Model
} // namespace QuickSight
} // namespace Aws
