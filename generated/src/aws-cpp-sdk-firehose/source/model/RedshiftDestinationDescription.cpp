﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/firehose/model/RedshiftDestinationDescription.h>
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

RedshiftDestinationDescription::RedshiftDestinationDescription(JsonView jsonValue)
{
  *this = jsonValue;
}

RedshiftDestinationDescription& RedshiftDestinationDescription::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("RoleARN"))
  {
    m_roleARN = jsonValue.GetString("RoleARN");
    m_roleARNHasBeenSet = true;
  }
  if(jsonValue.ValueExists("ClusterJDBCURL"))
  {
    m_clusterJDBCURL = jsonValue.GetString("ClusterJDBCURL");
    m_clusterJDBCURLHasBeenSet = true;
  }
  if(jsonValue.ValueExists("CopyCommand"))
  {
    m_copyCommand = jsonValue.GetObject("CopyCommand");
    m_copyCommandHasBeenSet = true;
  }
  if(jsonValue.ValueExists("Username"))
  {
    m_username = jsonValue.GetString("Username");
    m_usernameHasBeenSet = true;
  }
  if(jsonValue.ValueExists("RetryOptions"))
  {
    m_retryOptions = jsonValue.GetObject("RetryOptions");
    m_retryOptionsHasBeenSet = true;
  }
  if(jsonValue.ValueExists("S3DestinationDescription"))
  {
    m_s3DestinationDescription = jsonValue.GetObject("S3DestinationDescription");
    m_s3DestinationDescriptionHasBeenSet = true;
  }
  if(jsonValue.ValueExists("ProcessingConfiguration"))
  {
    m_processingConfiguration = jsonValue.GetObject("ProcessingConfiguration");
    m_processingConfigurationHasBeenSet = true;
  }
  if(jsonValue.ValueExists("S3BackupMode"))
  {
    m_s3BackupMode = RedshiftS3BackupModeMapper::GetRedshiftS3BackupModeForName(jsonValue.GetString("S3BackupMode"));
    m_s3BackupModeHasBeenSet = true;
  }
  if(jsonValue.ValueExists("S3BackupDescription"))
  {
    m_s3BackupDescription = jsonValue.GetObject("S3BackupDescription");
    m_s3BackupDescriptionHasBeenSet = true;
  }
  if(jsonValue.ValueExists("CloudWatchLoggingOptions"))
  {
    m_cloudWatchLoggingOptions = jsonValue.GetObject("CloudWatchLoggingOptions");
    m_cloudWatchLoggingOptionsHasBeenSet = true;
  }
  if(jsonValue.ValueExists("SecretsManagerConfiguration"))
  {
    m_secretsManagerConfiguration = jsonValue.GetObject("SecretsManagerConfiguration");
    m_secretsManagerConfigurationHasBeenSet = true;
  }
  return *this;
}

JsonValue RedshiftDestinationDescription::Jsonize() const
{
  JsonValue payload;

  if(m_roleARNHasBeenSet)
  {
   payload.WithString("RoleARN", m_roleARN);

  }

  if(m_clusterJDBCURLHasBeenSet)
  {
   payload.WithString("ClusterJDBCURL", m_clusterJDBCURL);

  }

  if(m_copyCommandHasBeenSet)
  {
   payload.WithObject("CopyCommand", m_copyCommand.Jsonize());

  }

  if(m_usernameHasBeenSet)
  {
   payload.WithString("Username", m_username);

  }

  if(m_retryOptionsHasBeenSet)
  {
   payload.WithObject("RetryOptions", m_retryOptions.Jsonize());

  }

  if(m_s3DestinationDescriptionHasBeenSet)
  {
   payload.WithObject("S3DestinationDescription", m_s3DestinationDescription.Jsonize());

  }

  if(m_processingConfigurationHasBeenSet)
  {
   payload.WithObject("ProcessingConfiguration", m_processingConfiguration.Jsonize());

  }

  if(m_s3BackupModeHasBeenSet)
  {
   payload.WithString("S3BackupMode", RedshiftS3BackupModeMapper::GetNameForRedshiftS3BackupMode(m_s3BackupMode));
  }

  if(m_s3BackupDescriptionHasBeenSet)
  {
   payload.WithObject("S3BackupDescription", m_s3BackupDescription.Jsonize());

  }

  if(m_cloudWatchLoggingOptionsHasBeenSet)
  {
   payload.WithObject("CloudWatchLoggingOptions", m_cloudWatchLoggingOptions.Jsonize());

  }

  if(m_secretsManagerConfigurationHasBeenSet)
  {
   payload.WithObject("SecretsManagerConfiguration", m_secretsManagerConfiguration.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace Firehose
} // namespace Aws
