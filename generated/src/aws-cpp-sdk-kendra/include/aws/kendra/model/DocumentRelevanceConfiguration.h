﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/kendra/Kendra_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/kendra/model/Relevance.h>
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
   * <p>Overrides the document relevance properties of a custom index
   * field.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/kendra-2019-02-03/DocumentRelevanceConfiguration">AWS
   * API Reference</a></p>
   */
  class DocumentRelevanceConfiguration
  {
  public:
    AWS_KENDRA_API DocumentRelevanceConfiguration() = default;
    AWS_KENDRA_API DocumentRelevanceConfiguration(Aws::Utils::Json::JsonView jsonValue);
    AWS_KENDRA_API DocumentRelevanceConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_KENDRA_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The name of the index field.</p>
     */
    inline const Aws::String& GetName() const { return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    template<typename NameT = Aws::String>
    void SetName(NameT&& value) { m_nameHasBeenSet = true; m_name = std::forward<NameT>(value); }
    template<typename NameT = Aws::String>
    DocumentRelevanceConfiguration& WithName(NameT&& value) { SetName(std::forward<NameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Provides information for tuning the relevance of a field in a search. When a
     * query includes terms that match the field, the results are given a boost in the
     * response based on these tuning parameters.</p>
     */
    inline const Relevance& GetRelevance() const { return m_relevance; }
    inline bool RelevanceHasBeenSet() const { return m_relevanceHasBeenSet; }
    template<typename RelevanceT = Relevance>
    void SetRelevance(RelevanceT&& value) { m_relevanceHasBeenSet = true; m_relevance = std::forward<RelevanceT>(value); }
    template<typename RelevanceT = Relevance>
    DocumentRelevanceConfiguration& WithRelevance(RelevanceT&& value) { SetRelevance(std::forward<RelevanceT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    Relevance m_relevance;
    bool m_relevanceHasBeenSet = false;
  };

} // namespace Model
} // namespace kendra
} // namespace Aws
