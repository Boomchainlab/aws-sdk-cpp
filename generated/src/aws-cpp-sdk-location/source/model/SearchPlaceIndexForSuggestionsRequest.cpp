﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/location/model/SearchPlaceIndexForSuggestionsRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/http/URI.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::LocationService::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws::Http;

Aws::String SearchPlaceIndexForSuggestionsRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_textHasBeenSet)
  {
   payload.WithString("Text", m_text);

  }

  if(m_biasPositionHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> biasPositionJsonList(m_biasPosition.size());
   for(unsigned biasPositionIndex = 0; biasPositionIndex < biasPositionJsonList.GetLength(); ++biasPositionIndex)
   {
     biasPositionJsonList[biasPositionIndex].AsDouble(m_biasPosition[biasPositionIndex]);
   }
   payload.WithArray("BiasPosition", std::move(biasPositionJsonList));

  }

  if(m_filterBBoxHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> filterBBoxJsonList(m_filterBBox.size());
   for(unsigned filterBBoxIndex = 0; filterBBoxIndex < filterBBoxJsonList.GetLength(); ++filterBBoxIndex)
   {
     filterBBoxJsonList[filterBBoxIndex].AsDouble(m_filterBBox[filterBBoxIndex]);
   }
   payload.WithArray("FilterBBox", std::move(filterBBoxJsonList));

  }

  if(m_filterCountriesHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> filterCountriesJsonList(m_filterCountries.size());
   for(unsigned filterCountriesIndex = 0; filterCountriesIndex < filterCountriesJsonList.GetLength(); ++filterCountriesIndex)
   {
     filterCountriesJsonList[filterCountriesIndex].AsString(m_filterCountries[filterCountriesIndex]);
   }
   payload.WithArray("FilterCountries", std::move(filterCountriesJsonList));

  }

  if(m_maxResultsHasBeenSet)
  {
   payload.WithInteger("MaxResults", m_maxResults);

  }

  if(m_languageHasBeenSet)
  {
   payload.WithString("Language", m_language);

  }

  if(m_filterCategoriesHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> filterCategoriesJsonList(m_filterCategories.size());
   for(unsigned filterCategoriesIndex = 0; filterCategoriesIndex < filterCategoriesJsonList.GetLength(); ++filterCategoriesIndex)
   {
     filterCategoriesJsonList[filterCategoriesIndex].AsString(m_filterCategories[filterCategoriesIndex]);
   }
   payload.WithArray("FilterCategories", std::move(filterCategoriesJsonList));

  }

  return payload.View().WriteReadable();
}

void SearchPlaceIndexForSuggestionsRequest::AddQueryStringParameters(URI& uri) const
{
    Aws::StringStream ss;
    if(m_keyHasBeenSet)
    {
      ss << m_key;
      uri.AddQueryStringParameter("key", ss.str());
      ss.str("");
    }

}



