﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/m2/MainframeModernization_EXPORTS.h>
#include <aws/m2/MainframeModernizationRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace MainframeModernization
{
namespace Model
{

  /**
   */
  class StopApplicationRequest : public MainframeModernizationRequest
  {
  public:
    AWS_MAINFRAMEMODERNIZATION_API StopApplicationRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "StopApplication"; }

    AWS_MAINFRAMEMODERNIZATION_API Aws::String SerializePayload() const override;


    ///@{
    /**
     * <p>The unique identifier of the application you want to stop.</p>
     */
    inline const Aws::String& GetApplicationId() const { return m_applicationId; }
    inline bool ApplicationIdHasBeenSet() const { return m_applicationIdHasBeenSet; }
    template<typename ApplicationIdT = Aws::String>
    void SetApplicationId(ApplicationIdT&& value) { m_applicationIdHasBeenSet = true; m_applicationId = std::forward<ApplicationIdT>(value); }
    template<typename ApplicationIdT = Aws::String>
    StopApplicationRequest& WithApplicationId(ApplicationIdT&& value) { SetApplicationId(std::forward<ApplicationIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Stopping an application process can take a long time. Setting this parameter
     * to true lets you force stop the application so you don't need to wait until the
     * process finishes to apply another action on the application. The default value
     * is false.</p>
     */
    inline bool GetForceStop() const { return m_forceStop; }
    inline bool ForceStopHasBeenSet() const { return m_forceStopHasBeenSet; }
    inline void SetForceStop(bool value) { m_forceStopHasBeenSet = true; m_forceStop = value; }
    inline StopApplicationRequest& WithForceStop(bool value) { SetForceStop(value); return *this;}
    ///@}
  private:

    Aws::String m_applicationId;
    bool m_applicationIdHasBeenSet = false;

    bool m_forceStop{false};
    bool m_forceStopHasBeenSet = false;
  };

} // namespace Model
} // namespace MainframeModernization
} // namespace Aws
