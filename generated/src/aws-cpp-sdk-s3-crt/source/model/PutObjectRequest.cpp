﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/s3-crt/model/PutObjectRequest.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/http/URI.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>
#include <aws/core/utils/HashingUtils.h>

#include <utility>

using namespace Aws::S3Crt::Model;
using namespace Aws::Utils::Stream;
using namespace Aws::Utils;
using namespace Aws::Http;
using namespace Aws;


void PutObjectRequest::AddQueryStringParameters(URI& uri) const
{
    Aws::StringStream ss;
    if(!m_customizedAccessLogTag.empty())
    {
        // only accept customized LogTag which starts with "x-"
        Aws::Map<Aws::String, Aws::String> collectedLogTags;
        for(const auto& entry: m_customizedAccessLogTag)
        {
            if (!entry.first.empty() && !entry.second.empty() && entry.first.substr(0, 2) == "x-")
            {
                collectedLogTags.emplace(entry.first, entry.second);
            }
        }

        if (!collectedLogTags.empty())
        {
            uri.AddQueryStringParameter(collectedLogTags);
        }
    }
}

Aws::Http::HeaderValueCollection PutObjectRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  Aws::StringStream ss;
  if(m_aCLHasBeenSet && m_aCL != ObjectCannedACL::NOT_SET)
  {
    headers.emplace("x-amz-acl", ObjectCannedACLMapper::GetNameForObjectCannedACL(m_aCL));
  }

  if(m_cacheControlHasBeenSet)
  {
    ss << m_cacheControl;
    headers.emplace("cache-control",  ss.str());
    ss.str("");
  }

  if(m_contentDispositionHasBeenSet)
  {
    ss << m_contentDisposition;
    headers.emplace("content-disposition",  ss.str());
    ss.str("");
  }

  if(m_contentEncodingHasBeenSet)
  {
    ss << m_contentEncoding;
    headers.emplace("content-encoding",  ss.str());
    ss.str("");
  }

  if(m_contentLanguageHasBeenSet)
  {
    ss << m_contentLanguage;
    headers.emplace("content-language",  ss.str());
    ss.str("");
  }

  if(m_contentLengthHasBeenSet)
  {
    ss << m_contentLength;
    headers.emplace("content-length",  ss.str());
    ss.str("");
  }

  if(m_contentMD5HasBeenSet)
  {
    ss << m_contentMD5;
    headers.emplace("content-md5",  ss.str());
    ss.str("");
  }

  if(m_checksumAlgorithmHasBeenSet && m_checksumAlgorithm != ChecksumAlgorithm::NOT_SET)
  {
    headers.emplace("x-amz-sdk-checksum-algorithm", ChecksumAlgorithmMapper::GetNameForChecksumAlgorithm(m_checksumAlgorithm));
  }

  if(m_checksumCRC32HasBeenSet)
  {
    ss << m_checksumCRC32;
    headers.emplace("x-amz-checksum-crc32",  ss.str());
    ss.str("");
  }

  if(m_checksumCRC32CHasBeenSet)
  {
    ss << m_checksumCRC32C;
    headers.emplace("x-amz-checksum-crc32c",  ss.str());
    ss.str("");
  }

  if(m_checksumCRC64NVMEHasBeenSet)
  {
    ss << m_checksumCRC64NVME;
    headers.emplace("x-amz-checksum-crc64nvme",  ss.str());
    ss.str("");
  }

  if(m_checksumSHA1HasBeenSet)
  {
    ss << m_checksumSHA1;
    headers.emplace("x-amz-checksum-sha1",  ss.str());
    ss.str("");
  }

  if(m_checksumSHA256HasBeenSet)
  {
    ss << m_checksumSHA256;
    headers.emplace("x-amz-checksum-sha256",  ss.str());
    ss.str("");
  }

  if(m_expiresHasBeenSet)
  {
    headers.emplace("expires", m_expires.ToGmtString(Aws::Utils::DateFormat::RFC822));
  }

  if(m_ifMatchHasBeenSet)
  {
    ss << m_ifMatch;
    headers.emplace("if-match",  ss.str());
    ss.str("");
  }

  if(m_ifNoneMatchHasBeenSet)
  {
    ss << m_ifNoneMatch;
    headers.emplace("if-none-match",  ss.str());
    ss.str("");
  }

  if(m_grantFullControlHasBeenSet)
  {
    ss << m_grantFullControl;
    headers.emplace("x-amz-grant-full-control",  ss.str());
    ss.str("");
  }

  if(m_grantReadHasBeenSet)
  {
    ss << m_grantRead;
    headers.emplace("x-amz-grant-read",  ss.str());
    ss.str("");
  }

  if(m_grantReadACPHasBeenSet)
  {
    ss << m_grantReadACP;
    headers.emplace("x-amz-grant-read-acp",  ss.str());
    ss.str("");
  }

  if(m_grantWriteACPHasBeenSet)
  {
    ss << m_grantWriteACP;
    headers.emplace("x-amz-grant-write-acp",  ss.str());
    ss.str("");
  }

  if(m_writeOffsetBytesHasBeenSet)
  {
    ss << m_writeOffsetBytes;
    headers.emplace("x-amz-write-offset-bytes",  ss.str());
    ss.str("");
  }

  if(m_metadataHasBeenSet)
  {
    for(const auto& item : m_metadata)
    {
      ss << "x-amz-meta-" << item.first;
      headers.emplace(ss.str(), item.second);
      ss.str("");
    }
  }

  if(m_serverSideEncryptionHasBeenSet && m_serverSideEncryption != ServerSideEncryption::NOT_SET)
  {
    headers.emplace("x-amz-server-side-encryption", ServerSideEncryptionMapper::GetNameForServerSideEncryption(m_serverSideEncryption));
  }

  if(m_storageClassHasBeenSet && m_storageClass != StorageClass::NOT_SET)
  {
    headers.emplace("x-amz-storage-class", StorageClassMapper::GetNameForStorageClass(m_storageClass));
  }

  if(m_websiteRedirectLocationHasBeenSet)
  {
    ss << m_websiteRedirectLocation;
    headers.emplace("x-amz-website-redirect-location",  ss.str());
    ss.str("");
  }

  if(m_sSECustomerAlgorithmHasBeenSet)
  {
    ss << m_sSECustomerAlgorithm;
    headers.emplace("x-amz-server-side-encryption-customer-algorithm",  ss.str());
    ss.str("");
  }

  if(m_sSECustomerKeyHasBeenSet)
  {
    ss << m_sSECustomerKey;
    headers.emplace("x-amz-server-side-encryption-customer-key",  ss.str());
    ss.str("");
  }

  if(m_sSECustomerKeyMD5HasBeenSet)
  {
    ss << m_sSECustomerKeyMD5;
    headers.emplace("x-amz-server-side-encryption-customer-key-md5",  ss.str());
    ss.str("");
  }

  if(m_sSEKMSKeyIdHasBeenSet)
  {
    ss << m_sSEKMSKeyId;
    headers.emplace("x-amz-server-side-encryption-aws-kms-key-id",  ss.str());
    ss.str("");
  }

  if(m_sSEKMSEncryptionContextHasBeenSet)
  {
    ss << m_sSEKMSEncryptionContext;
    headers.emplace("x-amz-server-side-encryption-context",  ss.str());
    ss.str("");
  }

  if(m_bucketKeyEnabledHasBeenSet)
  {
    ss << std::boolalpha << m_bucketKeyEnabled;
    headers.emplace("x-amz-server-side-encryption-bucket-key-enabled", ss.str());
    ss.str("");
  }

  if(m_requestPayerHasBeenSet && m_requestPayer != RequestPayer::NOT_SET)
  {
    headers.emplace("x-amz-request-payer", RequestPayerMapper::GetNameForRequestPayer(m_requestPayer));
  }

  if(m_taggingHasBeenSet)
  {
    ss << m_tagging;
    headers.emplace("x-amz-tagging",  ss.str());
    ss.str("");
  }

  if(m_objectLockModeHasBeenSet && m_objectLockMode != ObjectLockMode::NOT_SET)
  {
    headers.emplace("x-amz-object-lock-mode", ObjectLockModeMapper::GetNameForObjectLockMode(m_objectLockMode));
  }

  if(m_objectLockRetainUntilDateHasBeenSet)
  {
    headers.emplace("x-amz-object-lock-retain-until-date", m_objectLockRetainUntilDate.ToGmtString(Aws::Utils::DateFormat::ISO_8601));
  }

  if(m_objectLockLegalHoldStatusHasBeenSet && m_objectLockLegalHoldStatus != ObjectLockLegalHoldStatus::NOT_SET)
  {
    headers.emplace("x-amz-object-lock-legal-hold", ObjectLockLegalHoldStatusMapper::GetNameForObjectLockLegalHoldStatus(m_objectLockLegalHoldStatus));
  }

  if(m_expectedBucketOwnerHasBeenSet)
  {
    ss << m_expectedBucketOwner;
    headers.emplace("x-amz-expected-bucket-owner",  ss.str());
    ss.str("");
  }

  return headers;

}

bool PutObjectRequest::HasEmbeddedError(Aws::IOStream &body,
  const Aws::Http::HeaderValueCollection &header) const
{
  // Header is unused
  AWS_UNREFERENCED_PARAM(header);

  auto readPointer = body.tellg();
  Utils::Xml::XmlDocument doc = Utils::Xml::XmlDocument::CreateFromXmlStream(body);
  body.seekg(readPointer);

  if (!doc.WasParseSuccessful()) {
    return false;
  }

  if (!doc.GetRootElement().IsNull() && doc.GetRootElement().GetName() == Aws::String("Error")) {
    return true;
  }

  return false;
}

PutObjectRequest::EndpointParameters PutObjectRequest::GetEndpointContextParams() const
{
    EndpointParameters parameters;
    // Operation context parameters
    if (BucketHasBeenSet()) {
        parameters.emplace_back(Aws::String("Bucket"), this->GetBucket(), Aws::Endpoint::EndpointParameter::ParameterOrigin::OPERATION_CONTEXT);
    }
    if (KeyHasBeenSet()) {
        parameters.emplace_back(Aws::String("Key"), this->GetKey(), Aws::Endpoint::EndpointParameter::ParameterOrigin::OPERATION_CONTEXT);
    }
    return parameters;
}

Aws::String PutObjectRequest::GetChecksumAlgorithmName() const
{
  if (m_checksumAlgorithm == ChecksumAlgorithm::NOT_SET)
  {
    return "crc64nvme";
  }
  else
  {
    return ChecksumAlgorithmMapper::GetNameForChecksumAlgorithm(m_checksumAlgorithm);
  }
}

