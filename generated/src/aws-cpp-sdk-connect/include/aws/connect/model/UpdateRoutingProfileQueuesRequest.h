﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/connect/Connect_EXPORTS.h>
#include <aws/connect/ConnectRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/connect/model/RoutingProfileQueueConfig.h>
#include <utility>

namespace Aws
{
namespace Connect
{
namespace Model
{

  /**
   */
  class UpdateRoutingProfileQueuesRequest : public ConnectRequest
  {
  public:
    AWS_CONNECT_API UpdateRoutingProfileQueuesRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "UpdateRoutingProfileQueues"; }

    AWS_CONNECT_API Aws::String SerializePayload() const override;


    ///@{
    /**
     * <p>The identifier of the Amazon Connect instance. You can <a
     * href="https://docs.aws.amazon.com/connect/latest/adminguide/find-instance-arn.html">find
     * the instance ID</a> in the Amazon Resource Name (ARN) of the instance.</p>
     */
    inline const Aws::String& GetInstanceId() const { return m_instanceId; }
    inline bool InstanceIdHasBeenSet() const { return m_instanceIdHasBeenSet; }
    template<typename InstanceIdT = Aws::String>
    void SetInstanceId(InstanceIdT&& value) { m_instanceIdHasBeenSet = true; m_instanceId = std::forward<InstanceIdT>(value); }
    template<typename InstanceIdT = Aws::String>
    UpdateRoutingProfileQueuesRequest& WithInstanceId(InstanceIdT&& value) { SetInstanceId(std::forward<InstanceIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The identifier of the routing profile.</p>
     */
    inline const Aws::String& GetRoutingProfileId() const { return m_routingProfileId; }
    inline bool RoutingProfileIdHasBeenSet() const { return m_routingProfileIdHasBeenSet; }
    template<typename RoutingProfileIdT = Aws::String>
    void SetRoutingProfileId(RoutingProfileIdT&& value) { m_routingProfileIdHasBeenSet = true; m_routingProfileId = std::forward<RoutingProfileIdT>(value); }
    template<typename RoutingProfileIdT = Aws::String>
    UpdateRoutingProfileQueuesRequest& WithRoutingProfileId(RoutingProfileIdT&& value) { SetRoutingProfileId(std::forward<RoutingProfileIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The queues to be updated for this routing profile. Queues must first be
     * associated to the routing profile. You can do this using
     * AssociateRoutingProfileQueues.</p>
     */
    inline const Aws::Vector<RoutingProfileQueueConfig>& GetQueueConfigs() const { return m_queueConfigs; }
    inline bool QueueConfigsHasBeenSet() const { return m_queueConfigsHasBeenSet; }
    template<typename QueueConfigsT = Aws::Vector<RoutingProfileQueueConfig>>
    void SetQueueConfigs(QueueConfigsT&& value) { m_queueConfigsHasBeenSet = true; m_queueConfigs = std::forward<QueueConfigsT>(value); }
    template<typename QueueConfigsT = Aws::Vector<RoutingProfileQueueConfig>>
    UpdateRoutingProfileQueuesRequest& WithQueueConfigs(QueueConfigsT&& value) { SetQueueConfigs(std::forward<QueueConfigsT>(value)); return *this;}
    template<typename QueueConfigsT = RoutingProfileQueueConfig>
    UpdateRoutingProfileQueuesRequest& AddQueueConfigs(QueueConfigsT&& value) { m_queueConfigsHasBeenSet = true; m_queueConfigs.emplace_back(std::forward<QueueConfigsT>(value)); return *this; }
    ///@}
  private:

    Aws::String m_instanceId;
    bool m_instanceIdHasBeenSet = false;

    Aws::String m_routingProfileId;
    bool m_routingProfileIdHasBeenSet = false;

    Aws::Vector<RoutingProfileQueueConfig> m_queueConfigs;
    bool m_queueConfigsHasBeenSet = false;
  };

} // namespace Model
} // namespace Connect
} // namespace Aws
