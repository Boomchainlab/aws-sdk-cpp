/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <gtest/gtest.h>
#include <aws/testing/AwsTestHelpers.h>

#include <aws/elasticbeanstalk/ElasticBeanstalkClient.h>
#include <aws/elasticbeanstalk/ElasticBeanstalkEndpointProvider.h>
#include <aws/elasticbeanstalk/ElasticBeanstalkEndpointRules.h>
#include <aws/elasticbeanstalk/ElasticBeanstalkErrorMarshaller.h>
#include <aws/elasticbeanstalk/ElasticBeanstalkErrors.h>
#include <aws/elasticbeanstalk/ElasticBeanstalkRequest.h>
#include <aws/elasticbeanstalk/ElasticBeanstalkServiceClientModel.h>
#include <aws/elasticbeanstalk/ElasticBeanstalk_EXPORTS.h>
#include <aws/elasticbeanstalk/model/AbortEnvironmentUpdateRequest.h>
#include <aws/elasticbeanstalk/model/ActionHistoryStatus.h>
#include <aws/elasticbeanstalk/model/ActionStatus.h>
#include <aws/elasticbeanstalk/model/ActionType.h>
#include <aws/elasticbeanstalk/model/ApplicationDescription.h>
#include <aws/elasticbeanstalk/model/ApplicationMetrics.h>
#include <aws/elasticbeanstalk/model/ApplicationResourceLifecycleConfig.h>
#include <aws/elasticbeanstalk/model/ApplicationVersionDescription.h>
#include <aws/elasticbeanstalk/model/ApplicationVersionLifecycleConfig.h>
#include <aws/elasticbeanstalk/model/ApplicationVersionStatus.h>
#include <aws/elasticbeanstalk/model/ApplyEnvironmentManagedActionRequest.h>
#include <aws/elasticbeanstalk/model/ApplyEnvironmentManagedActionResult.h>
#include <aws/elasticbeanstalk/model/AssociateEnvironmentOperationsRoleRequest.h>
#include <aws/elasticbeanstalk/model/AutoScalingGroup.h>
#include <aws/elasticbeanstalk/model/BuildConfiguration.h>
#include <aws/elasticbeanstalk/model/Builder.h>
#include <aws/elasticbeanstalk/model/CPUUtilization.h>
#include <aws/elasticbeanstalk/model/CheckDNSAvailabilityRequest.h>
#include <aws/elasticbeanstalk/model/CheckDNSAvailabilityResult.h>
#include <aws/elasticbeanstalk/model/ComposeEnvironmentsRequest.h>
#include <aws/elasticbeanstalk/model/ComposeEnvironmentsResult.h>
#include <aws/elasticbeanstalk/model/ComputeType.h>
#include <aws/elasticbeanstalk/model/ConfigurationDeploymentStatus.h>
#include <aws/elasticbeanstalk/model/ConfigurationOptionDescription.h>
#include <aws/elasticbeanstalk/model/ConfigurationOptionSetting.h>
#include <aws/elasticbeanstalk/model/ConfigurationOptionValueType.h>
#include <aws/elasticbeanstalk/model/ConfigurationSettingsDescription.h>
#include <aws/elasticbeanstalk/model/CreateApplicationRequest.h>
#include <aws/elasticbeanstalk/model/CreateApplicationResult.h>
#include <aws/elasticbeanstalk/model/CreateApplicationVersionRequest.h>
#include <aws/elasticbeanstalk/model/CreateApplicationVersionResult.h>
#include <aws/elasticbeanstalk/model/CreateConfigurationTemplateRequest.h>
#include <aws/elasticbeanstalk/model/CreateConfigurationTemplateResult.h>
#include <aws/elasticbeanstalk/model/CreateEnvironmentRequest.h>
#include <aws/elasticbeanstalk/model/CreateEnvironmentResult.h>
#include <aws/elasticbeanstalk/model/CreatePlatformVersionRequest.h>
#include <aws/elasticbeanstalk/model/CreatePlatformVersionResult.h>
#include <aws/elasticbeanstalk/model/CreateStorageLocationRequest.h>
#include <aws/elasticbeanstalk/model/CreateStorageLocationResult.h>
#include <aws/elasticbeanstalk/model/CustomAmi.h>
#include <aws/elasticbeanstalk/model/DeleteApplicationRequest.h>
#include <aws/elasticbeanstalk/model/DeleteApplicationVersionRequest.h>
#include <aws/elasticbeanstalk/model/DeleteConfigurationTemplateRequest.h>
#include <aws/elasticbeanstalk/model/DeleteEnvironmentConfigurationRequest.h>
#include <aws/elasticbeanstalk/model/DeletePlatformVersionRequest.h>
#include <aws/elasticbeanstalk/model/DeletePlatformVersionResult.h>
#include <aws/elasticbeanstalk/model/Deployment.h>
#include <aws/elasticbeanstalk/model/DescribeAccountAttributesRequest.h>
#include <aws/elasticbeanstalk/model/DescribeAccountAttributesResult.h>
#include <aws/elasticbeanstalk/model/DescribeApplicationVersionsRequest.h>
#include <aws/elasticbeanstalk/model/DescribeApplicationVersionsResult.h>
#include <aws/elasticbeanstalk/model/DescribeApplicationsRequest.h>
#include <aws/elasticbeanstalk/model/DescribeApplicationsResult.h>
#include <aws/elasticbeanstalk/model/DescribeConfigurationOptionsRequest.h>
#include <aws/elasticbeanstalk/model/DescribeConfigurationOptionsResult.h>
#include <aws/elasticbeanstalk/model/DescribeConfigurationSettingsRequest.h>
#include <aws/elasticbeanstalk/model/DescribeConfigurationSettingsResult.h>
#include <aws/elasticbeanstalk/model/DescribeEnvironmentHealthRequest.h>
#include <aws/elasticbeanstalk/model/DescribeEnvironmentHealthResult.h>
#include <aws/elasticbeanstalk/model/DescribeEnvironmentManagedActionHistoryRequest.h>
#include <aws/elasticbeanstalk/model/DescribeEnvironmentManagedActionHistoryResult.h>
#include <aws/elasticbeanstalk/model/DescribeEnvironmentManagedActionsRequest.h>
#include <aws/elasticbeanstalk/model/DescribeEnvironmentManagedActionsResult.h>
#include <aws/elasticbeanstalk/model/DescribeEnvironmentResourcesRequest.h>
#include <aws/elasticbeanstalk/model/DescribeEnvironmentResourcesResult.h>
#include <aws/elasticbeanstalk/model/DescribeEnvironmentsRequest.h>
#include <aws/elasticbeanstalk/model/DescribeEnvironmentsResult.h>
#include <aws/elasticbeanstalk/model/DescribeEventsRequest.h>
#include <aws/elasticbeanstalk/model/DescribeEventsResult.h>
#include <aws/elasticbeanstalk/model/DescribeInstancesHealthRequest.h>
#include <aws/elasticbeanstalk/model/DescribeInstancesHealthResult.h>
#include <aws/elasticbeanstalk/model/DescribePlatformVersionRequest.h>
#include <aws/elasticbeanstalk/model/DescribePlatformVersionResult.h>
#include <aws/elasticbeanstalk/model/DisassociateEnvironmentOperationsRoleRequest.h>
#include <aws/elasticbeanstalk/model/EnvironmentDescription.h>
#include <aws/elasticbeanstalk/model/EnvironmentHealth.h>
#include <aws/elasticbeanstalk/model/EnvironmentHealthAttribute.h>
#include <aws/elasticbeanstalk/model/EnvironmentHealthStatus.h>
#include <aws/elasticbeanstalk/model/EnvironmentInfoDescription.h>
#include <aws/elasticbeanstalk/model/EnvironmentInfoType.h>
#include <aws/elasticbeanstalk/model/EnvironmentLink.h>
#include <aws/elasticbeanstalk/model/EnvironmentResourceDescription.h>
#include <aws/elasticbeanstalk/model/EnvironmentResourcesDescription.h>
#include <aws/elasticbeanstalk/model/EnvironmentStatus.h>
#include <aws/elasticbeanstalk/model/EnvironmentTier.h>
#include <aws/elasticbeanstalk/model/EventDescription.h>
#include <aws/elasticbeanstalk/model/EventSeverity.h>
#include <aws/elasticbeanstalk/model/FailureType.h>
#include <aws/elasticbeanstalk/model/Instance.h>
#include <aws/elasticbeanstalk/model/InstanceHealthSummary.h>
#include <aws/elasticbeanstalk/model/InstancesHealthAttribute.h>
#include <aws/elasticbeanstalk/model/Latency.h>
#include <aws/elasticbeanstalk/model/LaunchConfiguration.h>
#include <aws/elasticbeanstalk/model/LaunchTemplate.h>
#include <aws/elasticbeanstalk/model/ListAvailableSolutionStacksRequest.h>
#include <aws/elasticbeanstalk/model/ListAvailableSolutionStacksResult.h>
#include <aws/elasticbeanstalk/model/ListPlatformBranchesRequest.h>
#include <aws/elasticbeanstalk/model/ListPlatformBranchesResult.h>
#include <aws/elasticbeanstalk/model/ListPlatformVersionsRequest.h>
#include <aws/elasticbeanstalk/model/ListPlatformVersionsResult.h>
#include <aws/elasticbeanstalk/model/ListTagsForResourceRequest.h>
#include <aws/elasticbeanstalk/model/ListTagsForResourceResult.h>
#include <aws/elasticbeanstalk/model/Listener.h>
#include <aws/elasticbeanstalk/model/LoadBalancer.h>
#include <aws/elasticbeanstalk/model/LoadBalancerDescription.h>
#include <aws/elasticbeanstalk/model/ManagedAction.h>
#include <aws/elasticbeanstalk/model/ManagedActionHistoryItem.h>
#include <aws/elasticbeanstalk/model/MaxAgeRule.h>
#include <aws/elasticbeanstalk/model/MaxCountRule.h>
#include <aws/elasticbeanstalk/model/OptionRestrictionRegex.h>
#include <aws/elasticbeanstalk/model/OptionSpecification.h>
#include <aws/elasticbeanstalk/model/PlatformBranchSummary.h>
#include <aws/elasticbeanstalk/model/PlatformDescription.h>
#include <aws/elasticbeanstalk/model/PlatformFilter.h>
#include <aws/elasticbeanstalk/model/PlatformFramework.h>
#include <aws/elasticbeanstalk/model/PlatformProgrammingLanguage.h>
#include <aws/elasticbeanstalk/model/PlatformStatus.h>
#include <aws/elasticbeanstalk/model/PlatformSummary.h>
#include <aws/elasticbeanstalk/model/Queue.h>
#include <aws/elasticbeanstalk/model/RebuildEnvironmentRequest.h>
#include <aws/elasticbeanstalk/model/RequestEnvironmentInfoRequest.h>
#include <aws/elasticbeanstalk/model/ResourceQuota.h>
#include <aws/elasticbeanstalk/model/ResourceQuotas.h>
#include <aws/elasticbeanstalk/model/ResponseMetadata.h>
#include <aws/elasticbeanstalk/model/RestartAppServerRequest.h>
#include <aws/elasticbeanstalk/model/RetrieveEnvironmentInfoRequest.h>
#include <aws/elasticbeanstalk/model/RetrieveEnvironmentInfoResult.h>
#include <aws/elasticbeanstalk/model/S3Location.h>
#include <aws/elasticbeanstalk/model/SearchFilter.h>
#include <aws/elasticbeanstalk/model/SingleInstanceHealth.h>
#include <aws/elasticbeanstalk/model/SolutionStackDescription.h>
#include <aws/elasticbeanstalk/model/SourceBuildInformation.h>
#include <aws/elasticbeanstalk/model/SourceConfiguration.h>
#include <aws/elasticbeanstalk/model/SourceRepository.h>
#include <aws/elasticbeanstalk/model/SourceType.h>
#include <aws/elasticbeanstalk/model/StatusCodes.h>
#include <aws/elasticbeanstalk/model/SwapEnvironmentCNAMEsRequest.h>
#include <aws/elasticbeanstalk/model/SystemStatus.h>
#include <aws/elasticbeanstalk/model/Tag.h>
#include <aws/elasticbeanstalk/model/TerminateEnvironmentRequest.h>
#include <aws/elasticbeanstalk/model/TerminateEnvironmentResult.h>
#include <aws/elasticbeanstalk/model/Trigger.h>
#include <aws/elasticbeanstalk/model/UpdateApplicationRequest.h>
#include <aws/elasticbeanstalk/model/UpdateApplicationResourceLifecycleRequest.h>
#include <aws/elasticbeanstalk/model/UpdateApplicationResourceLifecycleResult.h>
#include <aws/elasticbeanstalk/model/UpdateApplicationResult.h>
#include <aws/elasticbeanstalk/model/UpdateApplicationVersionRequest.h>
#include <aws/elasticbeanstalk/model/UpdateApplicationVersionResult.h>
#include <aws/elasticbeanstalk/model/UpdateConfigurationTemplateRequest.h>
#include <aws/elasticbeanstalk/model/UpdateConfigurationTemplateResult.h>
#include <aws/elasticbeanstalk/model/UpdateEnvironmentRequest.h>
#include <aws/elasticbeanstalk/model/UpdateEnvironmentResult.h>
#include <aws/elasticbeanstalk/model/UpdateTagsForResourceRequest.h>
#include <aws/elasticbeanstalk/model/ValidateConfigurationSettingsRequest.h>
#include <aws/elasticbeanstalk/model/ValidateConfigurationSettingsResult.h>
#include <aws/elasticbeanstalk/model/ValidationMessage.h>
#include <aws/elasticbeanstalk/model/ValidationSeverity.h>

using ElasticBeanstalkIncludeTest = ::testing::Test;

TEST_F(ElasticBeanstalkIncludeTest, TestClientCompiles)
{
  Aws::Client::ClientConfigurationInitValues cfgInit;
  cfgInit.shouldDisableIMDS = true;
  Aws::Client::ClientConfiguration config(cfgInit);
  AWS_UNREFERENCED_PARAM(config);
  // auto pClient = Aws::MakeUnique<Aws::ElasticBeanstalk::ElasticBeanstalkClient>("ElasticBeanstalkIncludeTest", config);
  // ASSERT_TRUE(pClient.get());
}
