﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/drs/Drs_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
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
namespace drs
{
namespace Model
{

  /**
   * <p>A set of filters by which to return Jobs.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/drs-2020-02-26/DescribeJobsRequestFilters">AWS
   * API Reference</a></p>
   */
  class DescribeJobsRequestFilters
  {
  public:
    AWS_DRS_API DescribeJobsRequestFilters() = default;
    AWS_DRS_API DescribeJobsRequestFilters(Aws::Utils::Json::JsonView jsonValue);
    AWS_DRS_API DescribeJobsRequestFilters& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_DRS_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The start date in a date range query.</p>
     */
    inline const Aws::String& GetFromDate() const { return m_fromDate; }
    inline bool FromDateHasBeenSet() const { return m_fromDateHasBeenSet; }
    template<typename FromDateT = Aws::String>
    void SetFromDate(FromDateT&& value) { m_fromDateHasBeenSet = true; m_fromDate = std::forward<FromDateT>(value); }
    template<typename FromDateT = Aws::String>
    DescribeJobsRequestFilters& WithFromDate(FromDateT&& value) { SetFromDate(std::forward<FromDateT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>An array of Job IDs that should be returned. An empty array means all
     * jobs.</p>
     */
    inline const Aws::Vector<Aws::String>& GetJobIDs() const { return m_jobIDs; }
    inline bool JobIDsHasBeenSet() const { return m_jobIDsHasBeenSet; }
    template<typename JobIDsT = Aws::Vector<Aws::String>>
    void SetJobIDs(JobIDsT&& value) { m_jobIDsHasBeenSet = true; m_jobIDs = std::forward<JobIDsT>(value); }
    template<typename JobIDsT = Aws::Vector<Aws::String>>
    DescribeJobsRequestFilters& WithJobIDs(JobIDsT&& value) { SetJobIDs(std::forward<JobIDsT>(value)); return *this;}
    template<typename JobIDsT = Aws::String>
    DescribeJobsRequestFilters& AddJobIDs(JobIDsT&& value) { m_jobIDsHasBeenSet = true; m_jobIDs.emplace_back(std::forward<JobIDsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The end date in a date range query.</p>
     */
    inline const Aws::String& GetToDate() const { return m_toDate; }
    inline bool ToDateHasBeenSet() const { return m_toDateHasBeenSet; }
    template<typename ToDateT = Aws::String>
    void SetToDate(ToDateT&& value) { m_toDateHasBeenSet = true; m_toDate = std::forward<ToDateT>(value); }
    template<typename ToDateT = Aws::String>
    DescribeJobsRequestFilters& WithToDate(ToDateT&& value) { SetToDate(std::forward<ToDateT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_fromDate;
    bool m_fromDateHasBeenSet = false;

    Aws::Vector<Aws::String> m_jobIDs;
    bool m_jobIDsHasBeenSet = false;

    Aws::String m_toDate;
    bool m_toDateHasBeenSet = false;
  };

} // namespace Model
} // namespace drs
} // namespace Aws
