﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/cleanrooms/model/CollaborationAnalysisTemplate.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace CleanRooms
{
namespace Model
{

CollaborationAnalysisTemplate::CollaborationAnalysisTemplate(JsonView jsonValue)
{
  *this = jsonValue;
}

CollaborationAnalysisTemplate& CollaborationAnalysisTemplate::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("id"))
  {
    m_id = jsonValue.GetString("id");
    m_idHasBeenSet = true;
  }
  if(jsonValue.ValueExists("arn"))
  {
    m_arn = jsonValue.GetString("arn");
    m_arnHasBeenSet = true;
  }
  if(jsonValue.ValueExists("collaborationId"))
  {
    m_collaborationId = jsonValue.GetString("collaborationId");
    m_collaborationIdHasBeenSet = true;
  }
  if(jsonValue.ValueExists("collaborationArn"))
  {
    m_collaborationArn = jsonValue.GetString("collaborationArn");
    m_collaborationArnHasBeenSet = true;
  }
  if(jsonValue.ValueExists("description"))
  {
    m_description = jsonValue.GetString("description");
    m_descriptionHasBeenSet = true;
  }
  if(jsonValue.ValueExists("creatorAccountId"))
  {
    m_creatorAccountId = jsonValue.GetString("creatorAccountId");
    m_creatorAccountIdHasBeenSet = true;
  }
  if(jsonValue.ValueExists("name"))
  {
    m_name = jsonValue.GetString("name");
    m_nameHasBeenSet = true;
  }
  if(jsonValue.ValueExists("createTime"))
  {
    m_createTime = jsonValue.GetDouble("createTime");
    m_createTimeHasBeenSet = true;
  }
  if(jsonValue.ValueExists("updateTime"))
  {
    m_updateTime = jsonValue.GetDouble("updateTime");
    m_updateTimeHasBeenSet = true;
  }
  if(jsonValue.ValueExists("schema"))
  {
    m_schema = jsonValue.GetObject("schema");
    m_schemaHasBeenSet = true;
  }
  if(jsonValue.ValueExists("format"))
  {
    m_format = AnalysisFormatMapper::GetAnalysisFormatForName(jsonValue.GetString("format"));
    m_formatHasBeenSet = true;
  }
  if(jsonValue.ValueExists("source"))
  {
    m_source = jsonValue.GetObject("source");
    m_sourceHasBeenSet = true;
  }
  if(jsonValue.ValueExists("sourceMetadata"))
  {
    m_sourceMetadata = jsonValue.GetObject("sourceMetadata");
    m_sourceMetadataHasBeenSet = true;
  }
  if(jsonValue.ValueExists("analysisParameters"))
  {
    Aws::Utils::Array<JsonView> analysisParametersJsonList = jsonValue.GetArray("analysisParameters");
    for(unsigned analysisParametersIndex = 0; analysisParametersIndex < analysisParametersJsonList.GetLength(); ++analysisParametersIndex)
    {
      m_analysisParameters.push_back(analysisParametersJsonList[analysisParametersIndex].AsObject());
    }
    m_analysisParametersHasBeenSet = true;
  }
  if(jsonValue.ValueExists("validations"))
  {
    Aws::Utils::Array<JsonView> validationsJsonList = jsonValue.GetArray("validations");
    for(unsigned validationsIndex = 0; validationsIndex < validationsJsonList.GetLength(); ++validationsIndex)
    {
      m_validations.push_back(validationsJsonList[validationsIndex].AsObject());
    }
    m_validationsHasBeenSet = true;
  }
  return *this;
}

JsonValue CollaborationAnalysisTemplate::Jsonize() const
{
  JsonValue payload;

  if(m_idHasBeenSet)
  {
   payload.WithString("id", m_id);

  }

  if(m_arnHasBeenSet)
  {
   payload.WithString("arn", m_arn);

  }

  if(m_collaborationIdHasBeenSet)
  {
   payload.WithString("collaborationId", m_collaborationId);

  }

  if(m_collaborationArnHasBeenSet)
  {
   payload.WithString("collaborationArn", m_collaborationArn);

  }

  if(m_descriptionHasBeenSet)
  {
   payload.WithString("description", m_description);

  }

  if(m_creatorAccountIdHasBeenSet)
  {
   payload.WithString("creatorAccountId", m_creatorAccountId);

  }

  if(m_nameHasBeenSet)
  {
   payload.WithString("name", m_name);

  }

  if(m_createTimeHasBeenSet)
  {
   payload.WithDouble("createTime", m_createTime.SecondsWithMSPrecision());
  }

  if(m_updateTimeHasBeenSet)
  {
   payload.WithDouble("updateTime", m_updateTime.SecondsWithMSPrecision());
  }

  if(m_schemaHasBeenSet)
  {
   payload.WithObject("schema", m_schema.Jsonize());

  }

  if(m_formatHasBeenSet)
  {
   payload.WithString("format", AnalysisFormatMapper::GetNameForAnalysisFormat(m_format));
  }

  if(m_sourceHasBeenSet)
  {
   payload.WithObject("source", m_source.Jsonize());

  }

  if(m_sourceMetadataHasBeenSet)
  {
   payload.WithObject("sourceMetadata", m_sourceMetadata.Jsonize());

  }

  if(m_analysisParametersHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> analysisParametersJsonList(m_analysisParameters.size());
   for(unsigned analysisParametersIndex = 0; analysisParametersIndex < analysisParametersJsonList.GetLength(); ++analysisParametersIndex)
   {
     analysisParametersJsonList[analysisParametersIndex].AsObject(m_analysisParameters[analysisParametersIndex].Jsonize());
   }
   payload.WithArray("analysisParameters", std::move(analysisParametersJsonList));

  }

  if(m_validationsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> validationsJsonList(m_validations.size());
   for(unsigned validationsIndex = 0; validationsIndex < validationsJsonList.GetLength(); ++validationsIndex)
   {
     validationsJsonList[validationsIndex].AsObject(m_validations[validationsIndex].Jsonize());
   }
   payload.WithArray("validations", std::move(validationsJsonList));

  }

  return payload;
}

} // namespace Model
} // namespace CleanRooms
} // namespace Aws
