﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/mgn/Mgn_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/mgn/model/InitiatedBy.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/mgn/model/JobStatus.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/mgn/model/JobType.h>
#include <aws/mgn/model/ParticipatingServer.h>
#include <utility>

namespace Aws
{
namespace Utils
{
namespace Json
{
  class JsonValue;
  class JsonView;
} // namespace Json
} // namespace Utils
namespace mgn
{
namespace Model
{

  /**
   * <p>Job.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/mgn-2020-02-26/Job">AWS API
   * Reference</a></p>
   */
  class Job
  {
  public:
    AWS_MGN_API Job() = default;
    AWS_MGN_API Job(Aws::Utils::Json::JsonView jsonValue);
    AWS_MGN_API Job& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_MGN_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>the ARN of the specific Job.</p>
     */
    inline const Aws::String& GetArn() const { return m_arn; }
    inline bool ArnHasBeenSet() const { return m_arnHasBeenSet; }
    template<typename ArnT = Aws::String>
    void SetArn(ArnT&& value) { m_arnHasBeenSet = true; m_arn = std::forward<ArnT>(value); }
    template<typename ArnT = Aws::String>
    Job& WithArn(ArnT&& value) { SetArn(std::forward<ArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Job creation time.</p>
     */
    inline const Aws::String& GetCreationDateTime() const { return m_creationDateTime; }
    inline bool CreationDateTimeHasBeenSet() const { return m_creationDateTimeHasBeenSet; }
    template<typename CreationDateTimeT = Aws::String>
    void SetCreationDateTime(CreationDateTimeT&& value) { m_creationDateTimeHasBeenSet = true; m_creationDateTime = std::forward<CreationDateTimeT>(value); }
    template<typename CreationDateTimeT = Aws::String>
    Job& WithCreationDateTime(CreationDateTimeT&& value) { SetCreationDateTime(std::forward<CreationDateTimeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Job end time.</p>
     */
    inline const Aws::String& GetEndDateTime() const { return m_endDateTime; }
    inline bool EndDateTimeHasBeenSet() const { return m_endDateTimeHasBeenSet; }
    template<typename EndDateTimeT = Aws::String>
    void SetEndDateTime(EndDateTimeT&& value) { m_endDateTimeHasBeenSet = true; m_endDateTime = std::forward<EndDateTimeT>(value); }
    template<typename EndDateTimeT = Aws::String>
    Job& WithEndDateTime(EndDateTimeT&& value) { SetEndDateTime(std::forward<EndDateTimeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Job initiated by field.</p>
     */
    inline InitiatedBy GetInitiatedBy() const { return m_initiatedBy; }
    inline bool InitiatedByHasBeenSet() const { return m_initiatedByHasBeenSet; }
    inline void SetInitiatedBy(InitiatedBy value) { m_initiatedByHasBeenSet = true; m_initiatedBy = value; }
    inline Job& WithInitiatedBy(InitiatedBy value) { SetInitiatedBy(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Job ID.</p>
     */
    inline const Aws::String& GetJobID() const { return m_jobID; }
    inline bool JobIDHasBeenSet() const { return m_jobIDHasBeenSet; }
    template<typename JobIDT = Aws::String>
    void SetJobID(JobIDT&& value) { m_jobIDHasBeenSet = true; m_jobID = std::forward<JobIDT>(value); }
    template<typename JobIDT = Aws::String>
    Job& WithJobID(JobIDT&& value) { SetJobID(std::forward<JobIDT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Servers participating in a specific Job.</p>
     */
    inline const Aws::Vector<ParticipatingServer>& GetParticipatingServers() const { return m_participatingServers; }
    inline bool ParticipatingServersHasBeenSet() const { return m_participatingServersHasBeenSet; }
    template<typename ParticipatingServersT = Aws::Vector<ParticipatingServer>>
    void SetParticipatingServers(ParticipatingServersT&& value) { m_participatingServersHasBeenSet = true; m_participatingServers = std::forward<ParticipatingServersT>(value); }
    template<typename ParticipatingServersT = Aws::Vector<ParticipatingServer>>
    Job& WithParticipatingServers(ParticipatingServersT&& value) { SetParticipatingServers(std::forward<ParticipatingServersT>(value)); return *this;}
    template<typename ParticipatingServersT = ParticipatingServer>
    Job& AddParticipatingServers(ParticipatingServersT&& value) { m_participatingServersHasBeenSet = true; m_participatingServers.emplace_back(std::forward<ParticipatingServersT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Job status.</p>
     */
    inline JobStatus GetStatus() const { return m_status; }
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
    inline void SetStatus(JobStatus value) { m_statusHasBeenSet = true; m_status = value; }
    inline Job& WithStatus(JobStatus value) { SetStatus(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Tags associated with specific Job.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetTags() const { return m_tags; }
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }
    template<typename TagsT = Aws::Map<Aws::String, Aws::String>>
    void SetTags(TagsT&& value) { m_tagsHasBeenSet = true; m_tags = std::forward<TagsT>(value); }
    template<typename TagsT = Aws::Map<Aws::String, Aws::String>>
    Job& WithTags(TagsT&& value) { SetTags(std::forward<TagsT>(value)); return *this;}
    template<typename TagsKeyT = Aws::String, typename TagsValueT = Aws::String>
    Job& AddTags(TagsKeyT&& key, TagsValueT&& value) {
      m_tagsHasBeenSet = true; m_tags.emplace(std::forward<TagsKeyT>(key), std::forward<TagsValueT>(value)); return *this;
    }
    ///@}

    ///@{
    /**
     * <p>Job type.</p>
     */
    inline JobType GetType() const { return m_type; }
    inline bool TypeHasBeenSet() const { return m_typeHasBeenSet; }
    inline void SetType(JobType value) { m_typeHasBeenSet = true; m_type = value; }
    inline Job& WithType(JobType value) { SetType(value); return *this;}
    ///@}
  private:

    Aws::String m_arn;
    bool m_arnHasBeenSet = false;

    Aws::String m_creationDateTime;
    bool m_creationDateTimeHasBeenSet = false;

    Aws::String m_endDateTime;
    bool m_endDateTimeHasBeenSet = false;

    InitiatedBy m_initiatedBy{InitiatedBy::NOT_SET};
    bool m_initiatedByHasBeenSet = false;

    Aws::String m_jobID;
    bool m_jobIDHasBeenSet = false;

    Aws::Vector<ParticipatingServer> m_participatingServers;
    bool m_participatingServersHasBeenSet = false;

    JobStatus m_status{JobStatus::NOT_SET};
    bool m_statusHasBeenSet = false;

    Aws::Map<Aws::String, Aws::String> m_tags;
    bool m_tagsHasBeenSet = false;

    JobType m_type{JobType::NOT_SET};
    bool m_typeHasBeenSet = false;
  };

} // namespace Model
} // namespace mgn
} // namespace Aws
