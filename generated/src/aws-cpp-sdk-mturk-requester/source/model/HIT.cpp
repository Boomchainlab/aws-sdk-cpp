﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/mturk-requester/model/HIT.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace MTurk
{
namespace Model
{

HIT::HIT(JsonView jsonValue)
{
  *this = jsonValue;
}

HIT& HIT::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("HITId"))
  {
    m_hITId = jsonValue.GetString("HITId");
    m_hITIdHasBeenSet = true;
  }
  if(jsonValue.ValueExists("HITTypeId"))
  {
    m_hITTypeId = jsonValue.GetString("HITTypeId");
    m_hITTypeIdHasBeenSet = true;
  }
  if(jsonValue.ValueExists("HITGroupId"))
  {
    m_hITGroupId = jsonValue.GetString("HITGroupId");
    m_hITGroupIdHasBeenSet = true;
  }
  if(jsonValue.ValueExists("HITLayoutId"))
  {
    m_hITLayoutId = jsonValue.GetString("HITLayoutId");
    m_hITLayoutIdHasBeenSet = true;
  }
  if(jsonValue.ValueExists("CreationTime"))
  {
    m_creationTime = jsonValue.GetDouble("CreationTime");
    m_creationTimeHasBeenSet = true;
  }
  if(jsonValue.ValueExists("Title"))
  {
    m_title = jsonValue.GetString("Title");
    m_titleHasBeenSet = true;
  }
  if(jsonValue.ValueExists("Description"))
  {
    m_description = jsonValue.GetString("Description");
    m_descriptionHasBeenSet = true;
  }
  if(jsonValue.ValueExists("Question"))
  {
    m_question = jsonValue.GetString("Question");
    m_questionHasBeenSet = true;
  }
  if(jsonValue.ValueExists("Keywords"))
  {
    m_keywords = jsonValue.GetString("Keywords");
    m_keywordsHasBeenSet = true;
  }
  if(jsonValue.ValueExists("HITStatus"))
  {
    m_hITStatus = HITStatusMapper::GetHITStatusForName(jsonValue.GetString("HITStatus"));
    m_hITStatusHasBeenSet = true;
  }
  if(jsonValue.ValueExists("MaxAssignments"))
  {
    m_maxAssignments = jsonValue.GetInteger("MaxAssignments");
    m_maxAssignmentsHasBeenSet = true;
  }
  if(jsonValue.ValueExists("Reward"))
  {
    m_reward = jsonValue.GetString("Reward");
    m_rewardHasBeenSet = true;
  }
  if(jsonValue.ValueExists("AutoApprovalDelayInSeconds"))
  {
    m_autoApprovalDelayInSeconds = jsonValue.GetInt64("AutoApprovalDelayInSeconds");
    m_autoApprovalDelayInSecondsHasBeenSet = true;
  }
  if(jsonValue.ValueExists("Expiration"))
  {
    m_expiration = jsonValue.GetDouble("Expiration");
    m_expirationHasBeenSet = true;
  }
  if(jsonValue.ValueExists("AssignmentDurationInSeconds"))
  {
    m_assignmentDurationInSeconds = jsonValue.GetInt64("AssignmentDurationInSeconds");
    m_assignmentDurationInSecondsHasBeenSet = true;
  }
  if(jsonValue.ValueExists("RequesterAnnotation"))
  {
    m_requesterAnnotation = jsonValue.GetString("RequesterAnnotation");
    m_requesterAnnotationHasBeenSet = true;
  }
  if(jsonValue.ValueExists("QualificationRequirements"))
  {
    Aws::Utils::Array<JsonView> qualificationRequirementsJsonList = jsonValue.GetArray("QualificationRequirements");
    for(unsigned qualificationRequirementsIndex = 0; qualificationRequirementsIndex < qualificationRequirementsJsonList.GetLength(); ++qualificationRequirementsIndex)
    {
      m_qualificationRequirements.push_back(qualificationRequirementsJsonList[qualificationRequirementsIndex].AsObject());
    }
    m_qualificationRequirementsHasBeenSet = true;
  }
  if(jsonValue.ValueExists("HITReviewStatus"))
  {
    m_hITReviewStatus = HITReviewStatusMapper::GetHITReviewStatusForName(jsonValue.GetString("HITReviewStatus"));
    m_hITReviewStatusHasBeenSet = true;
  }
  if(jsonValue.ValueExists("NumberOfAssignmentsPending"))
  {
    m_numberOfAssignmentsPending = jsonValue.GetInteger("NumberOfAssignmentsPending");
    m_numberOfAssignmentsPendingHasBeenSet = true;
  }
  if(jsonValue.ValueExists("NumberOfAssignmentsAvailable"))
  {
    m_numberOfAssignmentsAvailable = jsonValue.GetInteger("NumberOfAssignmentsAvailable");
    m_numberOfAssignmentsAvailableHasBeenSet = true;
  }
  if(jsonValue.ValueExists("NumberOfAssignmentsCompleted"))
  {
    m_numberOfAssignmentsCompleted = jsonValue.GetInteger("NumberOfAssignmentsCompleted");
    m_numberOfAssignmentsCompletedHasBeenSet = true;
  }
  return *this;
}

JsonValue HIT::Jsonize() const
{
  JsonValue payload;

  if(m_hITIdHasBeenSet)
  {
   payload.WithString("HITId", m_hITId);

  }

  if(m_hITTypeIdHasBeenSet)
  {
   payload.WithString("HITTypeId", m_hITTypeId);

  }

  if(m_hITGroupIdHasBeenSet)
  {
   payload.WithString("HITGroupId", m_hITGroupId);

  }

  if(m_hITLayoutIdHasBeenSet)
  {
   payload.WithString("HITLayoutId", m_hITLayoutId);

  }

  if(m_creationTimeHasBeenSet)
  {
   payload.WithDouble("CreationTime", m_creationTime.SecondsWithMSPrecision());
  }

  if(m_titleHasBeenSet)
  {
   payload.WithString("Title", m_title);

  }

  if(m_descriptionHasBeenSet)
  {
   payload.WithString("Description", m_description);

  }

  if(m_questionHasBeenSet)
  {
   payload.WithString("Question", m_question);

  }

  if(m_keywordsHasBeenSet)
  {
   payload.WithString("Keywords", m_keywords);

  }

  if(m_hITStatusHasBeenSet)
  {
   payload.WithString("HITStatus", HITStatusMapper::GetNameForHITStatus(m_hITStatus));
  }

  if(m_maxAssignmentsHasBeenSet)
  {
   payload.WithInteger("MaxAssignments", m_maxAssignments);

  }

  if(m_rewardHasBeenSet)
  {
   payload.WithString("Reward", m_reward);

  }

  if(m_autoApprovalDelayInSecondsHasBeenSet)
  {
   payload.WithInt64("AutoApprovalDelayInSeconds", m_autoApprovalDelayInSeconds);

  }

  if(m_expirationHasBeenSet)
  {
   payload.WithDouble("Expiration", m_expiration.SecondsWithMSPrecision());
  }

  if(m_assignmentDurationInSecondsHasBeenSet)
  {
   payload.WithInt64("AssignmentDurationInSeconds", m_assignmentDurationInSeconds);

  }

  if(m_requesterAnnotationHasBeenSet)
  {
   payload.WithString("RequesterAnnotation", m_requesterAnnotation);

  }

  if(m_qualificationRequirementsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> qualificationRequirementsJsonList(m_qualificationRequirements.size());
   for(unsigned qualificationRequirementsIndex = 0; qualificationRequirementsIndex < qualificationRequirementsJsonList.GetLength(); ++qualificationRequirementsIndex)
   {
     qualificationRequirementsJsonList[qualificationRequirementsIndex].AsObject(m_qualificationRequirements[qualificationRequirementsIndex].Jsonize());
   }
   payload.WithArray("QualificationRequirements", std::move(qualificationRequirementsJsonList));

  }

  if(m_hITReviewStatusHasBeenSet)
  {
   payload.WithString("HITReviewStatus", HITReviewStatusMapper::GetNameForHITReviewStatus(m_hITReviewStatus));
  }

  if(m_numberOfAssignmentsPendingHasBeenSet)
  {
   payload.WithInteger("NumberOfAssignmentsPending", m_numberOfAssignmentsPending);

  }

  if(m_numberOfAssignmentsAvailableHasBeenSet)
  {
   payload.WithInteger("NumberOfAssignmentsAvailable", m_numberOfAssignmentsAvailable);

  }

  if(m_numberOfAssignmentsCompletedHasBeenSet)
  {
   payload.WithInteger("NumberOfAssignmentsCompleted", m_numberOfAssignmentsCompleted);

  }

  return payload;
}

} // namespace Model
} // namespace MTurk
} // namespace Aws
