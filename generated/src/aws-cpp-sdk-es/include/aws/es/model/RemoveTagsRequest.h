﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/es/ElasticsearchService_EXPORTS.h>
#include <aws/es/ElasticsearchServiceRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <utility>

namespace Aws
{
namespace ElasticsearchService
{
namespace Model
{

  /**
   * <p>Container for the parameters to the <code><a>RemoveTags</a></code> operation.
   * Specify the <code>ARN</code> for the Elasticsearch domain from which you want to
   * remove the specified <code>TagKey</code>.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/es-2015-01-01/RemoveTagsRequest">AWS
   * API Reference</a></p>
   */
  class RemoveTagsRequest : public ElasticsearchServiceRequest
  {
  public:
    AWS_ELASTICSEARCHSERVICE_API RemoveTagsRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "RemoveTags"; }

    AWS_ELASTICSEARCHSERVICE_API Aws::String SerializePayload() const override;


    ///@{
    /**
     * <p>Specifies the <code>ARN</code> for the Elasticsearch domain from which you
     * want to delete the specified tags.</p>
     */
    inline const Aws::String& GetARN() const { return m_aRN; }
    inline bool ARNHasBeenSet() const { return m_aRNHasBeenSet; }
    template<typename ARNT = Aws::String>
    void SetARN(ARNT&& value) { m_aRNHasBeenSet = true; m_aRN = std::forward<ARNT>(value); }
    template<typename ARNT = Aws::String>
    RemoveTagsRequest& WithARN(ARNT&& value) { SetARN(std::forward<ARNT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies the <code>TagKey</code> list which you want to remove from the
     * Elasticsearch domain.</p>
     */
    inline const Aws::Vector<Aws::String>& GetTagKeys() const { return m_tagKeys; }
    inline bool TagKeysHasBeenSet() const { return m_tagKeysHasBeenSet; }
    template<typename TagKeysT = Aws::Vector<Aws::String>>
    void SetTagKeys(TagKeysT&& value) { m_tagKeysHasBeenSet = true; m_tagKeys = std::forward<TagKeysT>(value); }
    template<typename TagKeysT = Aws::Vector<Aws::String>>
    RemoveTagsRequest& WithTagKeys(TagKeysT&& value) { SetTagKeys(std::forward<TagKeysT>(value)); return *this;}
    template<typename TagKeysT = Aws::String>
    RemoveTagsRequest& AddTagKeys(TagKeysT&& value) { m_tagKeysHasBeenSet = true; m_tagKeys.emplace_back(std::forward<TagKeysT>(value)); return *this; }
    ///@}
  private:

    Aws::String m_aRN;
    bool m_aRNHasBeenSet = false;

    Aws::Vector<Aws::String> m_tagKeys;
    bool m_tagKeysHasBeenSet = false;
  };

} // namespace Model
} // namespace ElasticsearchService
} // namespace Aws
