﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/client/AWSError.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/ecs/ECSErrors.h>
#include <aws/ecs/model/ConflictException.h>

using namespace Aws::Client;
using namespace Aws::Utils;
using namespace Aws::ECS;
using namespace Aws::ECS::Model;

namespace Aws
{
namespace ECS
{
template<> AWS_ECS_API ConflictException ECSError::GetModeledError()
{
  assert(this->GetErrorType() == ECSErrors::CONFLICT);
  return ConflictException(this->GetJsonPayload().View());
}

namespace ECSErrorMapper
{

static const int CLIENT_HASH = HashingUtils::HashString("ClientException");
static const int CONFLICT_HASH = HashingUtils::HashString("ConflictException");
static const int NO_UPDATE_AVAILABLE_HASH = HashingUtils::HashString("NoUpdateAvailableException");
static const int LIMIT_EXCEEDED_HASH = HashingUtils::HashString("LimitExceededException");
static const int UPDATE_IN_PROGRESS_HASH = HashingUtils::HashString("UpdateInProgressException");
static const int INVALID_PARAMETER_HASH = HashingUtils::HashString("InvalidParameterException");
static const int CLUSTER_NOT_FOUND_HASH = HashingUtils::HashString("ClusterNotFoundException");
static const int CLUSTER_CONTAINS_SERVICES_HASH = HashingUtils::HashString("ClusterContainsServicesException");
static const int TARGET_NOT_CONNECTED_HASH = HashingUtils::HashString("TargetNotConnectedException");
static const int RESOURCE_IN_USE_HASH = HashingUtils::HashString("ResourceInUseException");
static const int SERVICE_NOT_ACTIVE_HASH = HashingUtils::HashString("ServiceNotActiveException");
static const int ATTRIBUTE_LIMIT_EXCEEDED_HASH = HashingUtils::HashString("AttributeLimitExceededException");
static const int UNSUPPORTED_FEATURE_HASH = HashingUtils::HashString("UnsupportedFeatureException");
static const int TARGET_NOT_FOUND_HASH = HashingUtils::HashString("TargetNotFoundException");
static const int CLUSTER_CONTAINS_CONTAINER_INSTANCES_HASH = HashingUtils::HashString("ClusterContainsContainerInstancesException");
static const int PLATFORM_TASK_DEFINITION_INCOMPATIBILITY_HASH = HashingUtils::HashString("PlatformTaskDefinitionIncompatibilityException");
static const int MISSING_VERSION_HASH = HashingUtils::HashString("MissingVersionException");
static const int SERVER_HASH = HashingUtils::HashString("ServerException");
static const int NAMESPACE_NOT_FOUND_HASH = HashingUtils::HashString("NamespaceNotFoundException");
static const int BLOCKED_HASH = HashingUtils::HashString("BlockedException");
static const int PLATFORM_UNKNOWN_HASH = HashingUtils::HashString("PlatformUnknownException");
static const int CLUSTER_CONTAINS_TASKS_HASH = HashingUtils::HashString("ClusterContainsTasksException");
static const int TASK_SET_NOT_FOUND_HASH = HashingUtils::HashString("TaskSetNotFoundException");
static const int SERVICE_NOT_FOUND_HASH = HashingUtils::HashString("ServiceNotFoundException");
static const int SERVICE_DEPLOYMENT_NOT_FOUND_HASH = HashingUtils::HashString("ServiceDeploymentNotFoundException");


AWSError<CoreErrors> GetErrorForName(const char* errorName)
{
  int hashCode = HashingUtils::HashString(errorName);

  if (hashCode == CLIENT_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(ECSErrors::CLIENT), RetryableType::NOT_RETRYABLE);
  }
  else if (hashCode == CONFLICT_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(ECSErrors::CONFLICT), RetryableType::NOT_RETRYABLE);
  }
  else if (hashCode == NO_UPDATE_AVAILABLE_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(ECSErrors::NO_UPDATE_AVAILABLE), RetryableType::NOT_RETRYABLE);
  }
  else if (hashCode == LIMIT_EXCEEDED_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(ECSErrors::LIMIT_EXCEEDED), RetryableType::RETRYABLE);
  }
  else if (hashCode == UPDATE_IN_PROGRESS_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(ECSErrors::UPDATE_IN_PROGRESS), RetryableType::NOT_RETRYABLE);
  }
  else if (hashCode == INVALID_PARAMETER_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(ECSErrors::INVALID_PARAMETER), RetryableType::NOT_RETRYABLE);
  }
  else if (hashCode == CLUSTER_NOT_FOUND_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(ECSErrors::CLUSTER_NOT_FOUND), RetryableType::NOT_RETRYABLE);
  }
  else if (hashCode == CLUSTER_CONTAINS_SERVICES_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(ECSErrors::CLUSTER_CONTAINS_SERVICES), RetryableType::NOT_RETRYABLE);
  }
  else if (hashCode == TARGET_NOT_CONNECTED_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(ECSErrors::TARGET_NOT_CONNECTED), RetryableType::NOT_RETRYABLE);
  }
  else if (hashCode == RESOURCE_IN_USE_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(ECSErrors::RESOURCE_IN_USE), RetryableType::NOT_RETRYABLE);
  }
  else if (hashCode == SERVICE_NOT_ACTIVE_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(ECSErrors::SERVICE_NOT_ACTIVE), RetryableType::NOT_RETRYABLE);
  }
  else if (hashCode == ATTRIBUTE_LIMIT_EXCEEDED_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(ECSErrors::ATTRIBUTE_LIMIT_EXCEEDED), RetryableType::NOT_RETRYABLE);
  }
  else if (hashCode == UNSUPPORTED_FEATURE_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(ECSErrors::UNSUPPORTED_FEATURE), RetryableType::NOT_RETRYABLE);
  }
  else if (hashCode == TARGET_NOT_FOUND_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(ECSErrors::TARGET_NOT_FOUND), RetryableType::NOT_RETRYABLE);
  }
  else if (hashCode == CLUSTER_CONTAINS_CONTAINER_INSTANCES_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(ECSErrors::CLUSTER_CONTAINS_CONTAINER_INSTANCES), RetryableType::NOT_RETRYABLE);
  }
  else if (hashCode == PLATFORM_TASK_DEFINITION_INCOMPATIBILITY_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(ECSErrors::PLATFORM_TASK_DEFINITION_INCOMPATIBILITY), RetryableType::NOT_RETRYABLE);
  }
  else if (hashCode == MISSING_VERSION_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(ECSErrors::MISSING_VERSION), RetryableType::NOT_RETRYABLE);
  }
  else if (hashCode == SERVER_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(ECSErrors::SERVER), RetryableType::NOT_RETRYABLE);
  }
  else if (hashCode == NAMESPACE_NOT_FOUND_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(ECSErrors::NAMESPACE_NOT_FOUND), RetryableType::NOT_RETRYABLE);
  }
  else if (hashCode == BLOCKED_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(ECSErrors::BLOCKED), RetryableType::NOT_RETRYABLE);
  }
  else if (hashCode == PLATFORM_UNKNOWN_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(ECSErrors::PLATFORM_UNKNOWN), RetryableType::NOT_RETRYABLE);
  }
  else if (hashCode == CLUSTER_CONTAINS_TASKS_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(ECSErrors::CLUSTER_CONTAINS_TASKS), RetryableType::NOT_RETRYABLE);
  }
  else if (hashCode == TASK_SET_NOT_FOUND_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(ECSErrors::TASK_SET_NOT_FOUND), RetryableType::NOT_RETRYABLE);
  }
  else if (hashCode == SERVICE_NOT_FOUND_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(ECSErrors::SERVICE_NOT_FOUND), RetryableType::NOT_RETRYABLE);
  }
  else if (hashCode == SERVICE_DEPLOYMENT_NOT_FOUND_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(ECSErrors::SERVICE_DEPLOYMENT_NOT_FOUND), RetryableType::NOT_RETRYABLE);
  }
  return AWSError<CoreErrors>(CoreErrors::UNKNOWN, false);
}

} // namespace ECSErrorMapper
} // namespace ECS
} // namespace Aws
