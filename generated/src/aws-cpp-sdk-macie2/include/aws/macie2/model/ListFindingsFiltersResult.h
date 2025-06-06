﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/macie2/Macie2_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/macie2/model/FindingsFilterListItem.h>
#include <utility>

namespace Aws
{
template<typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils
{
namespace Json
{
  class JsonValue;
} // namespace Json
} // namespace Utils
namespace Macie2
{
namespace Model
{
  class ListFindingsFiltersResult
  {
  public:
    AWS_MACIE2_API ListFindingsFiltersResult() = default;
    AWS_MACIE2_API ListFindingsFiltersResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_MACIE2_API ListFindingsFiltersResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>An array of objects, one for each filter that's associated with the
     * account.</p>
     */
    inline const Aws::Vector<FindingsFilterListItem>& GetFindingsFilterListItems() const { return m_findingsFilterListItems; }
    template<typename FindingsFilterListItemsT = Aws::Vector<FindingsFilterListItem>>
    void SetFindingsFilterListItems(FindingsFilterListItemsT&& value) { m_findingsFilterListItemsHasBeenSet = true; m_findingsFilterListItems = std::forward<FindingsFilterListItemsT>(value); }
    template<typename FindingsFilterListItemsT = Aws::Vector<FindingsFilterListItem>>
    ListFindingsFiltersResult& WithFindingsFilterListItems(FindingsFilterListItemsT&& value) { SetFindingsFilterListItems(std::forward<FindingsFilterListItemsT>(value)); return *this;}
    template<typename FindingsFilterListItemsT = FindingsFilterListItem>
    ListFindingsFiltersResult& AddFindingsFilterListItems(FindingsFilterListItemsT&& value) { m_findingsFilterListItemsHasBeenSet = true; m_findingsFilterListItems.emplace_back(std::forward<FindingsFilterListItemsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The string to use in a subsequent request to get the next page of results in
     * a paginated response. This value is null if there are no additional pages.</p>
     */
    inline const Aws::String& GetNextToken() const { return m_nextToken; }
    template<typename NextTokenT = Aws::String>
    void SetNextToken(NextTokenT&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::forward<NextTokenT>(value); }
    template<typename NextTokenT = Aws::String>
    ListFindingsFiltersResult& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    ListFindingsFiltersResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<FindingsFilterListItem> m_findingsFilterListItems;
    bool m_findingsFilterListItemsHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace Macie2
} // namespace Aws
