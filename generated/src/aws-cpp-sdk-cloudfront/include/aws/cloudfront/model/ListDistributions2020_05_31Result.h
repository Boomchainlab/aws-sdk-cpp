﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/cloudfront/CloudFront_EXPORTS.h>
#include <aws/cloudfront/model/DistributionList.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
template<typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils
{
namespace Xml
{
  class XmlDocument;
} // namespace Xml
} // namespace Utils
namespace CloudFront
{
namespace Model
{
  /**
   * <p>The returned result of the corresponding request.</p><p><h3>See Also:</h3>  
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/cloudfront-2020-05-31/ListDistributionsResult">AWS
   * API Reference</a></p>
   */
  class ListDistributions2020_05_31Result
  {
  public:
    AWS_CLOUDFRONT_API ListDistributions2020_05_31Result() = default;
    AWS_CLOUDFRONT_API ListDistributions2020_05_31Result(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
    AWS_CLOUDFRONT_API ListDistributions2020_05_31Result& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);


    ///@{
    /**
     * <p>The <code>DistributionList</code> type.</p>
     */
    inline const DistributionList& GetDistributionList() const { return m_distributionList; }
    template<typename DistributionListT = DistributionList>
    void SetDistributionList(DistributionListT&& value) { m_distributionListHasBeenSet = true; m_distributionList = std::forward<DistributionListT>(value); }
    template<typename DistributionListT = DistributionList>
    ListDistributions2020_05_31Result& WithDistributionList(DistributionListT&& value) { SetDistributionList(std::forward<DistributionListT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    ListDistributions2020_05_31Result& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    DistributionList m_distributionList;
    bool m_distributionListHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace CloudFront
} // namespace Aws
