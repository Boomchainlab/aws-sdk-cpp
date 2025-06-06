/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <gtest/gtest.h>
#include <aws/testing/AwsTestHelpers.h>

#include <aws/mgn/MgnClient.h>
#include <aws/mgn/MgnEndpointProvider.h>
#include <aws/mgn/MgnEndpointRules.h>
#include <aws/mgn/MgnErrorMarshaller.h>
#include <aws/mgn/MgnErrors.h>
#include <aws/mgn/MgnRequest.h>
#include <aws/mgn/MgnServiceClientModel.h>
#include <aws/mgn/Mgn_EXPORTS.h>
#include <aws/mgn/model/AccessDeniedException.h>
#include <aws/mgn/model/ActionCategory.h>
#include <aws/mgn/model/Application.h>
#include <aws/mgn/model/ApplicationAggregatedStatus.h>
#include <aws/mgn/model/ApplicationHealthStatus.h>
#include <aws/mgn/model/ApplicationProgressStatus.h>
#include <aws/mgn/model/ArchiveApplicationRequest.h>
#include <aws/mgn/model/ArchiveApplicationResult.h>
#include <aws/mgn/model/ArchiveWaveRequest.h>
#include <aws/mgn/model/ArchiveWaveResult.h>
#include <aws/mgn/model/AssociateApplicationsRequest.h>
#include <aws/mgn/model/AssociateApplicationsResult.h>
#include <aws/mgn/model/AssociateSourceServersRequest.h>
#include <aws/mgn/model/AssociateSourceServersResult.h>
#include <aws/mgn/model/BootMode.h>
#include <aws/mgn/model/CPU.h>
#include <aws/mgn/model/ChangeServerLifeCycleStateRequest.h>
#include <aws/mgn/model/ChangeServerLifeCycleStateResult.h>
#include <aws/mgn/model/ChangeServerLifeCycleStateSourceServerLifecycle.h>
#include <aws/mgn/model/ChangeServerLifeCycleStateSourceServerLifecycleState.h>
#include <aws/mgn/model/ConflictException.h>
#include <aws/mgn/model/Connector.h>
#include <aws/mgn/model/ConnectorSsmCommandConfig.h>
#include <aws/mgn/model/CreateApplicationRequest.h>
#include <aws/mgn/model/CreateApplicationResult.h>
#include <aws/mgn/model/CreateConnectorRequest.h>
#include <aws/mgn/model/CreateConnectorResult.h>
#include <aws/mgn/model/CreateLaunchConfigurationTemplateRequest.h>
#include <aws/mgn/model/CreateLaunchConfigurationTemplateResult.h>
#include <aws/mgn/model/CreateReplicationConfigurationTemplateRequest.h>
#include <aws/mgn/model/CreateReplicationConfigurationTemplateResult.h>
#include <aws/mgn/model/CreateWaveRequest.h>
#include <aws/mgn/model/CreateWaveResult.h>
#include <aws/mgn/model/DataReplicationError.h>
#include <aws/mgn/model/DataReplicationErrorString.h>
#include <aws/mgn/model/DataReplicationInfo.h>
#include <aws/mgn/model/DataReplicationInfoReplicatedDisk.h>
#include <aws/mgn/model/DataReplicationInitiation.h>
#include <aws/mgn/model/DataReplicationInitiationStep.h>
#include <aws/mgn/model/DataReplicationInitiationStepName.h>
#include <aws/mgn/model/DataReplicationInitiationStepStatus.h>
#include <aws/mgn/model/DataReplicationState.h>
#include <aws/mgn/model/DeleteApplicationRequest.h>
#include <aws/mgn/model/DeleteApplicationResult.h>
#include <aws/mgn/model/DeleteConnectorRequest.h>
#include <aws/mgn/model/DeleteJobRequest.h>
#include <aws/mgn/model/DeleteJobResult.h>
#include <aws/mgn/model/DeleteLaunchConfigurationTemplateRequest.h>
#include <aws/mgn/model/DeleteLaunchConfigurationTemplateResult.h>
#include <aws/mgn/model/DeleteReplicationConfigurationTemplateRequest.h>
#include <aws/mgn/model/DeleteReplicationConfigurationTemplateResult.h>
#include <aws/mgn/model/DeleteSourceServerRequest.h>
#include <aws/mgn/model/DeleteSourceServerResult.h>
#include <aws/mgn/model/DeleteVcenterClientRequest.h>
#include <aws/mgn/model/DeleteWaveRequest.h>
#include <aws/mgn/model/DeleteWaveResult.h>
#include <aws/mgn/model/DescribeJobLogItemsRequest.h>
#include <aws/mgn/model/DescribeJobLogItemsResult.h>
#include <aws/mgn/model/DescribeJobsRequest.h>
#include <aws/mgn/model/DescribeJobsRequestFilters.h>
#include <aws/mgn/model/DescribeJobsResult.h>
#include <aws/mgn/model/DescribeLaunchConfigurationTemplatesRequest.h>
#include <aws/mgn/model/DescribeLaunchConfigurationTemplatesResult.h>
#include <aws/mgn/model/DescribeReplicationConfigurationTemplatesRequest.h>
#include <aws/mgn/model/DescribeReplicationConfigurationTemplatesResult.h>
#include <aws/mgn/model/DescribeSourceServersRequest.h>
#include <aws/mgn/model/DescribeSourceServersRequestFilters.h>
#include <aws/mgn/model/DescribeSourceServersResult.h>
#include <aws/mgn/model/DescribeVcenterClientsRequest.h>
#include <aws/mgn/model/DescribeVcenterClientsResult.h>
#include <aws/mgn/model/DisassociateApplicationsRequest.h>
#include <aws/mgn/model/DisassociateApplicationsResult.h>
#include <aws/mgn/model/DisassociateSourceServersRequest.h>
#include <aws/mgn/model/DisassociateSourceServersResult.h>
#include <aws/mgn/model/DisconnectFromServiceRequest.h>
#include <aws/mgn/model/DisconnectFromServiceResult.h>
#include <aws/mgn/model/Disk.h>
#include <aws/mgn/model/ErrorDetails.h>
#include <aws/mgn/model/ExportErrorData.h>
#include <aws/mgn/model/ExportStatus.h>
#include <aws/mgn/model/ExportTask.h>
#include <aws/mgn/model/ExportTaskError.h>
#include <aws/mgn/model/ExportTaskSummary.h>
#include <aws/mgn/model/FinalizeCutoverRequest.h>
#include <aws/mgn/model/FinalizeCutoverResult.h>
#include <aws/mgn/model/FirstBoot.h>
#include <aws/mgn/model/GetLaunchConfigurationRequest.h>
#include <aws/mgn/model/GetLaunchConfigurationResult.h>
#include <aws/mgn/model/GetReplicationConfigurationRequest.h>
#include <aws/mgn/model/GetReplicationConfigurationResult.h>
#include <aws/mgn/model/IdentificationHints.h>
#include <aws/mgn/model/ImportErrorData.h>
#include <aws/mgn/model/ImportErrorType.h>
#include <aws/mgn/model/ImportStatus.h>
#include <aws/mgn/model/ImportTask.h>
#include <aws/mgn/model/ImportTaskError.h>
#include <aws/mgn/model/ImportTaskSummary.h>
#include <aws/mgn/model/ImportTaskSummaryApplications.h>
#include <aws/mgn/model/ImportTaskSummaryServers.h>
#include <aws/mgn/model/ImportTaskSummaryWaves.h>
#include <aws/mgn/model/InitializeServiceRequest.h>
#include <aws/mgn/model/InitializeServiceResult.h>
#include <aws/mgn/model/InitiatedBy.h>
#include <aws/mgn/model/InternalServerException.h>
#include <aws/mgn/model/Job.h>
#include <aws/mgn/model/JobLog.h>
#include <aws/mgn/model/JobLogEvent.h>
#include <aws/mgn/model/JobLogEventData.h>
#include <aws/mgn/model/JobPostLaunchActionsLaunchStatus.h>
#include <aws/mgn/model/JobStatus.h>
#include <aws/mgn/model/JobType.h>
#include <aws/mgn/model/LaunchConfigurationTemplate.h>
#include <aws/mgn/model/LaunchDisposition.h>
#include <aws/mgn/model/LaunchStatus.h>
#include <aws/mgn/model/LaunchTemplateDiskConf.h>
#include <aws/mgn/model/LaunchedInstance.h>
#include <aws/mgn/model/Licensing.h>
#include <aws/mgn/model/LifeCycle.h>
#include <aws/mgn/model/LifeCycleLastCutover.h>
#include <aws/mgn/model/LifeCycleLastCutoverFinalized.h>
#include <aws/mgn/model/LifeCycleLastCutoverInitiated.h>
#include <aws/mgn/model/LifeCycleLastCutoverReverted.h>
#include <aws/mgn/model/LifeCycleLastTest.h>
#include <aws/mgn/model/LifeCycleLastTestFinalized.h>
#include <aws/mgn/model/LifeCycleLastTestInitiated.h>
#include <aws/mgn/model/LifeCycleLastTestReverted.h>
#include <aws/mgn/model/LifeCycleState.h>
#include <aws/mgn/model/ListApplicationsRequest.h>
#include <aws/mgn/model/ListApplicationsRequestFilters.h>
#include <aws/mgn/model/ListApplicationsResult.h>
#include <aws/mgn/model/ListConnectorsRequest.h>
#include <aws/mgn/model/ListConnectorsRequestFilters.h>
#include <aws/mgn/model/ListConnectorsResult.h>
#include <aws/mgn/model/ListExportErrorsRequest.h>
#include <aws/mgn/model/ListExportErrorsResult.h>
#include <aws/mgn/model/ListExportsRequest.h>
#include <aws/mgn/model/ListExportsRequestFilters.h>
#include <aws/mgn/model/ListExportsResult.h>
#include <aws/mgn/model/ListImportErrorsRequest.h>
#include <aws/mgn/model/ListImportErrorsResult.h>
#include <aws/mgn/model/ListImportsRequest.h>
#include <aws/mgn/model/ListImportsRequestFilters.h>
#include <aws/mgn/model/ListImportsResult.h>
#include <aws/mgn/model/ListManagedAccountsRequest.h>
#include <aws/mgn/model/ListManagedAccountsResult.h>
#include <aws/mgn/model/ListSourceServerActionsRequest.h>
#include <aws/mgn/model/ListSourceServerActionsResult.h>
#include <aws/mgn/model/ListTagsForResourceRequest.h>
#include <aws/mgn/model/ListTagsForResourceResult.h>
#include <aws/mgn/model/ListTemplateActionsRequest.h>
#include <aws/mgn/model/ListTemplateActionsResult.h>
#include <aws/mgn/model/ListWavesRequest.h>
#include <aws/mgn/model/ListWavesRequestFilters.h>
#include <aws/mgn/model/ListWavesResult.h>
#include <aws/mgn/model/ManagedAccount.h>
#include <aws/mgn/model/MarkAsArchivedRequest.h>
#include <aws/mgn/model/MarkAsArchivedResult.h>
#include <aws/mgn/model/NetworkInterface.h>
#include <aws/mgn/model/OS.h>
#include <aws/mgn/model/ParticipatingServer.h>
#include <aws/mgn/model/PauseReplicationRequest.h>
#include <aws/mgn/model/PauseReplicationResult.h>
#include <aws/mgn/model/PostLaunchActionExecutionStatus.h>
#include <aws/mgn/model/PostLaunchActions.h>
#include <aws/mgn/model/PostLaunchActionsDeploymentType.h>
#include <aws/mgn/model/PostLaunchActionsStatus.h>
#include <aws/mgn/model/PutSourceServerActionRequest.h>
#include <aws/mgn/model/PutSourceServerActionResult.h>
#include <aws/mgn/model/PutTemplateActionRequest.h>
#include <aws/mgn/model/PutTemplateActionResult.h>
#include <aws/mgn/model/RemoveSourceServerActionRequest.h>
#include <aws/mgn/model/RemoveSourceServerActionResult.h>
#include <aws/mgn/model/RemoveTemplateActionRequest.h>
#include <aws/mgn/model/RemoveTemplateActionResult.h>
#include <aws/mgn/model/ReplicationConfigurationDataPlaneRouting.h>
#include <aws/mgn/model/ReplicationConfigurationDefaultLargeStagingDiskType.h>
#include <aws/mgn/model/ReplicationConfigurationEbsEncryption.h>
#include <aws/mgn/model/ReplicationConfigurationReplicatedDisk.h>
#include <aws/mgn/model/ReplicationConfigurationReplicatedDiskStagingDiskType.h>
#include <aws/mgn/model/ReplicationConfigurationTemplate.h>
#include <aws/mgn/model/ReplicationType.h>
#include <aws/mgn/model/ResourceNotFoundException.h>
#include <aws/mgn/model/ResumeReplicationRequest.h>
#include <aws/mgn/model/ResumeReplicationResult.h>
#include <aws/mgn/model/RetryDataReplicationRequest.h>
#include <aws/mgn/model/RetryDataReplicationResult.h>
#include <aws/mgn/model/S3BucketSource.h>
#include <aws/mgn/model/ServiceQuotaExceededException.h>
#include <aws/mgn/model/SourceProperties.h>
#include <aws/mgn/model/SourceServer.h>
#include <aws/mgn/model/SourceServerActionDocument.h>
#include <aws/mgn/model/SourceServerActionsRequestFilters.h>
#include <aws/mgn/model/SourceServerConnectorAction.h>
#include <aws/mgn/model/SsmDocument.h>
#include <aws/mgn/model/SsmDocumentType.h>
#include <aws/mgn/model/SsmExternalParameter.h>
#include <aws/mgn/model/SsmParameterStoreParameter.h>
#include <aws/mgn/model/SsmParameterStoreParameterType.h>
#include <aws/mgn/model/StartCutoverRequest.h>
#include <aws/mgn/model/StartCutoverResult.h>
#include <aws/mgn/model/StartExportRequest.h>
#include <aws/mgn/model/StartExportResult.h>
#include <aws/mgn/model/StartImportRequest.h>
#include <aws/mgn/model/StartImportResult.h>
#include <aws/mgn/model/StartReplicationRequest.h>
#include <aws/mgn/model/StartReplicationResult.h>
#include <aws/mgn/model/StartTestRequest.h>
#include <aws/mgn/model/StartTestResult.h>
#include <aws/mgn/model/StopReplicationRequest.h>
#include <aws/mgn/model/StopReplicationResult.h>
#include <aws/mgn/model/TagResourceRequest.h>
#include <aws/mgn/model/TargetInstanceTypeRightSizingMethod.h>
#include <aws/mgn/model/TemplateActionDocument.h>
#include <aws/mgn/model/TemplateActionsRequestFilters.h>
#include <aws/mgn/model/TerminateTargetInstancesRequest.h>
#include <aws/mgn/model/TerminateTargetInstancesResult.h>
#include <aws/mgn/model/ThrottlingException.h>
#include <aws/mgn/model/UnarchiveApplicationRequest.h>
#include <aws/mgn/model/UnarchiveApplicationResult.h>
#include <aws/mgn/model/UnarchiveWaveRequest.h>
#include <aws/mgn/model/UnarchiveWaveResult.h>
#include <aws/mgn/model/UninitializedAccountException.h>
#include <aws/mgn/model/UntagResourceRequest.h>
#include <aws/mgn/model/UpdateApplicationRequest.h>
#include <aws/mgn/model/UpdateApplicationResult.h>
#include <aws/mgn/model/UpdateConnectorRequest.h>
#include <aws/mgn/model/UpdateConnectorResult.h>
#include <aws/mgn/model/UpdateLaunchConfigurationRequest.h>
#include <aws/mgn/model/UpdateLaunchConfigurationResult.h>
#include <aws/mgn/model/UpdateLaunchConfigurationTemplateRequest.h>
#include <aws/mgn/model/UpdateLaunchConfigurationTemplateResult.h>
#include <aws/mgn/model/UpdateReplicationConfigurationRequest.h>
#include <aws/mgn/model/UpdateReplicationConfigurationResult.h>
#include <aws/mgn/model/UpdateReplicationConfigurationTemplateRequest.h>
#include <aws/mgn/model/UpdateReplicationConfigurationTemplateResult.h>
#include <aws/mgn/model/UpdateSourceServerReplicationTypeRequest.h>
#include <aws/mgn/model/UpdateSourceServerReplicationTypeResult.h>
#include <aws/mgn/model/UpdateSourceServerRequest.h>
#include <aws/mgn/model/UpdateSourceServerResult.h>
#include <aws/mgn/model/UpdateWaveRequest.h>
#include <aws/mgn/model/UpdateWaveResult.h>
#include <aws/mgn/model/ValidationException.h>
#include <aws/mgn/model/ValidationExceptionField.h>
#include <aws/mgn/model/ValidationExceptionReason.h>
#include <aws/mgn/model/VcenterClient.h>
#include <aws/mgn/model/VolumeType.h>
#include <aws/mgn/model/Wave.h>
#include <aws/mgn/model/WaveAggregatedStatus.h>
#include <aws/mgn/model/WaveHealthStatus.h>
#include <aws/mgn/model/WaveProgressStatus.h>

using MgnIncludeTest = ::testing::Test;

TEST_F(MgnIncludeTest, TestClientCompiles)
{
  Aws::Client::ClientConfigurationInitValues cfgInit;
  cfgInit.shouldDisableIMDS = true;
  Aws::Client::ClientConfiguration config(cfgInit);
  AWS_UNREFERENCED_PARAM(config);
  // auto pClient = Aws::MakeUnique<Aws::mgn::MgnClient>("MgnIncludeTest", config);
  // ASSERT_TRUE(pClient.get());
}
