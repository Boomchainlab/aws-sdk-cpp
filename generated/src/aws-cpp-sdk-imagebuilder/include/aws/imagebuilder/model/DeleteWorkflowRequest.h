﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/imagebuilder/Imagebuilder_EXPORTS.h>
#include <aws/imagebuilder/ImagebuilderRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace Http
{
    class URI;
} //namespace Http
namespace imagebuilder
{
namespace Model
{

  /**
   */
  class DeleteWorkflowRequest : public ImagebuilderRequest
  {
  public:
    AWS_IMAGEBUILDER_API DeleteWorkflowRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DeleteWorkflow"; }

    AWS_IMAGEBUILDER_API Aws::String SerializePayload() const override;

    AWS_IMAGEBUILDER_API void AddQueryStringParameters(Aws::Http::URI& uri) const override;


    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the workflow resource to delete.</p>
     */
    inline const Aws::String& GetWorkflowBuildVersionArn() const { return m_workflowBuildVersionArn; }
    inline bool WorkflowBuildVersionArnHasBeenSet() const { return m_workflowBuildVersionArnHasBeenSet; }
    template<typename WorkflowBuildVersionArnT = Aws::String>
    void SetWorkflowBuildVersionArn(WorkflowBuildVersionArnT&& value) { m_workflowBuildVersionArnHasBeenSet = true; m_workflowBuildVersionArn = std::forward<WorkflowBuildVersionArnT>(value); }
    template<typename WorkflowBuildVersionArnT = Aws::String>
    DeleteWorkflowRequest& WithWorkflowBuildVersionArn(WorkflowBuildVersionArnT&& value) { SetWorkflowBuildVersionArn(std::forward<WorkflowBuildVersionArnT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_workflowBuildVersionArn;
    bool m_workflowBuildVersionArnHasBeenSet = false;
  };

} // namespace Model
} // namespace imagebuilder
} // namespace Aws
