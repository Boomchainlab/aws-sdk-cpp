﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ec2/EC2_EXPORTS.h>
#include <aws/ec2/EC2Request.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/ec2/model/Filter.h>
#include <utility>

namespace Aws
{
namespace EC2
{
namespace Model
{

  /**
   */
  class DescribeVpcBlockPublicAccessExclusionsRequest : public EC2Request
  {
  public:
    AWS_EC2_API DescribeVpcBlockPublicAccessExclusionsRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DescribeVpcBlockPublicAccessExclusions"; }

    AWS_EC2_API Aws::String SerializePayload() const override;

  protected:
    AWS_EC2_API void DumpBodyToUrl(Aws::Http::URI& uri ) const override;

  public:

    ///@{
    /**
     * <p>Checks whether you have the required permissions for the action, without
     * actually making the request, and provides an error response. If you have the
     * required permissions, the error response is <code>DryRunOperation</code>.
     * Otherwise, it is <code>UnauthorizedOperation</code>.</p>
     */
    inline bool GetDryRun() const { return m_dryRun; }
    inline bool DryRunHasBeenSet() const { return m_dryRunHasBeenSet; }
    inline void SetDryRun(bool value) { m_dryRunHasBeenSet = true; m_dryRun = value; }
    inline DescribeVpcBlockPublicAccessExclusionsRequest& WithDryRun(bool value) { SetDryRun(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Filters for the request:</p> <ul> <li> <p> <code>resource-arn</code> - The
     * Amazon Resource Name (ARN) of a exclusion.</p> </li> <li> <p>
     * <code>internet-gateway-exclusion-mode</code> - The mode of a VPC BPA exclusion.
     * Possible values: <code>allow-bidirectional | allow-egress</code>.</p> </li> <li>
     * <p> <code>state</code> - The state of VPC BPA. Possible values:
     * <code>create-in-progress | create-complete | update-in-progress |
     * update-complete | delete-in-progress | deleted-complete | disable-in-progress |
     * disable-complete</code> </p> </li> <li> <p> <code>tag</code> - The key/value
     * combination of a tag assigned to the resource. Use the tag key in the filter
     * name and the tag value as the filter value. For example, to find all resources
     * that have a tag with the key <code>Owner</code> and the value
     * <code>TeamA</code>, specify <code>tag:Owner</code> for the filter name and
     * <code>TeamA</code> for the filter value.</p> </li> <li> <p> <code>tag-key</code>
     * - The key of a tag assigned to the resource. Use this filter to find all
     * resources assigned a tag with a specific key, regardless of the tag value.</p>
     * </li> <li> <p> <code>tag-value</code>: The value of a tag assigned to the
     * resource. Use this filter to find all resources assigned a tag with a specific
     * value, regardless of the tag key.</p> </li> </ul>
     */
    inline const Aws::Vector<Filter>& GetFilters() const { return m_filters; }
    inline bool FiltersHasBeenSet() const { return m_filtersHasBeenSet; }
    template<typename FiltersT = Aws::Vector<Filter>>
    void SetFilters(FiltersT&& value) { m_filtersHasBeenSet = true; m_filters = std::forward<FiltersT>(value); }
    template<typename FiltersT = Aws::Vector<Filter>>
    DescribeVpcBlockPublicAccessExclusionsRequest& WithFilters(FiltersT&& value) { SetFilters(std::forward<FiltersT>(value)); return *this;}
    template<typename FiltersT = Filter>
    DescribeVpcBlockPublicAccessExclusionsRequest& AddFilters(FiltersT&& value) { m_filtersHasBeenSet = true; m_filters.emplace_back(std::forward<FiltersT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>IDs of exclusions.</p>
     */
    inline const Aws::Vector<Aws::String>& GetExclusionIds() const { return m_exclusionIds; }
    inline bool ExclusionIdsHasBeenSet() const { return m_exclusionIdsHasBeenSet; }
    template<typename ExclusionIdsT = Aws::Vector<Aws::String>>
    void SetExclusionIds(ExclusionIdsT&& value) { m_exclusionIdsHasBeenSet = true; m_exclusionIds = std::forward<ExclusionIdsT>(value); }
    template<typename ExclusionIdsT = Aws::Vector<Aws::String>>
    DescribeVpcBlockPublicAccessExclusionsRequest& WithExclusionIds(ExclusionIdsT&& value) { SetExclusionIds(std::forward<ExclusionIdsT>(value)); return *this;}
    template<typename ExclusionIdsT = Aws::String>
    DescribeVpcBlockPublicAccessExclusionsRequest& AddExclusionIds(ExclusionIdsT&& value) { m_exclusionIdsHasBeenSet = true; m_exclusionIds.emplace_back(std::forward<ExclusionIdsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The token returned from a previous paginated request. Pagination continues
     * from the end of the items returned by the previous request.</p>
     */
    inline const Aws::String& GetNextToken() const { return m_nextToken; }
    inline bool NextTokenHasBeenSet() const { return m_nextTokenHasBeenSet; }
    template<typename NextTokenT = Aws::String>
    void SetNextToken(NextTokenT&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::forward<NextTokenT>(value); }
    template<typename NextTokenT = Aws::String>
    DescribeVpcBlockPublicAccessExclusionsRequest& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The maximum number of items to return for this request. To get the next page
     * of items, make another request with the token returned in the output. For more
     * information, see <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/APIReference/Query-Requests.html#api-pagination">Pagination</a>.</p>
     */
    inline int GetMaxResults() const { return m_maxResults; }
    inline bool MaxResultsHasBeenSet() const { return m_maxResultsHasBeenSet; }
    inline void SetMaxResults(int value) { m_maxResultsHasBeenSet = true; m_maxResults = value; }
    inline DescribeVpcBlockPublicAccessExclusionsRequest& WithMaxResults(int value) { SetMaxResults(value); return *this;}
    ///@}
  private:

    bool m_dryRun{false};
    bool m_dryRunHasBeenSet = false;

    Aws::Vector<Filter> m_filters;
    bool m_filtersHasBeenSet = false;

    Aws::Vector<Aws::String> m_exclusionIds;
    bool m_exclusionIdsHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    int m_maxResults{0};
    bool m_maxResultsHasBeenSet = false;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
