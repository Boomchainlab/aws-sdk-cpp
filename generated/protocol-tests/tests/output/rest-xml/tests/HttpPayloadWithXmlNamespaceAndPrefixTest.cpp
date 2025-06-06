﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */
#include <aws/core/utils/logging/LogMacros.h>
#include <aws/testing/AwsProtocolTestHelpers.h>
#include <aws/rest-xml-protocol/RestXmlProtocolClient.h>
#include <aws/rest-xml-protocol/model/HttpPayloadWithXmlNamespaceAndPrefixRequest.h>

using HttpPayloadWithXmlNamespaceAndPrefix = AWS_PROTOCOL_TEST_SUITE;
using RestXmlProtocolClient = Aws::RestXmlProtocol::RestXmlProtocolClient;
using namespace Aws::RestXmlProtocol::Model;

AWS_PROTOCOL_TEST(HttpPayloadWithXmlNamespaceAndPrefix, HttpPayloadWithXmlNamespaceAndPrefix) {
  RestXmlProtocolClient client(mockCredentials, mockConfig);

  OutputResponse mockRs;
  mockRs.statusCode = 200;
  mockRs.headers = {{"Content-Type", R"(application/xml)"}};
  mockRs.body = "PFBheWxvYWRXaXRoWG1sTmFtZXNwYWNlQW5kUHJlZml4IHhtbG5zOmJhej0iaHR0cDovL2Zvby5jb20iPgogICAgPG5hbWU+UGhyZWRkeTwvbmFtZT4KPC9QYXlsb2FkV2l0aFhtbE5hbWVzcGFjZUFuZFByZWZpeD4=";
  SetMockResponse(mockRs);

  HttpPayloadWithXmlNamespaceAndPrefixRequest request;

  auto outcome = client.HttpPayloadWithXmlNamespaceAndPrefix(request);
  ValidateRequestSent();
  AWS_ASSERT_SUCCESS(outcome) << outcome.GetError();
  const HttpPayloadWithXmlNamespaceAndPrefixResult& result = outcome.GetResult();
  /* expectedResult = R"( {"nested":{"name":"Phreddy"}} )" */
  {
    const PayloadWithXmlNamespaceAndPrefix& resultNested = result.GetNested();
    EXPECT_EQ(R"(Phreddy)", resultNested.GetName());
  }
}
