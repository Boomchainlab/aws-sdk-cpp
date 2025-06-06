﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/elasticmapreduce/EMR_EXPORTS.h>
#include <aws/elasticmapreduce/EMRRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace EMR
{
namespace Model
{

  /**
   */
  class StopNotebookExecutionRequest : public EMRRequest
  {
  public:
    AWS_EMR_API StopNotebookExecutionRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "StopNotebookExecution"; }

    AWS_EMR_API Aws::String SerializePayload() const override;

    AWS_EMR_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p>The unique identifier of the notebook execution.</p>
     */
    inline const Aws::String& GetNotebookExecutionId() const { return m_notebookExecutionId; }
    inline bool NotebookExecutionIdHasBeenSet() const { return m_notebookExecutionIdHasBeenSet; }
    template<typename NotebookExecutionIdT = Aws::String>
    void SetNotebookExecutionId(NotebookExecutionIdT&& value) { m_notebookExecutionIdHasBeenSet = true; m_notebookExecutionId = std::forward<NotebookExecutionIdT>(value); }
    template<typename NotebookExecutionIdT = Aws::String>
    StopNotebookExecutionRequest& WithNotebookExecutionId(NotebookExecutionIdT&& value) { SetNotebookExecutionId(std::forward<NotebookExecutionIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_notebookExecutionId;
    bool m_notebookExecutionIdHasBeenSet = false;
  };

} // namespace Model
} // namespace EMR
} // namespace Aws
