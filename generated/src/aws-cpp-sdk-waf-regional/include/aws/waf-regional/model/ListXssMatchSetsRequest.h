﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/waf-regional/WAFRegional_EXPORTS.h>
#include <aws/waf-regional/WAFRegionalRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace WAFRegional
{
namespace Model
{

  /**
   * <p>A request to list the <a>XssMatchSet</a> objects created by the current AWS
   * account.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/waf-regional-2016-11-28/ListXssMatchSetsRequest">AWS
   * API Reference</a></p>
   */
  class ListXssMatchSetsRequest : public WAFRegionalRequest
  {
  public:
    AWS_WAFREGIONAL_API ListXssMatchSetsRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "ListXssMatchSets"; }

    AWS_WAFREGIONAL_API Aws::String SerializePayload() const override;

    AWS_WAFREGIONAL_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p>If you specify a value for <code>Limit</code> and you have more
     * <a>XssMatchSet</a> objects than the value of <code>Limit</code>, AWS WAF returns
     * a <code>NextMarker</code> value in the response that allows you to list another
     * group of <code>XssMatchSets</code>. For the second and subsequent
     * <code>ListXssMatchSets</code> requests, specify the value of
     * <code>NextMarker</code> from the previous response to get information about
     * another batch of <code>XssMatchSets</code>.</p>
     */
    inline const Aws::String& GetNextMarker() const { return m_nextMarker; }
    inline bool NextMarkerHasBeenSet() const { return m_nextMarkerHasBeenSet; }
    template<typename NextMarkerT = Aws::String>
    void SetNextMarker(NextMarkerT&& value) { m_nextMarkerHasBeenSet = true; m_nextMarker = std::forward<NextMarkerT>(value); }
    template<typename NextMarkerT = Aws::String>
    ListXssMatchSetsRequest& WithNextMarker(NextMarkerT&& value) { SetNextMarker(std::forward<NextMarkerT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies the number of <a>XssMatchSet</a> objects that you want AWS WAF to
     * return for this request. If you have more <code>XssMatchSet</code> objects than
     * the number you specify for <code>Limit</code>, the response includes a
     * <code>NextMarker</code> value that you can use to get another batch of
     * <code>Rules</code>.</p>
     */
    inline int GetLimit() const { return m_limit; }
    inline bool LimitHasBeenSet() const { return m_limitHasBeenSet; }
    inline void SetLimit(int value) { m_limitHasBeenSet = true; m_limit = value; }
    inline ListXssMatchSetsRequest& WithLimit(int value) { SetLimit(value); return *this;}
    ///@}
  private:

    Aws::String m_nextMarker;
    bool m_nextMarkerHasBeenSet = false;

    int m_limit{0};
    bool m_limitHasBeenSet = false;
  };

} // namespace Model
} // namespace WAFRegional
} // namespace Aws
