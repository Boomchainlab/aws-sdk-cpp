﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/codepipeline/CodePipeline_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/codepipeline/model/ErrorDetails.h>
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
namespace CodePipeline
{
namespace Model
{

  /**
   * <p>Execution result information, such as the external execution
   * ID.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/codepipeline-2015-07-09/ActionExecutionResult">AWS
   * API Reference</a></p>
   */
  class ActionExecutionResult
  {
  public:
    AWS_CODEPIPELINE_API ActionExecutionResult() = default;
    AWS_CODEPIPELINE_API ActionExecutionResult(Aws::Utils::Json::JsonView jsonValue);
    AWS_CODEPIPELINE_API ActionExecutionResult& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CODEPIPELINE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The action provider's external ID for the action execution.</p>
     */
    inline const Aws::String& GetExternalExecutionId() const { return m_externalExecutionId; }
    inline bool ExternalExecutionIdHasBeenSet() const { return m_externalExecutionIdHasBeenSet; }
    template<typename ExternalExecutionIdT = Aws::String>
    void SetExternalExecutionId(ExternalExecutionIdT&& value) { m_externalExecutionIdHasBeenSet = true; m_externalExecutionId = std::forward<ExternalExecutionIdT>(value); }
    template<typename ExternalExecutionIdT = Aws::String>
    ActionExecutionResult& WithExternalExecutionId(ExternalExecutionIdT&& value) { SetExternalExecutionId(std::forward<ExternalExecutionIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The action provider's summary for the action execution.</p>
     */
    inline const Aws::String& GetExternalExecutionSummary() const { return m_externalExecutionSummary; }
    inline bool ExternalExecutionSummaryHasBeenSet() const { return m_externalExecutionSummaryHasBeenSet; }
    template<typename ExternalExecutionSummaryT = Aws::String>
    void SetExternalExecutionSummary(ExternalExecutionSummaryT&& value) { m_externalExecutionSummaryHasBeenSet = true; m_externalExecutionSummary = std::forward<ExternalExecutionSummaryT>(value); }
    template<typename ExternalExecutionSummaryT = Aws::String>
    ActionExecutionResult& WithExternalExecutionSummary(ExternalExecutionSummaryT&& value) { SetExternalExecutionSummary(std::forward<ExternalExecutionSummaryT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The deepest external link to the external resource (for example, a repository
     * URL or deployment endpoint) that is used when running the action.</p>
     */
    inline const Aws::String& GetExternalExecutionUrl() const { return m_externalExecutionUrl; }
    inline bool ExternalExecutionUrlHasBeenSet() const { return m_externalExecutionUrlHasBeenSet; }
    template<typename ExternalExecutionUrlT = Aws::String>
    void SetExternalExecutionUrl(ExternalExecutionUrlT&& value) { m_externalExecutionUrlHasBeenSet = true; m_externalExecutionUrl = std::forward<ExternalExecutionUrlT>(value); }
    template<typename ExternalExecutionUrlT = Aws::String>
    ActionExecutionResult& WithExternalExecutionUrl(ExternalExecutionUrlT&& value) { SetExternalExecutionUrl(std::forward<ExternalExecutionUrlT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const ErrorDetails& GetErrorDetails() const { return m_errorDetails; }
    inline bool ErrorDetailsHasBeenSet() const { return m_errorDetailsHasBeenSet; }
    template<typename ErrorDetailsT = ErrorDetails>
    void SetErrorDetails(ErrorDetailsT&& value) { m_errorDetailsHasBeenSet = true; m_errorDetails = std::forward<ErrorDetailsT>(value); }
    template<typename ErrorDetailsT = ErrorDetails>
    ActionExecutionResult& WithErrorDetails(ErrorDetailsT&& value) { SetErrorDetails(std::forward<ErrorDetailsT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the log stream for the action compute.</p>
     */
    inline const Aws::String& GetLogStreamARN() const { return m_logStreamARN; }
    inline bool LogStreamARNHasBeenSet() const { return m_logStreamARNHasBeenSet; }
    template<typename LogStreamARNT = Aws::String>
    void SetLogStreamARN(LogStreamARNT&& value) { m_logStreamARNHasBeenSet = true; m_logStreamARN = std::forward<LogStreamARNT>(value); }
    template<typename LogStreamARNT = Aws::String>
    ActionExecutionResult& WithLogStreamARN(LogStreamARNT&& value) { SetLogStreamARN(std::forward<LogStreamARNT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_externalExecutionId;
    bool m_externalExecutionIdHasBeenSet = false;

    Aws::String m_externalExecutionSummary;
    bool m_externalExecutionSummaryHasBeenSet = false;

    Aws::String m_externalExecutionUrl;
    bool m_externalExecutionUrlHasBeenSet = false;

    ErrorDetails m_errorDetails;
    bool m_errorDetailsHasBeenSet = false;

    Aws::String m_logStreamARN;
    bool m_logStreamARNHasBeenSet = false;
  };

} // namespace Model
} // namespace CodePipeline
} // namespace Aws
