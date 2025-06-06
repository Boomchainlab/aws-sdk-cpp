﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/elasticache/model/LogDeliveryConfiguration.h>
#include <aws/core/utils/xml/XmlSerializer.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::Utils::Xml;
using namespace Aws::Utils;

namespace Aws
{
namespace ElastiCache
{
namespace Model
{

LogDeliveryConfiguration::LogDeliveryConfiguration(const XmlNode& xmlNode)
{
  *this = xmlNode;
}

LogDeliveryConfiguration& LogDeliveryConfiguration::operator =(const XmlNode& xmlNode)
{
  XmlNode resultNode = xmlNode;

  if(!resultNode.IsNull())
  {
    XmlNode logTypeNode = resultNode.FirstChild("LogType");
    if(!logTypeNode.IsNull())
    {
      m_logType = LogTypeMapper::GetLogTypeForName(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(logTypeNode.GetText()).c_str()));
      m_logTypeHasBeenSet = true;
    }
    XmlNode destinationTypeNode = resultNode.FirstChild("DestinationType");
    if(!destinationTypeNode.IsNull())
    {
      m_destinationType = DestinationTypeMapper::GetDestinationTypeForName(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(destinationTypeNode.GetText()).c_str()));
      m_destinationTypeHasBeenSet = true;
    }
    XmlNode destinationDetailsNode = resultNode.FirstChild("DestinationDetails");
    if(!destinationDetailsNode.IsNull())
    {
      m_destinationDetails = destinationDetailsNode;
      m_destinationDetailsHasBeenSet = true;
    }
    XmlNode logFormatNode = resultNode.FirstChild("LogFormat");
    if(!logFormatNode.IsNull())
    {
      m_logFormat = LogFormatMapper::GetLogFormatForName(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(logFormatNode.GetText()).c_str()));
      m_logFormatHasBeenSet = true;
    }
    XmlNode statusNode = resultNode.FirstChild("Status");
    if(!statusNode.IsNull())
    {
      m_status = LogDeliveryConfigurationStatusMapper::GetLogDeliveryConfigurationStatusForName(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(statusNode.GetText()).c_str()));
      m_statusHasBeenSet = true;
    }
    XmlNode messageNode = resultNode.FirstChild("Message");
    if(!messageNode.IsNull())
    {
      m_message = Aws::Utils::Xml::DecodeEscapedXmlText(messageNode.GetText());
      m_messageHasBeenSet = true;
    }
  }

  return *this;
}

void LogDeliveryConfiguration::OutputToStream(Aws::OStream& oStream, const char* location, unsigned index, const char* locationValue) const
{
  if(m_logTypeHasBeenSet)
  {
      oStream << location << index << locationValue << ".LogType=" << StringUtils::URLEncode(LogTypeMapper::GetNameForLogType(m_logType)) << "&";
  }

  if(m_destinationTypeHasBeenSet)
  {
      oStream << location << index << locationValue << ".DestinationType=" << StringUtils::URLEncode(DestinationTypeMapper::GetNameForDestinationType(m_destinationType)) << "&";
  }

  if(m_destinationDetailsHasBeenSet)
  {
      Aws::StringStream destinationDetailsLocationAndMemberSs;
      destinationDetailsLocationAndMemberSs << location << index << locationValue << ".DestinationDetails";
      m_destinationDetails.OutputToStream(oStream, destinationDetailsLocationAndMemberSs.str().c_str());
  }

  if(m_logFormatHasBeenSet)
  {
      oStream << location << index << locationValue << ".LogFormat=" << StringUtils::URLEncode(LogFormatMapper::GetNameForLogFormat(m_logFormat)) << "&";
  }

  if(m_statusHasBeenSet)
  {
      oStream << location << index << locationValue << ".Status=" << StringUtils::URLEncode(LogDeliveryConfigurationStatusMapper::GetNameForLogDeliveryConfigurationStatus(m_status)) << "&";
  }

  if(m_messageHasBeenSet)
  {
      oStream << location << index << locationValue << ".Message=" << StringUtils::URLEncode(m_message.c_str()) << "&";
  }

}

void LogDeliveryConfiguration::OutputToStream(Aws::OStream& oStream, const char* location) const
{
  if(m_logTypeHasBeenSet)
  {
      oStream << location << ".LogType=" << StringUtils::URLEncode(LogTypeMapper::GetNameForLogType(m_logType)) << "&";
  }
  if(m_destinationTypeHasBeenSet)
  {
      oStream << location << ".DestinationType=" << StringUtils::URLEncode(DestinationTypeMapper::GetNameForDestinationType(m_destinationType)) << "&";
  }
  if(m_destinationDetailsHasBeenSet)
  {
      Aws::String destinationDetailsLocationAndMember(location);
      destinationDetailsLocationAndMember += ".DestinationDetails";
      m_destinationDetails.OutputToStream(oStream, destinationDetailsLocationAndMember.c_str());
  }
  if(m_logFormatHasBeenSet)
  {
      oStream << location << ".LogFormat=" << StringUtils::URLEncode(LogFormatMapper::GetNameForLogFormat(m_logFormat)) << "&";
  }
  if(m_statusHasBeenSet)
  {
      oStream << location << ".Status=" << StringUtils::URLEncode(LogDeliveryConfigurationStatusMapper::GetNameForLogDeliveryConfigurationStatus(m_status)) << "&";
  }
  if(m_messageHasBeenSet)
  {
      oStream << location << ".Message=" << StringUtils::URLEncode(m_message.c_str()) << "&";
  }
}

} // namespace Model
} // namespace ElastiCache
} // namespace Aws
