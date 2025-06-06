﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/swf/SWF_EXPORTS.h>
#include <aws/swf/model/DecisionType.h>
#include <aws/swf/model/ScheduleActivityTaskDecisionAttributes.h>
#include <aws/swf/model/RequestCancelActivityTaskDecisionAttributes.h>
#include <aws/swf/model/CompleteWorkflowExecutionDecisionAttributes.h>
#include <aws/swf/model/FailWorkflowExecutionDecisionAttributes.h>
#include <aws/swf/model/CancelWorkflowExecutionDecisionAttributes.h>
#include <aws/swf/model/ContinueAsNewWorkflowExecutionDecisionAttributes.h>
#include <aws/swf/model/RecordMarkerDecisionAttributes.h>
#include <aws/swf/model/StartTimerDecisionAttributes.h>
#include <aws/swf/model/CancelTimerDecisionAttributes.h>
#include <aws/swf/model/SignalExternalWorkflowExecutionDecisionAttributes.h>
#include <aws/swf/model/RequestCancelExternalWorkflowExecutionDecisionAttributes.h>
#include <aws/swf/model/StartChildWorkflowExecutionDecisionAttributes.h>
#include <aws/swf/model/ScheduleLambdaFunctionDecisionAttributes.h>
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
namespace SWF
{
namespace Model
{

  /**
   * <p>Specifies a decision made by the decider. A decision can be one of these
   * types:</p> <ul> <li> <p> <code>CancelTimer</code> – Cancels a previously started
   * timer and records a <code>TimerCanceled</code> event in the history.</p> </li>
   * <li> <p> <code>CancelWorkflowExecution</code> – Closes the workflow execution
   * and records a <code>WorkflowExecutionCanceled</code> event in the history.</p>
   * </li> <li> <p> <code>CompleteWorkflowExecution</code> – Closes the workflow
   * execution and records a <code>WorkflowExecutionCompleted</code> event in the
   * history .</p> </li> <li> <p> <code>ContinueAsNewWorkflowExecution</code> –
   * Closes the workflow execution and starts a new workflow execution of the same
   * type using the same workflow ID and a unique run Id. A
   * <code>WorkflowExecutionContinuedAsNew</code> event is recorded in the
   * history.</p> </li> <li> <p> <code>FailWorkflowExecution</code> – Closes the
   * workflow execution and records a <code>WorkflowExecutionFailed</code> event in
   * the history.</p> </li> <li> <p> <code>RecordMarker</code> – Records a
   * <code>MarkerRecorded</code> event in the history. Markers can be used for adding
   * custom information in the history for instance to let deciders know that they
   * don't need to look at the history beyond the marker event.</p> </li> <li> <p>
   * <code>RequestCancelActivityTask</code> – Attempts to cancel a previously
   * scheduled activity task. If the activity task was scheduled but has not been
   * assigned to a worker, then it is canceled. If the activity task was already
   * assigned to a worker, then the worker is informed that cancellation has been
   * requested in the response to <a>RecordActivityTaskHeartbeat</a>.</p> </li> <li>
   * <p> <code>RequestCancelExternalWorkflowExecution</code> – Requests that a
   * request be made to cancel the specified external workflow execution and records
   * a <code>RequestCancelExternalWorkflowExecutionInitiated</code> event in the
   * history.</p> </li> <li> <p> <code>ScheduleActivityTask</code> – Schedules an
   * activity task.</p> </li> <li> <p> <code>SignalExternalWorkflowExecution</code> –
   * Requests a signal to be delivered to the specified external workflow execution
   * and records a <code>SignalExternalWorkflowExecutionInitiated</code> event in the
   * history.</p> </li> <li> <p> <code>StartChildWorkflowExecution</code> – Requests
   * that a child workflow execution be started and records a
   * <code>StartChildWorkflowExecutionInitiated</code> event in the history. The
   * child workflow execution is a separate workflow execution with its own
   * history.</p> </li> <li> <p> <code>StartTimer</code> – Starts a timer for this
   * workflow execution and records a <code>TimerStarted</code> event in the history.
   * This timer fires after the specified delay and record a <code>TimerFired</code>
   * event.</p> </li> </ul> <p> <b>Access Control</b> </p> <p>If you grant permission
   * to use <code>RespondDecisionTaskCompleted</code>, you can use IAM policies to
   * express permissions for the list of decisions returned by this action as if they
   * were members of the API. Treating decisions as a pseudo API maintains a uniform
   * conceptual model and helps keep policies readable. For details and example IAM
   * policies, see <a
   * href="https://docs.aws.amazon.com/amazonswf/latest/developerguide/swf-dev-iam.html">Using
   * IAM to Manage Access to Amazon SWF Workflows</a> in the <i>Amazon SWF Developer
   * Guide</i>.</p> <p> <b>Decision Failure</b> </p> <p>Decisions can fail for
   * several reasons</p> <ul> <li> <p>The ordering of decisions should follow a
   * logical flow. Some decisions might not make sense in the current context of the
   * workflow execution and therefore fails.</p> </li> <li> <p>A limit on your
   * account was reached.</p> </li> <li> <p>The decision lacks sufficient
   * permissions.</p> </li> </ul> <p>One of the following events might be added to
   * the history to indicate an error. The event attribute's <code>cause</code>
   * parameter indicates the cause. If <code>cause</code> is set to
   * <code>OPERATION_NOT_PERMITTED</code>, the decision failed because it lacked
   * sufficient permissions. For details and example IAM policies, see <a
   * href="https://docs.aws.amazon.com/amazonswf/latest/developerguide/swf-dev-iam.html">Using
   * IAM to Manage Access to Amazon SWF Workflows</a> in the <i>Amazon SWF Developer
   * Guide</i>.</p> <ul> <li> <p> <code>ScheduleActivityTaskFailed</code> – A
   * <code>ScheduleActivityTask</code> decision failed. This could happen if the
   * activity type specified in the decision isn't registered, is in a deprecated
   * state, or the decision isn't properly configured.</p> </li> <li> <p>
   * <code>RequestCancelActivityTaskFailed</code> – A
   * <code>RequestCancelActivityTask</code> decision failed. This could happen if
   * there is no open activity task with the specified activityId.</p> </li> <li> <p>
   * <code>StartTimerFailed</code> – A <code>StartTimer</code> decision failed. This
   * could happen if there is another open timer with the same timerId.</p> </li>
   * <li> <p> <code>CancelTimerFailed</code> – A <code>CancelTimer</code> decision
   * failed. This could happen if there is no open timer with the specified
   * timerId.</p> </li> <li> <p> <code>StartChildWorkflowExecutionFailed</code> – A
   * <code>StartChildWorkflowExecution</code> decision failed. This could happen if
   * the workflow type specified isn't registered, is deprecated, or the decision
   * isn't properly configured.</p> </li> <li> <p>
   * <code>SignalExternalWorkflowExecutionFailed</code> – A
   * <code>SignalExternalWorkflowExecution</code> decision failed. This could happen
   * if the <code>workflowID</code> specified in the decision was incorrect.</p>
   * </li> <li> <p> <code>RequestCancelExternalWorkflowExecutionFailed</code> – A
   * <code>RequestCancelExternalWorkflowExecution</code> decision failed. This could
   * happen if the <code>workflowID</code> specified in the decision was
   * incorrect.</p> </li> <li> <p> <code>CancelWorkflowExecutionFailed</code> – A
   * <code>CancelWorkflowExecution</code> decision failed. This could happen if there
   * is an unhandled decision task pending in the workflow execution.</p> </li> <li>
   * <p> <code>CompleteWorkflowExecutionFailed</code> – A
   * <code>CompleteWorkflowExecution</code> decision failed. This could happen if
   * there is an unhandled decision task pending in the workflow execution.</p> </li>
   * <li> <p> <code>ContinueAsNewWorkflowExecutionFailed</code> – A
   * <code>ContinueAsNewWorkflowExecution</code> decision failed. This could happen
   * if there is an unhandled decision task pending in the workflow execution or the
   * ContinueAsNewWorkflowExecution decision was not configured correctly.</p> </li>
   * <li> <p> <code>FailWorkflowExecutionFailed</code> – A
   * <code>FailWorkflowExecution</code> decision failed. This could happen if there
   * is an unhandled decision task pending in the workflow execution.</p> </li> </ul>
   * <p>The preceding error events might occur due to an error in the decider logic,
   * which might put the workflow execution in an unstable state The cause field in
   * the event structure for the error event indicates the cause of the error.</p>
   *  <p>A workflow execution may be closed by the decider by returning one of
   * the following decisions when completing a decision task:
   * <code>CompleteWorkflowExecution</code>, <code>FailWorkflowExecution</code>,
   * <code>CancelWorkflowExecution</code> and
   * <code>ContinueAsNewWorkflowExecution</code>. An <code>UnhandledDecision</code>
   * fault is returned if a workflow closing decision is specified and a signal or
   * activity event had been added to the history while the decision task was being
   * performed by the decider. Unlike the above situations which are logic issues,
   * this fault is always possible because of race conditions in a distributed
   * system. The right action here is to call <a>RespondDecisionTaskCompleted</a>
   * without any decisions. This would result in another decision task with these new
   * events included in the history. The decider should handle the new events and may
   * decide to close the workflow execution.</p>  <p> <b>How to Code a
   * Decision</b> </p> <p>You code a decision by first setting the decision type
   * field to one of the above decision values, and then set the corresponding
   * attributes field shown below:</p> <ul> <li> <p> <code>
   * <a>ScheduleActivityTaskDecisionAttributes</a> </code> </p> </li> <li> <p> <code>
   * <a>RequestCancelActivityTaskDecisionAttributes</a> </code> </p> </li> <li> <p>
   * <code> <a>CompleteWorkflowExecutionDecisionAttributes</a> </code> </p> </li>
   * <li> <p> <code> <a>FailWorkflowExecutionDecisionAttributes</a> </code> </p>
   * </li> <li> <p> <code> <a>CancelWorkflowExecutionDecisionAttributes</a> </code>
   * </p> </li> <li> <p> <code>
   * <a>ContinueAsNewWorkflowExecutionDecisionAttributes</a> </code> </p> </li> <li>
   * <p> <code> <a>RecordMarkerDecisionAttributes</a> </code> </p> </li> <li> <p>
   * <code> <a>StartTimerDecisionAttributes</a> </code> </p> </li> <li> <p> <code>
   * <a>CancelTimerDecisionAttributes</a> </code> </p> </li> <li> <p> <code>
   * <a>SignalExternalWorkflowExecutionDecisionAttributes</a> </code> </p> </li> <li>
   * <p> <code> <a>RequestCancelExternalWorkflowExecutionDecisionAttributes</a>
   * </code> </p> </li> <li> <p> <code>
   * <a>StartChildWorkflowExecutionDecisionAttributes</a> </code> </p> </li>
   * </ul><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/swf-2012-01-25/Decision">AWS API
   * Reference</a></p>
   */
  class Decision
  {
  public:
    AWS_SWF_API Decision() = default;
    AWS_SWF_API Decision(Aws::Utils::Json::JsonView jsonValue);
    AWS_SWF_API Decision& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SWF_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Specifies the type of the decision.</p>
     */
    inline DecisionType GetDecisionType() const { return m_decisionType; }
    inline bool DecisionTypeHasBeenSet() const { return m_decisionTypeHasBeenSet; }
    inline void SetDecisionType(DecisionType value) { m_decisionTypeHasBeenSet = true; m_decisionType = value; }
    inline Decision& WithDecisionType(DecisionType value) { SetDecisionType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Provides the details of the <code>ScheduleActivityTask</code> decision. It
     * isn't set for other decision types.</p>
     */
    inline const ScheduleActivityTaskDecisionAttributes& GetScheduleActivityTaskDecisionAttributes() const { return m_scheduleActivityTaskDecisionAttributes; }
    inline bool ScheduleActivityTaskDecisionAttributesHasBeenSet() const { return m_scheduleActivityTaskDecisionAttributesHasBeenSet; }
    template<typename ScheduleActivityTaskDecisionAttributesT = ScheduleActivityTaskDecisionAttributes>
    void SetScheduleActivityTaskDecisionAttributes(ScheduleActivityTaskDecisionAttributesT&& value) { m_scheduleActivityTaskDecisionAttributesHasBeenSet = true; m_scheduleActivityTaskDecisionAttributes = std::forward<ScheduleActivityTaskDecisionAttributesT>(value); }
    template<typename ScheduleActivityTaskDecisionAttributesT = ScheduleActivityTaskDecisionAttributes>
    Decision& WithScheduleActivityTaskDecisionAttributes(ScheduleActivityTaskDecisionAttributesT&& value) { SetScheduleActivityTaskDecisionAttributes(std::forward<ScheduleActivityTaskDecisionAttributesT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Provides the details of the <code>RequestCancelActivityTask</code> decision.
     * It isn't set for other decision types.</p>
     */
    inline const RequestCancelActivityTaskDecisionAttributes& GetRequestCancelActivityTaskDecisionAttributes() const { return m_requestCancelActivityTaskDecisionAttributes; }
    inline bool RequestCancelActivityTaskDecisionAttributesHasBeenSet() const { return m_requestCancelActivityTaskDecisionAttributesHasBeenSet; }
    template<typename RequestCancelActivityTaskDecisionAttributesT = RequestCancelActivityTaskDecisionAttributes>
    void SetRequestCancelActivityTaskDecisionAttributes(RequestCancelActivityTaskDecisionAttributesT&& value) { m_requestCancelActivityTaskDecisionAttributesHasBeenSet = true; m_requestCancelActivityTaskDecisionAttributes = std::forward<RequestCancelActivityTaskDecisionAttributesT>(value); }
    template<typename RequestCancelActivityTaskDecisionAttributesT = RequestCancelActivityTaskDecisionAttributes>
    Decision& WithRequestCancelActivityTaskDecisionAttributes(RequestCancelActivityTaskDecisionAttributesT&& value) { SetRequestCancelActivityTaskDecisionAttributes(std::forward<RequestCancelActivityTaskDecisionAttributesT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Provides the details of the <code>CompleteWorkflowExecution</code> decision.
     * It isn't set for other decision types.</p>
     */
    inline const CompleteWorkflowExecutionDecisionAttributes& GetCompleteWorkflowExecutionDecisionAttributes() const { return m_completeWorkflowExecutionDecisionAttributes; }
    inline bool CompleteWorkflowExecutionDecisionAttributesHasBeenSet() const { return m_completeWorkflowExecutionDecisionAttributesHasBeenSet; }
    template<typename CompleteWorkflowExecutionDecisionAttributesT = CompleteWorkflowExecutionDecisionAttributes>
    void SetCompleteWorkflowExecutionDecisionAttributes(CompleteWorkflowExecutionDecisionAttributesT&& value) { m_completeWorkflowExecutionDecisionAttributesHasBeenSet = true; m_completeWorkflowExecutionDecisionAttributes = std::forward<CompleteWorkflowExecutionDecisionAttributesT>(value); }
    template<typename CompleteWorkflowExecutionDecisionAttributesT = CompleteWorkflowExecutionDecisionAttributes>
    Decision& WithCompleteWorkflowExecutionDecisionAttributes(CompleteWorkflowExecutionDecisionAttributesT&& value) { SetCompleteWorkflowExecutionDecisionAttributes(std::forward<CompleteWorkflowExecutionDecisionAttributesT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Provides the details of the <code>FailWorkflowExecution</code> decision. It
     * isn't set for other decision types.</p>
     */
    inline const FailWorkflowExecutionDecisionAttributes& GetFailWorkflowExecutionDecisionAttributes() const { return m_failWorkflowExecutionDecisionAttributes; }
    inline bool FailWorkflowExecutionDecisionAttributesHasBeenSet() const { return m_failWorkflowExecutionDecisionAttributesHasBeenSet; }
    template<typename FailWorkflowExecutionDecisionAttributesT = FailWorkflowExecutionDecisionAttributes>
    void SetFailWorkflowExecutionDecisionAttributes(FailWorkflowExecutionDecisionAttributesT&& value) { m_failWorkflowExecutionDecisionAttributesHasBeenSet = true; m_failWorkflowExecutionDecisionAttributes = std::forward<FailWorkflowExecutionDecisionAttributesT>(value); }
    template<typename FailWorkflowExecutionDecisionAttributesT = FailWorkflowExecutionDecisionAttributes>
    Decision& WithFailWorkflowExecutionDecisionAttributes(FailWorkflowExecutionDecisionAttributesT&& value) { SetFailWorkflowExecutionDecisionAttributes(std::forward<FailWorkflowExecutionDecisionAttributesT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Provides the details of the <code>CancelWorkflowExecution</code> decision. It
     * isn't set for other decision types.</p>
     */
    inline const CancelWorkflowExecutionDecisionAttributes& GetCancelWorkflowExecutionDecisionAttributes() const { return m_cancelWorkflowExecutionDecisionAttributes; }
    inline bool CancelWorkflowExecutionDecisionAttributesHasBeenSet() const { return m_cancelWorkflowExecutionDecisionAttributesHasBeenSet; }
    template<typename CancelWorkflowExecutionDecisionAttributesT = CancelWorkflowExecutionDecisionAttributes>
    void SetCancelWorkflowExecutionDecisionAttributes(CancelWorkflowExecutionDecisionAttributesT&& value) { m_cancelWorkflowExecutionDecisionAttributesHasBeenSet = true; m_cancelWorkflowExecutionDecisionAttributes = std::forward<CancelWorkflowExecutionDecisionAttributesT>(value); }
    template<typename CancelWorkflowExecutionDecisionAttributesT = CancelWorkflowExecutionDecisionAttributes>
    Decision& WithCancelWorkflowExecutionDecisionAttributes(CancelWorkflowExecutionDecisionAttributesT&& value) { SetCancelWorkflowExecutionDecisionAttributes(std::forward<CancelWorkflowExecutionDecisionAttributesT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Provides the details of the <code>ContinueAsNewWorkflowExecution</code>
     * decision. It isn't set for other decision types.</p>
     */
    inline const ContinueAsNewWorkflowExecutionDecisionAttributes& GetContinueAsNewWorkflowExecutionDecisionAttributes() const { return m_continueAsNewWorkflowExecutionDecisionAttributes; }
    inline bool ContinueAsNewWorkflowExecutionDecisionAttributesHasBeenSet() const { return m_continueAsNewWorkflowExecutionDecisionAttributesHasBeenSet; }
    template<typename ContinueAsNewWorkflowExecutionDecisionAttributesT = ContinueAsNewWorkflowExecutionDecisionAttributes>
    void SetContinueAsNewWorkflowExecutionDecisionAttributes(ContinueAsNewWorkflowExecutionDecisionAttributesT&& value) { m_continueAsNewWorkflowExecutionDecisionAttributesHasBeenSet = true; m_continueAsNewWorkflowExecutionDecisionAttributes = std::forward<ContinueAsNewWorkflowExecutionDecisionAttributesT>(value); }
    template<typename ContinueAsNewWorkflowExecutionDecisionAttributesT = ContinueAsNewWorkflowExecutionDecisionAttributes>
    Decision& WithContinueAsNewWorkflowExecutionDecisionAttributes(ContinueAsNewWorkflowExecutionDecisionAttributesT&& value) { SetContinueAsNewWorkflowExecutionDecisionAttributes(std::forward<ContinueAsNewWorkflowExecutionDecisionAttributesT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Provides the details of the <code>RecordMarker</code> decision. It isn't set
     * for other decision types.</p>
     */
    inline const RecordMarkerDecisionAttributes& GetRecordMarkerDecisionAttributes() const { return m_recordMarkerDecisionAttributes; }
    inline bool RecordMarkerDecisionAttributesHasBeenSet() const { return m_recordMarkerDecisionAttributesHasBeenSet; }
    template<typename RecordMarkerDecisionAttributesT = RecordMarkerDecisionAttributes>
    void SetRecordMarkerDecisionAttributes(RecordMarkerDecisionAttributesT&& value) { m_recordMarkerDecisionAttributesHasBeenSet = true; m_recordMarkerDecisionAttributes = std::forward<RecordMarkerDecisionAttributesT>(value); }
    template<typename RecordMarkerDecisionAttributesT = RecordMarkerDecisionAttributes>
    Decision& WithRecordMarkerDecisionAttributes(RecordMarkerDecisionAttributesT&& value) { SetRecordMarkerDecisionAttributes(std::forward<RecordMarkerDecisionAttributesT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Provides the details of the <code>StartTimer</code> decision. It isn't set
     * for other decision types.</p>
     */
    inline const StartTimerDecisionAttributes& GetStartTimerDecisionAttributes() const { return m_startTimerDecisionAttributes; }
    inline bool StartTimerDecisionAttributesHasBeenSet() const { return m_startTimerDecisionAttributesHasBeenSet; }
    template<typename StartTimerDecisionAttributesT = StartTimerDecisionAttributes>
    void SetStartTimerDecisionAttributes(StartTimerDecisionAttributesT&& value) { m_startTimerDecisionAttributesHasBeenSet = true; m_startTimerDecisionAttributes = std::forward<StartTimerDecisionAttributesT>(value); }
    template<typename StartTimerDecisionAttributesT = StartTimerDecisionAttributes>
    Decision& WithStartTimerDecisionAttributes(StartTimerDecisionAttributesT&& value) { SetStartTimerDecisionAttributes(std::forward<StartTimerDecisionAttributesT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Provides the details of the <code>CancelTimer</code> decision. It isn't set
     * for other decision types.</p>
     */
    inline const CancelTimerDecisionAttributes& GetCancelTimerDecisionAttributes() const { return m_cancelTimerDecisionAttributes; }
    inline bool CancelTimerDecisionAttributesHasBeenSet() const { return m_cancelTimerDecisionAttributesHasBeenSet; }
    template<typename CancelTimerDecisionAttributesT = CancelTimerDecisionAttributes>
    void SetCancelTimerDecisionAttributes(CancelTimerDecisionAttributesT&& value) { m_cancelTimerDecisionAttributesHasBeenSet = true; m_cancelTimerDecisionAttributes = std::forward<CancelTimerDecisionAttributesT>(value); }
    template<typename CancelTimerDecisionAttributesT = CancelTimerDecisionAttributes>
    Decision& WithCancelTimerDecisionAttributes(CancelTimerDecisionAttributesT&& value) { SetCancelTimerDecisionAttributes(std::forward<CancelTimerDecisionAttributesT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Provides the details of the <code>SignalExternalWorkflowExecution</code>
     * decision. It isn't set for other decision types.</p>
     */
    inline const SignalExternalWorkflowExecutionDecisionAttributes& GetSignalExternalWorkflowExecutionDecisionAttributes() const { return m_signalExternalWorkflowExecutionDecisionAttributes; }
    inline bool SignalExternalWorkflowExecutionDecisionAttributesHasBeenSet() const { return m_signalExternalWorkflowExecutionDecisionAttributesHasBeenSet; }
    template<typename SignalExternalWorkflowExecutionDecisionAttributesT = SignalExternalWorkflowExecutionDecisionAttributes>
    void SetSignalExternalWorkflowExecutionDecisionAttributes(SignalExternalWorkflowExecutionDecisionAttributesT&& value) { m_signalExternalWorkflowExecutionDecisionAttributesHasBeenSet = true; m_signalExternalWorkflowExecutionDecisionAttributes = std::forward<SignalExternalWorkflowExecutionDecisionAttributesT>(value); }
    template<typename SignalExternalWorkflowExecutionDecisionAttributesT = SignalExternalWorkflowExecutionDecisionAttributes>
    Decision& WithSignalExternalWorkflowExecutionDecisionAttributes(SignalExternalWorkflowExecutionDecisionAttributesT&& value) { SetSignalExternalWorkflowExecutionDecisionAttributes(std::forward<SignalExternalWorkflowExecutionDecisionAttributesT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Provides the details of the
     * <code>RequestCancelExternalWorkflowExecution</code> decision. It isn't set for
     * other decision types.</p>
     */
    inline const RequestCancelExternalWorkflowExecutionDecisionAttributes& GetRequestCancelExternalWorkflowExecutionDecisionAttributes() const { return m_requestCancelExternalWorkflowExecutionDecisionAttributes; }
    inline bool RequestCancelExternalWorkflowExecutionDecisionAttributesHasBeenSet() const { return m_requestCancelExternalWorkflowExecutionDecisionAttributesHasBeenSet; }
    template<typename RequestCancelExternalWorkflowExecutionDecisionAttributesT = RequestCancelExternalWorkflowExecutionDecisionAttributes>
    void SetRequestCancelExternalWorkflowExecutionDecisionAttributes(RequestCancelExternalWorkflowExecutionDecisionAttributesT&& value) { m_requestCancelExternalWorkflowExecutionDecisionAttributesHasBeenSet = true; m_requestCancelExternalWorkflowExecutionDecisionAttributes = std::forward<RequestCancelExternalWorkflowExecutionDecisionAttributesT>(value); }
    template<typename RequestCancelExternalWorkflowExecutionDecisionAttributesT = RequestCancelExternalWorkflowExecutionDecisionAttributes>
    Decision& WithRequestCancelExternalWorkflowExecutionDecisionAttributes(RequestCancelExternalWorkflowExecutionDecisionAttributesT&& value) { SetRequestCancelExternalWorkflowExecutionDecisionAttributes(std::forward<RequestCancelExternalWorkflowExecutionDecisionAttributesT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Provides the details of the <code>StartChildWorkflowExecution</code>
     * decision. It isn't set for other decision types.</p>
     */
    inline const StartChildWorkflowExecutionDecisionAttributes& GetStartChildWorkflowExecutionDecisionAttributes() const { return m_startChildWorkflowExecutionDecisionAttributes; }
    inline bool StartChildWorkflowExecutionDecisionAttributesHasBeenSet() const { return m_startChildWorkflowExecutionDecisionAttributesHasBeenSet; }
    template<typename StartChildWorkflowExecutionDecisionAttributesT = StartChildWorkflowExecutionDecisionAttributes>
    void SetStartChildWorkflowExecutionDecisionAttributes(StartChildWorkflowExecutionDecisionAttributesT&& value) { m_startChildWorkflowExecutionDecisionAttributesHasBeenSet = true; m_startChildWorkflowExecutionDecisionAttributes = std::forward<StartChildWorkflowExecutionDecisionAttributesT>(value); }
    template<typename StartChildWorkflowExecutionDecisionAttributesT = StartChildWorkflowExecutionDecisionAttributes>
    Decision& WithStartChildWorkflowExecutionDecisionAttributes(StartChildWorkflowExecutionDecisionAttributesT&& value) { SetStartChildWorkflowExecutionDecisionAttributes(std::forward<StartChildWorkflowExecutionDecisionAttributesT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Provides the details of the <code>ScheduleLambdaFunction</code> decision. It
     * isn't set for other decision types.</p>
     */
    inline const ScheduleLambdaFunctionDecisionAttributes& GetScheduleLambdaFunctionDecisionAttributes() const { return m_scheduleLambdaFunctionDecisionAttributes; }
    inline bool ScheduleLambdaFunctionDecisionAttributesHasBeenSet() const { return m_scheduleLambdaFunctionDecisionAttributesHasBeenSet; }
    template<typename ScheduleLambdaFunctionDecisionAttributesT = ScheduleLambdaFunctionDecisionAttributes>
    void SetScheduleLambdaFunctionDecisionAttributes(ScheduleLambdaFunctionDecisionAttributesT&& value) { m_scheduleLambdaFunctionDecisionAttributesHasBeenSet = true; m_scheduleLambdaFunctionDecisionAttributes = std::forward<ScheduleLambdaFunctionDecisionAttributesT>(value); }
    template<typename ScheduleLambdaFunctionDecisionAttributesT = ScheduleLambdaFunctionDecisionAttributes>
    Decision& WithScheduleLambdaFunctionDecisionAttributes(ScheduleLambdaFunctionDecisionAttributesT&& value) { SetScheduleLambdaFunctionDecisionAttributes(std::forward<ScheduleLambdaFunctionDecisionAttributesT>(value)); return *this;}
    ///@}
  private:

    DecisionType m_decisionType{DecisionType::NOT_SET};
    bool m_decisionTypeHasBeenSet = false;

    ScheduleActivityTaskDecisionAttributes m_scheduleActivityTaskDecisionAttributes;
    bool m_scheduleActivityTaskDecisionAttributesHasBeenSet = false;

    RequestCancelActivityTaskDecisionAttributes m_requestCancelActivityTaskDecisionAttributes;
    bool m_requestCancelActivityTaskDecisionAttributesHasBeenSet = false;

    CompleteWorkflowExecutionDecisionAttributes m_completeWorkflowExecutionDecisionAttributes;
    bool m_completeWorkflowExecutionDecisionAttributesHasBeenSet = false;

    FailWorkflowExecutionDecisionAttributes m_failWorkflowExecutionDecisionAttributes;
    bool m_failWorkflowExecutionDecisionAttributesHasBeenSet = false;

    CancelWorkflowExecutionDecisionAttributes m_cancelWorkflowExecutionDecisionAttributes;
    bool m_cancelWorkflowExecutionDecisionAttributesHasBeenSet = false;

    ContinueAsNewWorkflowExecutionDecisionAttributes m_continueAsNewWorkflowExecutionDecisionAttributes;
    bool m_continueAsNewWorkflowExecutionDecisionAttributesHasBeenSet = false;

    RecordMarkerDecisionAttributes m_recordMarkerDecisionAttributes;
    bool m_recordMarkerDecisionAttributesHasBeenSet = false;

    StartTimerDecisionAttributes m_startTimerDecisionAttributes;
    bool m_startTimerDecisionAttributesHasBeenSet = false;

    CancelTimerDecisionAttributes m_cancelTimerDecisionAttributes;
    bool m_cancelTimerDecisionAttributesHasBeenSet = false;

    SignalExternalWorkflowExecutionDecisionAttributes m_signalExternalWorkflowExecutionDecisionAttributes;
    bool m_signalExternalWorkflowExecutionDecisionAttributesHasBeenSet = false;

    RequestCancelExternalWorkflowExecutionDecisionAttributes m_requestCancelExternalWorkflowExecutionDecisionAttributes;
    bool m_requestCancelExternalWorkflowExecutionDecisionAttributesHasBeenSet = false;

    StartChildWorkflowExecutionDecisionAttributes m_startChildWorkflowExecutionDecisionAttributes;
    bool m_startChildWorkflowExecutionDecisionAttributesHasBeenSet = false;

    ScheduleLambdaFunctionDecisionAttributes m_scheduleLambdaFunctionDecisionAttributes;
    bool m_scheduleLambdaFunctionDecisionAttributesHasBeenSet = false;
  };

} // namespace Model
} // namespace SWF
} // namespace Aws
