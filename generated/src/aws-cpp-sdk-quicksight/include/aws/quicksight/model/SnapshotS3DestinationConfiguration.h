﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/quicksight/QuickSight_EXPORTS.h>
#include <aws/quicksight/model/S3BucketConfiguration.h>
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
namespace QuickSight
{
namespace Model
{

  /**
   * <p>A structure that describes the Amazon S3 settings to use to save the
   * generated dashboard snapshot.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/quicksight-2018-04-01/SnapshotS3DestinationConfiguration">AWS
   * API Reference</a></p>
   */
  class SnapshotS3DestinationConfiguration
  {
  public:
    AWS_QUICKSIGHT_API SnapshotS3DestinationConfiguration() = default;
    AWS_QUICKSIGHT_API SnapshotS3DestinationConfiguration(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API SnapshotS3DestinationConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>A structure that contains details about the Amazon S3 bucket that the
     * generated dashboard snapshot is saved in.</p>
     */
    inline const S3BucketConfiguration& GetBucketConfiguration() const { return m_bucketConfiguration; }
    inline bool BucketConfigurationHasBeenSet() const { return m_bucketConfigurationHasBeenSet; }
    template<typename BucketConfigurationT = S3BucketConfiguration>
    void SetBucketConfiguration(BucketConfigurationT&& value) { m_bucketConfigurationHasBeenSet = true; m_bucketConfiguration = std::forward<BucketConfigurationT>(value); }
    template<typename BucketConfigurationT = S3BucketConfiguration>
    SnapshotS3DestinationConfiguration& WithBucketConfiguration(BucketConfigurationT&& value) { SetBucketConfiguration(std::forward<BucketConfigurationT>(value)); return *this;}
    ///@}
  private:

    S3BucketConfiguration m_bucketConfiguration;
    bool m_bucketConfigurationHasBeenSet = false;
  };

} // namespace Model
} // namespace QuickSight
} // namespace Aws
