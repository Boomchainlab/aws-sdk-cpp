﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/cloudsearch/model/LiteralArrayOptions.h>
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

LiteralArrayOptions::LiteralArrayOptions(const XmlNode& xmlNode)
{
  *this = xmlNode;
}

LiteralArrayOptions& LiteralArrayOptions::operator =(const XmlNode& xmlNode)
{
  XmlNode resultNode = xmlNode;

  if(!resultNode.IsNull())
  {
    XmlNode defaultValueNode = resultNode.FirstChild("DefaultValue");
    if(!defaultValueNode.IsNull())
    {
      m_defaultValue = Aws::Utils::Xml::DecodeEscapedXmlText(defaultValueNode.GetText());
      m_defaultValueHasBeenSet = true;
    }
    XmlNode sourceFieldsNode = resultNode.FirstChild("SourceFields");
    if(!sourceFieldsNode.IsNull())
    {
      m_sourceFields = Aws::Utils::Xml::DecodeEscapedXmlText(sourceFieldsNode.GetText());
      m_sourceFieldsHasBeenSet = true;
    }
    XmlNode facetEnabledNode = resultNode.FirstChild("FacetEnabled");
    if(!facetEnabledNode.IsNull())
    {
      m_facetEnabled = StringUtils::ConvertToBool(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(facetEnabledNode.GetText()).c_str()).c_str());
      m_facetEnabledHasBeenSet = true;
    }
    XmlNode searchEnabledNode = resultNode.FirstChild("SearchEnabled");
    if(!searchEnabledNode.IsNull())
    {
      m_searchEnabled = StringUtils::ConvertToBool(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(searchEnabledNode.GetText()).c_str()).c_str());
      m_searchEnabledHasBeenSet = true;
    }
    XmlNode returnEnabledNode = resultNode.FirstChild("ReturnEnabled");
    if(!returnEnabledNode.IsNull())
    {
      m_returnEnabled = StringUtils::ConvertToBool(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(returnEnabledNode.GetText()).c_str()).c_str());
      m_returnEnabledHasBeenSet = true;
    }
  }

  return *this;
}

void LiteralArrayOptions::OutputToStream(Aws::OStream& oStream, const char* location, unsigned index, const char* locationValue) const
{
  if(m_defaultValueHasBeenSet)
  {
      oStream << location << index << locationValue << ".DefaultValue=" << StringUtils::URLEncode(m_defaultValue.c_str()) << "&";
  }

  if(m_sourceFieldsHasBeenSet)
  {
      oStream << location << index << locationValue << ".SourceFields=" << StringUtils::URLEncode(m_sourceFields.c_str()) << "&";
  }

  if(m_facetEnabledHasBeenSet)
  {
      oStream << location << index << locationValue << ".FacetEnabled=" << std::boolalpha << m_facetEnabled << "&";
  }

  if(m_searchEnabledHasBeenSet)
  {
      oStream << location << index << locationValue << ".SearchEnabled=" << std::boolalpha << m_searchEnabled << "&";
  }

  if(m_returnEnabledHasBeenSet)
  {
      oStream << location << index << locationValue << ".ReturnEnabled=" << std::boolalpha << m_returnEnabled << "&";
  }

}

void LiteralArrayOptions::OutputToStream(Aws::OStream& oStream, const char* location) const
{
  if(m_defaultValueHasBeenSet)
  {
      oStream << location << ".DefaultValue=" << StringUtils::URLEncode(m_defaultValue.c_str()) << "&";
  }
  if(m_sourceFieldsHasBeenSet)
  {
      oStream << location << ".SourceFields=" << StringUtils::URLEncode(m_sourceFields.c_str()) << "&";
  }
  if(m_facetEnabledHasBeenSet)
  {
      oStream << location << ".FacetEnabled=" << std::boolalpha << m_facetEnabled << "&";
  }
  if(m_searchEnabledHasBeenSet)
  {
      oStream << location << ".SearchEnabled=" << std::boolalpha << m_searchEnabled << "&";
  }
  if(m_returnEnabledHasBeenSet)
  {
      oStream << location << ".ReturnEnabled=" << std::boolalpha << m_returnEnabled << "&";
  }
}

} // namespace Model
} // namespace CloudSearch
} // namespace Aws
