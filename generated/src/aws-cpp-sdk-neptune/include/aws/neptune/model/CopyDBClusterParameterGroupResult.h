﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/neptune/Neptune_EXPORTS.h>
#include <aws/neptune/model/DBClusterParameterGroup.h>
#include <aws/neptune/model/ResponseMetadata.h>
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
namespace Neptune
{
namespace Model
{
  class CopyDBClusterParameterGroupResult
  {
  public:
    AWS_NEPTUNE_API CopyDBClusterParameterGroupResult() = default;
    AWS_NEPTUNE_API CopyDBClusterParameterGroupResult(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
    AWS_NEPTUNE_API CopyDBClusterParameterGroupResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);


    ///@{
    
    inline const DBClusterParameterGroup& GetDBClusterParameterGroup() const { return m_dBClusterParameterGroup; }
    template<typename DBClusterParameterGroupT = DBClusterParameterGroup>
    void SetDBClusterParameterGroup(DBClusterParameterGroupT&& value) { m_dBClusterParameterGroupHasBeenSet = true; m_dBClusterParameterGroup = std::forward<DBClusterParameterGroupT>(value); }
    template<typename DBClusterParameterGroupT = DBClusterParameterGroup>
    CopyDBClusterParameterGroupResult& WithDBClusterParameterGroup(DBClusterParameterGroupT&& value) { SetDBClusterParameterGroup(std::forward<DBClusterParameterGroupT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const ResponseMetadata& GetResponseMetadata() const { return m_responseMetadata; }
    template<typename ResponseMetadataT = ResponseMetadata>
    void SetResponseMetadata(ResponseMetadataT&& value) { m_responseMetadataHasBeenSet = true; m_responseMetadata = std::forward<ResponseMetadataT>(value); }
    template<typename ResponseMetadataT = ResponseMetadata>
    CopyDBClusterParameterGroupResult& WithResponseMetadata(ResponseMetadataT&& value) { SetResponseMetadata(std::forward<ResponseMetadataT>(value)); return *this;}
    ///@}
  private:

    DBClusterParameterGroup m_dBClusterParameterGroup;
    bool m_dBClusterParameterGroupHasBeenSet = false;

    ResponseMetadata m_responseMetadata;
    bool m_responseMetadataHasBeenSet = false;
  };

} // namespace Model
} // namespace Neptune
} // namespace Aws
