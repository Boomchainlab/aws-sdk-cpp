﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/qconnect/QConnect_EXPORTS.h>
#include <aws/qconnect/QConnectRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace QConnect
{
namespace Model
{

  /**
   */
  class DeleteAIAgentVersionRequest : public QConnectRequest
  {
  public:
    AWS_QCONNECT_API DeleteAIAgentVersionRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DeleteAIAgentVersion"; }

    AWS_QCONNECT_API Aws::String SerializePayload() const override;


    ///@{
    /**
     * <p>The identifier of the Amazon Q in Connect assistant. Can be either the ID or
     * the ARN. URLs cannot contain the ARN.</p>
     */
    inline const Aws::String& GetAssistantId() const { return m_assistantId; }
    inline bool AssistantIdHasBeenSet() const { return m_assistantIdHasBeenSet; }
    template<typename AssistantIdT = Aws::String>
    void SetAssistantId(AssistantIdT&& value) { m_assistantIdHasBeenSet = true; m_assistantId = std::forward<AssistantIdT>(value); }
    template<typename AssistantIdT = Aws::String>
    DeleteAIAgentVersionRequest& WithAssistantId(AssistantIdT&& value) { SetAssistantId(std::forward<AssistantIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The identifier of the Amazon Q in Connect AI Agent. Can be either the ID or
     * the ARN. URLs cannot contain the ARN.</p>
     */
    inline const Aws::String& GetAiAgentId() const { return m_aiAgentId; }
    inline bool AiAgentIdHasBeenSet() const { return m_aiAgentIdHasBeenSet; }
    template<typename AiAgentIdT = Aws::String>
    void SetAiAgentId(AiAgentIdT&& value) { m_aiAgentIdHasBeenSet = true; m_aiAgentId = std::forward<AiAgentIdT>(value); }
    template<typename AiAgentIdT = Aws::String>
    DeleteAIAgentVersionRequest& WithAiAgentId(AiAgentIdT&& value) { SetAiAgentId(std::forward<AiAgentIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The version number of the AI Agent version.</p>
     */
    inline long long GetVersionNumber() const { return m_versionNumber; }
    inline bool VersionNumberHasBeenSet() const { return m_versionNumberHasBeenSet; }
    inline void SetVersionNumber(long long value) { m_versionNumberHasBeenSet = true; m_versionNumber = value; }
    inline DeleteAIAgentVersionRequest& WithVersionNumber(long long value) { SetVersionNumber(value); return *this;}
    ///@}
  private:

    Aws::String m_assistantId;
    bool m_assistantIdHasBeenSet = false;

    Aws::String m_aiAgentId;
    bool m_aiAgentIdHasBeenSet = false;

    long long m_versionNumber{0};
    bool m_versionNumberHasBeenSet = false;
  };

} // namespace Model
} // namespace QConnect
} // namespace Aws
