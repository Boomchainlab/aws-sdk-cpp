﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/kendra/Kendra_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/kendra/model/AttributeSuggestionsMode.h>
#include <aws/kendra/model/SuggestableConfig.h>
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
namespace kendra
{
namespace Model
{

  /**
   * <p>Updates the configuration information for the document fields/attributes that
   * you want to base query suggestions on.</p> <p>To deactivate using documents
   * fields for query suggestions, set the mode to <code>INACTIVE</code>. You must
   * also set <code>SuggestionTypes</code> as either <code>QUERY</code> or
   * <code>DOCUMENT_ATTRIBUTES</code> and then call <a
   * href="https://docs.aws.amazon.com/kendra/latest/dg/API_GetQuerySuggestions.html">GetQuerySuggestions</a>.
   * If you set to <code>QUERY</code>, then Amazon Kendra uses the query history to
   * base suggestions on. If you set to <code>DOCUMENT_ATTRIBUTES</code>, then Amazon
   * Kendra uses the contents of document fields to base suggestions
   * on.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/kendra-2019-02-03/AttributeSuggestionsUpdateConfig">AWS
   * API Reference</a></p>
   */
  class AttributeSuggestionsUpdateConfig
  {
  public:
    AWS_KENDRA_API AttributeSuggestionsUpdateConfig() = default;
    AWS_KENDRA_API AttributeSuggestionsUpdateConfig(Aws::Utils::Json::JsonView jsonValue);
    AWS_KENDRA_API AttributeSuggestionsUpdateConfig& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_KENDRA_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The list of fields/attributes that you want to set as suggestible for query
     * suggestions.</p>
     */
    inline const Aws::Vector<SuggestableConfig>& GetSuggestableConfigList() const { return m_suggestableConfigList; }
    inline bool SuggestableConfigListHasBeenSet() const { return m_suggestableConfigListHasBeenSet; }
    template<typename SuggestableConfigListT = Aws::Vector<SuggestableConfig>>
    void SetSuggestableConfigList(SuggestableConfigListT&& value) { m_suggestableConfigListHasBeenSet = true; m_suggestableConfigList = std::forward<SuggestableConfigListT>(value); }
    template<typename SuggestableConfigListT = Aws::Vector<SuggestableConfig>>
    AttributeSuggestionsUpdateConfig& WithSuggestableConfigList(SuggestableConfigListT&& value) { SetSuggestableConfigList(std::forward<SuggestableConfigListT>(value)); return *this;}
    template<typename SuggestableConfigListT = SuggestableConfig>
    AttributeSuggestionsUpdateConfig& AddSuggestableConfigList(SuggestableConfigListT&& value) { m_suggestableConfigListHasBeenSet = true; m_suggestableConfigList.emplace_back(std::forward<SuggestableConfigListT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>You can set the mode to <code>ACTIVE</code> or <code>INACTIVE</code>. You
     * must also set <code>SuggestionTypes</code> as either <code>QUERY</code> or
     * <code>DOCUMENT_ATTRIBUTES</code> and then call <a
     * href="https://docs.aws.amazon.com/kendra/latest/dg/API_GetQuerySuggestions.html">GetQuerySuggestions</a>.
     * If <code>Mode</code> to use query history is set to <code>ENABLED</code> when
     * calling <a
     * href="https://docs.aws.amazon.com/kendra/latest/dg/API_UpdateQuerySuggestionsConfig.html">UpdateQuerySuggestionsConfig</a>
     * and <code>AttributeSuggestionsMode</code> to use fields/attributes is set to
     * <code>ACTIVE</code>, and you haven't set your <code>SuggestionTypes</code>
     * preference to <code>DOCUMENT_ATTRIBUTES</code>, then Amazon Kendra uses the
     * query history.</p>
     */
    inline AttributeSuggestionsMode GetAttributeSuggestionsMode() const { return m_attributeSuggestionsMode; }
    inline bool AttributeSuggestionsModeHasBeenSet() const { return m_attributeSuggestionsModeHasBeenSet; }
    inline void SetAttributeSuggestionsMode(AttributeSuggestionsMode value) { m_attributeSuggestionsModeHasBeenSet = true; m_attributeSuggestionsMode = value; }
    inline AttributeSuggestionsUpdateConfig& WithAttributeSuggestionsMode(AttributeSuggestionsMode value) { SetAttributeSuggestionsMode(value); return *this;}
    ///@}
  private:

    Aws::Vector<SuggestableConfig> m_suggestableConfigList;
    bool m_suggestableConfigListHasBeenSet = false;

    AttributeSuggestionsMode m_attributeSuggestionsMode{AttributeSuggestionsMode::NOT_SET};
    bool m_attributeSuggestionsModeHasBeenSet = false;
  };

} // namespace Model
} // namespace kendra
} // namespace Aws
