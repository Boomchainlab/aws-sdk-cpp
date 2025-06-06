﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/apigatewayv2/ApiGatewayV2_EXPORTS.h>
#include <aws/apigatewayv2/ApiGatewayV2Request.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace ApiGatewayV2
{
namespace Model
{

  /**
   */
  class DeleteRouteSettingsRequest : public ApiGatewayV2Request
  {
  public:
    AWS_APIGATEWAYV2_API DeleteRouteSettingsRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DeleteRouteSettings"; }

    AWS_APIGATEWAYV2_API Aws::String SerializePayload() const override;


    ///@{
    /**
     * <p>The API identifier.</p>
     */
    inline const Aws::String& GetApiId() const { return m_apiId; }
    inline bool ApiIdHasBeenSet() const { return m_apiIdHasBeenSet; }
    template<typename ApiIdT = Aws::String>
    void SetApiId(ApiIdT&& value) { m_apiIdHasBeenSet = true; m_apiId = std::forward<ApiIdT>(value); }
    template<typename ApiIdT = Aws::String>
    DeleteRouteSettingsRequest& WithApiId(ApiIdT&& value) { SetApiId(std::forward<ApiIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The route key.</p>
     */
    inline const Aws::String& GetRouteKey() const { return m_routeKey; }
    inline bool RouteKeyHasBeenSet() const { return m_routeKeyHasBeenSet; }
    template<typename RouteKeyT = Aws::String>
    void SetRouteKey(RouteKeyT&& value) { m_routeKeyHasBeenSet = true; m_routeKey = std::forward<RouteKeyT>(value); }
    template<typename RouteKeyT = Aws::String>
    DeleteRouteSettingsRequest& WithRouteKey(RouteKeyT&& value) { SetRouteKey(std::forward<RouteKeyT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The stage name. Stage names can only contain alphanumeric characters,
     * hyphens, and underscores. Maximum length is 128 characters.</p>
     */
    inline const Aws::String& GetStageName() const { return m_stageName; }
    inline bool StageNameHasBeenSet() const { return m_stageNameHasBeenSet; }
    template<typename StageNameT = Aws::String>
    void SetStageName(StageNameT&& value) { m_stageNameHasBeenSet = true; m_stageName = std::forward<StageNameT>(value); }
    template<typename StageNameT = Aws::String>
    DeleteRouteSettingsRequest& WithStageName(StageNameT&& value) { SetStageName(std::forward<StageNameT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_apiId;
    bool m_apiIdHasBeenSet = false;

    Aws::String m_routeKey;
    bool m_routeKeyHasBeenSet = false;

    Aws::String m_stageName;
    bool m_stageNameHasBeenSet = false;
  };

} // namespace Model
} // namespace ApiGatewayV2
} // namespace Aws
