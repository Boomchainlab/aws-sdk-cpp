﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/pinpoint/Pinpoint_EXPORTS.h>
#include <aws/pinpoint/PinpointRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace Http
{
    class URI;
} //namespace Http
namespace Pinpoint
{
namespace Model
{

  /**
   */
  class GetSegmentImportJobsRequest : public PinpointRequest
  {
  public:
    AWS_PINPOINT_API GetSegmentImportJobsRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "GetSegmentImportJobs"; }

    AWS_PINPOINT_API Aws::String SerializePayload() const override;

    AWS_PINPOINT_API void AddQueryStringParameters(Aws::Http::URI& uri) const override;


    ///@{
    /**
     * <p>The unique identifier for the application. This identifier is displayed as
     * the <b>Project ID</b> on the Amazon Pinpoint console.</p>
     */
    inline const Aws::String& GetApplicationId() const { return m_applicationId; }
    inline bool ApplicationIdHasBeenSet() const { return m_applicationIdHasBeenSet; }
    template<typename ApplicationIdT = Aws::String>
    void SetApplicationId(ApplicationIdT&& value) { m_applicationIdHasBeenSet = true; m_applicationId = std::forward<ApplicationIdT>(value); }
    template<typename ApplicationIdT = Aws::String>
    GetSegmentImportJobsRequest& WithApplicationId(ApplicationIdT&& value) { SetApplicationId(std::forward<ApplicationIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The maximum number of items to include in each page of a paginated response.
     * This parameter is not supported for application, campaign, and journey
     * metrics.</p>
     */
    inline const Aws::String& GetPageSize() const { return m_pageSize; }
    inline bool PageSizeHasBeenSet() const { return m_pageSizeHasBeenSet; }
    template<typename PageSizeT = Aws::String>
    void SetPageSize(PageSizeT&& value) { m_pageSizeHasBeenSet = true; m_pageSize = std::forward<PageSizeT>(value); }
    template<typename PageSizeT = Aws::String>
    GetSegmentImportJobsRequest& WithPageSize(PageSizeT&& value) { SetPageSize(std::forward<PageSizeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The unique identifier for the segment.</p>
     */
    inline const Aws::String& GetSegmentId() const { return m_segmentId; }
    inline bool SegmentIdHasBeenSet() const { return m_segmentIdHasBeenSet; }
    template<typename SegmentIdT = Aws::String>
    void SetSegmentId(SegmentIdT&& value) { m_segmentIdHasBeenSet = true; m_segmentId = std::forward<SegmentIdT>(value); }
    template<typename SegmentIdT = Aws::String>
    GetSegmentImportJobsRequest& WithSegmentId(SegmentIdT&& value) { SetSegmentId(std::forward<SegmentIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The NextToken string that specifies which page of results to return in a
     * paginated response.</p>
     */
    inline const Aws::String& GetToken() const { return m_token; }
    inline bool TokenHasBeenSet() const { return m_tokenHasBeenSet; }
    template<typename TokenT = Aws::String>
    void SetToken(TokenT&& value) { m_tokenHasBeenSet = true; m_token = std::forward<TokenT>(value); }
    template<typename TokenT = Aws::String>
    GetSegmentImportJobsRequest& WithToken(TokenT&& value) { SetToken(std::forward<TokenT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_applicationId;
    bool m_applicationIdHasBeenSet = false;

    Aws::String m_pageSize;
    bool m_pageSizeHasBeenSet = false;

    Aws::String m_segmentId;
    bool m_segmentIdHasBeenSet = false;

    Aws::String m_token;
    bool m_tokenHasBeenSet = false;
  };

} // namespace Model
} // namespace Pinpoint
} // namespace Aws
