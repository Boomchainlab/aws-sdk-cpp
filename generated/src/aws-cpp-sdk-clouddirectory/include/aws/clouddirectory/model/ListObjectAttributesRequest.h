﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/clouddirectory/CloudDirectory_EXPORTS.h>
#include <aws/clouddirectory/CloudDirectoryRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/clouddirectory/model/ObjectReference.h>
#include <aws/clouddirectory/model/ConsistencyLevel.h>
#include <aws/clouddirectory/model/SchemaFacet.h>
#include <utility>

namespace Aws
{
namespace CloudDirectory
{
namespace Model
{

  /**
   */
  class ListObjectAttributesRequest : public CloudDirectoryRequest
  {
  public:
    AWS_CLOUDDIRECTORY_API ListObjectAttributesRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "ListObjectAttributes"; }

    AWS_CLOUDDIRECTORY_API Aws::String SerializePayload() const override;

    AWS_CLOUDDIRECTORY_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) that is associated with the <a>Directory</a>
     * where the object resides. For more information, see <a>arns</a>.</p>
     */
    inline const Aws::String& GetDirectoryArn() const { return m_directoryArn; }
    inline bool DirectoryArnHasBeenSet() const { return m_directoryArnHasBeenSet; }
    template<typename DirectoryArnT = Aws::String>
    void SetDirectoryArn(DirectoryArnT&& value) { m_directoryArnHasBeenSet = true; m_directoryArn = std::forward<DirectoryArnT>(value); }
    template<typename DirectoryArnT = Aws::String>
    ListObjectAttributesRequest& WithDirectoryArn(DirectoryArnT&& value) { SetDirectoryArn(std::forward<DirectoryArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The reference that identifies the object whose attributes will be listed.</p>
     */
    inline const ObjectReference& GetObjectReference() const { return m_objectReference; }
    inline bool ObjectReferenceHasBeenSet() const { return m_objectReferenceHasBeenSet; }
    template<typename ObjectReferenceT = ObjectReference>
    void SetObjectReference(ObjectReferenceT&& value) { m_objectReferenceHasBeenSet = true; m_objectReference = std::forward<ObjectReferenceT>(value); }
    template<typename ObjectReferenceT = ObjectReference>
    ListObjectAttributesRequest& WithObjectReference(ObjectReferenceT&& value) { SetObjectReference(std::forward<ObjectReferenceT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The pagination token.</p>
     */
    inline const Aws::String& GetNextToken() const { return m_nextToken; }
    inline bool NextTokenHasBeenSet() const { return m_nextTokenHasBeenSet; }
    template<typename NextTokenT = Aws::String>
    void SetNextToken(NextTokenT&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::forward<NextTokenT>(value); }
    template<typename NextTokenT = Aws::String>
    ListObjectAttributesRequest& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The maximum number of items to be retrieved in a single call. This is an
     * approximate number.</p>
     */
    inline int GetMaxResults() const { return m_maxResults; }
    inline bool MaxResultsHasBeenSet() const { return m_maxResultsHasBeenSet; }
    inline void SetMaxResults(int value) { m_maxResultsHasBeenSet = true; m_maxResults = value; }
    inline ListObjectAttributesRequest& WithMaxResults(int value) { SetMaxResults(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Represents the manner and timing in which the successful write or update of
     * an object is reflected in a subsequent read operation of that same object.</p>
     */
    inline ConsistencyLevel GetConsistencyLevel() const { return m_consistencyLevel; }
    inline bool ConsistencyLevelHasBeenSet() const { return m_consistencyLevelHasBeenSet; }
    inline void SetConsistencyLevel(ConsistencyLevel value) { m_consistencyLevelHasBeenSet = true; m_consistencyLevel = value; }
    inline ListObjectAttributesRequest& WithConsistencyLevel(ConsistencyLevel value) { SetConsistencyLevel(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Used to filter the list of object attributes that are associated with a
     * certain facet.</p>
     */
    inline const SchemaFacet& GetFacetFilter() const { return m_facetFilter; }
    inline bool FacetFilterHasBeenSet() const { return m_facetFilterHasBeenSet; }
    template<typename FacetFilterT = SchemaFacet>
    void SetFacetFilter(FacetFilterT&& value) { m_facetFilterHasBeenSet = true; m_facetFilter = std::forward<FacetFilterT>(value); }
    template<typename FacetFilterT = SchemaFacet>
    ListObjectAttributesRequest& WithFacetFilter(FacetFilterT&& value) { SetFacetFilter(std::forward<FacetFilterT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_directoryArn;
    bool m_directoryArnHasBeenSet = false;

    ObjectReference m_objectReference;
    bool m_objectReferenceHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    int m_maxResults{0};
    bool m_maxResultsHasBeenSet = false;

    ConsistencyLevel m_consistencyLevel{ConsistencyLevel::NOT_SET};
    bool m_consistencyLevelHasBeenSet = false;

    SchemaFacet m_facetFilter;
    bool m_facetFilterHasBeenSet = false;
  };

} // namespace Model
} // namespace CloudDirectory
} // namespace Aws
