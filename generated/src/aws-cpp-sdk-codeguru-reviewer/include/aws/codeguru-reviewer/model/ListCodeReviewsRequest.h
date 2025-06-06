﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/codeguru-reviewer/CodeGuruReviewer_EXPORTS.h>
#include <aws/codeguru-reviewer/CodeGuruReviewerRequest.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/codeguru-reviewer/model/Type.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/codeguru-reviewer/model/ProviderType.h>
#include <aws/codeguru-reviewer/model/JobState.h>
#include <utility>

namespace Aws
{
namespace Http
{
    class URI;
} //namespace Http
namespace CodeGuruReviewer
{
namespace Model
{

  /**
   */
  class ListCodeReviewsRequest : public CodeGuruReviewerRequest
  {
  public:
    AWS_CODEGURUREVIEWER_API ListCodeReviewsRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "ListCodeReviews"; }

    AWS_CODEGURUREVIEWER_API Aws::String SerializePayload() const override;

    AWS_CODEGURUREVIEWER_API void AddQueryStringParameters(Aws::Http::URI& uri) const override;


    ///@{
    /**
     * <p>List of provider types for filtering that needs to be applied before
     * displaying the result. For example, <code>providerTypes=[GitHub]</code> lists
     * code reviews from GitHub.</p>
     */
    inline const Aws::Vector<ProviderType>& GetProviderTypes() const { return m_providerTypes; }
    inline bool ProviderTypesHasBeenSet() const { return m_providerTypesHasBeenSet; }
    template<typename ProviderTypesT = Aws::Vector<ProviderType>>
    void SetProviderTypes(ProviderTypesT&& value) { m_providerTypesHasBeenSet = true; m_providerTypes = std::forward<ProviderTypesT>(value); }
    template<typename ProviderTypesT = Aws::Vector<ProviderType>>
    ListCodeReviewsRequest& WithProviderTypes(ProviderTypesT&& value) { SetProviderTypes(std::forward<ProviderTypesT>(value)); return *this;}
    inline ListCodeReviewsRequest& AddProviderTypes(ProviderType value) { m_providerTypesHasBeenSet = true; m_providerTypes.push_back(value); return *this; }
    ///@}

    ///@{
    /**
     * <p>List of states for filtering that needs to be applied before displaying the
     * result. For example, <code>states=[Pending]</code> lists code reviews in the
     * Pending state.</p> <p>The valid code review states are:</p> <ul> <li> <p>
     * <code>Completed</code>: The code review is complete.</p> </li> <li> <p>
     * <code>Pending</code>: The code review started and has not completed or
     * failed.</p> </li> <li> <p> <code>Failed</code>: The code review failed.</p>
     * </li> <li> <p> <code>Deleting</code>: The code review is being deleted.</p>
     * </li> </ul>
     */
    inline const Aws::Vector<JobState>& GetStates() const { return m_states; }
    inline bool StatesHasBeenSet() const { return m_statesHasBeenSet; }
    template<typename StatesT = Aws::Vector<JobState>>
    void SetStates(StatesT&& value) { m_statesHasBeenSet = true; m_states = std::forward<StatesT>(value); }
    template<typename StatesT = Aws::Vector<JobState>>
    ListCodeReviewsRequest& WithStates(StatesT&& value) { SetStates(std::forward<StatesT>(value)); return *this;}
    inline ListCodeReviewsRequest& AddStates(JobState value) { m_statesHasBeenSet = true; m_states.push_back(value); return *this; }
    ///@}

    ///@{
    /**
     * <p>List of repository names for filtering that needs to be applied before
     * displaying the result.</p>
     */
    inline const Aws::Vector<Aws::String>& GetRepositoryNames() const { return m_repositoryNames; }
    inline bool RepositoryNamesHasBeenSet() const { return m_repositoryNamesHasBeenSet; }
    template<typename RepositoryNamesT = Aws::Vector<Aws::String>>
    void SetRepositoryNames(RepositoryNamesT&& value) { m_repositoryNamesHasBeenSet = true; m_repositoryNames = std::forward<RepositoryNamesT>(value); }
    template<typename RepositoryNamesT = Aws::Vector<Aws::String>>
    ListCodeReviewsRequest& WithRepositoryNames(RepositoryNamesT&& value) { SetRepositoryNames(std::forward<RepositoryNamesT>(value)); return *this;}
    template<typename RepositoryNamesT = Aws::String>
    ListCodeReviewsRequest& AddRepositoryNames(RepositoryNamesT&& value) { m_repositoryNamesHasBeenSet = true; m_repositoryNames.emplace_back(std::forward<RepositoryNamesT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The type of code reviews to list in the response.</p>
     */
    inline Type GetType() const { return m_type; }
    inline bool TypeHasBeenSet() const { return m_typeHasBeenSet; }
    inline void SetType(Type value) { m_typeHasBeenSet = true; m_type = value; }
    inline ListCodeReviewsRequest& WithType(Type value) { SetType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The maximum number of results that are returned per call. The default is
     * 100.</p>
     */
    inline int GetMaxResults() const { return m_maxResults; }
    inline bool MaxResultsHasBeenSet() const { return m_maxResultsHasBeenSet; }
    inline void SetMaxResults(int value) { m_maxResultsHasBeenSet = true; m_maxResults = value; }
    inline ListCodeReviewsRequest& WithMaxResults(int value) { SetMaxResults(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>If <code>nextToken</code> is returned, there are more results available. The
     * value of <code>nextToken</code> is a unique pagination token for each page. Make
     * the call again using the returned token to retrieve the next page. Keep all
     * other arguments unchanged.</p>
     */
    inline const Aws::String& GetNextToken() const { return m_nextToken; }
    inline bool NextTokenHasBeenSet() const { return m_nextTokenHasBeenSet; }
    template<typename NextTokenT = Aws::String>
    void SetNextToken(NextTokenT&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::forward<NextTokenT>(value); }
    template<typename NextTokenT = Aws::String>
    ListCodeReviewsRequest& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<ProviderType> m_providerTypes;
    bool m_providerTypesHasBeenSet = false;

    Aws::Vector<JobState> m_states;
    bool m_statesHasBeenSet = false;

    Aws::Vector<Aws::String> m_repositoryNames;
    bool m_repositoryNamesHasBeenSet = false;

    Type m_type{Type::NOT_SET};
    bool m_typeHasBeenSet = false;

    int m_maxResults{0};
    bool m_maxResultsHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;
  };

} // namespace Model
} // namespace CodeGuruReviewer
} // namespace Aws
