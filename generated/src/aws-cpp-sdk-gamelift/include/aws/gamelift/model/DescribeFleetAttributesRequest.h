﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/gamelift/GameLift_EXPORTS.h>
#include <aws/gamelift/GameLiftRequest.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace GameLift
{
namespace Model
{

  /**
   */
  class DescribeFleetAttributesRequest : public GameLiftRequest
  {
  public:
    AWS_GAMELIFT_API DescribeFleetAttributesRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DescribeFleetAttributes"; }

    AWS_GAMELIFT_API Aws::String SerializePayload() const override;

    AWS_GAMELIFT_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p>A list of unique fleet identifiers to retrieve attributes for. You can use
     * either the fleet ID or ARN value. To retrieve attributes for all current fleets,
     * do not include this parameter. </p>
     */
    inline const Aws::Vector<Aws::String>& GetFleetIds() const { return m_fleetIds; }
    inline bool FleetIdsHasBeenSet() const { return m_fleetIdsHasBeenSet; }
    template<typename FleetIdsT = Aws::Vector<Aws::String>>
    void SetFleetIds(FleetIdsT&& value) { m_fleetIdsHasBeenSet = true; m_fleetIds = std::forward<FleetIdsT>(value); }
    template<typename FleetIdsT = Aws::Vector<Aws::String>>
    DescribeFleetAttributesRequest& WithFleetIds(FleetIdsT&& value) { SetFleetIds(std::forward<FleetIdsT>(value)); return *this;}
    template<typename FleetIdsT = Aws::String>
    DescribeFleetAttributesRequest& AddFleetIds(FleetIdsT&& value) { m_fleetIdsHasBeenSet = true; m_fleetIds.emplace_back(std::forward<FleetIdsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The maximum number of results to return. Use this parameter with
     * <code>NextToken</code> to get results as a set of sequential pages. This
     * parameter is ignored when the request specifies one or a list of fleet IDs.</p>
     */
    inline int GetLimit() const { return m_limit; }
    inline bool LimitHasBeenSet() const { return m_limitHasBeenSet; }
    inline void SetLimit(int value) { m_limitHasBeenSet = true; m_limit = value; }
    inline DescribeFleetAttributesRequest& WithLimit(int value) { SetLimit(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A token that indicates the start of the next sequential page of results. Use
     * the token that is returned with a previous call to this operation. To start at
     * the beginning of the result set, do not specify a value. This parameter is
     * ignored when the request specifies one or a list of fleet IDs.</p>
     */
    inline const Aws::String& GetNextToken() const { return m_nextToken; }
    inline bool NextTokenHasBeenSet() const { return m_nextTokenHasBeenSet; }
    template<typename NextTokenT = Aws::String>
    void SetNextToken(NextTokenT&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::forward<NextTokenT>(value); }
    template<typename NextTokenT = Aws::String>
    DescribeFleetAttributesRequest& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<Aws::String> m_fleetIds;
    bool m_fleetIdsHasBeenSet = false;

    int m_limit{0};
    bool m_limitHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;
  };

} // namespace Model
} // namespace GameLift
} // namespace Aws
