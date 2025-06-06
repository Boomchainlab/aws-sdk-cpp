﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/firehose/model/ExtendedS3DestinationUpdate.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace Firehose
{
namespace Model
{

ExtendedS3DestinationUpdate::ExtendedS3DestinationUpdate(JsonView jsonValue)
{
  *this = jsonValue;
}

ExtendedS3DestinationUpdate& ExtendedS3DestinationUpdate::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("RoleARN"))
  {
    m_roleARN = jsonValue.GetString("RoleARN");
    m_roleARNHasBeenSet = true;
  }
  if(jsonValue.ValueExists("BucketARN"))
  {
    m_bucketARN = jsonValue.GetString("BucketARN");
    m_bucketARNHasBeenSet = true;
  }
  if(jsonValue.ValueExists("Prefix"))
  {
    m_prefix = jsonValue.GetString("Prefix");
    m_prefixHasBeenSet = true;
  }
  if(jsonValue.ValueExists("ErrorOutputPrefix"))
  {
    m_errorOutputPrefix = jsonValue.GetString("ErrorOutputPrefix");
    m_errorOutputPrefixHasBeenSet = true;
  }
  if(jsonValue.ValueExists("BufferingHints"))
  {
    m_bufferingHints = jsonValue.GetObject("BufferingHints");
    m_bufferingHintsHasBeenSet = true;
  }
  if(jsonValue.ValueExists("CompressionFormat"))
  {
    m_compressionFormat = CompressionFormatMapper::GetCompressionFormatForName(jsonValue.GetString("CompressionFormat"));
    m_compressionFormatHasBeenSet = true;
  }
  if(jsonValue.ValueExists("EncryptionConfiguration"))
  {
    m_encryptionConfiguration = jsonValue.GetObject("EncryptionConfiguration");
    m_encryptionConfigurationHasBeenSet = true;
  }
  if(jsonValue.ValueExists("CloudWatchLoggingOptions"))
  {
    m_cloudWatchLoggingOptions = jsonValue.GetObject("CloudWatchLoggingOptions");
    m_cloudWatchLoggingOptionsHasBeenSet = true;
  }
  if(jsonValue.ValueExists("ProcessingConfiguration"))
  {
    m_processingConfiguration = jsonValue.GetObject("ProcessingConfiguration");
    m_processingConfigurationHasBeenSet = true;
  }
  if(jsonValue.ValueExists("S3BackupMode"))
  {
    m_s3BackupMode = S3BackupModeMapper::GetS3BackupModeForName(jsonValue.GetString("S3BackupMode"));
    m_s3BackupModeHasBeenSet = true;
  }
  if(jsonValue.ValueExists("S3BackupUpdate"))
  {
    m_s3BackupUpdate = jsonValue.GetObject("S3BackupUpdate");
    m_s3BackupUpdateHasBeenSet = true;
  }
  if(jsonValue.ValueExists("DataFormatConversionConfiguration"))
  {
    m_dataFormatConversionConfiguration = jsonValue.GetObject("DataFormatConversionConfiguration");
    m_dataFormatConversionConfigurationHasBeenSet = true;
  }
  if(jsonValue.ValueExists("DynamicPartitioningConfiguration"))
  {
    m_dynamicPartitioningConfiguration = jsonValue.GetObject("DynamicPartitioningConfiguration");
    m_dynamicPartitioningConfigurationHasBeenSet = true;
  }
  if(jsonValue.ValueExists("FileExtension"))
  {
    m_fileExtension = jsonValue.GetString("FileExtension");
    m_fileExtensionHasBeenSet = true;
  }
  if(jsonValue.ValueExists("CustomTimeZone"))
  {
    m_customTimeZone = jsonValue.GetString("CustomTimeZone");
    m_customTimeZoneHasBeenSet = true;
  }
  return *this;
}

JsonValue ExtendedS3DestinationUpdate::Jsonize() const
{
  JsonValue payload;

  if(m_roleARNHasBeenSet)
  {
   payload.WithString("RoleARN", m_roleARN);

  }

  if(m_bucketARNHasBeenSet)
  {
   payload.WithString("BucketARN", m_bucketARN);

  }

  if(m_prefixHasBeenSet)
  {
   payload.WithString("Prefix", m_prefix);

  }

  if(m_errorOutputPrefixHasBeenSet)
  {
   payload.WithString("ErrorOutputPrefix", m_errorOutputPrefix);

  }

  if(m_bufferingHintsHasBeenSet)
  {
   payload.WithObject("BufferingHints", m_bufferingHints.Jsonize());

  }

  if(m_compressionFormatHasBeenSet)
  {
   payload.WithString("CompressionFormat", CompressionFormatMapper::GetNameForCompressionFormat(m_compressionFormat));
  }

  if(m_encryptionConfigurationHasBeenSet)
  {
   payload.WithObject("EncryptionConfiguration", m_encryptionConfiguration.Jsonize());

  }

  if(m_cloudWatchLoggingOptionsHasBeenSet)
  {
   payload.WithObject("CloudWatchLoggingOptions", m_cloudWatchLoggingOptions.Jsonize());

  }

  if(m_processingConfigurationHasBeenSet)
  {
   payload.WithObject("ProcessingConfiguration", m_processingConfiguration.Jsonize());

  }

  if(m_s3BackupModeHasBeenSet)
  {
   payload.WithString("S3BackupMode", S3BackupModeMapper::GetNameForS3BackupMode(m_s3BackupMode));
  }

  if(m_s3BackupUpdateHasBeenSet)
  {
   payload.WithObject("S3BackupUpdate", m_s3BackupUpdate.Jsonize());

  }

  if(m_dataFormatConversionConfigurationHasBeenSet)
  {
   payload.WithObject("DataFormatConversionConfiguration", m_dataFormatConversionConfiguration.Jsonize());

  }

  if(m_dynamicPartitioningConfigurationHasBeenSet)
  {
   payload.WithObject("DynamicPartitioningConfiguration", m_dynamicPartitioningConfiguration.Jsonize());

  }

  if(m_fileExtensionHasBeenSet)
  {
   payload.WithString("FileExtension", m_fileExtension);

  }

  if(m_customTimeZoneHasBeenSet)
  {
   payload.WithString("CustomTimeZone", m_customTimeZone);

  }

  return payload;
}

} // namespace Model
} // namespace Firehose
} // namespace Aws
