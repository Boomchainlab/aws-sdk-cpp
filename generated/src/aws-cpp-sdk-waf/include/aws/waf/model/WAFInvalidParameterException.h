﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/waf/WAF_EXPORTS.h>
#include <aws/waf/model/ParameterExceptionField.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/waf/model/ParameterExceptionReason.h>
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
namespace WAF
{
namespace Model
{

  /**
   * <p>The operation failed because AWS WAF didn't recognize a parameter in the
   * request. For example:</p> <ul> <li> <p>You specified an invalid parameter
   * name.</p> </li> <li> <p>You specified an invalid value.</p> </li> <li> <p>You
   * tried to update an object (<code>ByteMatchSet</code>, <code>IPSet</code>,
   * <code>Rule</code>, or <code>WebACL</code>) using an action other than
   * <code>INSERT</code> or <code>DELETE</code>.</p> </li> <li> <p>You tried to
   * create a <code>WebACL</code> with a <code>DefaultAction</code> <code>Type</code>
   * other than <code>ALLOW</code>, <code>BLOCK</code>, or <code>COUNT</code>.</p>
   * </li> <li> <p>You tried to create a <code>RateBasedRule</code> with a
   * <code>RateKey</code> value other than <code>IP</code>.</p> </li> <li> <p>You
   * tried to update a <code>WebACL</code> with a <code>WafAction</code>
   * <code>Type</code> other than <code>ALLOW</code>, <code>BLOCK</code>, or
   * <code>COUNT</code>.</p> </li> <li> <p>You tried to update a
   * <code>ByteMatchSet</code> with a <code>FieldToMatch</code> <code>Type</code>
   * other than HEADER, METHOD, QUERY_STRING, URI, or BODY.</p> </li> <li> <p>You
   * tried to update a <code>ByteMatchSet</code> with a <code>Field</code> of
   * <code>HEADER</code> but no value for <code>Data</code>.</p> </li> <li> <p>Your
   * request references an ARN that is malformed, or corresponds to a resource with
   * which a web ACL cannot be associated.</p> </li> </ul><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/waf-2015-08-24/WAFInvalidParameterException">AWS
   * API Reference</a></p>
   */
  class WAFInvalidParameterException
  {
  public:
    AWS_WAF_API WAFInvalidParameterException() = default;
    AWS_WAF_API WAFInvalidParameterException(Aws::Utils::Json::JsonView jsonValue);
    AWS_WAF_API WAFInvalidParameterException& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_WAF_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    
    inline ParameterExceptionField GetField() const { return m_field; }
    inline bool FieldHasBeenSet() const { return m_fieldHasBeenSet; }
    inline void SetField(ParameterExceptionField value) { m_fieldHasBeenSet = true; m_field = value; }
    inline WAFInvalidParameterException& WithField(ParameterExceptionField value) { SetField(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetParameter() const { return m_parameter; }
    inline bool ParameterHasBeenSet() const { return m_parameterHasBeenSet; }
    template<typename ParameterT = Aws::String>
    void SetParameter(ParameterT&& value) { m_parameterHasBeenSet = true; m_parameter = std::forward<ParameterT>(value); }
    template<typename ParameterT = Aws::String>
    WAFInvalidParameterException& WithParameter(ParameterT&& value) { SetParameter(std::forward<ParameterT>(value)); return *this;}
    ///@}

    ///@{
    
    inline ParameterExceptionReason GetReason() const { return m_reason; }
    inline bool ReasonHasBeenSet() const { return m_reasonHasBeenSet; }
    inline void SetReason(ParameterExceptionReason value) { m_reasonHasBeenSet = true; m_reason = value; }
    inline WAFInvalidParameterException& WithReason(ParameterExceptionReason value) { SetReason(value); return *this;}
    ///@}
  private:

    ParameterExceptionField m_field{ParameterExceptionField::NOT_SET};
    bool m_fieldHasBeenSet = false;

    Aws::String m_parameter;
    bool m_parameterHasBeenSet = false;

    ParameterExceptionReason m_reason{ParameterExceptionReason::NOT_SET};
    bool m_reasonHasBeenSet = false;
  };

} // namespace Model
} // namespace WAF
} // namespace Aws
