﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/pricing/Pricing_EXPORTS.h>
#include <aws/pricing/PricingRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace Pricing
{
namespace Model
{

  /**
   */
  class DescribeServicesRequest : public PricingRequest
  {
  public:
    AWS_PRICING_API DescribeServicesRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DescribeServices"; }

    AWS_PRICING_API Aws::String SerializePayload() const override;

    AWS_PRICING_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p>The code for the service whose information you want to retrieve, such as
     * <code>AmazonEC2</code>. You can use the <code>ServiceCode</code> to filter the
     * results in a <code>GetProducts</code> call. To retrieve a list of all services,
     * leave this blank.</p>
     */
    inline const Aws::String& GetServiceCode() const { return m_serviceCode; }
    inline bool ServiceCodeHasBeenSet() const { return m_serviceCodeHasBeenSet; }
    template<typename ServiceCodeT = Aws::String>
    void SetServiceCode(ServiceCodeT&& value) { m_serviceCodeHasBeenSet = true; m_serviceCode = std::forward<ServiceCodeT>(value); }
    template<typename ServiceCodeT = Aws::String>
    DescribeServicesRequest& WithServiceCode(ServiceCodeT&& value) { SetServiceCode(std::forward<ServiceCodeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The format version that you want the response to be in.</p> <p>Valid values
     * are: <code>aws_v1</code> </p>
     */
    inline const Aws::String& GetFormatVersion() const { return m_formatVersion; }
    inline bool FormatVersionHasBeenSet() const { return m_formatVersionHasBeenSet; }
    template<typename FormatVersionT = Aws::String>
    void SetFormatVersion(FormatVersionT&& value) { m_formatVersionHasBeenSet = true; m_formatVersion = std::forward<FormatVersionT>(value); }
    template<typename FormatVersionT = Aws::String>
    DescribeServicesRequest& WithFormatVersion(FormatVersionT&& value) { SetFormatVersion(std::forward<FormatVersionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The pagination token that indicates the next set of results that you want to
     * retrieve.</p>
     */
    inline const Aws::String& GetNextToken() const { return m_nextToken; }
    inline bool NextTokenHasBeenSet() const { return m_nextTokenHasBeenSet; }
    template<typename NextTokenT = Aws::String>
    void SetNextToken(NextTokenT&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::forward<NextTokenT>(value); }
    template<typename NextTokenT = Aws::String>
    DescribeServicesRequest& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The maximum number of results that you want returned in the response.</p>
     */
    inline int GetMaxResults() const { return m_maxResults; }
    inline bool MaxResultsHasBeenSet() const { return m_maxResultsHasBeenSet; }
    inline void SetMaxResults(int value) { m_maxResultsHasBeenSet = true; m_maxResults = value; }
    inline DescribeServicesRequest& WithMaxResults(int value) { SetMaxResults(value); return *this;}
    ///@}
  private:

    Aws::String m_serviceCode;
    bool m_serviceCodeHasBeenSet = false;

    Aws::String m_formatVersion;
    bool m_formatVersionHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    int m_maxResults{0};
    bool m_maxResultsHasBeenSet = false;
  };

} // namespace Model
} // namespace Pricing
} // namespace Aws
