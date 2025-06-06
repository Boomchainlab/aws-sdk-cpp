﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/sesv2/model/CreateContactRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::SESV2::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

Aws::String CreateContactRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_emailAddressHasBeenSet)
  {
   payload.WithString("EmailAddress", m_emailAddress);

  }

  if(m_topicPreferencesHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> topicPreferencesJsonList(m_topicPreferences.size());
   for(unsigned topicPreferencesIndex = 0; topicPreferencesIndex < topicPreferencesJsonList.GetLength(); ++topicPreferencesIndex)
   {
     topicPreferencesJsonList[topicPreferencesIndex].AsObject(m_topicPreferences[topicPreferencesIndex].Jsonize());
   }
   payload.WithArray("TopicPreferences", std::move(topicPreferencesJsonList));

  }

  if(m_unsubscribeAllHasBeenSet)
  {
   payload.WithBool("UnsubscribeAll", m_unsubscribeAll);

  }

  if(m_attributesDataHasBeenSet)
  {
   payload.WithString("AttributesData", m_attributesData);

  }

  return payload.View().WriteReadable();
}




