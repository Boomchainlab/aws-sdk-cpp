﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/cloudsearch/model/DocumentSuggesterOptions.h>
#include <aws/core/utils/xml/XmlSerializer.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::Utils::Xml;
using namespace Aws::Utils;

namespace Aws
{
namespace CloudSearch
{
namespace Model
{

DocumentSuggesterOptions::DocumentSuggesterOptions(const XmlNode& xmlNode)
{
  *this = xmlNode;
}

DocumentSuggesterOptions& DocumentSuggesterOptions::operator =(const XmlNode& xmlNode)
{
  XmlNode resultNode = xmlNode;

  if(!resultNode.IsNull())
  {
    XmlNode sourceFieldNode = resultNode.FirstChild("SourceField");
    if(!sourceFieldNode.IsNull())
    {
      m_sourceField = Aws::Utils::Xml::DecodeEscapedXmlText(sourceFieldNode.GetText());
      m_sourceFieldHasBeenSet = true;
    }
    XmlNode fuzzyMatchingNode = resultNode.FirstChild("FuzzyMatching");
    if(!fuzzyMatchingNode.IsNull())
    {
      m_fuzzyMatching = SuggesterFuzzyMatchingMapper::GetSuggesterFuzzyMatchingForName(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(fuzzyMatchingNode.GetText()).c_str()));
      m_fuzzyMatchingHasBeenSet = true;
    }
    XmlNode sortExpressionNode = resultNode.FirstChild("SortExpression");
    if(!sortExpressionNode.IsNull())
    {
      m_sortExpression = Aws::Utils::Xml::DecodeEscapedXmlText(sortExpressionNode.GetText());
      m_sortExpressionHasBeenSet = true;
    }
  }

  return *this;
}

void DocumentSuggesterOptions::OutputToStream(Aws::OStream& oStream, const char* location, unsigned index, const char* locationValue) const
{
  if(m_sourceFieldHasBeenSet)
  {
      oStream << location << index << locationValue << ".SourceField=" << StringUtils::URLEncode(m_sourceField.c_str()) << "&";
  }

  if(m_fuzzyMatchingHasBeenSet)
  {
      oStream << location << index << locationValue << ".FuzzyMatching=" << StringUtils::URLEncode(SuggesterFuzzyMatchingMapper::GetNameForSuggesterFuzzyMatching(m_fuzzyMatching)) << "&";
  }

  if(m_sortExpressionHasBeenSet)
  {
      oStream << location << index << locationValue << ".SortExpression=" << StringUtils::URLEncode(m_sortExpression.c_str()) << "&";
  }

}

void DocumentSuggesterOptions::OutputToStream(Aws::OStream& oStream, const char* location) const
{
  if(m_sourceFieldHasBeenSet)
  {
      oStream << location << ".SourceField=" << StringUtils::URLEncode(m_sourceField.c_str()) << "&";
  }
  if(m_fuzzyMatchingHasBeenSet)
  {
      oStream << location << ".FuzzyMatching=" << StringUtils::URLEncode(SuggesterFuzzyMatchingMapper::GetNameForSuggesterFuzzyMatching(m_fuzzyMatching)) << "&";
  }
  if(m_sortExpressionHasBeenSet)
  {
      oStream << location << ".SortExpression=" << StringUtils::URLEncode(m_sortExpression.c_str()) << "&";
  }
}

} // namespace Model
} // namespace CloudSearch
} // namespace Aws
