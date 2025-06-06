﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/mgn/model/UpdateReplicationConfigurationRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::mgn::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

Aws::String UpdateReplicationConfigurationRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_accountIDHasBeenSet)
  {
   payload.WithString("accountID", m_accountID);

  }

  if(m_associateDefaultSecurityGroupHasBeenSet)
  {
   payload.WithBool("associateDefaultSecurityGroup", m_associateDefaultSecurityGroup);

  }

  if(m_bandwidthThrottlingHasBeenSet)
  {
   payload.WithInt64("bandwidthThrottling", m_bandwidthThrottling);

  }

  if(m_createPublicIPHasBeenSet)
  {
   payload.WithBool("createPublicIP", m_createPublicIP);

  }

  if(m_dataPlaneRoutingHasBeenSet)
  {
   payload.WithString("dataPlaneRouting", ReplicationConfigurationDataPlaneRoutingMapper::GetNameForReplicationConfigurationDataPlaneRouting(m_dataPlaneRouting));
  }

  if(m_defaultLargeStagingDiskTypeHasBeenSet)
  {
   payload.WithString("defaultLargeStagingDiskType", ReplicationConfigurationDefaultLargeStagingDiskTypeMapper::GetNameForReplicationConfigurationDefaultLargeStagingDiskType(m_defaultLargeStagingDiskType));
  }

  if(m_ebsEncryptionHasBeenSet)
  {
   payload.WithString("ebsEncryption", ReplicationConfigurationEbsEncryptionMapper::GetNameForReplicationConfigurationEbsEncryption(m_ebsEncryption));
  }

  if(m_ebsEncryptionKeyArnHasBeenSet)
  {
   payload.WithString("ebsEncryptionKeyArn", m_ebsEncryptionKeyArn);

  }

  if(m_nameHasBeenSet)
  {
   payload.WithString("name", m_name);

  }

  if(m_replicatedDisksHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> replicatedDisksJsonList(m_replicatedDisks.size());
   for(unsigned replicatedDisksIndex = 0; replicatedDisksIndex < replicatedDisksJsonList.GetLength(); ++replicatedDisksIndex)
   {
     replicatedDisksJsonList[replicatedDisksIndex].AsObject(m_replicatedDisks[replicatedDisksIndex].Jsonize());
   }
   payload.WithArray("replicatedDisks", std::move(replicatedDisksJsonList));

  }

  if(m_replicationServerInstanceTypeHasBeenSet)
  {
   payload.WithString("replicationServerInstanceType", m_replicationServerInstanceType);

  }

  if(m_replicationServersSecurityGroupsIDsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> replicationServersSecurityGroupsIDsJsonList(m_replicationServersSecurityGroupsIDs.size());
   for(unsigned replicationServersSecurityGroupsIDsIndex = 0; replicationServersSecurityGroupsIDsIndex < replicationServersSecurityGroupsIDsJsonList.GetLength(); ++replicationServersSecurityGroupsIDsIndex)
   {
     replicationServersSecurityGroupsIDsJsonList[replicationServersSecurityGroupsIDsIndex].AsString(m_replicationServersSecurityGroupsIDs[replicationServersSecurityGroupsIDsIndex]);
   }
   payload.WithArray("replicationServersSecurityGroupsIDs", std::move(replicationServersSecurityGroupsIDsJsonList));

  }

  if(m_sourceServerIDHasBeenSet)
  {
   payload.WithString("sourceServerID", m_sourceServerID);

  }

  if(m_stagingAreaSubnetIdHasBeenSet)
  {
   payload.WithString("stagingAreaSubnetId", m_stagingAreaSubnetId);

  }

  if(m_stagingAreaTagsHasBeenSet)
  {
   JsonValue stagingAreaTagsJsonMap;
   for(auto& stagingAreaTagsItem : m_stagingAreaTags)
   {
     stagingAreaTagsJsonMap.WithString(stagingAreaTagsItem.first, stagingAreaTagsItem.second);
   }
   payload.WithObject("stagingAreaTags", std::move(stagingAreaTagsJsonMap));

  }

  if(m_useDedicatedReplicationServerHasBeenSet)
  {
   payload.WithBool("useDedicatedReplicationServer", m_useDedicatedReplicationServer);

  }

  if(m_useFipsEndpointHasBeenSet)
  {
   payload.WithBool("useFipsEndpoint", m_useFipsEndpoint);

  }

  return payload.View().WriteReadable();
}




