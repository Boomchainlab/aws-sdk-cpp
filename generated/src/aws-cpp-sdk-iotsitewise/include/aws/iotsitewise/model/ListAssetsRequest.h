﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/iotsitewise/IoTSiteWise_EXPORTS.h>
#include <aws/iotsitewise/IoTSiteWiseRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/iotsitewise/model/ListAssetsFilter.h>
#include <utility>

namespace Aws
{
namespace Http
{
    class URI;
} //namespace Http
namespace IoTSiteWise
{
namespace Model
{

  /**
   */
  class ListAssetsRequest : public IoTSiteWiseRequest
  {
  public:
    AWS_IOTSITEWISE_API ListAssetsRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "ListAssets"; }

    AWS_IOTSITEWISE_API Aws::String SerializePayload() const override;

    AWS_IOTSITEWISE_API void AddQueryStringParameters(Aws::Http::URI& uri) const override;


    ///@{
    /**
     * <p>The token to be used for the next set of paginated results.</p>
     */
    inline const Aws::String& GetNextToken() const { return m_nextToken; }
    inline bool NextTokenHasBeenSet() const { return m_nextTokenHasBeenSet; }
    template<typename NextTokenT = Aws::String>
    void SetNextToken(NextTokenT&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::forward<NextTokenT>(value); }
    template<typename NextTokenT = Aws::String>
    ListAssetsRequest& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The maximum number of results to return for each paginated request.</p>
     * <p>Default: 50</p>
     */
    inline int GetMaxResults() const { return m_maxResults; }
    inline bool MaxResultsHasBeenSet() const { return m_maxResultsHasBeenSet; }
    inline void SetMaxResults(int value) { m_maxResultsHasBeenSet = true; m_maxResults = value; }
    inline ListAssetsRequest& WithMaxResults(int value) { SetMaxResults(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the asset model by which to filter the list of assets. This
     * parameter is required if you choose <code>ALL</code> for <code>filter</code>.
     * This can be either the actual ID in UUID format, or else
     * <code>externalId:</code> followed by the external ID, if it has one. For more
     * information, see <a
     * href="https://docs.aws.amazon.com/iot-sitewise/latest/userguide/object-ids.html#external-id-references">Referencing
     * objects with external IDs</a> in the <i>IoT SiteWise User Guide</i>.</p>
     */
    inline const Aws::String& GetAssetModelId() const { return m_assetModelId; }
    inline bool AssetModelIdHasBeenSet() const { return m_assetModelIdHasBeenSet; }
    template<typename AssetModelIdT = Aws::String>
    void SetAssetModelId(AssetModelIdT&& value) { m_assetModelIdHasBeenSet = true; m_assetModelId = std::forward<AssetModelIdT>(value); }
    template<typename AssetModelIdT = Aws::String>
    ListAssetsRequest& WithAssetModelId(AssetModelIdT&& value) { SetAssetModelId(std::forward<AssetModelIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The filter for the requested list of assets. Choose one of the following
     * options:</p> <ul> <li> <p> <code>ALL</code> – The list includes all assets for a
     * given asset model ID. The <code>assetModelId</code> parameter is required if you
     * filter by <code>ALL</code>.</p> </li> <li> <p> <code>TOP_LEVEL</code> – The list
     * includes only top-level assets in the asset hierarchy tree.</p> </li> </ul>
     * <p>Default: <code>ALL</code> </p>
     */
    inline ListAssetsFilter GetFilter() const { return m_filter; }
    inline bool FilterHasBeenSet() const { return m_filterHasBeenSet; }
    inline void SetFilter(ListAssetsFilter value) { m_filterHasBeenSet = true; m_filter = value; }
    inline ListAssetsRequest& WithFilter(ListAssetsFilter value) { SetFilter(value); return *this;}
    ///@}
  private:

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    int m_maxResults{0};
    bool m_maxResultsHasBeenSet = false;

    Aws::String m_assetModelId;
    bool m_assetModelIdHasBeenSet = false;

    ListAssetsFilter m_filter{ListAssetsFilter::NOT_SET};
    bool m_filterHasBeenSet = false;
  };

} // namespace Model
} // namespace IoTSiteWise
} // namespace Aws
