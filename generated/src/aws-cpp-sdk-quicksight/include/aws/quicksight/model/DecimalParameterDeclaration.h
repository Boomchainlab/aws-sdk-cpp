﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/quicksight/QuickSight_EXPORTS.h>
#include <aws/quicksight/model/ParameterValueType.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/quicksight/model/DecimalDefaultValues.h>
#include <aws/quicksight/model/DecimalValueWhenUnsetConfiguration.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/quicksight/model/MappedDataSetParameter.h>
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
   * <p>A parameter declaration for the <code>Decimal</code> data type.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/quicksight-2018-04-01/DecimalParameterDeclaration">AWS
   * API Reference</a></p>
   */
  class DecimalParameterDeclaration
  {
  public:
    AWS_QUICKSIGHT_API DecimalParameterDeclaration() = default;
    AWS_QUICKSIGHT_API DecimalParameterDeclaration(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API DecimalParameterDeclaration& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The value type determines whether the parameter is a single-value or
     * multi-value parameter.</p>
     */
    inline ParameterValueType GetParameterValueType() const { return m_parameterValueType; }
    inline bool ParameterValueTypeHasBeenSet() const { return m_parameterValueTypeHasBeenSet; }
    inline void SetParameterValueType(ParameterValueType value) { m_parameterValueTypeHasBeenSet = true; m_parameterValueType = value; }
    inline DecimalParameterDeclaration& WithParameterValueType(ParameterValueType value) { SetParameterValueType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the parameter that is being declared.</p>
     */
    inline const Aws::String& GetName() const { return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    template<typename NameT = Aws::String>
    void SetName(NameT&& value) { m_nameHasBeenSet = true; m_name = std::forward<NameT>(value); }
    template<typename NameT = Aws::String>
    DecimalParameterDeclaration& WithName(NameT&& value) { SetName(std::forward<NameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The default values of a parameter. If the parameter is a single-value
     * parameter, a maximum of one default value can be provided.</p>
     */
    inline const DecimalDefaultValues& GetDefaultValues() const { return m_defaultValues; }
    inline bool DefaultValuesHasBeenSet() const { return m_defaultValuesHasBeenSet; }
    template<typename DefaultValuesT = DecimalDefaultValues>
    void SetDefaultValues(DefaultValuesT&& value) { m_defaultValuesHasBeenSet = true; m_defaultValues = std::forward<DefaultValuesT>(value); }
    template<typename DefaultValuesT = DecimalDefaultValues>
    DecimalParameterDeclaration& WithDefaultValues(DefaultValuesT&& value) { SetDefaultValues(std::forward<DefaultValuesT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The configuration that defines the default value of a <code>Decimal</code>
     * parameter when a value has not been set.</p>
     */
    inline const DecimalValueWhenUnsetConfiguration& GetValueWhenUnset() const { return m_valueWhenUnset; }
    inline bool ValueWhenUnsetHasBeenSet() const { return m_valueWhenUnsetHasBeenSet; }
    template<typename ValueWhenUnsetT = DecimalValueWhenUnsetConfiguration>
    void SetValueWhenUnset(ValueWhenUnsetT&& value) { m_valueWhenUnsetHasBeenSet = true; m_valueWhenUnset = std::forward<ValueWhenUnsetT>(value); }
    template<typename ValueWhenUnsetT = DecimalValueWhenUnsetConfiguration>
    DecimalParameterDeclaration& WithValueWhenUnset(ValueWhenUnsetT&& value) { SetValueWhenUnset(std::forward<ValueWhenUnsetT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::Vector<MappedDataSetParameter>& GetMappedDataSetParameters() const { return m_mappedDataSetParameters; }
    inline bool MappedDataSetParametersHasBeenSet() const { return m_mappedDataSetParametersHasBeenSet; }
    template<typename MappedDataSetParametersT = Aws::Vector<MappedDataSetParameter>>
    void SetMappedDataSetParameters(MappedDataSetParametersT&& value) { m_mappedDataSetParametersHasBeenSet = true; m_mappedDataSetParameters = std::forward<MappedDataSetParametersT>(value); }
    template<typename MappedDataSetParametersT = Aws::Vector<MappedDataSetParameter>>
    DecimalParameterDeclaration& WithMappedDataSetParameters(MappedDataSetParametersT&& value) { SetMappedDataSetParameters(std::forward<MappedDataSetParametersT>(value)); return *this;}
    template<typename MappedDataSetParametersT = MappedDataSetParameter>
    DecimalParameterDeclaration& AddMappedDataSetParameters(MappedDataSetParametersT&& value) { m_mappedDataSetParametersHasBeenSet = true; m_mappedDataSetParameters.emplace_back(std::forward<MappedDataSetParametersT>(value)); return *this; }
    ///@}
  private:

    ParameterValueType m_parameterValueType{ParameterValueType::NOT_SET};
    bool m_parameterValueTypeHasBeenSet = false;

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    DecimalDefaultValues m_defaultValues;
    bool m_defaultValuesHasBeenSet = false;

    DecimalValueWhenUnsetConfiguration m_valueWhenUnset;
    bool m_valueWhenUnsetHasBeenSet = false;

    Aws::Vector<MappedDataSetParameter> m_mappedDataSetParameters;
    bool m_mappedDataSetParametersHasBeenSet = false;
  };

} // namespace Model
} // namespace QuickSight
} // namespace Aws
