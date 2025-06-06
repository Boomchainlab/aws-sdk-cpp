﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/greengrass/Greengrass_EXPORTS.h>
#include <aws/greengrass/GreengrassRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace Greengrass
{
namespace Model
{

  /**
   */
  class GetBulkDeploymentStatusRequest : public GreengrassRequest
  {
  public:
    AWS_GREENGRASS_API GetBulkDeploymentStatusRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "GetBulkDeploymentStatus"; }

    AWS_GREENGRASS_API Aws::String SerializePayload() const override;


    ///@{
    /**
     * The ID of the bulk deployment.
     */
    inline const Aws::String& GetBulkDeploymentId() const { return m_bulkDeploymentId; }
    inline bool BulkDeploymentIdHasBeenSet() const { return m_bulkDeploymentIdHasBeenSet; }
    template<typename BulkDeploymentIdT = Aws::String>
    void SetBulkDeploymentId(BulkDeploymentIdT&& value) { m_bulkDeploymentIdHasBeenSet = true; m_bulkDeploymentId = std::forward<BulkDeploymentIdT>(value); }
    template<typename BulkDeploymentIdT = Aws::String>
    GetBulkDeploymentStatusRequest& WithBulkDeploymentId(BulkDeploymentIdT&& value) { SetBulkDeploymentId(std::forward<BulkDeploymentIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_bulkDeploymentId;
    bool m_bulkDeploymentIdHasBeenSet = false;
  };

} // namespace Model
} // namespace Greengrass
} // namespace Aws
