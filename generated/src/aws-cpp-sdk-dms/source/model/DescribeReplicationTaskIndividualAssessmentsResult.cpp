﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/dms/model/DescribeReplicationTaskIndividualAssessmentsResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::DatabaseMigrationService::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

DescribeReplicationTaskIndividualAssessmentsResult::DescribeReplicationTaskIndividualAssessmentsResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

DescribeReplicationTaskIndividualAssessmentsResult& DescribeReplicationTaskIndividualAssessmentsResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("Marker"))
  {
    m_marker = jsonValue.GetString("Marker");
    m_markerHasBeenSet = true;
  }
  if(jsonValue.ValueExists("ReplicationTaskIndividualAssessments"))
  {
    Aws::Utils::Array<JsonView> replicationTaskIndividualAssessmentsJsonList = jsonValue.GetArray("ReplicationTaskIndividualAssessments");
    for(unsigned replicationTaskIndividualAssessmentsIndex = 0; replicationTaskIndividualAssessmentsIndex < replicationTaskIndividualAssessmentsJsonList.GetLength(); ++replicationTaskIndividualAssessmentsIndex)
    {
      m_replicationTaskIndividualAssessments.push_back(replicationTaskIndividualAssessmentsJsonList[replicationTaskIndividualAssessmentsIndex].AsObject());
    }
    m_replicationTaskIndividualAssessmentsHasBeenSet = true;
  }

  const auto& headers = result.GetHeaderValueCollection();
  const auto& requestIdIter = headers.find("x-amzn-requestid");
  if(requestIdIter != headers.end())
  {
    m_requestId = requestIdIter->second;
    m_requestIdHasBeenSet = true;
  }


  return *this;
}
