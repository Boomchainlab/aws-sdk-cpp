﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/rekognition/Rekognition_EXPORTS.h>
#include <aws/rekognition/model/S3Object.h>
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
namespace Rekognition
{
namespace Model
{

  /**
   * <p>Summary that provides statistics on input manifest and errors identified in
   * the input manifest.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/rekognition-2016-06-27/MediaAnalysisManifestSummary">AWS
   * API Reference</a></p>
   */
  class MediaAnalysisManifestSummary
  {
  public:
    AWS_REKOGNITION_API MediaAnalysisManifestSummary() = default;
    AWS_REKOGNITION_API MediaAnalysisManifestSummary(Aws::Utils::Json::JsonView jsonValue);
    AWS_REKOGNITION_API MediaAnalysisManifestSummary& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_REKOGNITION_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    
    inline const S3Object& GetS3Object() const { return m_s3Object; }
    inline bool S3ObjectHasBeenSet() const { return m_s3ObjectHasBeenSet; }
    template<typename S3ObjectT = S3Object>
    void SetS3Object(S3ObjectT&& value) { m_s3ObjectHasBeenSet = true; m_s3Object = std::forward<S3ObjectT>(value); }
    template<typename S3ObjectT = S3Object>
    MediaAnalysisManifestSummary& WithS3Object(S3ObjectT&& value) { SetS3Object(std::forward<S3ObjectT>(value)); return *this;}
    ///@}
  private:

    S3Object m_s3Object;
    bool m_s3ObjectHasBeenSet = false;
  };

} // namespace Model
} // namespace Rekognition
} // namespace Aws
