﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/vpc-lattice/VPCLattice_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/vpc-lattice/model/TargetStatus.h>
#include <utility>

namespace Aws
{
namespace Utils
{
namespace Json
{
  class JsonValue;
  class JsonView;
} // namespace Json
} // namespace Utils
namespace VPCLattice
{
namespace Model
{

  /**
   * <p>Summary information about a target.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/vpc-lattice-2022-11-30/TargetSummary">AWS
   * API Reference</a></p>
   */
  class TargetSummary
  {
  public:
    AWS_VPCLATTICE_API TargetSummary() = default;
    AWS_VPCLATTICE_API TargetSummary(Aws::Utils::Json::JsonView jsonValue);
    AWS_VPCLATTICE_API TargetSummary& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_VPCLATTICE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The ID of the target. If the target group type is <code>INSTANCE</code>, this
     * is an instance ID. If the target group type is <code>IP</code>, this is an IP
     * address. If the target group type is <code>LAMBDA</code>, this is the ARN of a
     * Lambda function. If the target type is <code>ALB</code>, this is the ARN of an
     * Application Load Balancer.</p>
     */
    inline const Aws::String& GetId() const { return m_id; }
    inline bool IdHasBeenSet() const { return m_idHasBeenSet; }
    template<typename IdT = Aws::String>
    void SetId(IdT&& value) { m_idHasBeenSet = true; m_id = std::forward<IdT>(value); }
    template<typename IdT = Aws::String>
    TargetSummary& WithId(IdT&& value) { SetId(std::forward<IdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The port on which the target is listening.</p>
     */
    inline int GetPort() const { return m_port; }
    inline bool PortHasBeenSet() const { return m_portHasBeenSet; }
    inline void SetPort(int value) { m_portHasBeenSet = true; m_port = value; }
    inline TargetSummary& WithPort(int value) { SetPort(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The code for why the target status is what it is.</p>
     */
    inline const Aws::String& GetReasonCode() const { return m_reasonCode; }
    inline bool ReasonCodeHasBeenSet() const { return m_reasonCodeHasBeenSet; }
    template<typename ReasonCodeT = Aws::String>
    void SetReasonCode(ReasonCodeT&& value) { m_reasonCodeHasBeenSet = true; m_reasonCode = std::forward<ReasonCodeT>(value); }
    template<typename ReasonCodeT = Aws::String>
    TargetSummary& WithReasonCode(ReasonCodeT&& value) { SetReasonCode(std::forward<ReasonCodeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The status of the target.</p> <ul> <li> <p> <code>DRAINING</code>: The target
     * is being deregistered. No new connections are sent to this target while current
     * connections are being drained. The default draining time is 5 minutes.</p> </li>
     * <li> <p> <code>UNAVAILABLE</code>: Health checks are unavailable for the target
     * group.</p> </li> <li> <p> <code>HEALTHY</code>: The target is healthy.</p> </li>
     * <li> <p> <code>UNHEALTHY</code>: The target is unhealthy.</p> </li> <li> <p>
     * <code>INITIAL</code>: Initial health checks on the target are being
     * performed.</p> </li> <li> <p> <code>UNUSED</code>: Target group is not used in a
     * service.</p> </li> </ul>
     */
    inline TargetStatus GetStatus() const { return m_status; }
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
    inline void SetStatus(TargetStatus value) { m_statusHasBeenSet = true; m_status = value; }
    inline TargetSummary& WithStatus(TargetStatus value) { SetStatus(value); return *this;}
    ///@}
  private:

    Aws::String m_id;
    bool m_idHasBeenSet = false;

    int m_port{0};
    bool m_portHasBeenSet = false;

    Aws::String m_reasonCode;
    bool m_reasonCodeHasBeenSet = false;

    TargetStatus m_status{TargetStatus::NOT_SET};
    bool m_statusHasBeenSet = false;
  };

} // namespace Model
} // namespace VPCLattice
} // namespace Aws
