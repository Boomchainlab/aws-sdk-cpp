﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ec2/EC2_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/ec2/model/ResponseMetadata.h>
#include <aws/ec2/model/NetworkAcl.h>
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
  class DescribeNetworkAclsResponse
  {
  public:
    AWS_EC2_API DescribeNetworkAclsResponse() = default;
    AWS_EC2_API DescribeNetworkAclsResponse(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
    AWS_EC2_API DescribeNetworkAclsResponse& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);


    ///@{
    /**
     * <p>Information about the network ACLs.</p>
     */
    inline const Aws::Vector<NetworkAcl>& GetNetworkAcls() const { return m_networkAcls; }
    template<typename NetworkAclsT = Aws::Vector<NetworkAcl>>
    void SetNetworkAcls(NetworkAclsT&& value) { m_networkAclsHasBeenSet = true; m_networkAcls = std::forward<NetworkAclsT>(value); }
    template<typename NetworkAclsT = Aws::Vector<NetworkAcl>>
    DescribeNetworkAclsResponse& WithNetworkAcls(NetworkAclsT&& value) { SetNetworkAcls(std::forward<NetworkAclsT>(value)); return *this;}
    template<typename NetworkAclsT = NetworkAcl>
    DescribeNetworkAclsResponse& AddNetworkAcls(NetworkAclsT&& value) { m_networkAclsHasBeenSet = true; m_networkAcls.emplace_back(std::forward<NetworkAclsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The token to include in another request to get the next page of items. This
     * value is <code>null</code> when there are no more items to return.</p>
     */
    inline const Aws::String& GetNextToken() const { return m_nextToken; }
    template<typename NextTokenT = Aws::String>
    void SetNextToken(NextTokenT&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::forward<NextTokenT>(value); }
    template<typename NextTokenT = Aws::String>
    DescribeNetworkAclsResponse& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const ResponseMetadata& GetResponseMetadata() const { return m_responseMetadata; }
    template<typename ResponseMetadataT = ResponseMetadata>
    void SetResponseMetadata(ResponseMetadataT&& value) { m_responseMetadataHasBeenSet = true; m_responseMetadata = std::forward<ResponseMetadataT>(value); }
    template<typename ResponseMetadataT = ResponseMetadata>
    DescribeNetworkAclsResponse& WithResponseMetadata(ResponseMetadataT&& value) { SetResponseMetadata(std::forward<ResponseMetadataT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<NetworkAcl> m_networkAcls;
    bool m_networkAclsHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    ResponseMetadata m_responseMetadata;
    bool m_responseMetadataHasBeenSet = false;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
