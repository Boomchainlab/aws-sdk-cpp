﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/s3-crt/S3Crt_EXPORTS.h>
#include <aws/s3-crt/model/Condition.h>
#include <aws/s3-crt/model/Redirect.h>
#include <utility>

namespace Aws
{
namespace Utils
{
namespace Xml
{
  class XmlNode;
} // namespace Xml
} // namespace Utils
namespace S3Crt
{
namespace Model
{

  /**
   * <p>Specifies the redirect behavior and when a redirect is applied. For more
   * information about routing rules, see <a
   * href="https://docs.aws.amazon.com/AmazonS3/latest/dev/how-to-page-redirect.html#advanced-conditional-redirects">Configuring
   * advanced conditional redirects</a> in the <i>Amazon S3 User
   * Guide</i>.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/s3-2006-03-01/RoutingRule">AWS API
   * Reference</a></p>
   */
  class RoutingRule
  {
  public:
    AWS_S3CRT_API RoutingRule() = default;
    AWS_S3CRT_API RoutingRule(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_S3CRT_API RoutingRule& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    AWS_S3CRT_API void AddToNode(Aws::Utils::Xml::XmlNode& parentNode) const;


    ///@{
    /**
     * <p>A container for describing a condition that must be met for the specified
     * redirect to apply. For example, 1. If request is for pages in the
     * <code>/docs</code> folder, redirect to the <code>/documents</code> folder. 2. If
     * request results in HTTP error 4xx, redirect request to another host where you
     * might process the error.</p>
     */
    inline const Condition& GetCondition() const { return m_condition; }
    inline bool ConditionHasBeenSet() const { return m_conditionHasBeenSet; }
    template<typename ConditionT = Condition>
    void SetCondition(ConditionT&& value) { m_conditionHasBeenSet = true; m_condition = std::forward<ConditionT>(value); }
    template<typename ConditionT = Condition>
    RoutingRule& WithCondition(ConditionT&& value) { SetCondition(std::forward<ConditionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Container for redirect information. You can redirect requests to another
     * host, to another page, or with another protocol. In the event of an error, you
     * can specify a different error code to return.</p>
     */
    inline const Redirect& GetRedirect() const { return m_redirect; }
    inline bool RedirectHasBeenSet() const { return m_redirectHasBeenSet; }
    template<typename RedirectT = Redirect>
    void SetRedirect(RedirectT&& value) { m_redirectHasBeenSet = true; m_redirect = std::forward<RedirectT>(value); }
    template<typename RedirectT = Redirect>
    RoutingRule& WithRedirect(RedirectT&& value) { SetRedirect(std::forward<RedirectT>(value)); return *this;}
    ///@}
  private:

    Condition m_condition;
    bool m_conditionHasBeenSet = false;

    Redirect m_redirect;
    bool m_redirectHasBeenSet = false;
  };

} // namespace Model
} // namespace S3Crt
} // namespace Aws
