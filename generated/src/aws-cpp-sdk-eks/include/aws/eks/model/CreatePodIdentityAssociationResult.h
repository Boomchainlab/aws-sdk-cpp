﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/eks/EKS_EXPORTS.h>
#include <aws/eks/model/PodIdentityAssociation.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
template<typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils
{
namespace Json
{
  class JsonValue;
} // namespace Json
} // namespace Utils
namespace EKS
{
namespace Model
{
  class CreatePodIdentityAssociationResult
  {
  public:
    AWS_EKS_API CreatePodIdentityAssociationResult() = default;
    AWS_EKS_API CreatePodIdentityAssociationResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_EKS_API CreatePodIdentityAssociationResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The full description of your new association.</p> <p>The description includes
     * an ID for the association. Use the ID of the association in further actions to
     * manage the association.</p>
     */
    inline const PodIdentityAssociation& GetAssociation() const { return m_association; }
    template<typename AssociationT = PodIdentityAssociation>
    void SetAssociation(AssociationT&& value) { m_associationHasBeenSet = true; m_association = std::forward<AssociationT>(value); }
    template<typename AssociationT = PodIdentityAssociation>
    CreatePodIdentityAssociationResult& WithAssociation(AssociationT&& value) { SetAssociation(std::forward<AssociationT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    CreatePodIdentityAssociationResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    PodIdentityAssociation m_association;
    bool m_associationHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace EKS
} // namespace Aws
