﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ivs-realtime/Ivsrealtime_EXPORTS.h>
#include <aws/core/client/ClientConfiguration.h>
#include <aws/core/client/AWSClient.h>
#include <aws/core/client/AWSClientAsyncCRTP.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/ivs-realtime/IvsrealtimeServiceClientModel.h>

namespace Aws
{
namespace ivsrealtime
{
  /**
   * <p>The Amazon Interactive Video Service (IVS) real-time API is REST compatible,
   * using a standard HTTP API and an AWS EventBridge event stream for responses.
   * JSON is used for both requests and responses, including errors. </p> <p> <b>Key
   * Concepts</b> </p> <ul> <li> <p> <b>Stage</b> — A virtual space where
   * participants can exchange video in real time.</p> </li> <li> <p> <b>Participant
   * token</b> — A token that authenticates a participant when they join a stage.</p>
   * </li> <li> <p> <b>Participant object</b> — Represents participants (people) in
   * the stage and contains information about them. When a token is created, it
   * includes a participant ID; when a participant uses that token to join a stage,
   * the participant is associated with that participant ID. There is a 1:1 mapping
   * between participant tokens and participants.</p> </li> </ul> <p>For server-side
   * composition:</p> <ul> <li> <p> <b>Composition process</b> — Composites
   * participants of a stage into a single video and forwards it to a set of outputs
   * (e.g., IVS channels). Composition operations support this process.</p> </li>
   * <li> <p> <b>Composition</b> — Controls the look of the outputs, including how
   * participants are positioned in the video.</p> </li> </ul> <p>For participant
   * replication:</p> <ul> <li> <p> <b>Source stage</b> — The stage where the
   * participant originally joined, which is used as the source for replication.</p>
   * </li> <li> <p> <b>Destination stage</b> — The stage to which the participant is
   * replicated. </p> </li> <li> <p> <b>Replicated participant</b> — A participant in
   * a stage that is replicated to one or more destination stages. </p> </li> <li>
   * <p> <b>Replica participant</b> — A participant in a destination stage that is
   * replicated from another stage (the source stage).</p> </li> </ul> <p>For more
   * information about your IVS live stream, also see <a
   * href="https://docs.aws.amazon.com/ivs/latest/RealTimeUserGuide/getting-started.html">Getting
   * Started with Amazon IVS Real-Time Streaming</a>.</p> <p> <b>Tagging</b> </p>
   * <p>A <i>tag</i> is a metadata label that you assign to an AWS resource. A tag
   * comprises a <i>key</i> and a <i>value</i>, both set by you. For example, you
   * might set a tag as <code>topic:nature</code> to label a particular video
   * category. See <a
   * href="https://docs.aws.amazon.com/tag-editor/latest/userguide/best-practices-and-strats.html">Best
   * practices and strategies</a> in <i>Tagging AWS Resources and Tag Editor</i> for
   * details, including restrictions that apply to tags and "Tag naming limits and
   * requirements"; Amazon IVS stages has no service-specific constraints beyond what
   * is documented there.</p> <p>Tags can help you identify and organize your AWS
   * resources. For example, you can use the same tag for different resources to
   * indicate that they are related. You can also use tags to manage access (see <a
   * href="https://docs.aws.amazon.com/IAM/latest/UserGuide/access_tags.html">Access
   * Tags</a>).</p> <p>The Amazon IVS real-time API has these tag-related operations:
   * <a>TagResource</a>, <a>UntagResource</a>, and <a>ListTagsForResource</a>. The
   * following resource supports tagging: Stage.</p> <p>At most 50 tags can be
   * applied to a resource.</p>
   */
  class AWS_IVSREALTIME_API IvsrealtimeClient : public Aws::Client::AWSJsonClient, public Aws::Client::ClientWithAsyncTemplateMethods<IvsrealtimeClient>
  {
    public:
      typedef Aws::Client::AWSJsonClient BASECLASS;
      static const char* GetServiceName();
      static const char* GetAllocationTag();

      typedef IvsrealtimeClientConfiguration ClientConfigurationType;
      typedef IvsrealtimeEndpointProvider EndpointProviderType;

       /**
        * Initializes client to use DefaultCredentialProviderChain, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        IvsrealtimeClient(const Aws::ivsrealtime::IvsrealtimeClientConfiguration& clientConfiguration = Aws::ivsrealtime::IvsrealtimeClientConfiguration(),
                          std::shared_ptr<IvsrealtimeEndpointProviderBase> endpointProvider = nullptr);

       /**
        * Initializes client to use SimpleAWSCredentialsProvider, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        IvsrealtimeClient(const Aws::Auth::AWSCredentials& credentials,
                          std::shared_ptr<IvsrealtimeEndpointProviderBase> endpointProvider = nullptr,
                          const Aws::ivsrealtime::IvsrealtimeClientConfiguration& clientConfiguration = Aws::ivsrealtime::IvsrealtimeClientConfiguration());

       /**
        * Initializes client to use specified credentials provider with specified client config. If http client factory is not supplied,
        * the default http client factory will be used
        */
        IvsrealtimeClient(const std::shared_ptr<Aws::Auth::AWSCredentialsProvider>& credentialsProvider,
                          std::shared_ptr<IvsrealtimeEndpointProviderBase> endpointProvider = nullptr,
                          const Aws::ivsrealtime::IvsrealtimeClientConfiguration& clientConfiguration = Aws::ivsrealtime::IvsrealtimeClientConfiguration());


        /* Legacy constructors due deprecation */
       /**
        * Initializes client to use DefaultCredentialProviderChain, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        IvsrealtimeClient(const Aws::Client::ClientConfiguration& clientConfiguration);

       /**
        * Initializes client to use SimpleAWSCredentialsProvider, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        IvsrealtimeClient(const Aws::Auth::AWSCredentials& credentials,
                          const Aws::Client::ClientConfiguration& clientConfiguration);

       /**
        * Initializes client to use specified credentials provider with specified client config. If http client factory is not supplied,
        * the default http client factory will be used
        */
        IvsrealtimeClient(const std::shared_ptr<Aws::Auth::AWSCredentialsProvider>& credentialsProvider,
                          const Aws::Client::ClientConfiguration& clientConfiguration);

        /* End of legacy constructors due deprecation */
        virtual ~IvsrealtimeClient();

        /**
         * <p>Creates an EncoderConfiguration object.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ivs-realtime-2020-07-14/CreateEncoderConfiguration">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateEncoderConfigurationOutcome CreateEncoderConfiguration(const Model::CreateEncoderConfigurationRequest& request = {}) const;

        /**
         * A Callable wrapper for CreateEncoderConfiguration that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename CreateEncoderConfigurationRequestT = Model::CreateEncoderConfigurationRequest>
        Model::CreateEncoderConfigurationOutcomeCallable CreateEncoderConfigurationCallable(const CreateEncoderConfigurationRequestT& request = {}) const
        {
            return SubmitCallable(&IvsrealtimeClient::CreateEncoderConfiguration, request);
        }

        /**
         * An Async wrapper for CreateEncoderConfiguration that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename CreateEncoderConfigurationRequestT = Model::CreateEncoderConfigurationRequest>
        void CreateEncoderConfigurationAsync(const CreateEncoderConfigurationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr, const CreateEncoderConfigurationRequestT& request = {}) const
        {
            return SubmitAsync(&IvsrealtimeClient::CreateEncoderConfiguration, request, handler, context);
        }

        /**
         * <p>Creates a new IngestConfiguration resource, used to specify the ingest
         * protocol for a stage.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ivs-realtime-2020-07-14/CreateIngestConfiguration">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateIngestConfigurationOutcome CreateIngestConfiguration(const Model::CreateIngestConfigurationRequest& request) const;

        /**
         * A Callable wrapper for CreateIngestConfiguration that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename CreateIngestConfigurationRequestT = Model::CreateIngestConfigurationRequest>
        Model::CreateIngestConfigurationOutcomeCallable CreateIngestConfigurationCallable(const CreateIngestConfigurationRequestT& request) const
        {
            return SubmitCallable(&IvsrealtimeClient::CreateIngestConfiguration, request);
        }

        /**
         * An Async wrapper for CreateIngestConfiguration that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename CreateIngestConfigurationRequestT = Model::CreateIngestConfigurationRequest>
        void CreateIngestConfigurationAsync(const CreateIngestConfigurationRequestT& request, const CreateIngestConfigurationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&IvsrealtimeClient::CreateIngestConfiguration, request, handler, context);
        }

        /**
         * <p>Creates an additional token for a specified stage. This can be done after
         * stage creation or when tokens expire. Tokens always are scoped to the stage for
         * which they are created.</p> <p>Encryption keys are owned by Amazon IVS and never
         * used directly by your application.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ivs-realtime-2020-07-14/CreateParticipantToken">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateParticipantTokenOutcome CreateParticipantToken(const Model::CreateParticipantTokenRequest& request) const;

        /**
         * A Callable wrapper for CreateParticipantToken that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename CreateParticipantTokenRequestT = Model::CreateParticipantTokenRequest>
        Model::CreateParticipantTokenOutcomeCallable CreateParticipantTokenCallable(const CreateParticipantTokenRequestT& request) const
        {
            return SubmitCallable(&IvsrealtimeClient::CreateParticipantToken, request);
        }

        /**
         * An Async wrapper for CreateParticipantToken that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename CreateParticipantTokenRequestT = Model::CreateParticipantTokenRequest>
        void CreateParticipantTokenAsync(const CreateParticipantTokenRequestT& request, const CreateParticipantTokenResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&IvsrealtimeClient::CreateParticipantToken, request, handler, context);
        }

        /**
         * <p>Creates a new stage (and optionally participant tokens).</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ivs-realtime-2020-07-14/CreateStage">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateStageOutcome CreateStage(const Model::CreateStageRequest& request = {}) const;

        /**
         * A Callable wrapper for CreateStage that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename CreateStageRequestT = Model::CreateStageRequest>
        Model::CreateStageOutcomeCallable CreateStageCallable(const CreateStageRequestT& request = {}) const
        {
            return SubmitCallable(&IvsrealtimeClient::CreateStage, request);
        }

        /**
         * An Async wrapper for CreateStage that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename CreateStageRequestT = Model::CreateStageRequest>
        void CreateStageAsync(const CreateStageResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr, const CreateStageRequestT& request = {}) const
        {
            return SubmitAsync(&IvsrealtimeClient::CreateStage, request, handler, context);
        }

        /**
         * <p>Creates a new storage configuration, used to enable recording to Amazon S3.
         * When a StorageConfiguration is created, IVS will modify the S3 bucketPolicy of
         * the provided bucket. This will ensure that IVS has sufficient permissions to
         * write content to the provided bucket.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ivs-realtime-2020-07-14/CreateStorageConfiguration">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateStorageConfigurationOutcome CreateStorageConfiguration(const Model::CreateStorageConfigurationRequest& request) const;

        /**
         * A Callable wrapper for CreateStorageConfiguration that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename CreateStorageConfigurationRequestT = Model::CreateStorageConfigurationRequest>
        Model::CreateStorageConfigurationOutcomeCallable CreateStorageConfigurationCallable(const CreateStorageConfigurationRequestT& request) const
        {
            return SubmitCallable(&IvsrealtimeClient::CreateStorageConfiguration, request);
        }

        /**
         * An Async wrapper for CreateStorageConfiguration that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename CreateStorageConfigurationRequestT = Model::CreateStorageConfigurationRequest>
        void CreateStorageConfigurationAsync(const CreateStorageConfigurationRequestT& request, const CreateStorageConfigurationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&IvsrealtimeClient::CreateStorageConfiguration, request, handler, context);
        }

        /**
         * <p>Deletes an EncoderConfiguration resource. Ensures that no Compositions are
         * using this template; otherwise, returns an error.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ivs-realtime-2020-07-14/DeleteEncoderConfiguration">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteEncoderConfigurationOutcome DeleteEncoderConfiguration(const Model::DeleteEncoderConfigurationRequest& request) const;

        /**
         * A Callable wrapper for DeleteEncoderConfiguration that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DeleteEncoderConfigurationRequestT = Model::DeleteEncoderConfigurationRequest>
        Model::DeleteEncoderConfigurationOutcomeCallable DeleteEncoderConfigurationCallable(const DeleteEncoderConfigurationRequestT& request) const
        {
            return SubmitCallable(&IvsrealtimeClient::DeleteEncoderConfiguration, request);
        }

        /**
         * An Async wrapper for DeleteEncoderConfiguration that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DeleteEncoderConfigurationRequestT = Model::DeleteEncoderConfigurationRequest>
        void DeleteEncoderConfigurationAsync(const DeleteEncoderConfigurationRequestT& request, const DeleteEncoderConfigurationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&IvsrealtimeClient::DeleteEncoderConfiguration, request, handler, context);
        }

        /**
         * <p>Deletes a specified IngestConfiguration, so it can no longer be used to
         * broadcast. An IngestConfiguration cannot be deleted if the publisher is actively
         * streaming to a stage, unless <code>force</code> is set to
         * <code>true</code>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ivs-realtime-2020-07-14/DeleteIngestConfiguration">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteIngestConfigurationOutcome DeleteIngestConfiguration(const Model::DeleteIngestConfigurationRequest& request) const;

        /**
         * A Callable wrapper for DeleteIngestConfiguration that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DeleteIngestConfigurationRequestT = Model::DeleteIngestConfigurationRequest>
        Model::DeleteIngestConfigurationOutcomeCallable DeleteIngestConfigurationCallable(const DeleteIngestConfigurationRequestT& request) const
        {
            return SubmitCallable(&IvsrealtimeClient::DeleteIngestConfiguration, request);
        }

        /**
         * An Async wrapper for DeleteIngestConfiguration that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DeleteIngestConfigurationRequestT = Model::DeleteIngestConfigurationRequest>
        void DeleteIngestConfigurationAsync(const DeleteIngestConfigurationRequestT& request, const DeleteIngestConfigurationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&IvsrealtimeClient::DeleteIngestConfiguration, request, handler, context);
        }

        /**
         * <p>Deletes the specified public key used to sign stage participant tokens. This
         * invalidates future participant tokens generated using the key pair’s private
         * key. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ivs-realtime-2020-07-14/DeletePublicKey">AWS
         * API Reference</a></p>
         */
        virtual Model::DeletePublicKeyOutcome DeletePublicKey(const Model::DeletePublicKeyRequest& request) const;

        /**
         * A Callable wrapper for DeletePublicKey that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DeletePublicKeyRequestT = Model::DeletePublicKeyRequest>
        Model::DeletePublicKeyOutcomeCallable DeletePublicKeyCallable(const DeletePublicKeyRequestT& request) const
        {
            return SubmitCallable(&IvsrealtimeClient::DeletePublicKey, request);
        }

        /**
         * An Async wrapper for DeletePublicKey that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DeletePublicKeyRequestT = Model::DeletePublicKeyRequest>
        void DeletePublicKeyAsync(const DeletePublicKeyRequestT& request, const DeletePublicKeyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&IvsrealtimeClient::DeletePublicKey, request, handler, context);
        }

        /**
         * <p>Shuts down and deletes the specified stage (disconnecting all participants).
         * This operation also removes the <code>stageArn</code> from the associated
         * <a>IngestConfiguration</a>, if there are participants using the
         * IngestConfiguration to publish to the stage.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ivs-realtime-2020-07-14/DeleteStage">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteStageOutcome DeleteStage(const Model::DeleteStageRequest& request) const;

        /**
         * A Callable wrapper for DeleteStage that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DeleteStageRequestT = Model::DeleteStageRequest>
        Model::DeleteStageOutcomeCallable DeleteStageCallable(const DeleteStageRequestT& request) const
        {
            return SubmitCallable(&IvsrealtimeClient::DeleteStage, request);
        }

        /**
         * An Async wrapper for DeleteStage that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DeleteStageRequestT = Model::DeleteStageRequest>
        void DeleteStageAsync(const DeleteStageRequestT& request, const DeleteStageResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&IvsrealtimeClient::DeleteStage, request, handler, context);
        }

        /**
         * <p>Deletes the storage configuration for the specified ARN.</p> <p>If you try to
         * delete a storage configuration that is used by a Composition, you will get an
         * error (409 ConflictException). To avoid this, for all Compositions that
         * reference the storage configuration, first use <a>StopComposition</a> and wait
         * for it to complete, then use DeleteStorageConfiguration.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ivs-realtime-2020-07-14/DeleteStorageConfiguration">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteStorageConfigurationOutcome DeleteStorageConfiguration(const Model::DeleteStorageConfigurationRequest& request) const;

        /**
         * A Callable wrapper for DeleteStorageConfiguration that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DeleteStorageConfigurationRequestT = Model::DeleteStorageConfigurationRequest>
        Model::DeleteStorageConfigurationOutcomeCallable DeleteStorageConfigurationCallable(const DeleteStorageConfigurationRequestT& request) const
        {
            return SubmitCallable(&IvsrealtimeClient::DeleteStorageConfiguration, request);
        }

        /**
         * An Async wrapper for DeleteStorageConfiguration that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DeleteStorageConfigurationRequestT = Model::DeleteStorageConfigurationRequest>
        void DeleteStorageConfigurationAsync(const DeleteStorageConfigurationRequestT& request, const DeleteStorageConfigurationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&IvsrealtimeClient::DeleteStorageConfiguration, request, handler, context);
        }

        /**
         * <p>Disconnects a specified participant from a specified stage. If the
         * participant is publishing using an <a>IngestConfiguration</a>,
         * DisconnectParticipant also updates the <code>stageArn</code> in the
         * IngestConfiguration to be an empty string.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ivs-realtime-2020-07-14/DisconnectParticipant">AWS
         * API Reference</a></p>
         */
        virtual Model::DisconnectParticipantOutcome DisconnectParticipant(const Model::DisconnectParticipantRequest& request) const;

        /**
         * A Callable wrapper for DisconnectParticipant that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DisconnectParticipantRequestT = Model::DisconnectParticipantRequest>
        Model::DisconnectParticipantOutcomeCallable DisconnectParticipantCallable(const DisconnectParticipantRequestT& request) const
        {
            return SubmitCallable(&IvsrealtimeClient::DisconnectParticipant, request);
        }

        /**
         * An Async wrapper for DisconnectParticipant that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DisconnectParticipantRequestT = Model::DisconnectParticipantRequest>
        void DisconnectParticipantAsync(const DisconnectParticipantRequestT& request, const DisconnectParticipantResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&IvsrealtimeClient::DisconnectParticipant, request, handler, context);
        }

        /**
         * <p>Get information about the specified Composition resource.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ivs-realtime-2020-07-14/GetComposition">AWS
         * API Reference</a></p>
         */
        virtual Model::GetCompositionOutcome GetComposition(const Model::GetCompositionRequest& request) const;

        /**
         * A Callable wrapper for GetComposition that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename GetCompositionRequestT = Model::GetCompositionRequest>
        Model::GetCompositionOutcomeCallable GetCompositionCallable(const GetCompositionRequestT& request) const
        {
            return SubmitCallable(&IvsrealtimeClient::GetComposition, request);
        }

        /**
         * An Async wrapper for GetComposition that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename GetCompositionRequestT = Model::GetCompositionRequest>
        void GetCompositionAsync(const GetCompositionRequestT& request, const GetCompositionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&IvsrealtimeClient::GetComposition, request, handler, context);
        }

        /**
         * <p>Gets information about the specified EncoderConfiguration resource.
         * </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ivs-realtime-2020-07-14/GetEncoderConfiguration">AWS
         * API Reference</a></p>
         */
        virtual Model::GetEncoderConfigurationOutcome GetEncoderConfiguration(const Model::GetEncoderConfigurationRequest& request) const;

        /**
         * A Callable wrapper for GetEncoderConfiguration that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename GetEncoderConfigurationRequestT = Model::GetEncoderConfigurationRequest>
        Model::GetEncoderConfigurationOutcomeCallable GetEncoderConfigurationCallable(const GetEncoderConfigurationRequestT& request) const
        {
            return SubmitCallable(&IvsrealtimeClient::GetEncoderConfiguration, request);
        }

        /**
         * An Async wrapper for GetEncoderConfiguration that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename GetEncoderConfigurationRequestT = Model::GetEncoderConfigurationRequest>
        void GetEncoderConfigurationAsync(const GetEncoderConfigurationRequestT& request, const GetEncoderConfigurationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&IvsrealtimeClient::GetEncoderConfiguration, request, handler, context);
        }

        /**
         * <p>Gets information about the specified IngestConfiguration.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ivs-realtime-2020-07-14/GetIngestConfiguration">AWS
         * API Reference</a></p>
         */
        virtual Model::GetIngestConfigurationOutcome GetIngestConfiguration(const Model::GetIngestConfigurationRequest& request) const;

        /**
         * A Callable wrapper for GetIngestConfiguration that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename GetIngestConfigurationRequestT = Model::GetIngestConfigurationRequest>
        Model::GetIngestConfigurationOutcomeCallable GetIngestConfigurationCallable(const GetIngestConfigurationRequestT& request) const
        {
            return SubmitCallable(&IvsrealtimeClient::GetIngestConfiguration, request);
        }

        /**
         * An Async wrapper for GetIngestConfiguration that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename GetIngestConfigurationRequestT = Model::GetIngestConfigurationRequest>
        void GetIngestConfigurationAsync(const GetIngestConfigurationRequestT& request, const GetIngestConfigurationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&IvsrealtimeClient::GetIngestConfiguration, request, handler, context);
        }

        /**
         * <p>Gets information about the specified participant token.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ivs-realtime-2020-07-14/GetParticipant">AWS
         * API Reference</a></p>
         */
        virtual Model::GetParticipantOutcome GetParticipant(const Model::GetParticipantRequest& request) const;

        /**
         * A Callable wrapper for GetParticipant that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename GetParticipantRequestT = Model::GetParticipantRequest>
        Model::GetParticipantOutcomeCallable GetParticipantCallable(const GetParticipantRequestT& request) const
        {
            return SubmitCallable(&IvsrealtimeClient::GetParticipant, request);
        }

        /**
         * An Async wrapper for GetParticipant that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename GetParticipantRequestT = Model::GetParticipantRequest>
        void GetParticipantAsync(const GetParticipantRequestT& request, const GetParticipantResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&IvsrealtimeClient::GetParticipant, request, handler, context);
        }

        /**
         * <p>Gets information for the specified public key.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ivs-realtime-2020-07-14/GetPublicKey">AWS
         * API Reference</a></p>
         */
        virtual Model::GetPublicKeyOutcome GetPublicKey(const Model::GetPublicKeyRequest& request) const;

        /**
         * A Callable wrapper for GetPublicKey that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename GetPublicKeyRequestT = Model::GetPublicKeyRequest>
        Model::GetPublicKeyOutcomeCallable GetPublicKeyCallable(const GetPublicKeyRequestT& request) const
        {
            return SubmitCallable(&IvsrealtimeClient::GetPublicKey, request);
        }

        /**
         * An Async wrapper for GetPublicKey that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename GetPublicKeyRequestT = Model::GetPublicKeyRequest>
        void GetPublicKeyAsync(const GetPublicKeyRequestT& request, const GetPublicKeyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&IvsrealtimeClient::GetPublicKey, request, handler, context);
        }

        /**
         * <p>Gets information for the specified stage.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ivs-realtime-2020-07-14/GetStage">AWS
         * API Reference</a></p>
         */
        virtual Model::GetStageOutcome GetStage(const Model::GetStageRequest& request) const;

        /**
         * A Callable wrapper for GetStage that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename GetStageRequestT = Model::GetStageRequest>
        Model::GetStageOutcomeCallable GetStageCallable(const GetStageRequestT& request) const
        {
            return SubmitCallable(&IvsrealtimeClient::GetStage, request);
        }

        /**
         * An Async wrapper for GetStage that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename GetStageRequestT = Model::GetStageRequest>
        void GetStageAsync(const GetStageRequestT& request, const GetStageResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&IvsrealtimeClient::GetStage, request, handler, context);
        }

        /**
         * <p>Gets information for the specified stage session.</p><p><h3>See Also:</h3>  
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ivs-realtime-2020-07-14/GetStageSession">AWS
         * API Reference</a></p>
         */
        virtual Model::GetStageSessionOutcome GetStageSession(const Model::GetStageSessionRequest& request) const;

        /**
         * A Callable wrapper for GetStageSession that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename GetStageSessionRequestT = Model::GetStageSessionRequest>
        Model::GetStageSessionOutcomeCallable GetStageSessionCallable(const GetStageSessionRequestT& request) const
        {
            return SubmitCallable(&IvsrealtimeClient::GetStageSession, request);
        }

        /**
         * An Async wrapper for GetStageSession that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename GetStageSessionRequestT = Model::GetStageSessionRequest>
        void GetStageSessionAsync(const GetStageSessionRequestT& request, const GetStageSessionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&IvsrealtimeClient::GetStageSession, request, handler, context);
        }

        /**
         * <p>Gets the storage configuration for the specified ARN.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ivs-realtime-2020-07-14/GetStorageConfiguration">AWS
         * API Reference</a></p>
         */
        virtual Model::GetStorageConfigurationOutcome GetStorageConfiguration(const Model::GetStorageConfigurationRequest& request) const;

        /**
         * A Callable wrapper for GetStorageConfiguration that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename GetStorageConfigurationRequestT = Model::GetStorageConfigurationRequest>
        Model::GetStorageConfigurationOutcomeCallable GetStorageConfigurationCallable(const GetStorageConfigurationRequestT& request) const
        {
            return SubmitCallable(&IvsrealtimeClient::GetStorageConfiguration, request);
        }

        /**
         * An Async wrapper for GetStorageConfiguration that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename GetStorageConfigurationRequestT = Model::GetStorageConfigurationRequest>
        void GetStorageConfigurationAsync(const GetStorageConfigurationRequestT& request, const GetStorageConfigurationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&IvsrealtimeClient::GetStorageConfiguration, request, handler, context);
        }

        /**
         * <p>Import a public key to be used for signing stage participant
         * tokens.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ivs-realtime-2020-07-14/ImportPublicKey">AWS
         * API Reference</a></p>
         */
        virtual Model::ImportPublicKeyOutcome ImportPublicKey(const Model::ImportPublicKeyRequest& request) const;

        /**
         * A Callable wrapper for ImportPublicKey that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ImportPublicKeyRequestT = Model::ImportPublicKeyRequest>
        Model::ImportPublicKeyOutcomeCallable ImportPublicKeyCallable(const ImportPublicKeyRequestT& request) const
        {
            return SubmitCallable(&IvsrealtimeClient::ImportPublicKey, request);
        }

        /**
         * An Async wrapper for ImportPublicKey that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ImportPublicKeyRequestT = Model::ImportPublicKeyRequest>
        void ImportPublicKeyAsync(const ImportPublicKeyRequestT& request, const ImportPublicKeyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&IvsrealtimeClient::ImportPublicKey, request, handler, context);
        }

        /**
         * <p>Gets summary information about all Compositions in your account, in the AWS
         * region where the API request is processed. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ivs-realtime-2020-07-14/ListCompositions">AWS
         * API Reference</a></p>
         */
        virtual Model::ListCompositionsOutcome ListCompositions(const Model::ListCompositionsRequest& request = {}) const;

        /**
         * A Callable wrapper for ListCompositions that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ListCompositionsRequestT = Model::ListCompositionsRequest>
        Model::ListCompositionsOutcomeCallable ListCompositionsCallable(const ListCompositionsRequestT& request = {}) const
        {
            return SubmitCallable(&IvsrealtimeClient::ListCompositions, request);
        }

        /**
         * An Async wrapper for ListCompositions that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListCompositionsRequestT = Model::ListCompositionsRequest>
        void ListCompositionsAsync(const ListCompositionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr, const ListCompositionsRequestT& request = {}) const
        {
            return SubmitAsync(&IvsrealtimeClient::ListCompositions, request, handler, context);
        }

        /**
         * <p>Gets summary information about all EncoderConfigurations in your account, in
         * the AWS region where the API request is processed.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ivs-realtime-2020-07-14/ListEncoderConfigurations">AWS
         * API Reference</a></p>
         */
        virtual Model::ListEncoderConfigurationsOutcome ListEncoderConfigurations(const Model::ListEncoderConfigurationsRequest& request = {}) const;

        /**
         * A Callable wrapper for ListEncoderConfigurations that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ListEncoderConfigurationsRequestT = Model::ListEncoderConfigurationsRequest>
        Model::ListEncoderConfigurationsOutcomeCallable ListEncoderConfigurationsCallable(const ListEncoderConfigurationsRequestT& request = {}) const
        {
            return SubmitCallable(&IvsrealtimeClient::ListEncoderConfigurations, request);
        }

        /**
         * An Async wrapper for ListEncoderConfigurations that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListEncoderConfigurationsRequestT = Model::ListEncoderConfigurationsRequest>
        void ListEncoderConfigurationsAsync(const ListEncoderConfigurationsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr, const ListEncoderConfigurationsRequestT& request = {}) const
        {
            return SubmitAsync(&IvsrealtimeClient::ListEncoderConfigurations, request, handler, context);
        }

        /**
         * <p>Lists all IngestConfigurations in your account, in the AWS region where the
         * API request is processed.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ivs-realtime-2020-07-14/ListIngestConfigurations">AWS
         * API Reference</a></p>
         */
        virtual Model::ListIngestConfigurationsOutcome ListIngestConfigurations(const Model::ListIngestConfigurationsRequest& request = {}) const;

        /**
         * A Callable wrapper for ListIngestConfigurations that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ListIngestConfigurationsRequestT = Model::ListIngestConfigurationsRequest>
        Model::ListIngestConfigurationsOutcomeCallable ListIngestConfigurationsCallable(const ListIngestConfigurationsRequestT& request = {}) const
        {
            return SubmitCallable(&IvsrealtimeClient::ListIngestConfigurations, request);
        }

        /**
         * An Async wrapper for ListIngestConfigurations that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListIngestConfigurationsRequestT = Model::ListIngestConfigurationsRequest>
        void ListIngestConfigurationsAsync(const ListIngestConfigurationsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr, const ListIngestConfigurationsRequestT& request = {}) const
        {
            return SubmitAsync(&IvsrealtimeClient::ListIngestConfigurations, request, handler, context);
        }

        /**
         * <p>Lists events for a specified participant that occurred during a specified
         * stage session.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ivs-realtime-2020-07-14/ListParticipantEvents">AWS
         * API Reference</a></p>
         */
        virtual Model::ListParticipantEventsOutcome ListParticipantEvents(const Model::ListParticipantEventsRequest& request) const;

        /**
         * A Callable wrapper for ListParticipantEvents that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ListParticipantEventsRequestT = Model::ListParticipantEventsRequest>
        Model::ListParticipantEventsOutcomeCallable ListParticipantEventsCallable(const ListParticipantEventsRequestT& request) const
        {
            return SubmitCallable(&IvsrealtimeClient::ListParticipantEvents, request);
        }

        /**
         * An Async wrapper for ListParticipantEvents that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListParticipantEventsRequestT = Model::ListParticipantEventsRequest>
        void ListParticipantEventsAsync(const ListParticipantEventsRequestT& request, const ListParticipantEventsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&IvsrealtimeClient::ListParticipantEvents, request, handler, context);
        }

        /**
         * <p>Lists all the replicas for a participant from a source stage.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ivs-realtime-2020-07-14/ListParticipantReplicas">AWS
         * API Reference</a></p>
         */
        virtual Model::ListParticipantReplicasOutcome ListParticipantReplicas(const Model::ListParticipantReplicasRequest& request) const;

        /**
         * A Callable wrapper for ListParticipantReplicas that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ListParticipantReplicasRequestT = Model::ListParticipantReplicasRequest>
        Model::ListParticipantReplicasOutcomeCallable ListParticipantReplicasCallable(const ListParticipantReplicasRequestT& request) const
        {
            return SubmitCallable(&IvsrealtimeClient::ListParticipantReplicas, request);
        }

        /**
         * An Async wrapper for ListParticipantReplicas that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListParticipantReplicasRequestT = Model::ListParticipantReplicasRequest>
        void ListParticipantReplicasAsync(const ListParticipantReplicasRequestT& request, const ListParticipantReplicasResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&IvsrealtimeClient::ListParticipantReplicas, request, handler, context);
        }

        /**
         * <p>Lists all participants in a specified stage session.</p><p><h3>See Also:</h3>
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ivs-realtime-2020-07-14/ListParticipants">AWS
         * API Reference</a></p>
         */
        virtual Model::ListParticipantsOutcome ListParticipants(const Model::ListParticipantsRequest& request) const;

        /**
         * A Callable wrapper for ListParticipants that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ListParticipantsRequestT = Model::ListParticipantsRequest>
        Model::ListParticipantsOutcomeCallable ListParticipantsCallable(const ListParticipantsRequestT& request) const
        {
            return SubmitCallable(&IvsrealtimeClient::ListParticipants, request);
        }

        /**
         * An Async wrapper for ListParticipants that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListParticipantsRequestT = Model::ListParticipantsRequest>
        void ListParticipantsAsync(const ListParticipantsRequestT& request, const ListParticipantsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&IvsrealtimeClient::ListParticipants, request, handler, context);
        }

        /**
         * <p>Gets summary information about all public keys in your account, in the AWS
         * region where the API request is processed.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ivs-realtime-2020-07-14/ListPublicKeys">AWS
         * API Reference</a></p>
         */
        virtual Model::ListPublicKeysOutcome ListPublicKeys(const Model::ListPublicKeysRequest& request = {}) const;

        /**
         * A Callable wrapper for ListPublicKeys that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ListPublicKeysRequestT = Model::ListPublicKeysRequest>
        Model::ListPublicKeysOutcomeCallable ListPublicKeysCallable(const ListPublicKeysRequestT& request = {}) const
        {
            return SubmitCallable(&IvsrealtimeClient::ListPublicKeys, request);
        }

        /**
         * An Async wrapper for ListPublicKeys that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListPublicKeysRequestT = Model::ListPublicKeysRequest>
        void ListPublicKeysAsync(const ListPublicKeysResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr, const ListPublicKeysRequestT& request = {}) const
        {
            return SubmitAsync(&IvsrealtimeClient::ListPublicKeys, request, handler, context);
        }

        /**
         * <p>Gets all sessions for a specified stage.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ivs-realtime-2020-07-14/ListStageSessions">AWS
         * API Reference</a></p>
         */
        virtual Model::ListStageSessionsOutcome ListStageSessions(const Model::ListStageSessionsRequest& request) const;

        /**
         * A Callable wrapper for ListStageSessions that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ListStageSessionsRequestT = Model::ListStageSessionsRequest>
        Model::ListStageSessionsOutcomeCallable ListStageSessionsCallable(const ListStageSessionsRequestT& request) const
        {
            return SubmitCallable(&IvsrealtimeClient::ListStageSessions, request);
        }

        /**
         * An Async wrapper for ListStageSessions that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListStageSessionsRequestT = Model::ListStageSessionsRequest>
        void ListStageSessionsAsync(const ListStageSessionsRequestT& request, const ListStageSessionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&IvsrealtimeClient::ListStageSessions, request, handler, context);
        }

        /**
         * <p>Gets summary information about all stages in your account, in the AWS region
         * where the API request is processed.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ivs-realtime-2020-07-14/ListStages">AWS
         * API Reference</a></p>
         */
        virtual Model::ListStagesOutcome ListStages(const Model::ListStagesRequest& request = {}) const;

        /**
         * A Callable wrapper for ListStages that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ListStagesRequestT = Model::ListStagesRequest>
        Model::ListStagesOutcomeCallable ListStagesCallable(const ListStagesRequestT& request = {}) const
        {
            return SubmitCallable(&IvsrealtimeClient::ListStages, request);
        }

        /**
         * An Async wrapper for ListStages that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListStagesRequestT = Model::ListStagesRequest>
        void ListStagesAsync(const ListStagesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr, const ListStagesRequestT& request = {}) const
        {
            return SubmitAsync(&IvsrealtimeClient::ListStages, request, handler, context);
        }

        /**
         * <p>Gets summary information about all storage configurations in your account, in
         * the AWS region where the API request is processed.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ivs-realtime-2020-07-14/ListStorageConfigurations">AWS
         * API Reference</a></p>
         */
        virtual Model::ListStorageConfigurationsOutcome ListStorageConfigurations(const Model::ListStorageConfigurationsRequest& request = {}) const;

        /**
         * A Callable wrapper for ListStorageConfigurations that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ListStorageConfigurationsRequestT = Model::ListStorageConfigurationsRequest>
        Model::ListStorageConfigurationsOutcomeCallable ListStorageConfigurationsCallable(const ListStorageConfigurationsRequestT& request = {}) const
        {
            return SubmitCallable(&IvsrealtimeClient::ListStorageConfigurations, request);
        }

        /**
         * An Async wrapper for ListStorageConfigurations that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListStorageConfigurationsRequestT = Model::ListStorageConfigurationsRequest>
        void ListStorageConfigurationsAsync(const ListStorageConfigurationsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr, const ListStorageConfigurationsRequestT& request = {}) const
        {
            return SubmitAsync(&IvsrealtimeClient::ListStorageConfigurations, request, handler, context);
        }

        /**
         * <p>Gets information about AWS tags for the specified ARN.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ivs-realtime-2020-07-14/ListTagsForResource">AWS
         * API Reference</a></p>
         */
        virtual Model::ListTagsForResourceOutcome ListTagsForResource(const Model::ListTagsForResourceRequest& request) const;

        /**
         * A Callable wrapper for ListTagsForResource that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ListTagsForResourceRequestT = Model::ListTagsForResourceRequest>
        Model::ListTagsForResourceOutcomeCallable ListTagsForResourceCallable(const ListTagsForResourceRequestT& request) const
        {
            return SubmitCallable(&IvsrealtimeClient::ListTagsForResource, request);
        }

        /**
         * An Async wrapper for ListTagsForResource that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListTagsForResourceRequestT = Model::ListTagsForResourceRequest>
        void ListTagsForResourceAsync(const ListTagsForResourceRequestT& request, const ListTagsForResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&IvsrealtimeClient::ListTagsForResource, request, handler, context);
        }

        /**
         * <p>Starts a Composition from a stage based on the configuration provided in the
         * request.</p> <p>A Composition is an ephemeral resource that exists after this
         * operation returns successfully. Composition stops and the resource is
         * deleted:</p> <ul> <li> <p>When <a>StopComposition</a> is called.</p> </li> <li>
         * <p>After a 1-minute timeout, when all participants are disconnected from the
         * stage.</p> </li> <li> <p>After a 1-minute timeout, if there are no participants
         * in the stage when StartComposition is called.</p> </li> <li> <p>When
         * broadcasting to the IVS channel fails and all retries are exhausted.</p> </li>
         * <li> <p>When broadcasting is disconnected and all attempts to reconnect are
         * exhausted.</p> </li> </ul><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ivs-realtime-2020-07-14/StartComposition">AWS
         * API Reference</a></p>
         */
        virtual Model::StartCompositionOutcome StartComposition(const Model::StartCompositionRequest& request) const;

        /**
         * A Callable wrapper for StartComposition that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename StartCompositionRequestT = Model::StartCompositionRequest>
        Model::StartCompositionOutcomeCallable StartCompositionCallable(const StartCompositionRequestT& request) const
        {
            return SubmitCallable(&IvsrealtimeClient::StartComposition, request);
        }

        /**
         * An Async wrapper for StartComposition that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename StartCompositionRequestT = Model::StartCompositionRequest>
        void StartCompositionAsync(const StartCompositionRequestT& request, const StartCompositionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&IvsrealtimeClient::StartComposition, request, handler, context);
        }

        /**
         * <p>Starts replicating a publishing participant from a source stage to a
         * destination stage.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ivs-realtime-2020-07-14/StartParticipantReplication">AWS
         * API Reference</a></p>
         */
        virtual Model::StartParticipantReplicationOutcome StartParticipantReplication(const Model::StartParticipantReplicationRequest& request) const;

        /**
         * A Callable wrapper for StartParticipantReplication that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename StartParticipantReplicationRequestT = Model::StartParticipantReplicationRequest>
        Model::StartParticipantReplicationOutcomeCallable StartParticipantReplicationCallable(const StartParticipantReplicationRequestT& request) const
        {
            return SubmitCallable(&IvsrealtimeClient::StartParticipantReplication, request);
        }

        /**
         * An Async wrapper for StartParticipantReplication that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename StartParticipantReplicationRequestT = Model::StartParticipantReplicationRequest>
        void StartParticipantReplicationAsync(const StartParticipantReplicationRequestT& request, const StartParticipantReplicationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&IvsrealtimeClient::StartParticipantReplication, request, handler, context);
        }

        /**
         * <p>Stops and deletes a Composition resource. Any broadcast from the Composition
         * resource is stopped.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ivs-realtime-2020-07-14/StopComposition">AWS
         * API Reference</a></p>
         */
        virtual Model::StopCompositionOutcome StopComposition(const Model::StopCompositionRequest& request) const;

        /**
         * A Callable wrapper for StopComposition that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename StopCompositionRequestT = Model::StopCompositionRequest>
        Model::StopCompositionOutcomeCallable StopCompositionCallable(const StopCompositionRequestT& request) const
        {
            return SubmitCallable(&IvsrealtimeClient::StopComposition, request);
        }

        /**
         * An Async wrapper for StopComposition that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename StopCompositionRequestT = Model::StopCompositionRequest>
        void StopCompositionAsync(const StopCompositionRequestT& request, const StopCompositionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&IvsrealtimeClient::StopComposition, request, handler, context);
        }

        /**
         * <p>Stops a replicated participant session.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ivs-realtime-2020-07-14/StopParticipantReplication">AWS
         * API Reference</a></p>
         */
        virtual Model::StopParticipantReplicationOutcome StopParticipantReplication(const Model::StopParticipantReplicationRequest& request) const;

        /**
         * A Callable wrapper for StopParticipantReplication that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename StopParticipantReplicationRequestT = Model::StopParticipantReplicationRequest>
        Model::StopParticipantReplicationOutcomeCallable StopParticipantReplicationCallable(const StopParticipantReplicationRequestT& request) const
        {
            return SubmitCallable(&IvsrealtimeClient::StopParticipantReplication, request);
        }

        /**
         * An Async wrapper for StopParticipantReplication that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename StopParticipantReplicationRequestT = Model::StopParticipantReplicationRequest>
        void StopParticipantReplicationAsync(const StopParticipantReplicationRequestT& request, const StopParticipantReplicationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&IvsrealtimeClient::StopParticipantReplication, request, handler, context);
        }

        /**
         * <p>Adds or updates tags for the AWS resource with the specified
         * ARN.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ivs-realtime-2020-07-14/TagResource">AWS
         * API Reference</a></p>
         */
        virtual Model::TagResourceOutcome TagResource(const Model::TagResourceRequest& request) const;

        /**
         * A Callable wrapper for TagResource that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename TagResourceRequestT = Model::TagResourceRequest>
        Model::TagResourceOutcomeCallable TagResourceCallable(const TagResourceRequestT& request) const
        {
            return SubmitCallable(&IvsrealtimeClient::TagResource, request);
        }

        /**
         * An Async wrapper for TagResource that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename TagResourceRequestT = Model::TagResourceRequest>
        void TagResourceAsync(const TagResourceRequestT& request, const TagResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&IvsrealtimeClient::TagResource, request, handler, context);
        }

        /**
         * <p>Removes tags from the resource with the specified ARN.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ivs-realtime-2020-07-14/UntagResource">AWS
         * API Reference</a></p>
         */
        virtual Model::UntagResourceOutcome UntagResource(const Model::UntagResourceRequest& request) const;

        /**
         * A Callable wrapper for UntagResource that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename UntagResourceRequestT = Model::UntagResourceRequest>
        Model::UntagResourceOutcomeCallable UntagResourceCallable(const UntagResourceRequestT& request) const
        {
            return SubmitCallable(&IvsrealtimeClient::UntagResource, request);
        }

        /**
         * An Async wrapper for UntagResource that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename UntagResourceRequestT = Model::UntagResourceRequest>
        void UntagResourceAsync(const UntagResourceRequestT& request, const UntagResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&IvsrealtimeClient::UntagResource, request, handler, context);
        }

        /**
         * <p>Updates a specified IngestConfiguration. Only the stage ARN attached to the
         * IngestConfiguration can be updated. An IngestConfiguration that is active cannot
         * be updated.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ivs-realtime-2020-07-14/UpdateIngestConfiguration">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateIngestConfigurationOutcome UpdateIngestConfiguration(const Model::UpdateIngestConfigurationRequest& request) const;

        /**
         * A Callable wrapper for UpdateIngestConfiguration that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename UpdateIngestConfigurationRequestT = Model::UpdateIngestConfigurationRequest>
        Model::UpdateIngestConfigurationOutcomeCallable UpdateIngestConfigurationCallable(const UpdateIngestConfigurationRequestT& request) const
        {
            return SubmitCallable(&IvsrealtimeClient::UpdateIngestConfiguration, request);
        }

        /**
         * An Async wrapper for UpdateIngestConfiguration that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename UpdateIngestConfigurationRequestT = Model::UpdateIngestConfigurationRequest>
        void UpdateIngestConfigurationAsync(const UpdateIngestConfigurationRequestT& request, const UpdateIngestConfigurationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&IvsrealtimeClient::UpdateIngestConfiguration, request, handler, context);
        }

        /**
         * <p>Updates a stage’s configuration.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ivs-realtime-2020-07-14/UpdateStage">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateStageOutcome UpdateStage(const Model::UpdateStageRequest& request) const;

        /**
         * A Callable wrapper for UpdateStage that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename UpdateStageRequestT = Model::UpdateStageRequest>
        Model::UpdateStageOutcomeCallable UpdateStageCallable(const UpdateStageRequestT& request) const
        {
            return SubmitCallable(&IvsrealtimeClient::UpdateStage, request);
        }

        /**
         * An Async wrapper for UpdateStage that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename UpdateStageRequestT = Model::UpdateStageRequest>
        void UpdateStageAsync(const UpdateStageRequestT& request, const UpdateStageResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&IvsrealtimeClient::UpdateStage, request, handler, context);
        }


      void OverrideEndpoint(const Aws::String& endpoint);
      std::shared_ptr<IvsrealtimeEndpointProviderBase>& accessEndpointProvider();
    private:
      friend class Aws::Client::ClientWithAsyncTemplateMethods<IvsrealtimeClient>;
      void init(const IvsrealtimeClientConfiguration& clientConfiguration);

      IvsrealtimeClientConfiguration m_clientConfiguration;
      std::shared_ptr<IvsrealtimeEndpointProviderBase> m_endpointProvider;
  };

} // namespace ivsrealtime
} // namespace Aws
