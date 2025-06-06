﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/fis/model/ExperimentTemplateLogConfiguration.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace FIS
{
namespace Model
{

ExperimentTemplateLogConfiguration::ExperimentTemplateLogConfiguration(JsonView jsonValue)
{
  *this = jsonValue;
}

ExperimentTemplateLogConfiguration& ExperimentTemplateLogConfiguration::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("cloudWatchLogsConfiguration"))
  {
    m_cloudWatchLogsConfiguration = jsonValue.GetObject("cloudWatchLogsConfiguration");
    m_cloudWatchLogsConfigurationHasBeenSet = true;
  }
  if(jsonValue.ValueExists("s3Configuration"))
  {
    m_s3Configuration = jsonValue.GetObject("s3Configuration");
    m_s3ConfigurationHasBeenSet = true;
  }
  if(jsonValue.ValueExists("logSchemaVersion"))
  {
    m_logSchemaVersion = jsonValue.GetInteger("logSchemaVersion");
    m_logSchemaVersionHasBeenSet = true;
  }
  return *this;
}

JsonValue ExperimentTemplateLogConfiguration::Jsonize() const
{
  JsonValue payload;

  if(m_cloudWatchLogsConfigurationHasBeenSet)
  {
   payload.WithObject("cloudWatchLogsConfiguration", m_cloudWatchLogsConfiguration.Jsonize());

  }

  if(m_s3ConfigurationHasBeenSet)
  {
   payload.WithObject("s3Configuration", m_s3Configuration.Jsonize());

  }

  if(m_logSchemaVersionHasBeenSet)
  {
   payload.WithInteger("logSchemaVersion", m_logSchemaVersion);

  }

  return payload;
}

} // namespace Model
} // namespace FIS
} // namespace Aws
