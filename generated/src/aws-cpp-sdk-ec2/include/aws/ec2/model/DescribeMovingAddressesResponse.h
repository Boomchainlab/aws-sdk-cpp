﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ec2/EC2_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/ec2/model/ResponseMetadata.h>
#include <aws/ec2/model/MovingAddressStatus.h>
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
namespace EC2
{
namespace Model
{
  class DescribeMovingAddressesResponse
  {
  public:
    AWS_EC2_API DescribeMovingAddressesResponse() = default;
    AWS_EC2_API DescribeMovingAddressesResponse(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
    AWS_EC2_API DescribeMovingAddressesResponse& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);


    ///@{
    /**
     * <p>The status for each Elastic IP address.</p>
     */
    inline const Aws::Vector<MovingAddressStatus>& GetMovingAddressStatuses() const { return m_movingAddressStatuses; }
    template<typename MovingAddressStatusesT = Aws::Vector<MovingAddressStatus>>
    void SetMovingAddressStatuses(MovingAddressStatusesT&& value) { m_movingAddressStatusesHasBeenSet = true; m_movingAddressStatuses = std::forward<MovingAddressStatusesT>(value); }
    template<typename MovingAddressStatusesT = Aws::Vector<MovingAddressStatus>>
    DescribeMovingAddressesResponse& WithMovingAddressStatuses(MovingAddressStatusesT&& value) { SetMovingAddressStatuses(std::forward<MovingAddressStatusesT>(value)); return *this;}
    template<typename MovingAddressStatusesT = MovingAddressStatus>
    DescribeMovingAddressesResponse& AddMovingAddressStatuses(MovingAddressStatusesT&& value) { m_movingAddressStatusesHasBeenSet = true; m_movingAddressStatuses.emplace_back(std::forward<MovingAddressStatusesT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The token to use to retrieve the next page of results. This value is
     * <code>null</code> when there are no more results to return.</p>
     */
    inline const Aws::String& GetNextToken() const { return m_nextToken; }
    template<typename NextTokenT = Aws::String>
    void SetNextToken(NextTokenT&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::forward<NextTokenT>(value); }
    template<typename NextTokenT = Aws::String>
    DescribeMovingAddressesResponse& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const ResponseMetadata& GetResponseMetadata() const { return m_responseMetadata; }
    template<typename ResponseMetadataT = ResponseMetadata>
    void SetResponseMetadata(ResponseMetadataT&& value) { m_responseMetadataHasBeenSet = true; m_responseMetadata = std::forward<ResponseMetadataT>(value); }
    template<typename ResponseMetadataT = ResponseMetadata>
    DescribeMovingAddressesResponse& WithResponseMetadata(ResponseMetadataT&& value) { SetResponseMetadata(std::forward<ResponseMetadataT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<MovingAddressStatus> m_movingAddressStatuses;
    bool m_movingAddressStatusesHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    ResponseMetadata m_responseMetadata;
    bool m_responseMetadataHasBeenSet = false;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
