﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/sesv2/SESV2_EXPORTS.h>
#include <aws/sesv2/SESV2Request.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace Http
{
    class URI;
} //namespace Http
namespace SESV2
{
namespace Model
{

  /**
   * <p>Represents a request to list all the multi-region endpoints
   * (global-endpoints) whose primary region is the AWS-Region where operation is
   * executed. </p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/sesv2-2019-09-27/ListMultiRegionEndpointsRequest">AWS
   * API Reference</a></p>
   */
  class ListMultiRegionEndpointsRequest : public SESV2Request
  {
  public:
    AWS_SESV2_API ListMultiRegionEndpointsRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "ListMultiRegionEndpoints"; }

    AWS_SESV2_API Aws::String SerializePayload() const override;

    AWS_SESV2_API void AddQueryStringParameters(Aws::Http::URI& uri) const override;


    ///@{
    /**
     * <p>A token returned from a previous call to
     * <code>ListMultiRegionEndpoints</code> to indicate the position in the list of
     * multi-region endpoints (global-endpoints).</p>
     */
    inline const Aws::String& GetNextToken() const { return m_nextToken; }
    inline bool NextTokenHasBeenSet() const { return m_nextTokenHasBeenSet; }
    template<typename NextTokenT = Aws::String>
    void SetNextToken(NextTokenT&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::forward<NextTokenT>(value); }
    template<typename NextTokenT = Aws::String>
    ListMultiRegionEndpointsRequest& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The number of results to show in a single call to
     * <code>ListMultiRegionEndpoints</code>. If the number of results is larger than
     * the number you specified in this parameter, the response includes a
     * <code>NextToken</code> element that you can use to retrieve the next page of
     * results. </p>
     */
    inline int GetPageSize() const { return m_pageSize; }
    inline bool PageSizeHasBeenSet() const { return m_pageSizeHasBeenSet; }
    inline void SetPageSize(int value) { m_pageSizeHasBeenSet = true; m_pageSize = value; }
    inline ListMultiRegionEndpointsRequest& WithPageSize(int value) { SetPageSize(value); return *this;}
    ///@}
  private:

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    int m_pageSize{0};
    bool m_pageSizeHasBeenSet = false;
  };

} // namespace Model
} // namespace SESV2
} // namespace Aws
