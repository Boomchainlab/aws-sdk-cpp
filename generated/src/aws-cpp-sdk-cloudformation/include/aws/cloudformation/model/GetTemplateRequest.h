﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/cloudformation/CloudFormation_EXPORTS.h>
#include <aws/cloudformation/CloudFormationRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/cloudformation/model/TemplateStage.h>
#include <utility>

namespace Aws
{
namespace CloudFormation
{
namespace Model
{

  /**
   * <p>The input for a <a>GetTemplate</a> action.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/cloudformation-2010-05-15/GetTemplateInput">AWS
   * API Reference</a></p>
   */
  class GetTemplateRequest : public CloudFormationRequest
  {
  public:
    AWS_CLOUDFORMATION_API GetTemplateRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "GetTemplate"; }

    AWS_CLOUDFORMATION_API Aws::String SerializePayload() const override;

  protected:
    AWS_CLOUDFORMATION_API void DumpBodyToUrl(Aws::Http::URI& uri ) const override;

  public:

    ///@{
    /**
     * <p>The name or the unique stack ID that's associated with the stack, which
     * aren't always interchangeable:</p> <ul> <li> <p>Running stacks: You can specify
     * either the stack's name or its unique stack ID.</p> </li> <li> <p>Deleted
     * stacks: You must specify the unique stack ID.</p> </li> </ul>
     */
    inline const Aws::String& GetStackName() const { return m_stackName; }
    inline bool StackNameHasBeenSet() const { return m_stackNameHasBeenSet; }
    template<typename StackNameT = Aws::String>
    void SetStackName(StackNameT&& value) { m_stackNameHasBeenSet = true; m_stackName = std::forward<StackNameT>(value); }
    template<typename StackNameT = Aws::String>
    GetTemplateRequest& WithStackName(StackNameT&& value) { SetStackName(std::forward<StackNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name or Amazon Resource Name (ARN) of a change set for which
     * CloudFormation returns the associated template. If you specify a name, you must
     * also specify the <code>StackName</code>.</p>
     */
    inline const Aws::String& GetChangeSetName() const { return m_changeSetName; }
    inline bool ChangeSetNameHasBeenSet() const { return m_changeSetNameHasBeenSet; }
    template<typename ChangeSetNameT = Aws::String>
    void SetChangeSetName(ChangeSetNameT&& value) { m_changeSetNameHasBeenSet = true; m_changeSetName = std::forward<ChangeSetNameT>(value); }
    template<typename ChangeSetNameT = Aws::String>
    GetTemplateRequest& WithChangeSetName(ChangeSetNameT&& value) { SetChangeSetName(std::forward<ChangeSetNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>For templates that include transforms, the stage of the template that
     * CloudFormation returns. To get the user-submitted template, specify
     * <code>Original</code>. To get the template after CloudFormation has processed
     * all transforms, specify <code>Processed</code>.</p> <p>If the template doesn't
     * include transforms, <code>Original</code> and <code>Processed</code> return the
     * same template. By default, CloudFormation specifies <code>Processed</code>.</p>
     */
    inline TemplateStage GetTemplateStage() const { return m_templateStage; }
    inline bool TemplateStageHasBeenSet() const { return m_templateStageHasBeenSet; }
    inline void SetTemplateStage(TemplateStage value) { m_templateStageHasBeenSet = true; m_templateStage = value; }
    inline GetTemplateRequest& WithTemplateStage(TemplateStage value) { SetTemplateStage(value); return *this;}
    ///@}
  private:

    Aws::String m_stackName;
    bool m_stackNameHasBeenSet = false;

    Aws::String m_changeSetName;
    bool m_changeSetNameHasBeenSet = false;

    TemplateStage m_templateStage{TemplateStage::NOT_SET};
    bool m_templateStageHasBeenSet = false;
  };

} // namespace Model
} // namespace CloudFormation
} // namespace Aws
