﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/scheduler/Scheduler_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/scheduler/model/PlacementStrategyType.h>
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
namespace Scheduler
{
namespace Model
{

  /**
   * <p>The task placement strategy for a task or service.</p><p><h3>See Also:</h3>  
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/scheduler-2021-06-30/PlacementStrategy">AWS
   * API Reference</a></p>
   */
  class PlacementStrategy
  {
  public:
    AWS_SCHEDULER_API PlacementStrategy() = default;
    AWS_SCHEDULER_API PlacementStrategy(Aws::Utils::Json::JsonView jsonValue);
    AWS_SCHEDULER_API PlacementStrategy& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SCHEDULER_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The field to apply the placement strategy against. For the spread placement
     * strategy, valid values are <code>instanceId</code> (or <code>instanceId</code>,
     * which has the same effect), or any platform or custom attribute that is applied
     * to a container instance, such as <code>attribute:ecs.availability-zone</code>.
     * For the binpack placement strategy, valid values are <code>cpu</code> and
     * <code>memory</code>. For the random placement strategy, this field is not
     * used.</p>
     */
    inline const Aws::String& GetField() const { return m_field; }
    inline bool FieldHasBeenSet() const { return m_fieldHasBeenSet; }
    template<typename FieldT = Aws::String>
    void SetField(FieldT&& value) { m_fieldHasBeenSet = true; m_field = std::forward<FieldT>(value); }
    template<typename FieldT = Aws::String>
    PlacementStrategy& WithField(FieldT&& value) { SetField(std::forward<FieldT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The type of placement strategy. The random placement strategy randomly places
     * tasks on available candidates. The spread placement strategy spreads placement
     * across available candidates evenly based on the field parameter. The binpack
     * strategy places tasks on available candidates that have the least available
     * amount of the resource that is specified with the field parameter. For example,
     * if you binpack on memory, a task is placed on the instance with the least amount
     * of remaining memory (but still enough to run the task).</p>
     */
    inline PlacementStrategyType GetType() const { return m_type; }
    inline bool TypeHasBeenSet() const { return m_typeHasBeenSet; }
    inline void SetType(PlacementStrategyType value) { m_typeHasBeenSet = true; m_type = value; }
    inline PlacementStrategy& WithType(PlacementStrategyType value) { SetType(value); return *this;}
    ///@}
  private:

    Aws::String m_field;
    bool m_fieldHasBeenSet = false;

    PlacementStrategyType m_type{PlacementStrategyType::NOT_SET};
    bool m_typeHasBeenSet = false;
  };

} // namespace Model
} // namespace Scheduler
} // namespace Aws
