﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/cleanrooms/CleanRooms_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
namespace CleanRooms
{
namespace Model
{

  /**
   * <p>A relation within an analysis.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/cleanrooms-2022-02-17/AnalysisSchema">AWS
   * API Reference</a></p>
   */
  class AnalysisSchema
  {
  public:
    AWS_CLEANROOMS_API AnalysisSchema() = default;
    AWS_CLEANROOMS_API AnalysisSchema(Aws::Utils::Json::JsonView jsonValue);
    AWS_CLEANROOMS_API AnalysisSchema& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CLEANROOMS_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The tables referenced in the analysis schema.</p>
     */
    inline const Aws::Vector<Aws::String>& GetReferencedTables() const { return m_referencedTables; }
    inline bool ReferencedTablesHasBeenSet() const { return m_referencedTablesHasBeenSet; }
    template<typename ReferencedTablesT = Aws::Vector<Aws::String>>
    void SetReferencedTables(ReferencedTablesT&& value) { m_referencedTablesHasBeenSet = true; m_referencedTables = std::forward<ReferencedTablesT>(value); }
    template<typename ReferencedTablesT = Aws::Vector<Aws::String>>
    AnalysisSchema& WithReferencedTables(ReferencedTablesT&& value) { SetReferencedTables(std::forward<ReferencedTablesT>(value)); return *this;}
    template<typename ReferencedTablesT = Aws::String>
    AnalysisSchema& AddReferencedTables(ReferencedTablesT&& value) { m_referencedTablesHasBeenSet = true; m_referencedTables.emplace_back(std::forward<ReferencedTablesT>(value)); return *this; }
    ///@}
  private:

    Aws::Vector<Aws::String> m_referencedTables;
    bool m_referencedTablesHasBeenSet = false;
  };

} // namespace Model
} // namespace CleanRooms
} // namespace Aws
