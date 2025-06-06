﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/mediapackage-vod/MediaPackageVod_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/mediapackage-vod/model/PackagingConfiguration.h>
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
namespace MediaPackageVod
{
namespace Model
{
  class ListPackagingConfigurationsResult
  {
  public:
    AWS_MEDIAPACKAGEVOD_API ListPackagingConfigurationsResult() = default;
    AWS_MEDIAPACKAGEVOD_API ListPackagingConfigurationsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_MEDIAPACKAGEVOD_API ListPackagingConfigurationsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * A token that can be used to resume pagination from the end of the collection.
     */
    inline const Aws::String& GetNextToken() const { return m_nextToken; }
    template<typename NextTokenT = Aws::String>
    void SetNextToken(NextTokenT&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::forward<NextTokenT>(value); }
    template<typename NextTokenT = Aws::String>
    ListPackagingConfigurationsResult& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * A list of MediaPackage VOD PackagingConfiguration resources.
     */
    inline const Aws::Vector<PackagingConfiguration>& GetPackagingConfigurations() const { return m_packagingConfigurations; }
    template<typename PackagingConfigurationsT = Aws::Vector<PackagingConfiguration>>
    void SetPackagingConfigurations(PackagingConfigurationsT&& value) { m_packagingConfigurationsHasBeenSet = true; m_packagingConfigurations = std::forward<PackagingConfigurationsT>(value); }
    template<typename PackagingConfigurationsT = Aws::Vector<PackagingConfiguration>>
    ListPackagingConfigurationsResult& WithPackagingConfigurations(PackagingConfigurationsT&& value) { SetPackagingConfigurations(std::forward<PackagingConfigurationsT>(value)); return *this;}
    template<typename PackagingConfigurationsT = PackagingConfiguration>
    ListPackagingConfigurationsResult& AddPackagingConfigurations(PackagingConfigurationsT&& value) { m_packagingConfigurationsHasBeenSet = true; m_packagingConfigurations.emplace_back(std::forward<PackagingConfigurationsT>(value)); return *this; }
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    ListPackagingConfigurationsResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    Aws::Vector<PackagingConfiguration> m_packagingConfigurations;
    bool m_packagingConfigurationsHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace MediaPackageVod
} // namespace Aws
