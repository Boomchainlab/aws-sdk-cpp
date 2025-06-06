﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/timestream-query/TimestreamQuery_EXPORTS.h>
#include <aws/timestream-query/model/S3ReportLocation.h>
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
namespace TimestreamQuery
{
namespace Model
{

  /**
   * <p>This contains the location of the error report for a single scheduled query
   * call. </p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/timestream-query-2018-11-01/ErrorReportLocation">AWS
   * API Reference</a></p>
   */
  class ErrorReportLocation
  {
  public:
    AWS_TIMESTREAMQUERY_API ErrorReportLocation() = default;
    AWS_TIMESTREAMQUERY_API ErrorReportLocation(Aws::Utils::Json::JsonView jsonValue);
    AWS_TIMESTREAMQUERY_API ErrorReportLocation& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_TIMESTREAMQUERY_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The S3 location where error reports are written.</p>
     */
    inline const S3ReportLocation& GetS3ReportLocation() const { return m_s3ReportLocation; }
    inline bool S3ReportLocationHasBeenSet() const { return m_s3ReportLocationHasBeenSet; }
    template<typename S3ReportLocationT = S3ReportLocation>
    void SetS3ReportLocation(S3ReportLocationT&& value) { m_s3ReportLocationHasBeenSet = true; m_s3ReportLocation = std::forward<S3ReportLocationT>(value); }
    template<typename S3ReportLocationT = S3ReportLocation>
    ErrorReportLocation& WithS3ReportLocation(S3ReportLocationT&& value) { SetS3ReportLocation(std::forward<S3ReportLocationT>(value)); return *this;}
    ///@}
  private:

    S3ReportLocation m_s3ReportLocation;
    bool m_s3ReportLocationHasBeenSet = false;
  };

} // namespace Model
} // namespace TimestreamQuery
} // namespace Aws
