﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/cloudfront/CloudFront_EXPORTS.h>
#include <aws/cloudfront/CloudFrontRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace CloudFront
{
namespace Model
{

  /**
   */
  class GetResponseHeadersPolicyConfig2020_05_31Request : public CloudFrontRequest
  {
  public:
    AWS_CLOUDFRONT_API GetResponseHeadersPolicyConfig2020_05_31Request() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "GetResponseHeadersPolicyConfig"; }

    AWS_CLOUDFRONT_API Aws::String SerializePayload() const override;


    ///@{
    /**
     * <p>The identifier for the response headers policy.</p> <p>If the response
     * headers policy is attached to a distribution's cache behavior, you can get the
     * policy's identifier using <code>ListDistributions</code> or
     * <code>GetDistribution</code>. If the response headers policy is not attached to
     * a cache behavior, you can get the identifier using
     * <code>ListResponseHeadersPolicies</code>.</p>
     */
    inline const Aws::String& GetId() const { return m_id; }
    inline bool IdHasBeenSet() const { return m_idHasBeenSet; }
    template<typename IdT = Aws::String>
    void SetId(IdT&& value) { m_idHasBeenSet = true; m_id = std::forward<IdT>(value); }
    template<typename IdT = Aws::String>
    GetResponseHeadersPolicyConfig2020_05_31Request& WithId(IdT&& value) { SetId(std::forward<IdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_id;
    bool m_idHasBeenSet = false;
  };

} // namespace Model
} // namespace CloudFront
} // namespace Aws
