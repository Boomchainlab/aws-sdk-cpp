﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ec2/model/InstanceRequirementsRequest.h>
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

InstanceRequirementsRequest::InstanceRequirementsRequest(const XmlNode& xmlNode)
{
  *this = xmlNode;
}

InstanceRequirementsRequest& InstanceRequirementsRequest::operator =(const XmlNode& xmlNode)
{
  XmlNode resultNode = xmlNode;

  if(!resultNode.IsNull())
  {
    XmlNode vCpuCountNode = resultNode.FirstChild("VCpuCount");
    if(!vCpuCountNode.IsNull())
    {
      m_vCpuCount = vCpuCountNode;
      m_vCpuCountHasBeenSet = true;
    }
    XmlNode memoryMiBNode = resultNode.FirstChild("MemoryMiB");
    if(!memoryMiBNode.IsNull())
    {
      m_memoryMiB = memoryMiBNode;
      m_memoryMiBHasBeenSet = true;
    }
    XmlNode cpuManufacturersNode = resultNode.FirstChild("CpuManufacturer");
    if(!cpuManufacturersNode.IsNull())
    {
      XmlNode cpuManufacturersMember = cpuManufacturersNode.FirstChild("item");
      m_cpuManufacturersHasBeenSet = !cpuManufacturersMember.IsNull();
      while(!cpuManufacturersMember.IsNull())
      {
        m_cpuManufacturers.push_back(CpuManufacturerMapper::GetCpuManufacturerForName(StringUtils::Trim(cpuManufacturersMember.GetText().c_str())));
        cpuManufacturersMember = cpuManufacturersMember.NextNode("item");
      }

      m_cpuManufacturersHasBeenSet = true;
    }
    XmlNode memoryGiBPerVCpuNode = resultNode.FirstChild("MemoryGiBPerVCpu");
    if(!memoryGiBPerVCpuNode.IsNull())
    {
      m_memoryGiBPerVCpu = memoryGiBPerVCpuNode;
      m_memoryGiBPerVCpuHasBeenSet = true;
    }
    XmlNode excludedInstanceTypesNode = resultNode.FirstChild("ExcludedInstanceType");
    if(!excludedInstanceTypesNode.IsNull())
    {
      XmlNode excludedInstanceTypesMember = excludedInstanceTypesNode.FirstChild("item");
      m_excludedInstanceTypesHasBeenSet = !excludedInstanceTypesMember.IsNull();
      while(!excludedInstanceTypesMember.IsNull())
      {
        m_excludedInstanceTypes.push_back(excludedInstanceTypesMember.GetText());
        excludedInstanceTypesMember = excludedInstanceTypesMember.NextNode("item");
      }

      m_excludedInstanceTypesHasBeenSet = true;
    }
    XmlNode instanceGenerationsNode = resultNode.FirstChild("InstanceGeneration");
    if(!instanceGenerationsNode.IsNull())
    {
      XmlNode instanceGenerationsMember = instanceGenerationsNode.FirstChild("item");
      m_instanceGenerationsHasBeenSet = !instanceGenerationsMember.IsNull();
      while(!instanceGenerationsMember.IsNull())
      {
        m_instanceGenerations.push_back(InstanceGenerationMapper::GetInstanceGenerationForName(StringUtils::Trim(instanceGenerationsMember.GetText().c_str())));
        instanceGenerationsMember = instanceGenerationsMember.NextNode("item");
      }

      m_instanceGenerationsHasBeenSet = true;
    }
    XmlNode spotMaxPricePercentageOverLowestPriceNode = resultNode.FirstChild("SpotMaxPricePercentageOverLowestPrice");
    if(!spotMaxPricePercentageOverLowestPriceNode.IsNull())
    {
      m_spotMaxPricePercentageOverLowestPrice = StringUtils::ConvertToInt32(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(spotMaxPricePercentageOverLowestPriceNode.GetText()).c_str()).c_str());
      m_spotMaxPricePercentageOverLowestPriceHasBeenSet = true;
    }
    XmlNode onDemandMaxPricePercentageOverLowestPriceNode = resultNode.FirstChild("OnDemandMaxPricePercentageOverLowestPrice");
    if(!onDemandMaxPricePercentageOverLowestPriceNode.IsNull())
    {
      m_onDemandMaxPricePercentageOverLowestPrice = StringUtils::ConvertToInt32(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(onDemandMaxPricePercentageOverLowestPriceNode.GetText()).c_str()).c_str());
      m_onDemandMaxPricePercentageOverLowestPriceHasBeenSet = true;
    }
    XmlNode bareMetalNode = resultNode.FirstChild("BareMetal");
    if(!bareMetalNode.IsNull())
    {
      m_bareMetal = BareMetalMapper::GetBareMetalForName(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(bareMetalNode.GetText()).c_str()));
      m_bareMetalHasBeenSet = true;
    }
    XmlNode burstablePerformanceNode = resultNode.FirstChild("BurstablePerformance");
    if(!burstablePerformanceNode.IsNull())
    {
      m_burstablePerformance = BurstablePerformanceMapper::GetBurstablePerformanceForName(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(burstablePerformanceNode.GetText()).c_str()));
      m_burstablePerformanceHasBeenSet = true;
    }
    XmlNode requireHibernateSupportNode = resultNode.FirstChild("RequireHibernateSupport");
    if(!requireHibernateSupportNode.IsNull())
    {
      m_requireHibernateSupport = StringUtils::ConvertToBool(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(requireHibernateSupportNode.GetText()).c_str()).c_str());
      m_requireHibernateSupportHasBeenSet = true;
    }
    XmlNode networkInterfaceCountNode = resultNode.FirstChild("NetworkInterfaceCount");
    if(!networkInterfaceCountNode.IsNull())
    {
      m_networkInterfaceCount = networkInterfaceCountNode;
      m_networkInterfaceCountHasBeenSet = true;
    }
    XmlNode localStorageNode = resultNode.FirstChild("LocalStorage");
    if(!localStorageNode.IsNull())
    {
      m_localStorage = LocalStorageMapper::GetLocalStorageForName(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(localStorageNode.GetText()).c_str()));
      m_localStorageHasBeenSet = true;
    }
    XmlNode localStorageTypesNode = resultNode.FirstChild("LocalStorageType");
    if(!localStorageTypesNode.IsNull())
    {
      XmlNode localStorageTypesMember = localStorageTypesNode.FirstChild("item");
      m_localStorageTypesHasBeenSet = !localStorageTypesMember.IsNull();
      while(!localStorageTypesMember.IsNull())
      {
        m_localStorageTypes.push_back(LocalStorageTypeMapper::GetLocalStorageTypeForName(StringUtils::Trim(localStorageTypesMember.GetText().c_str())));
        localStorageTypesMember = localStorageTypesMember.NextNode("item");
      }

      m_localStorageTypesHasBeenSet = true;
    }
    XmlNode totalLocalStorageGBNode = resultNode.FirstChild("TotalLocalStorageGB");
    if(!totalLocalStorageGBNode.IsNull())
    {
      m_totalLocalStorageGB = totalLocalStorageGBNode;
      m_totalLocalStorageGBHasBeenSet = true;
    }
    XmlNode baselineEbsBandwidthMbpsNode = resultNode.FirstChild("BaselineEbsBandwidthMbps");
    if(!baselineEbsBandwidthMbpsNode.IsNull())
    {
      m_baselineEbsBandwidthMbps = baselineEbsBandwidthMbpsNode;
      m_baselineEbsBandwidthMbpsHasBeenSet = true;
    }
    XmlNode acceleratorTypesNode = resultNode.FirstChild("AcceleratorType");
    if(!acceleratorTypesNode.IsNull())
    {
      XmlNode acceleratorTypesMember = acceleratorTypesNode.FirstChild("item");
      m_acceleratorTypesHasBeenSet = !acceleratorTypesMember.IsNull();
      while(!acceleratorTypesMember.IsNull())
      {
        m_acceleratorTypes.push_back(AcceleratorTypeMapper::GetAcceleratorTypeForName(StringUtils::Trim(acceleratorTypesMember.GetText().c_str())));
        acceleratorTypesMember = acceleratorTypesMember.NextNode("item");
      }

      m_acceleratorTypesHasBeenSet = true;
    }
    XmlNode acceleratorCountNode = resultNode.FirstChild("AcceleratorCount");
    if(!acceleratorCountNode.IsNull())
    {
      m_acceleratorCount = acceleratorCountNode;
      m_acceleratorCountHasBeenSet = true;
    }
    XmlNode acceleratorManufacturersNode = resultNode.FirstChild("AcceleratorManufacturer");
    if(!acceleratorManufacturersNode.IsNull())
    {
      XmlNode acceleratorManufacturersMember = acceleratorManufacturersNode.FirstChild("item");
      m_acceleratorManufacturersHasBeenSet = !acceleratorManufacturersMember.IsNull();
      while(!acceleratorManufacturersMember.IsNull())
      {
        m_acceleratorManufacturers.push_back(AcceleratorManufacturerMapper::GetAcceleratorManufacturerForName(StringUtils::Trim(acceleratorManufacturersMember.GetText().c_str())));
        acceleratorManufacturersMember = acceleratorManufacturersMember.NextNode("item");
      }

      m_acceleratorManufacturersHasBeenSet = true;
    }
    XmlNode acceleratorNamesNode = resultNode.FirstChild("AcceleratorName");
    if(!acceleratorNamesNode.IsNull())
    {
      XmlNode acceleratorNamesMember = acceleratorNamesNode.FirstChild("item");
      m_acceleratorNamesHasBeenSet = !acceleratorNamesMember.IsNull();
      while(!acceleratorNamesMember.IsNull())
      {
        m_acceleratorNames.push_back(AcceleratorNameMapper::GetAcceleratorNameForName(StringUtils::Trim(acceleratorNamesMember.GetText().c_str())));
        acceleratorNamesMember = acceleratorNamesMember.NextNode("item");
      }

      m_acceleratorNamesHasBeenSet = true;
    }
    XmlNode acceleratorTotalMemoryMiBNode = resultNode.FirstChild("AcceleratorTotalMemoryMiB");
    if(!acceleratorTotalMemoryMiBNode.IsNull())
    {
      m_acceleratorTotalMemoryMiB = acceleratorTotalMemoryMiBNode;
      m_acceleratorTotalMemoryMiBHasBeenSet = true;
    }
    XmlNode networkBandwidthGbpsNode = resultNode.FirstChild("NetworkBandwidthGbps");
    if(!networkBandwidthGbpsNode.IsNull())
    {
      m_networkBandwidthGbps = networkBandwidthGbpsNode;
      m_networkBandwidthGbpsHasBeenSet = true;
    }
    XmlNode allowedInstanceTypesNode = resultNode.FirstChild("AllowedInstanceType");
    if(!allowedInstanceTypesNode.IsNull())
    {
      XmlNode allowedInstanceTypesMember = allowedInstanceTypesNode.FirstChild("item");
      m_allowedInstanceTypesHasBeenSet = !allowedInstanceTypesMember.IsNull();
      while(!allowedInstanceTypesMember.IsNull())
      {
        m_allowedInstanceTypes.push_back(allowedInstanceTypesMember.GetText());
        allowedInstanceTypesMember = allowedInstanceTypesMember.NextNode("item");
      }

      m_allowedInstanceTypesHasBeenSet = true;
    }
    XmlNode maxSpotPriceAsPercentageOfOptimalOnDemandPriceNode = resultNode.FirstChild("MaxSpotPriceAsPercentageOfOptimalOnDemandPrice");
    if(!maxSpotPriceAsPercentageOfOptimalOnDemandPriceNode.IsNull())
    {
      m_maxSpotPriceAsPercentageOfOptimalOnDemandPrice = StringUtils::ConvertToInt32(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(maxSpotPriceAsPercentageOfOptimalOnDemandPriceNode.GetText()).c_str()).c_str());
      m_maxSpotPriceAsPercentageOfOptimalOnDemandPriceHasBeenSet = true;
    }
    XmlNode baselinePerformanceFactorsNode = resultNode.FirstChild("BaselinePerformanceFactors");
    if(!baselinePerformanceFactorsNode.IsNull())
    {
      m_baselinePerformanceFactors = baselinePerformanceFactorsNode;
      m_baselinePerformanceFactorsHasBeenSet = true;
    }
  }

  return *this;
}

void InstanceRequirementsRequest::OutputToStream(Aws::OStream& oStream, const char* location, unsigned index, const char* locationValue) const
{
  if(m_vCpuCountHasBeenSet)
  {
      Aws::StringStream vCpuCountLocationAndMemberSs;
      vCpuCountLocationAndMemberSs << location << index << locationValue << ".VCpuCount";
      m_vCpuCount.OutputToStream(oStream, vCpuCountLocationAndMemberSs.str().c_str());
  }

  if(m_memoryMiBHasBeenSet)
  {
      Aws::StringStream memoryMiBLocationAndMemberSs;
      memoryMiBLocationAndMemberSs << location << index << locationValue << ".MemoryMiB";
      m_memoryMiB.OutputToStream(oStream, memoryMiBLocationAndMemberSs.str().c_str());
  }

  if(m_cpuManufacturersHasBeenSet)
  {
      unsigned cpuManufacturersIdx = 1;
      for(auto& item : m_cpuManufacturers)
      {
        oStream << location << index << locationValue << ".CpuManufacturer." << cpuManufacturersIdx++ << "=" << StringUtils::URLEncode(CpuManufacturerMapper::GetNameForCpuManufacturer(item)) << "&";
      }
  }

  if(m_memoryGiBPerVCpuHasBeenSet)
  {
      Aws::StringStream memoryGiBPerVCpuLocationAndMemberSs;
      memoryGiBPerVCpuLocationAndMemberSs << location << index << locationValue << ".MemoryGiBPerVCpu";
      m_memoryGiBPerVCpu.OutputToStream(oStream, memoryGiBPerVCpuLocationAndMemberSs.str().c_str());
  }

  if(m_excludedInstanceTypesHasBeenSet)
  {
      unsigned excludedInstanceTypesIdx = 1;
      for(auto& item : m_excludedInstanceTypes)
      {
        oStream << location << index << locationValue << ".ExcludedInstanceType." << excludedInstanceTypesIdx++ << "=" << StringUtils::URLEncode(item.c_str()) << "&";
      }
  }

  if(m_instanceGenerationsHasBeenSet)
  {
      unsigned instanceGenerationsIdx = 1;
      for(auto& item : m_instanceGenerations)
      {
        oStream << location << index << locationValue << ".InstanceGeneration." << instanceGenerationsIdx++ << "=" << StringUtils::URLEncode(InstanceGenerationMapper::GetNameForInstanceGeneration(item)) << "&";
      }
  }

  if(m_spotMaxPricePercentageOverLowestPriceHasBeenSet)
  {
      oStream << location << index << locationValue << ".SpotMaxPricePercentageOverLowestPrice=" << m_spotMaxPricePercentageOverLowestPrice << "&";
  }

  if(m_onDemandMaxPricePercentageOverLowestPriceHasBeenSet)
  {
      oStream << location << index << locationValue << ".OnDemandMaxPricePercentageOverLowestPrice=" << m_onDemandMaxPricePercentageOverLowestPrice << "&";
  }

  if(m_bareMetalHasBeenSet)
  {
      oStream << location << index << locationValue << ".BareMetal=" << StringUtils::URLEncode(BareMetalMapper::GetNameForBareMetal(m_bareMetal)) << "&";
  }

  if(m_burstablePerformanceHasBeenSet)
  {
      oStream << location << index << locationValue << ".BurstablePerformance=" << StringUtils::URLEncode(BurstablePerformanceMapper::GetNameForBurstablePerformance(m_burstablePerformance)) << "&";
  }

  if(m_requireHibernateSupportHasBeenSet)
  {
      oStream << location << index << locationValue << ".RequireHibernateSupport=" << std::boolalpha << m_requireHibernateSupport << "&";
  }

  if(m_networkInterfaceCountHasBeenSet)
  {
      Aws::StringStream networkInterfaceCountLocationAndMemberSs;
      networkInterfaceCountLocationAndMemberSs << location << index << locationValue << ".NetworkInterfaceCount";
      m_networkInterfaceCount.OutputToStream(oStream, networkInterfaceCountLocationAndMemberSs.str().c_str());
  }

  if(m_localStorageHasBeenSet)
  {
      oStream << location << index << locationValue << ".LocalStorage=" << StringUtils::URLEncode(LocalStorageMapper::GetNameForLocalStorage(m_localStorage)) << "&";
  }

  if(m_localStorageTypesHasBeenSet)
  {
      unsigned localStorageTypesIdx = 1;
      for(auto& item : m_localStorageTypes)
      {
        oStream << location << index << locationValue << ".LocalStorageType." << localStorageTypesIdx++ << "=" << StringUtils::URLEncode(LocalStorageTypeMapper::GetNameForLocalStorageType(item)) << "&";
      }
  }

  if(m_totalLocalStorageGBHasBeenSet)
  {
      Aws::StringStream totalLocalStorageGBLocationAndMemberSs;
      totalLocalStorageGBLocationAndMemberSs << location << index << locationValue << ".TotalLocalStorageGB";
      m_totalLocalStorageGB.OutputToStream(oStream, totalLocalStorageGBLocationAndMemberSs.str().c_str());
  }

  if(m_baselineEbsBandwidthMbpsHasBeenSet)
  {
      Aws::StringStream baselineEbsBandwidthMbpsLocationAndMemberSs;
      baselineEbsBandwidthMbpsLocationAndMemberSs << location << index << locationValue << ".BaselineEbsBandwidthMbps";
      m_baselineEbsBandwidthMbps.OutputToStream(oStream, baselineEbsBandwidthMbpsLocationAndMemberSs.str().c_str());
  }

  if(m_acceleratorTypesHasBeenSet)
  {
      unsigned acceleratorTypesIdx = 1;
      for(auto& item : m_acceleratorTypes)
      {
        oStream << location << index << locationValue << ".AcceleratorType." << acceleratorTypesIdx++ << "=" << StringUtils::URLEncode(AcceleratorTypeMapper::GetNameForAcceleratorType(item)) << "&";
      }
  }

  if(m_acceleratorCountHasBeenSet)
  {
      Aws::StringStream acceleratorCountLocationAndMemberSs;
      acceleratorCountLocationAndMemberSs << location << index << locationValue << ".AcceleratorCount";
      m_acceleratorCount.OutputToStream(oStream, acceleratorCountLocationAndMemberSs.str().c_str());
  }

  if(m_acceleratorManufacturersHasBeenSet)
  {
      unsigned acceleratorManufacturersIdx = 1;
      for(auto& item : m_acceleratorManufacturers)
      {
        oStream << location << index << locationValue << ".AcceleratorManufacturer." << acceleratorManufacturersIdx++ << "=" << StringUtils::URLEncode(AcceleratorManufacturerMapper::GetNameForAcceleratorManufacturer(item)) << "&";
      }
  }

  if(m_acceleratorNamesHasBeenSet)
  {
      unsigned acceleratorNamesIdx = 1;
      for(auto& item : m_acceleratorNames)
      {
        oStream << location << index << locationValue << ".AcceleratorName." << acceleratorNamesIdx++ << "=" << StringUtils::URLEncode(AcceleratorNameMapper::GetNameForAcceleratorName(item)) << "&";
      }
  }

  if(m_acceleratorTotalMemoryMiBHasBeenSet)
  {
      Aws::StringStream acceleratorTotalMemoryMiBLocationAndMemberSs;
      acceleratorTotalMemoryMiBLocationAndMemberSs << location << index << locationValue << ".AcceleratorTotalMemoryMiB";
      m_acceleratorTotalMemoryMiB.OutputToStream(oStream, acceleratorTotalMemoryMiBLocationAndMemberSs.str().c_str());
  }

  if(m_networkBandwidthGbpsHasBeenSet)
  {
      Aws::StringStream networkBandwidthGbpsLocationAndMemberSs;
      networkBandwidthGbpsLocationAndMemberSs << location << index << locationValue << ".NetworkBandwidthGbps";
      m_networkBandwidthGbps.OutputToStream(oStream, networkBandwidthGbpsLocationAndMemberSs.str().c_str());
  }

  if(m_allowedInstanceTypesHasBeenSet)
  {
      unsigned allowedInstanceTypesIdx = 1;
      for(auto& item : m_allowedInstanceTypes)
      {
        oStream << location << index << locationValue << ".AllowedInstanceType." << allowedInstanceTypesIdx++ << "=" << StringUtils::URLEncode(item.c_str()) << "&";
      }
  }

  if(m_maxSpotPriceAsPercentageOfOptimalOnDemandPriceHasBeenSet)
  {
      oStream << location << index << locationValue << ".MaxSpotPriceAsPercentageOfOptimalOnDemandPrice=" << m_maxSpotPriceAsPercentageOfOptimalOnDemandPrice << "&";
  }

  if(m_baselinePerformanceFactorsHasBeenSet)
  {
      Aws::StringStream baselinePerformanceFactorsLocationAndMemberSs;
      baselinePerformanceFactorsLocationAndMemberSs << location << index << locationValue << ".BaselinePerformanceFactors";
      m_baselinePerformanceFactors.OutputToStream(oStream, baselinePerformanceFactorsLocationAndMemberSs.str().c_str());
  }

}

void InstanceRequirementsRequest::OutputToStream(Aws::OStream& oStream, const char* location) const
{
  if(m_vCpuCountHasBeenSet)
  {
      Aws::String vCpuCountLocationAndMember(location);
      vCpuCountLocationAndMember += ".VCpuCount";
      m_vCpuCount.OutputToStream(oStream, vCpuCountLocationAndMember.c_str());
  }
  if(m_memoryMiBHasBeenSet)
  {
      Aws::String memoryMiBLocationAndMember(location);
      memoryMiBLocationAndMember += ".MemoryMiB";
      m_memoryMiB.OutputToStream(oStream, memoryMiBLocationAndMember.c_str());
  }
  if(m_cpuManufacturersHasBeenSet)
  {
      unsigned cpuManufacturersIdx = 1;
      for(auto& item : m_cpuManufacturers)
      {
        oStream << location << ".CpuManufacturer." << cpuManufacturersIdx++ << "=" << StringUtils::URLEncode(CpuManufacturerMapper::GetNameForCpuManufacturer(item)) << "&";
      }
  }
  if(m_memoryGiBPerVCpuHasBeenSet)
  {
      Aws::String memoryGiBPerVCpuLocationAndMember(location);
      memoryGiBPerVCpuLocationAndMember += ".MemoryGiBPerVCpu";
      m_memoryGiBPerVCpu.OutputToStream(oStream, memoryGiBPerVCpuLocationAndMember.c_str());
  }
  if(m_excludedInstanceTypesHasBeenSet)
  {
      unsigned excludedInstanceTypesIdx = 1;
      for(auto& item : m_excludedInstanceTypes)
      {
        oStream << location << ".ExcludedInstanceType." << excludedInstanceTypesIdx++ << "=" << StringUtils::URLEncode(item.c_str()) << "&";
      }
  }
  if(m_instanceGenerationsHasBeenSet)
  {
      unsigned instanceGenerationsIdx = 1;
      for(auto& item : m_instanceGenerations)
      {
        oStream << location << ".InstanceGeneration." << instanceGenerationsIdx++ << "=" << StringUtils::URLEncode(InstanceGenerationMapper::GetNameForInstanceGeneration(item)) << "&";
      }
  }
  if(m_spotMaxPricePercentageOverLowestPriceHasBeenSet)
  {
      oStream << location << ".SpotMaxPricePercentageOverLowestPrice=" << m_spotMaxPricePercentageOverLowestPrice << "&";
  }
  if(m_onDemandMaxPricePercentageOverLowestPriceHasBeenSet)
  {
      oStream << location << ".OnDemandMaxPricePercentageOverLowestPrice=" << m_onDemandMaxPricePercentageOverLowestPrice << "&";
  }
  if(m_bareMetalHasBeenSet)
  {
      oStream << location << ".BareMetal=" << StringUtils::URLEncode(BareMetalMapper::GetNameForBareMetal(m_bareMetal)) << "&";
  }
  if(m_burstablePerformanceHasBeenSet)
  {
      oStream << location << ".BurstablePerformance=" << StringUtils::URLEncode(BurstablePerformanceMapper::GetNameForBurstablePerformance(m_burstablePerformance)) << "&";
  }
  if(m_requireHibernateSupportHasBeenSet)
  {
      oStream << location << ".RequireHibernateSupport=" << std::boolalpha << m_requireHibernateSupport << "&";
  }
  if(m_networkInterfaceCountHasBeenSet)
  {
      Aws::String networkInterfaceCountLocationAndMember(location);
      networkInterfaceCountLocationAndMember += ".NetworkInterfaceCount";
      m_networkInterfaceCount.OutputToStream(oStream, networkInterfaceCountLocationAndMember.c_str());
  }
  if(m_localStorageHasBeenSet)
  {
      oStream << location << ".LocalStorage=" << StringUtils::URLEncode(LocalStorageMapper::GetNameForLocalStorage(m_localStorage)) << "&";
  }
  if(m_localStorageTypesHasBeenSet)
  {
      unsigned localStorageTypesIdx = 1;
      for(auto& item : m_localStorageTypes)
      {
        oStream << location << ".LocalStorageType." << localStorageTypesIdx++ << "=" << StringUtils::URLEncode(LocalStorageTypeMapper::GetNameForLocalStorageType(item)) << "&";
      }
  }
  if(m_totalLocalStorageGBHasBeenSet)
  {
      Aws::String totalLocalStorageGBLocationAndMember(location);
      totalLocalStorageGBLocationAndMember += ".TotalLocalStorageGB";
      m_totalLocalStorageGB.OutputToStream(oStream, totalLocalStorageGBLocationAndMember.c_str());
  }
  if(m_baselineEbsBandwidthMbpsHasBeenSet)
  {
      Aws::String baselineEbsBandwidthMbpsLocationAndMember(location);
      baselineEbsBandwidthMbpsLocationAndMember += ".BaselineEbsBandwidthMbps";
      m_baselineEbsBandwidthMbps.OutputToStream(oStream, baselineEbsBandwidthMbpsLocationAndMember.c_str());
  }
  if(m_acceleratorTypesHasBeenSet)
  {
      unsigned acceleratorTypesIdx = 1;
      for(auto& item : m_acceleratorTypes)
      {
        oStream << location << ".AcceleratorType." << acceleratorTypesIdx++ << "=" << StringUtils::URLEncode(AcceleratorTypeMapper::GetNameForAcceleratorType(item)) << "&";
      }
  }
  if(m_acceleratorCountHasBeenSet)
  {
      Aws::String acceleratorCountLocationAndMember(location);
      acceleratorCountLocationAndMember += ".AcceleratorCount";
      m_acceleratorCount.OutputToStream(oStream, acceleratorCountLocationAndMember.c_str());
  }
  if(m_acceleratorManufacturersHasBeenSet)
  {
      unsigned acceleratorManufacturersIdx = 1;
      for(auto& item : m_acceleratorManufacturers)
      {
        oStream << location << ".AcceleratorManufacturer." << acceleratorManufacturersIdx++ << "=" << StringUtils::URLEncode(AcceleratorManufacturerMapper::GetNameForAcceleratorManufacturer(item)) << "&";
      }
  }
  if(m_acceleratorNamesHasBeenSet)
  {
      unsigned acceleratorNamesIdx = 1;
      for(auto& item : m_acceleratorNames)
      {
        oStream << location << ".AcceleratorName." << acceleratorNamesIdx++ << "=" << StringUtils::URLEncode(AcceleratorNameMapper::GetNameForAcceleratorName(item)) << "&";
      }
  }
  if(m_acceleratorTotalMemoryMiBHasBeenSet)
  {
      Aws::String acceleratorTotalMemoryMiBLocationAndMember(location);
      acceleratorTotalMemoryMiBLocationAndMember += ".AcceleratorTotalMemoryMiB";
      m_acceleratorTotalMemoryMiB.OutputToStream(oStream, acceleratorTotalMemoryMiBLocationAndMember.c_str());
  }
  if(m_networkBandwidthGbpsHasBeenSet)
  {
      Aws::String networkBandwidthGbpsLocationAndMember(location);
      networkBandwidthGbpsLocationAndMember += ".NetworkBandwidthGbps";
      m_networkBandwidthGbps.OutputToStream(oStream, networkBandwidthGbpsLocationAndMember.c_str());
  }
  if(m_allowedInstanceTypesHasBeenSet)
  {
      unsigned allowedInstanceTypesIdx = 1;
      for(auto& item : m_allowedInstanceTypes)
      {
        oStream << location << ".AllowedInstanceType." << allowedInstanceTypesIdx++ << "=" << StringUtils::URLEncode(item.c_str()) << "&";
      }
  }
  if(m_maxSpotPriceAsPercentageOfOptimalOnDemandPriceHasBeenSet)
  {
      oStream << location << ".MaxSpotPriceAsPercentageOfOptimalOnDemandPrice=" << m_maxSpotPriceAsPercentageOfOptimalOnDemandPrice << "&";
  }
  if(m_baselinePerformanceFactorsHasBeenSet)
  {
      Aws::String baselinePerformanceFactorsLocationAndMember(location);
      baselinePerformanceFactorsLocationAndMember += ".BaselinePerformanceFactors";
      m_baselinePerformanceFactors.OutputToStream(oStream, baselinePerformanceFactorsLocationAndMember.c_str());
  }
}

} // namespace Model
} // namespace EC2
} // namespace Aws
