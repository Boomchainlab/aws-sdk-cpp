﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/es/ElasticsearchService_EXPORTS.h>
#include <aws/es/model/PackageDetails.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
namespace ElasticsearchService
{
namespace Model
{
  /**
   * <p> Container for response parameters to <code> <a>DeletePackage</a> </code>
   * operation. </p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/es-2015-01-01/DeletePackageResponse">AWS
   * API Reference</a></p>
   */
  class DeletePackageResult
  {
  public:
    AWS_ELASTICSEARCHSERVICE_API DeletePackageResult() = default;
    AWS_ELASTICSEARCHSERVICE_API DeletePackageResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_ELASTICSEARCHSERVICE_API DeletePackageResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p><code>PackageDetails</code></p>
     */
    inline const PackageDetails& GetPackageDetails() const { return m_packageDetails; }
    template<typename PackageDetailsT = PackageDetails>
    void SetPackageDetails(PackageDetailsT&& value) { m_packageDetailsHasBeenSet = true; m_packageDetails = std::forward<PackageDetailsT>(value); }
    template<typename PackageDetailsT = PackageDetails>
    DeletePackageResult& WithPackageDetails(PackageDetailsT&& value) { SetPackageDetails(std::forward<PackageDetailsT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    DeletePackageResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    PackageDetails m_packageDetails;
    bool m_packageDetailsHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace ElasticsearchService
} // namespace Aws
