﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ec2/EC2_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/ec2/model/ResponseMetadata.h>
#include <aws/ec2/model/UnsuccessfulItem.h>
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
  class AcceptVpcEndpointConnectionsResponse
  {
  public:
    AWS_EC2_API AcceptVpcEndpointConnectionsResponse() = default;
    AWS_EC2_API AcceptVpcEndpointConnectionsResponse(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
    AWS_EC2_API AcceptVpcEndpointConnectionsResponse& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);


    ///@{
    /**
     * <p>Information about the interface endpoints that were not accepted, if
     * applicable.</p>
     */
    inline const Aws::Vector<UnsuccessfulItem>& GetUnsuccessful() const { return m_unsuccessful; }
    template<typename UnsuccessfulT = Aws::Vector<UnsuccessfulItem>>
    void SetUnsuccessful(UnsuccessfulT&& value) { m_unsuccessfulHasBeenSet = true; m_unsuccessful = std::forward<UnsuccessfulT>(value); }
    template<typename UnsuccessfulT = Aws::Vector<UnsuccessfulItem>>
    AcceptVpcEndpointConnectionsResponse& WithUnsuccessful(UnsuccessfulT&& value) { SetUnsuccessful(std::forward<UnsuccessfulT>(value)); return *this;}
    template<typename UnsuccessfulT = UnsuccessfulItem>
    AcceptVpcEndpointConnectionsResponse& AddUnsuccessful(UnsuccessfulT&& value) { m_unsuccessfulHasBeenSet = true; m_unsuccessful.emplace_back(std::forward<UnsuccessfulT>(value)); return *this; }
    ///@}

    ///@{
    
    inline const ResponseMetadata& GetResponseMetadata() const { return m_responseMetadata; }
    template<typename ResponseMetadataT = ResponseMetadata>
    void SetResponseMetadata(ResponseMetadataT&& value) { m_responseMetadataHasBeenSet = true; m_responseMetadata = std::forward<ResponseMetadataT>(value); }
    template<typename ResponseMetadataT = ResponseMetadata>
    AcceptVpcEndpointConnectionsResponse& WithResponseMetadata(ResponseMetadataT&& value) { SetResponseMetadata(std::forward<ResponseMetadataT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<UnsuccessfulItem> m_unsuccessful;
    bool m_unsuccessfulHasBeenSet = false;

    ResponseMetadata m_responseMetadata;
    bool m_responseMetadataHasBeenSet = false;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
