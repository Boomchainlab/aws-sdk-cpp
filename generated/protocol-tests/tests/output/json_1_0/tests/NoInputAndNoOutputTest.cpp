﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */
#include <aws/core/utils/logging/LogMacros.h>
#include <aws/testing/AwsProtocolTestHelpers.h>
#include <aws/json-rpc-10/JSONRPC10Client.h>
#include <aws/json-rpc-10/model/NoInputAndNoOutputRequest.h>

using NoInputAndNoOutput = AWS_PROTOCOL_TEST_SUITE;
using JSONRPC10Client = Aws::JSONRPC10::JSONRPC10Client;
using namespace Aws::JSONRPC10::Model;

AWS_PROTOCOL_TEST(NoInputAndNoOutput, AwsJson10HandlesEmptyOutputShape) {
  JSONRPC10Client client(mockCredentials, mockConfig);

  OutputResponse mockRs;
  mockRs.statusCode = 200;
  mockRs.headers = {{"Content-Type", R"(application/x-amz-json-1.0)"}};
  mockRs.body = "e30=";
  SetMockResponse(mockRs);

  NoInputAndNoOutputRequest request;

  auto outcome = client.NoInputAndNoOutput(request);
  ValidateRequestSent();
  AWS_ASSERT_SUCCESS(outcome) << outcome.GetError();
  /* expectedResult = R"( {} )" */
}

AWS_PROTOCOL_TEST(NoInputAndNoOutput, AwsJson10HandlesUnexpectedJsonOutput) {
  JSONRPC10Client client(mockCredentials, mockConfig);

  OutputResponse mockRs;
  mockRs.statusCode = 200;
  mockRs.headers = {{"Content-Type", R"(application/x-amz-json-1.0)"}};
  mockRs.body = "ewogICAgImZvbyI6IHRydWUKfQ==";
  SetMockResponse(mockRs);

  NoInputAndNoOutputRequest request;

  auto outcome = client.NoInputAndNoOutput(request);
  ValidateRequestSent();
  AWS_ASSERT_SUCCESS(outcome) << outcome.GetError();
  /* expectedResult = R"( {} )" */
}

AWS_PROTOCOL_TEST(NoInputAndNoOutput, AwsJson10ServiceRespondsWithNoPayload) {
  JSONRPC10Client client(mockCredentials, mockConfig);

  OutputResponse mockRs;
  mockRs.statusCode = 200;
  mockRs.headers = {{"Content-Type", R"(application/x-amz-json-1.0)"}};
  SetMockResponse(mockRs);

  NoInputAndNoOutputRequest request;

  auto outcome = client.NoInputAndNoOutput(request);
  ValidateRequestSent();
  AWS_ASSERT_SUCCESS(outcome) << outcome.GetError();
  /* expectedResult = R"( {} )" */
}
