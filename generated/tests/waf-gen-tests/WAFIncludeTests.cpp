/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <gtest/gtest.h>
#include <aws/testing/AwsTestHelpers.h>

#include <aws/waf/WAFClient.h>
#include <aws/waf/WAFEndpointProvider.h>
#include <aws/waf/WAFEndpointRules.h>
#include <aws/waf/WAFErrorMarshaller.h>
#include <aws/waf/WAFErrors.h>
#include <aws/waf/WAFRequest.h>
#include <aws/waf/WAFServiceClientModel.h>
#include <aws/waf/WAF_EXPORTS.h>
#include <aws/waf/model/ActivatedRule.h>
#include <aws/waf/model/ByteMatchSet.h>
#include <aws/waf/model/ByteMatchSetSummary.h>
#include <aws/waf/model/ByteMatchSetUpdate.h>
#include <aws/waf/model/ByteMatchTuple.h>
#include <aws/waf/model/ChangeAction.h>
#include <aws/waf/model/ChangeTokenStatus.h>
#include <aws/waf/model/ComparisonOperator.h>
#include <aws/waf/model/CreateByteMatchSetRequest.h>
#include <aws/waf/model/CreateByteMatchSetResult.h>
#include <aws/waf/model/CreateGeoMatchSetRequest.h>
#include <aws/waf/model/CreateGeoMatchSetResult.h>
#include <aws/waf/model/CreateIPSetRequest.h>
#include <aws/waf/model/CreateIPSetResult.h>
#include <aws/waf/model/CreateRateBasedRuleRequest.h>
#include <aws/waf/model/CreateRateBasedRuleResult.h>
#include <aws/waf/model/CreateRegexMatchSetRequest.h>
#include <aws/waf/model/CreateRegexMatchSetResult.h>
#include <aws/waf/model/CreateRegexPatternSetRequest.h>
#include <aws/waf/model/CreateRegexPatternSetResult.h>
#include <aws/waf/model/CreateRuleGroupRequest.h>
#include <aws/waf/model/CreateRuleGroupResult.h>
#include <aws/waf/model/CreateRuleRequest.h>
#include <aws/waf/model/CreateRuleResult.h>
#include <aws/waf/model/CreateSizeConstraintSetRequest.h>
#include <aws/waf/model/CreateSizeConstraintSetResult.h>
#include <aws/waf/model/CreateSqlInjectionMatchSetRequest.h>
#include <aws/waf/model/CreateSqlInjectionMatchSetResult.h>
#include <aws/waf/model/CreateWebACLMigrationStackRequest.h>
#include <aws/waf/model/CreateWebACLMigrationStackResult.h>
#include <aws/waf/model/CreateWebACLRequest.h>
#include <aws/waf/model/CreateWebACLResult.h>
#include <aws/waf/model/CreateXssMatchSetRequest.h>
#include <aws/waf/model/CreateXssMatchSetResult.h>
#include <aws/waf/model/DeleteByteMatchSetRequest.h>
#include <aws/waf/model/DeleteByteMatchSetResult.h>
#include <aws/waf/model/DeleteGeoMatchSetRequest.h>
#include <aws/waf/model/DeleteGeoMatchSetResult.h>
#include <aws/waf/model/DeleteIPSetRequest.h>
#include <aws/waf/model/DeleteIPSetResult.h>
#include <aws/waf/model/DeleteLoggingConfigurationRequest.h>
#include <aws/waf/model/DeleteLoggingConfigurationResult.h>
#include <aws/waf/model/DeletePermissionPolicyRequest.h>
#include <aws/waf/model/DeletePermissionPolicyResult.h>
#include <aws/waf/model/DeleteRateBasedRuleRequest.h>
#include <aws/waf/model/DeleteRateBasedRuleResult.h>
#include <aws/waf/model/DeleteRegexMatchSetRequest.h>
#include <aws/waf/model/DeleteRegexMatchSetResult.h>
#include <aws/waf/model/DeleteRegexPatternSetRequest.h>
#include <aws/waf/model/DeleteRegexPatternSetResult.h>
#include <aws/waf/model/DeleteRuleGroupRequest.h>
#include <aws/waf/model/DeleteRuleGroupResult.h>
#include <aws/waf/model/DeleteRuleRequest.h>
#include <aws/waf/model/DeleteRuleResult.h>
#include <aws/waf/model/DeleteSizeConstraintSetRequest.h>
#include <aws/waf/model/DeleteSizeConstraintSetResult.h>
#include <aws/waf/model/DeleteSqlInjectionMatchSetRequest.h>
#include <aws/waf/model/DeleteSqlInjectionMatchSetResult.h>
#include <aws/waf/model/DeleteWebACLRequest.h>
#include <aws/waf/model/DeleteWebACLResult.h>
#include <aws/waf/model/DeleteXssMatchSetRequest.h>
#include <aws/waf/model/DeleteXssMatchSetResult.h>
#include <aws/waf/model/ExcludedRule.h>
#include <aws/waf/model/FieldToMatch.h>
#include <aws/waf/model/GeoMatchConstraint.h>
#include <aws/waf/model/GeoMatchConstraintType.h>
#include <aws/waf/model/GeoMatchConstraintValue.h>
#include <aws/waf/model/GeoMatchSet.h>
#include <aws/waf/model/GeoMatchSetSummary.h>
#include <aws/waf/model/GeoMatchSetUpdate.h>
#include <aws/waf/model/GetByteMatchSetRequest.h>
#include <aws/waf/model/GetByteMatchSetResult.h>
#include <aws/waf/model/GetChangeTokenRequest.h>
#include <aws/waf/model/GetChangeTokenResult.h>
#include <aws/waf/model/GetChangeTokenStatusRequest.h>
#include <aws/waf/model/GetChangeTokenStatusResult.h>
#include <aws/waf/model/GetGeoMatchSetRequest.h>
#include <aws/waf/model/GetGeoMatchSetResult.h>
#include <aws/waf/model/GetIPSetRequest.h>
#include <aws/waf/model/GetIPSetResult.h>
#include <aws/waf/model/GetLoggingConfigurationRequest.h>
#include <aws/waf/model/GetLoggingConfigurationResult.h>
#include <aws/waf/model/GetPermissionPolicyRequest.h>
#include <aws/waf/model/GetPermissionPolicyResult.h>
#include <aws/waf/model/GetRateBasedRuleManagedKeysRequest.h>
#include <aws/waf/model/GetRateBasedRuleManagedKeysResult.h>
#include <aws/waf/model/GetRateBasedRuleRequest.h>
#include <aws/waf/model/GetRateBasedRuleResult.h>
#include <aws/waf/model/GetRegexMatchSetRequest.h>
#include <aws/waf/model/GetRegexMatchSetResult.h>
#include <aws/waf/model/GetRegexPatternSetRequest.h>
#include <aws/waf/model/GetRegexPatternSetResult.h>
#include <aws/waf/model/GetRuleGroupRequest.h>
#include <aws/waf/model/GetRuleGroupResult.h>
#include <aws/waf/model/GetRuleRequest.h>
#include <aws/waf/model/GetRuleResult.h>
#include <aws/waf/model/GetSampledRequestsRequest.h>
#include <aws/waf/model/GetSampledRequestsResult.h>
#include <aws/waf/model/GetSizeConstraintSetRequest.h>
#include <aws/waf/model/GetSizeConstraintSetResult.h>
#include <aws/waf/model/GetSqlInjectionMatchSetRequest.h>
#include <aws/waf/model/GetSqlInjectionMatchSetResult.h>
#include <aws/waf/model/GetWebACLRequest.h>
#include <aws/waf/model/GetWebACLResult.h>
#include <aws/waf/model/GetXssMatchSetRequest.h>
#include <aws/waf/model/GetXssMatchSetResult.h>
#include <aws/waf/model/HTTPHeader.h>
#include <aws/waf/model/HTTPRequest.h>
#include <aws/waf/model/IPSet.h>
#include <aws/waf/model/IPSetDescriptor.h>
#include <aws/waf/model/IPSetDescriptorType.h>
#include <aws/waf/model/IPSetSummary.h>
#include <aws/waf/model/IPSetUpdate.h>
#include <aws/waf/model/ListActivatedRulesInRuleGroupRequest.h>
#include <aws/waf/model/ListActivatedRulesInRuleGroupResult.h>
#include <aws/waf/model/ListByteMatchSetsRequest.h>
#include <aws/waf/model/ListByteMatchSetsResult.h>
#include <aws/waf/model/ListGeoMatchSetsRequest.h>
#include <aws/waf/model/ListGeoMatchSetsResult.h>
#include <aws/waf/model/ListIPSetsRequest.h>
#include <aws/waf/model/ListIPSetsResult.h>
#include <aws/waf/model/ListLoggingConfigurationsRequest.h>
#include <aws/waf/model/ListLoggingConfigurationsResult.h>
#include <aws/waf/model/ListRateBasedRulesRequest.h>
#include <aws/waf/model/ListRateBasedRulesResult.h>
#include <aws/waf/model/ListRegexMatchSetsRequest.h>
#include <aws/waf/model/ListRegexMatchSetsResult.h>
#include <aws/waf/model/ListRegexPatternSetsRequest.h>
#include <aws/waf/model/ListRegexPatternSetsResult.h>
#include <aws/waf/model/ListRuleGroupsRequest.h>
#include <aws/waf/model/ListRuleGroupsResult.h>
#include <aws/waf/model/ListRulesRequest.h>
#include <aws/waf/model/ListRulesResult.h>
#include <aws/waf/model/ListSizeConstraintSetsRequest.h>
#include <aws/waf/model/ListSizeConstraintSetsResult.h>
#include <aws/waf/model/ListSqlInjectionMatchSetsRequest.h>
#include <aws/waf/model/ListSqlInjectionMatchSetsResult.h>
#include <aws/waf/model/ListSubscribedRuleGroupsRequest.h>
#include <aws/waf/model/ListSubscribedRuleGroupsResult.h>
#include <aws/waf/model/ListTagsForResourceRequest.h>
#include <aws/waf/model/ListTagsForResourceResult.h>
#include <aws/waf/model/ListWebACLsRequest.h>
#include <aws/waf/model/ListWebACLsResult.h>
#include <aws/waf/model/ListXssMatchSetsRequest.h>
#include <aws/waf/model/ListXssMatchSetsResult.h>
#include <aws/waf/model/LoggingConfiguration.h>
#include <aws/waf/model/MatchFieldType.h>
#include <aws/waf/model/MigrationErrorType.h>
#include <aws/waf/model/ParameterExceptionField.h>
#include <aws/waf/model/ParameterExceptionReason.h>
#include <aws/waf/model/PositionalConstraint.h>
#include <aws/waf/model/Predicate.h>
#include <aws/waf/model/PredicateType.h>
#include <aws/waf/model/PutLoggingConfigurationRequest.h>
#include <aws/waf/model/PutLoggingConfigurationResult.h>
#include <aws/waf/model/PutPermissionPolicyRequest.h>
#include <aws/waf/model/PutPermissionPolicyResult.h>
#include <aws/waf/model/RateBasedRule.h>
#include <aws/waf/model/RateKey.h>
#include <aws/waf/model/RegexMatchSet.h>
#include <aws/waf/model/RegexMatchSetSummary.h>
#include <aws/waf/model/RegexMatchSetUpdate.h>
#include <aws/waf/model/RegexMatchTuple.h>
#include <aws/waf/model/RegexPatternSet.h>
#include <aws/waf/model/RegexPatternSetSummary.h>
#include <aws/waf/model/RegexPatternSetUpdate.h>
#include <aws/waf/model/Rule.h>
#include <aws/waf/model/RuleGroup.h>
#include <aws/waf/model/RuleGroupSummary.h>
#include <aws/waf/model/RuleGroupUpdate.h>
#include <aws/waf/model/RuleSummary.h>
#include <aws/waf/model/RuleUpdate.h>
#include <aws/waf/model/SampledHTTPRequest.h>
#include <aws/waf/model/SizeConstraint.h>
#include <aws/waf/model/SizeConstraintSet.h>
#include <aws/waf/model/SizeConstraintSetSummary.h>
#include <aws/waf/model/SizeConstraintSetUpdate.h>
#include <aws/waf/model/SqlInjectionMatchSet.h>
#include <aws/waf/model/SqlInjectionMatchSetSummary.h>
#include <aws/waf/model/SqlInjectionMatchSetUpdate.h>
#include <aws/waf/model/SqlInjectionMatchTuple.h>
#include <aws/waf/model/SubscribedRuleGroupSummary.h>
#include <aws/waf/model/Tag.h>
#include <aws/waf/model/TagInfoForResource.h>
#include <aws/waf/model/TagResourceRequest.h>
#include <aws/waf/model/TagResourceResult.h>
#include <aws/waf/model/TextTransformation.h>
#include <aws/waf/model/TimeWindow.h>
#include <aws/waf/model/UntagResourceRequest.h>
#include <aws/waf/model/UntagResourceResult.h>
#include <aws/waf/model/UpdateByteMatchSetRequest.h>
#include <aws/waf/model/UpdateByteMatchSetResult.h>
#include <aws/waf/model/UpdateGeoMatchSetRequest.h>
#include <aws/waf/model/UpdateGeoMatchSetResult.h>
#include <aws/waf/model/UpdateIPSetRequest.h>
#include <aws/waf/model/UpdateIPSetResult.h>
#include <aws/waf/model/UpdateRateBasedRuleRequest.h>
#include <aws/waf/model/UpdateRateBasedRuleResult.h>
#include <aws/waf/model/UpdateRegexMatchSetRequest.h>
#include <aws/waf/model/UpdateRegexMatchSetResult.h>
#include <aws/waf/model/UpdateRegexPatternSetRequest.h>
#include <aws/waf/model/UpdateRegexPatternSetResult.h>
#include <aws/waf/model/UpdateRuleGroupRequest.h>
#include <aws/waf/model/UpdateRuleGroupResult.h>
#include <aws/waf/model/UpdateRuleRequest.h>
#include <aws/waf/model/UpdateRuleResult.h>
#include <aws/waf/model/UpdateSizeConstraintSetRequest.h>
#include <aws/waf/model/UpdateSizeConstraintSetResult.h>
#include <aws/waf/model/UpdateSqlInjectionMatchSetRequest.h>
#include <aws/waf/model/UpdateSqlInjectionMatchSetResult.h>
#include <aws/waf/model/UpdateWebACLRequest.h>
#include <aws/waf/model/UpdateWebACLResult.h>
#include <aws/waf/model/UpdateXssMatchSetRequest.h>
#include <aws/waf/model/UpdateXssMatchSetResult.h>
#include <aws/waf/model/WAFEntityMigrationException.h>
#include <aws/waf/model/WAFInvalidParameterException.h>
#include <aws/waf/model/WafAction.h>
#include <aws/waf/model/WafActionType.h>
#include <aws/waf/model/WafOverrideAction.h>
#include <aws/waf/model/WafOverrideActionType.h>
#include <aws/waf/model/WafRuleType.h>
#include <aws/waf/model/WebACL.h>
#include <aws/waf/model/WebACLSummary.h>
#include <aws/waf/model/WebACLUpdate.h>
#include <aws/waf/model/XssMatchSet.h>
#include <aws/waf/model/XssMatchSetSummary.h>
#include <aws/waf/model/XssMatchSetUpdate.h>
#include <aws/waf/model/XssMatchTuple.h>

using WAFIncludeTest = ::testing::Test;

TEST_F(WAFIncludeTest, TestClientCompiles)
{
  Aws::Client::ClientConfigurationInitValues cfgInit;
  cfgInit.shouldDisableIMDS = true;
  Aws::Client::ClientConfiguration config(cfgInit);
  AWS_UNREFERENCED_PARAM(config);
  // auto pClient = Aws::MakeUnique<Aws::WAF::WAFClient>("WAFIncludeTest", config);
  // ASSERT_TRUE(pClient.get());
}
