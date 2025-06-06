﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/lightsail/Lightsail_EXPORTS.h>
#include <aws/lightsail/LightsailRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/lightsail/model/AppCategory.h>
#include <utility>

namespace Aws
{
namespace Lightsail
{
namespace Model
{

  /**
   */
  class GetBundlesRequest : public LightsailRequest
  {
  public:
    AWS_LIGHTSAIL_API GetBundlesRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "GetBundles"; }

    AWS_LIGHTSAIL_API Aws::String SerializePayload() const override;

    AWS_LIGHTSAIL_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p>A Boolean value that indicates whether to include inactive (unavailable)
     * bundles in the response of your request.</p>
     */
    inline bool GetIncludeInactive() const { return m_includeInactive; }
    inline bool IncludeInactiveHasBeenSet() const { return m_includeInactiveHasBeenSet; }
    inline void SetIncludeInactive(bool value) { m_includeInactiveHasBeenSet = true; m_includeInactive = value; }
    inline GetBundlesRequest& WithIncludeInactive(bool value) { SetIncludeInactive(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The token to advance to the next page of results from your request.</p> <p>To
     * get a page token, perform an initial <code>GetBundles</code> request. If your
     * results are paginated, the response will return a next page token that you can
     * specify as the page token in a subsequent request.</p>
     */
    inline const Aws::String& GetPageToken() const { return m_pageToken; }
    inline bool PageTokenHasBeenSet() const { return m_pageTokenHasBeenSet; }
    template<typename PageTokenT = Aws::String>
    void SetPageToken(PageTokenT&& value) { m_pageTokenHasBeenSet = true; m_pageToken = std::forward<PageTokenT>(value); }
    template<typename PageTokenT = Aws::String>
    GetBundlesRequest& WithPageToken(PageTokenT&& value) { SetPageToken(std::forward<PageTokenT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Returns a list of bundles that are specific to Lightsail for Research.</p>
     *  <p>You must use this parameter to view Lightsail for Research
     * bundles.</p> 
     */
    inline AppCategory GetAppCategory() const { return m_appCategory; }
    inline bool AppCategoryHasBeenSet() const { return m_appCategoryHasBeenSet; }
    inline void SetAppCategory(AppCategory value) { m_appCategoryHasBeenSet = true; m_appCategory = value; }
    inline GetBundlesRequest& WithAppCategory(AppCategory value) { SetAppCategory(value); return *this;}
    ///@}
  private:

    bool m_includeInactive{false};
    bool m_includeInactiveHasBeenSet = false;

    Aws::String m_pageToken;
    bool m_pageTokenHasBeenSet = false;

    AppCategory m_appCategory{AppCategory::NOT_SET};
    bool m_appCategoryHasBeenSet = false;
  };

} // namespace Model
} // namespace Lightsail
} // namespace Aws
