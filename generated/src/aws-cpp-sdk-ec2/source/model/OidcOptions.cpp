﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ec2/model/OidcOptions.h>
#include <aws/core/utils/xml/XmlSerializer.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::Utils::Xml;
using namespace Aws::Utils;

namespace Aws
{
namespace EC2
{
namespace Model
{

OidcOptions::OidcOptions(const XmlNode& xmlNode)
{
  *this = xmlNode;
}

OidcOptions& OidcOptions::operator =(const XmlNode& xmlNode)
{
  XmlNode resultNode = xmlNode;

  if(!resultNode.IsNull())
  {
    XmlNode issuerNode = resultNode.FirstChild("issuer");
    if(!issuerNode.IsNull())
    {
      m_issuer = Aws::Utils::Xml::DecodeEscapedXmlText(issuerNode.GetText());
      m_issuerHasBeenSet = true;
    }
    XmlNode authorizationEndpointNode = resultNode.FirstChild("authorizationEndpoint");
    if(!authorizationEndpointNode.IsNull())
    {
      m_authorizationEndpoint = Aws::Utils::Xml::DecodeEscapedXmlText(authorizationEndpointNode.GetText());
      m_authorizationEndpointHasBeenSet = true;
    }
    XmlNode tokenEndpointNode = resultNode.FirstChild("tokenEndpoint");
    if(!tokenEndpointNode.IsNull())
    {
      m_tokenEndpoint = Aws::Utils::Xml::DecodeEscapedXmlText(tokenEndpointNode.GetText());
      m_tokenEndpointHasBeenSet = true;
    }
    XmlNode userInfoEndpointNode = resultNode.FirstChild("userInfoEndpoint");
    if(!userInfoEndpointNode.IsNull())
    {
      m_userInfoEndpoint = Aws::Utils::Xml::DecodeEscapedXmlText(userInfoEndpointNode.GetText());
      m_userInfoEndpointHasBeenSet = true;
    }
    XmlNode clientIdNode = resultNode.FirstChild("clientId");
    if(!clientIdNode.IsNull())
    {
      m_clientId = Aws::Utils::Xml::DecodeEscapedXmlText(clientIdNode.GetText());
      m_clientIdHasBeenSet = true;
    }
    XmlNode clientSecretNode = resultNode.FirstChild("clientSecret");
    if(!clientSecretNode.IsNull())
    {
      m_clientSecret = Aws::Utils::Xml::DecodeEscapedXmlText(clientSecretNode.GetText());
      m_clientSecretHasBeenSet = true;
    }
    XmlNode scopeNode = resultNode.FirstChild("scope");
    if(!scopeNode.IsNull())
    {
      m_scope = Aws::Utils::Xml::DecodeEscapedXmlText(scopeNode.GetText());
      m_scopeHasBeenSet = true;
    }
  }

  return *this;
}

void OidcOptions::OutputToStream(Aws::OStream& oStream, const char* location, unsigned index, const char* locationValue) const
{
  if(m_issuerHasBeenSet)
  {
      oStream << location << index << locationValue << ".Issuer=" << StringUtils::URLEncode(m_issuer.c_str()) << "&";
  }

  if(m_authorizationEndpointHasBeenSet)
  {
      oStream << location << index << locationValue << ".AuthorizationEndpoint=" << StringUtils::URLEncode(m_authorizationEndpoint.c_str()) << "&";
  }

  if(m_tokenEndpointHasBeenSet)
  {
      oStream << location << index << locationValue << ".TokenEndpoint=" << StringUtils::URLEncode(m_tokenEndpoint.c_str()) << "&";
  }

  if(m_userInfoEndpointHasBeenSet)
  {
      oStream << location << index << locationValue << ".UserInfoEndpoint=" << StringUtils::URLEncode(m_userInfoEndpoint.c_str()) << "&";
  }

  if(m_clientIdHasBeenSet)
  {
      oStream << location << index << locationValue << ".ClientId=" << StringUtils::URLEncode(m_clientId.c_str()) << "&";
  }

  if(m_clientSecretHasBeenSet)
  {
      oStream << location << index << locationValue << ".ClientSecret=" << StringUtils::URLEncode(m_clientSecret.c_str()) << "&";
  }

  if(m_scopeHasBeenSet)
  {
      oStream << location << index << locationValue << ".Scope=" << StringUtils::URLEncode(m_scope.c_str()) << "&";
  }

}

void OidcOptions::OutputToStream(Aws::OStream& oStream, const char* location) const
{
  if(m_issuerHasBeenSet)
  {
      oStream << location << ".Issuer=" << StringUtils::URLEncode(m_issuer.c_str()) << "&";
  }
  if(m_authorizationEndpointHasBeenSet)
  {
      oStream << location << ".AuthorizationEndpoint=" << StringUtils::URLEncode(m_authorizationEndpoint.c_str()) << "&";
  }
  if(m_tokenEndpointHasBeenSet)
  {
      oStream << location << ".TokenEndpoint=" << StringUtils::URLEncode(m_tokenEndpoint.c_str()) << "&";
  }
  if(m_userInfoEndpointHasBeenSet)
  {
      oStream << location << ".UserInfoEndpoint=" << StringUtils::URLEncode(m_userInfoEndpoint.c_str()) << "&";
  }
  if(m_clientIdHasBeenSet)
  {
      oStream << location << ".ClientId=" << StringUtils::URLEncode(m_clientId.c_str()) << "&";
  }
  if(m_clientSecretHasBeenSet)
  {
      oStream << location << ".ClientSecret=" << StringUtils::URLEncode(m_clientSecret.c_str()) << "&";
  }
  if(m_scopeHasBeenSet)
  {
      oStream << location << ".Scope=" << StringUtils::URLEncode(m_scope.c_str()) << "&";
  }
}

} // namespace Model
} // namespace EC2
} // namespace Aws
