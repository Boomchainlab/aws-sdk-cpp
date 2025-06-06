﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/quicksight/QuickSight_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/quicksight/model/DatasetParameterValueType.h>
#include <aws/quicksight/model/DecimalDatasetParameterDefaultValues.h>
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
   * <p>A decimal parameter for a dataset.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/quicksight-2018-04-01/DecimalDatasetParameter">AWS
   * API Reference</a></p>
   */
  class DecimalDatasetParameter
  {
  public:
    AWS_QUICKSIGHT_API DecimalDatasetParameter() = default;
    AWS_QUICKSIGHT_API DecimalDatasetParameter(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API DecimalDatasetParameter& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>An identifier for the decimal parameter created in the dataset.</p>
     */
    inline const Aws::String& GetId() const { return m_id; }
    inline bool IdHasBeenSet() const { return m_idHasBeenSet; }
    template<typename IdT = Aws::String>
    void SetId(IdT&& value) { m_idHasBeenSet = true; m_id = std::forward<IdT>(value); }
    template<typename IdT = Aws::String>
    DecimalDatasetParameter& WithId(IdT&& value) { SetId(std::forward<IdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the decimal parameter that is created in the dataset.</p>
     */
    inline const Aws::String& GetName() const { return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    template<typename NameT = Aws::String>
    void SetName(NameT&& value) { m_nameHasBeenSet = true; m_name = std::forward<NameT>(value); }
    template<typename NameT = Aws::String>
    DecimalDatasetParameter& WithName(NameT&& value) { SetName(std::forward<NameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The value type of the dataset parameter. Valid values are <code>single
     * value</code> or <code>multi value</code>.</p>
     */
    inline DatasetParameterValueType GetValueType() const { return m_valueType; }
    inline bool ValueTypeHasBeenSet() const { return m_valueTypeHasBeenSet; }
    inline void SetValueType(DatasetParameterValueType value) { m_valueTypeHasBeenSet = true; m_valueType = value; }
    inline DecimalDatasetParameter& WithValueType(DatasetParameterValueType value) { SetValueType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A list of default values for a given decimal parameter. This structure only
     * accepts static values.</p>
     */
    inline const DecimalDatasetParameterDefaultValues& GetDefaultValues() const { return m_defaultValues; }
    inline bool DefaultValuesHasBeenSet() const { return m_defaultValuesHasBeenSet; }
    template<typename DefaultValuesT = DecimalDatasetParameterDefaultValues>
    void SetDefaultValues(DefaultValuesT&& value) { m_defaultValuesHasBeenSet = true; m_defaultValues = std::forward<DefaultValuesT>(value); }
    template<typename DefaultValuesT = DecimalDatasetParameterDefaultValues>
    DecimalDatasetParameter& WithDefaultValues(DefaultValuesT&& value) { SetDefaultValues(std::forward<DefaultValuesT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_id;
    bool m_idHasBeenSet = false;

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    DatasetParameterValueType m_valueType{DatasetParameterValueType::NOT_SET};
    bool m_valueTypeHasBeenSet = false;

    DecimalDatasetParameterDefaultValues m_defaultValues;
    bool m_defaultValuesHasBeenSet = false;
  };

} // namespace Model
} // namespace QuickSight
} // namespace Aws
