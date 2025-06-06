﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/qconnect/QConnect_EXPORTS.h>
#include <aws/qconnect/model/KnowledgeBaseAssociationData.h>
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
namespace QConnect
{
namespace Model
{

  /**
   * <p>The data that is output as a result of the assistant
   * association.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/qconnect-2020-10-19/AssistantAssociationOutputData">AWS
   * API Reference</a></p>
   */
  class AssistantAssociationOutputData
  {
  public:
    AWS_QCONNECT_API AssistantAssociationOutputData() = default;
    AWS_QCONNECT_API AssistantAssociationOutputData(Aws::Utils::Json::JsonView jsonValue);
    AWS_QCONNECT_API AssistantAssociationOutputData& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_QCONNECT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The knowledge base where output data is sent.</p>
     */
    inline const KnowledgeBaseAssociationData& GetKnowledgeBaseAssociation() const { return m_knowledgeBaseAssociation; }
    inline bool KnowledgeBaseAssociationHasBeenSet() const { return m_knowledgeBaseAssociationHasBeenSet; }
    template<typename KnowledgeBaseAssociationT = KnowledgeBaseAssociationData>
    void SetKnowledgeBaseAssociation(KnowledgeBaseAssociationT&& value) { m_knowledgeBaseAssociationHasBeenSet = true; m_knowledgeBaseAssociation = std::forward<KnowledgeBaseAssociationT>(value); }
    template<typename KnowledgeBaseAssociationT = KnowledgeBaseAssociationData>
    AssistantAssociationOutputData& WithKnowledgeBaseAssociation(KnowledgeBaseAssociationT&& value) { SetKnowledgeBaseAssociation(std::forward<KnowledgeBaseAssociationT>(value)); return *this;}
    ///@}
  private:

    KnowledgeBaseAssociationData m_knowledgeBaseAssociation;
    bool m_knowledgeBaseAssociationHasBeenSet = false;
  };

} // namespace Model
} // namespace QConnect
} // namespace Aws
