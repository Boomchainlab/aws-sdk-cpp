﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/connect/Connect_EXPORTS.h>
#include <aws/connect/ConnectRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/connect/model/SecurityProfileSearchCriteria.h>
#include <aws/connect/model/SecurityProfilesSearchFilter.h>
#include <utility>

namespace Aws
{
namespace Connect
{
namespace Model
{

  /**
   */
  class SearchSecurityProfilesRequest : public ConnectRequest
  {
  public:
    AWS_CONNECT_API SearchSecurityProfilesRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "SearchSecurityProfiles"; }

    AWS_CONNECT_API Aws::String SerializePayload() const override;


    ///@{
    /**
     * <p>The identifier of the Amazon Connect instance. You can <a
     * href="https://docs.aws.amazon.com/connect/latest/adminguide/find-instance-arn.html">find
     * the instance ID</a> in the Amazon Resource Name (ARN) of the instance.</p>
     */
    inline const Aws::String& GetInstanceId() const { return m_instanceId; }
    inline bool InstanceIdHasBeenSet() const { return m_instanceIdHasBeenSet; }
    template<typename InstanceIdT = Aws::String>
    void SetInstanceId(InstanceIdT&& value) { m_instanceIdHasBeenSet = true; m_instanceId = std::forward<InstanceIdT>(value); }
    template<typename InstanceIdT = Aws::String>
    SearchSecurityProfilesRequest& WithInstanceId(InstanceIdT&& value) { SetInstanceId(std::forward<InstanceIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The token for the next set of results. Use the value returned in the previous
     * response in the next request to retrieve the next set of results.</p>
     */
    inline const Aws::String& GetNextToken() const { return m_nextToken; }
    inline bool NextTokenHasBeenSet() const { return m_nextTokenHasBeenSet; }
    template<typename NextTokenT = Aws::String>
    void SetNextToken(NextTokenT&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::forward<NextTokenT>(value); }
    template<typename NextTokenT = Aws::String>
    SearchSecurityProfilesRequest& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The maximum number of results to return per page.</p>
     */
    inline int GetMaxResults() const { return m_maxResults; }
    inline bool MaxResultsHasBeenSet() const { return m_maxResultsHasBeenSet; }
    inline void SetMaxResults(int value) { m_maxResultsHasBeenSet = true; m_maxResults = value; }
    inline SearchSecurityProfilesRequest& WithMaxResults(int value) { SetMaxResults(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The search criteria to be used to return security profiles. </p> 
     * <p>The <code>name</code> field support "contains" queries with a minimum of 2
     * characters and maximum of 25 characters. Any queries with character lengths
     * outside of this range will throw invalid results.</p>   <p>The
     * currently supported value for <code>FieldName</code>: <code>name</code> </p>
     * 
     */
    inline const SecurityProfileSearchCriteria& GetSearchCriteria() const { return m_searchCriteria; }
    inline bool SearchCriteriaHasBeenSet() const { return m_searchCriteriaHasBeenSet; }
    template<typename SearchCriteriaT = SecurityProfileSearchCriteria>
    void SetSearchCriteria(SearchCriteriaT&& value) { m_searchCriteriaHasBeenSet = true; m_searchCriteria = std::forward<SearchCriteriaT>(value); }
    template<typename SearchCriteriaT = SecurityProfileSearchCriteria>
    SearchSecurityProfilesRequest& WithSearchCriteria(SearchCriteriaT&& value) { SetSearchCriteria(std::forward<SearchCriteriaT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Filters to be applied to search results.</p>
     */
    inline const SecurityProfilesSearchFilter& GetSearchFilter() const { return m_searchFilter; }
    inline bool SearchFilterHasBeenSet() const { return m_searchFilterHasBeenSet; }
    template<typename SearchFilterT = SecurityProfilesSearchFilter>
    void SetSearchFilter(SearchFilterT&& value) { m_searchFilterHasBeenSet = true; m_searchFilter = std::forward<SearchFilterT>(value); }
    template<typename SearchFilterT = SecurityProfilesSearchFilter>
    SearchSecurityProfilesRequest& WithSearchFilter(SearchFilterT&& value) { SetSearchFilter(std::forward<SearchFilterT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_instanceId;
    bool m_instanceIdHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    int m_maxResults{0};
    bool m_maxResultsHasBeenSet = false;

    SecurityProfileSearchCriteria m_searchCriteria;
    bool m_searchCriteriaHasBeenSet = false;

    SecurityProfilesSearchFilter m_searchFilter;
    bool m_searchFilterHasBeenSet = false;
  };

} // namespace Model
} // namespace Connect
} // namespace Aws
