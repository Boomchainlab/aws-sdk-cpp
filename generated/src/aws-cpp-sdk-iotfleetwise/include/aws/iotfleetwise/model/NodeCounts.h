﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/iotfleetwise/IoTFleetWise_EXPORTS.h>

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
namespace IoTFleetWise
{
namespace Model
{

  /**
   * <p>Information about the number of nodes and node types in a vehicle
   * network.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/iotfleetwise-2021-06-17/NodeCounts">AWS
   * API Reference</a></p>
   */
  class NodeCounts
  {
  public:
    AWS_IOTFLEETWISE_API NodeCounts() = default;
    AWS_IOTFLEETWISE_API NodeCounts(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOTFLEETWISE_API NodeCounts& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOTFLEETWISE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The total number of nodes in a vehicle network.</p>
     */
    inline int GetTotalNodes() const { return m_totalNodes; }
    inline bool TotalNodesHasBeenSet() const { return m_totalNodesHasBeenSet; }
    inline void SetTotalNodes(int value) { m_totalNodesHasBeenSet = true; m_totalNodes = value; }
    inline NodeCounts& WithTotalNodes(int value) { SetTotalNodes(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The total number of nodes in a vehicle network that represent branches.</p>
     */
    inline int GetTotalBranches() const { return m_totalBranches; }
    inline bool TotalBranchesHasBeenSet() const { return m_totalBranchesHasBeenSet; }
    inline void SetTotalBranches(int value) { m_totalBranchesHasBeenSet = true; m_totalBranches = value; }
    inline NodeCounts& WithTotalBranches(int value) { SetTotalBranches(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The total number of nodes in a vehicle network that represent sensors.</p>
     */
    inline int GetTotalSensors() const { return m_totalSensors; }
    inline bool TotalSensorsHasBeenSet() const { return m_totalSensorsHasBeenSet; }
    inline void SetTotalSensors(int value) { m_totalSensorsHasBeenSet = true; m_totalSensors = value; }
    inline NodeCounts& WithTotalSensors(int value) { SetTotalSensors(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The total number of nodes in a vehicle network that represent attributes.</p>
     */
    inline int GetTotalAttributes() const { return m_totalAttributes; }
    inline bool TotalAttributesHasBeenSet() const { return m_totalAttributesHasBeenSet; }
    inline void SetTotalAttributes(int value) { m_totalAttributesHasBeenSet = true; m_totalAttributes = value; }
    inline NodeCounts& WithTotalAttributes(int value) { SetTotalAttributes(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The total number of nodes in a vehicle network that represent actuators.</p>
     */
    inline int GetTotalActuators() const { return m_totalActuators; }
    inline bool TotalActuatorsHasBeenSet() const { return m_totalActuatorsHasBeenSet; }
    inline void SetTotalActuators(int value) { m_totalActuatorsHasBeenSet = true; m_totalActuators = value; }
    inline NodeCounts& WithTotalActuators(int value) { SetTotalActuators(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The total structure for the node.</p>
     */
    inline int GetTotalStructs() const { return m_totalStructs; }
    inline bool TotalStructsHasBeenSet() const { return m_totalStructsHasBeenSet; }
    inline void SetTotalStructs(int value) { m_totalStructsHasBeenSet = true; m_totalStructs = value; }
    inline NodeCounts& WithTotalStructs(int value) { SetTotalStructs(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The total properties for the node.</p>
     */
    inline int GetTotalProperties() const { return m_totalProperties; }
    inline bool TotalPropertiesHasBeenSet() const { return m_totalPropertiesHasBeenSet; }
    inline void SetTotalProperties(int value) { m_totalPropertiesHasBeenSet = true; m_totalProperties = value; }
    inline NodeCounts& WithTotalProperties(int value) { SetTotalProperties(value); return *this;}
    ///@}
  private:

    int m_totalNodes{0};
    bool m_totalNodesHasBeenSet = false;

    int m_totalBranches{0};
    bool m_totalBranchesHasBeenSet = false;

    int m_totalSensors{0};
    bool m_totalSensorsHasBeenSet = false;

    int m_totalAttributes{0};
    bool m_totalAttributesHasBeenSet = false;

    int m_totalActuators{0};
    bool m_totalActuatorsHasBeenSet = false;

    int m_totalStructs{0};
    bool m_totalStructsHasBeenSet = false;

    int m_totalProperties{0};
    bool m_totalPropertiesHasBeenSet = false;
  };

} // namespace Model
} // namespace IoTFleetWise
} // namespace Aws
