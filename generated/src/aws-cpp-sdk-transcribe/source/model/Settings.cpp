﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/transcribe/model/Settings.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace TranscribeService
{
namespace Model
{

Settings::Settings(JsonView jsonValue)
{
  *this = jsonValue;
}

Settings& Settings::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("VocabularyName"))
  {
    m_vocabularyName = jsonValue.GetString("VocabularyName");
    m_vocabularyNameHasBeenSet = true;
  }
  if(jsonValue.ValueExists("ShowSpeakerLabels"))
  {
    m_showSpeakerLabels = jsonValue.GetBool("ShowSpeakerLabels");
    m_showSpeakerLabelsHasBeenSet = true;
  }
  if(jsonValue.ValueExists("MaxSpeakerLabels"))
  {
    m_maxSpeakerLabels = jsonValue.GetInteger("MaxSpeakerLabels");
    m_maxSpeakerLabelsHasBeenSet = true;
  }
  if(jsonValue.ValueExists("ChannelIdentification"))
  {
    m_channelIdentification = jsonValue.GetBool("ChannelIdentification");
    m_channelIdentificationHasBeenSet = true;
  }
  if(jsonValue.ValueExists("ShowAlternatives"))
  {
    m_showAlternatives = jsonValue.GetBool("ShowAlternatives");
    m_showAlternativesHasBeenSet = true;
  }
  if(jsonValue.ValueExists("MaxAlternatives"))
  {
    m_maxAlternatives = jsonValue.GetInteger("MaxAlternatives");
    m_maxAlternativesHasBeenSet = true;
  }
  if(jsonValue.ValueExists("VocabularyFilterName"))
  {
    m_vocabularyFilterName = jsonValue.GetString("VocabularyFilterName");
    m_vocabularyFilterNameHasBeenSet = true;
  }
  if(jsonValue.ValueExists("VocabularyFilterMethod"))
  {
    m_vocabularyFilterMethod = VocabularyFilterMethodMapper::GetVocabularyFilterMethodForName(jsonValue.GetString("VocabularyFilterMethod"));
    m_vocabularyFilterMethodHasBeenSet = true;
  }
  return *this;
}

JsonValue Settings::Jsonize() const
{
  JsonValue payload;

  if(m_vocabularyNameHasBeenSet)
  {
   payload.WithString("VocabularyName", m_vocabularyName);

  }

  if(m_showSpeakerLabelsHasBeenSet)
  {
   payload.WithBool("ShowSpeakerLabels", m_showSpeakerLabels);

  }

  if(m_maxSpeakerLabelsHasBeenSet)
  {
   payload.WithInteger("MaxSpeakerLabels", m_maxSpeakerLabels);

  }

  if(m_channelIdentificationHasBeenSet)
  {
   payload.WithBool("ChannelIdentification", m_channelIdentification);

  }

  if(m_showAlternativesHasBeenSet)
  {
   payload.WithBool("ShowAlternatives", m_showAlternatives);

  }

  if(m_maxAlternativesHasBeenSet)
  {
   payload.WithInteger("MaxAlternatives", m_maxAlternatives);

  }

  if(m_vocabularyFilterNameHasBeenSet)
  {
   payload.WithString("VocabularyFilterName", m_vocabularyFilterName);

  }

  if(m_vocabularyFilterMethodHasBeenSet)
  {
   payload.WithString("VocabularyFilterMethod", VocabularyFilterMethodMapper::GetNameForVocabularyFilterMethod(m_vocabularyFilterMethod));
  }

  return payload;
}

} // namespace Model
} // namespace TranscribeService
} // namespace Aws
