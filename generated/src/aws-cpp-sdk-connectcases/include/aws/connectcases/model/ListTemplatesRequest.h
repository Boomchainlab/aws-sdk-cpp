﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/connectcases/ConnectCases_EXPORTS.h>
#include <aws/connectcases/ConnectCasesRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/connectcases/model/TemplateStatus.h>
#include <utility>

namespace Aws
{
namespace Http
{
    class URI;
} //namespace Http
namespace ConnectCases
{
namespace Model
{

  /**
   */
  class ListTemplatesRequest : public ConnectCasesRequest
  {
  public:
    AWS_CONNECTCASES_API ListTemplatesRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "ListTemplates"; }

    AWS_CONNECTCASES_API Aws::String SerializePayload() const override;

    AWS_CONNECTCASES_API void AddQueryStringParameters(Aws::Http::URI& uri) const override;


    ///@{
    /**
     * <p>The unique identifier of the Cases domain. </p>
     */
    inline const Aws::String& GetDomainId() const { return m_domainId; }
    inline bool DomainIdHasBeenSet() const { return m_domainIdHasBeenSet; }
    template<typename DomainIdT = Aws::String>
    void SetDomainId(DomainIdT&& value) { m_domainIdHasBeenSet = true; m_domainId = std::forward<DomainIdT>(value); }
    template<typename DomainIdT = Aws::String>
    ListTemplatesRequest& WithDomainId(DomainIdT&& value) { SetDomainId(std::forward<DomainIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The maximum number of results to return per page.</p>
     */
    inline int GetMaxResults() const { return m_maxResults; }
    inline bool MaxResultsHasBeenSet() const { return m_maxResultsHasBeenSet; }
    inline void SetMaxResults(int value) { m_maxResultsHasBeenSet = true; m_maxResults = value; }
    inline ListTemplatesRequest& WithMaxResults(int value) { SetMaxResults(value); return *this;}
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
    ListTemplatesRequest& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A list of status values to filter on.</p>
     */
    inline const Aws::Vector<TemplateStatus>& GetStatus() const { return m_status; }
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
    template<typename StatusT = Aws::Vector<TemplateStatus>>
    void SetStatus(StatusT&& value) { m_statusHasBeenSet = true; m_status = std::forward<StatusT>(value); }
    template<typename StatusT = Aws::Vector<TemplateStatus>>
    ListTemplatesRequest& WithStatus(StatusT&& value) { SetStatus(std::forward<StatusT>(value)); return *this;}
    inline ListTemplatesRequest& AddStatus(TemplateStatus value) { m_statusHasBeenSet = true; m_status.push_back(value); return *this; }
    ///@}
  private:

    Aws::String m_domainId;
    bool m_domainIdHasBeenSet = false;

    int m_maxResults{0};
    bool m_maxResultsHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    Aws::Vector<TemplateStatus> m_status;
    bool m_statusHasBeenSet = false;
  };

} // namespace Model
} // namespace ConnectCases
} // namespace Aws
