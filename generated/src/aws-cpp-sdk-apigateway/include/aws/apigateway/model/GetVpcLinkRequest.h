﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/apigateway/APIGateway_EXPORTS.h>
#include <aws/apigateway/APIGatewayRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace APIGateway
{
namespace Model
{

  /**
   * <p>Gets a specified VPC link under the caller's account in a
   * region.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/apigateway-2015-07-09/GetVpcLinkRequest">AWS
   * API Reference</a></p>
   */
  class GetVpcLinkRequest : public APIGatewayRequest
  {
  public:
    AWS_APIGATEWAY_API GetVpcLinkRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "GetVpcLink"; }

    AWS_APIGATEWAY_API Aws::String SerializePayload() const override;


    ///@{
    /**
     * <p>The identifier of the VpcLink. It is used in an Integration to reference this
     * VpcLink.</p>
     */
    inline const Aws::String& GetVpcLinkId() const { return m_vpcLinkId; }
    inline bool VpcLinkIdHasBeenSet() const { return m_vpcLinkIdHasBeenSet; }
    template<typename VpcLinkIdT = Aws::String>
    void SetVpcLinkId(VpcLinkIdT&& value) { m_vpcLinkIdHasBeenSet = true; m_vpcLinkId = std::forward<VpcLinkIdT>(value); }
    template<typename VpcLinkIdT = Aws::String>
    GetVpcLinkRequest& WithVpcLinkId(VpcLinkIdT&& value) { SetVpcLinkId(std::forward<VpcLinkIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_vpcLinkId;
    bool m_vpcLinkIdHasBeenSet = false;
  };

} // namespace Model
} // namespace APIGateway
} // namespace Aws
