﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/databrew/GlueDataBrew_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/databrew/model/ValidationMode.h>
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
namespace GlueDataBrew
{
namespace Model
{

  /**
   * <p>Configuration for data quality validation. Used to select the Rulesets and
   * Validation Mode to be used in the profile job. When ValidationConfiguration is
   * null, the profile job will run without data quality validation.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/databrew-2017-07-25/ValidationConfiguration">AWS
   * API Reference</a></p>
   */
  class ValidationConfiguration
  {
  public:
    AWS_GLUEDATABREW_API ValidationConfiguration() = default;
    AWS_GLUEDATABREW_API ValidationConfiguration(Aws::Utils::Json::JsonView jsonValue);
    AWS_GLUEDATABREW_API ValidationConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_GLUEDATABREW_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) for the ruleset to be validated in the profile
     * job. The TargetArn of the selected ruleset should be the same as the Amazon
     * Resource Name (ARN) of the dataset that is associated with the profile job.</p>
     */
    inline const Aws::String& GetRulesetArn() const { return m_rulesetArn; }
    inline bool RulesetArnHasBeenSet() const { return m_rulesetArnHasBeenSet; }
    template<typename RulesetArnT = Aws::String>
    void SetRulesetArn(RulesetArnT&& value) { m_rulesetArnHasBeenSet = true; m_rulesetArn = std::forward<RulesetArnT>(value); }
    template<typename RulesetArnT = Aws::String>
    ValidationConfiguration& WithRulesetArn(RulesetArnT&& value) { SetRulesetArn(std::forward<RulesetArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Mode of data quality validation. Default mode is “CHECK_ALL” which verifies
     * all rules defined in the selected ruleset.</p>
     */
    inline ValidationMode GetValidationMode() const { return m_validationMode; }
    inline bool ValidationModeHasBeenSet() const { return m_validationModeHasBeenSet; }
    inline void SetValidationMode(ValidationMode value) { m_validationModeHasBeenSet = true; m_validationMode = value; }
    inline ValidationConfiguration& WithValidationMode(ValidationMode value) { SetValidationMode(value); return *this;}
    ///@}
  private:

    Aws::String m_rulesetArn;
    bool m_rulesetArnHasBeenSet = false;

    ValidationMode m_validationMode{ValidationMode::NOT_SET};
    bool m_validationModeHasBeenSet = false;
  };

} // namespace Model
} // namespace GlueDataBrew
} // namespace Aws
