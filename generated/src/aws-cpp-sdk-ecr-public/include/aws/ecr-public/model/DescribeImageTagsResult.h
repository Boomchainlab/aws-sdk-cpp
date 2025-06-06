﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ecr-public/ECRPublic_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/ecr-public/model/ImageTagDetail.h>
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
namespace ECRPublic
{
namespace Model
{
  class DescribeImageTagsResult
  {
  public:
    AWS_ECRPUBLIC_API DescribeImageTagsResult() = default;
    AWS_ECRPUBLIC_API DescribeImageTagsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_ECRPUBLIC_API DescribeImageTagsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The image tag details for the images in the requested repository.</p>
     */
    inline const Aws::Vector<ImageTagDetail>& GetImageTagDetails() const { return m_imageTagDetails; }
    template<typename ImageTagDetailsT = Aws::Vector<ImageTagDetail>>
    void SetImageTagDetails(ImageTagDetailsT&& value) { m_imageTagDetailsHasBeenSet = true; m_imageTagDetails = std::forward<ImageTagDetailsT>(value); }
    template<typename ImageTagDetailsT = Aws::Vector<ImageTagDetail>>
    DescribeImageTagsResult& WithImageTagDetails(ImageTagDetailsT&& value) { SetImageTagDetails(std::forward<ImageTagDetailsT>(value)); return *this;}
    template<typename ImageTagDetailsT = ImageTagDetail>
    DescribeImageTagsResult& AddImageTagDetails(ImageTagDetailsT&& value) { m_imageTagDetailsHasBeenSet = true; m_imageTagDetails.emplace_back(std::forward<ImageTagDetailsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The <code>nextToken</code> value to include in a future
     * <code>DescribeImageTags</code> request. When the results of a
     * <code>DescribeImageTags</code> request exceed <code>maxResults</code>, you can
     * use this value to retrieve the next page of results. If there are no more
     * results to return, this value is <code>null</code>.</p>
     */
    inline const Aws::String& GetNextToken() const { return m_nextToken; }
    template<typename NextTokenT = Aws::String>
    void SetNextToken(NextTokenT&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::forward<NextTokenT>(value); }
    template<typename NextTokenT = Aws::String>
    DescribeImageTagsResult& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    DescribeImageTagsResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<ImageTagDetail> m_imageTagDetails;
    bool m_imageTagDetailsHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace ECRPublic
} // namespace Aws
