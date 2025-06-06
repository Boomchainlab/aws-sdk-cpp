﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/s3-crt/S3Crt_EXPORTS.h>
#include <aws/s3-crt/model/StorageClass.h>
#include <aws/s3-crt/model/IntelligentTieringAccessTier.h>
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
   * <p>Object is archived and inaccessible until restored.</p> <p>If the object you
   * are retrieving is stored in the S3 Glacier Flexible Retrieval storage class, the
   * S3 Glacier Deep Archive storage class, the S3 Intelligent-Tiering Archive Access
   * tier, or the S3 Intelligent-Tiering Deep Archive Access tier, before you can
   * retrieve the object you must first restore a copy using <a
   * href="https://docs.aws.amazon.com/AmazonS3/latest/API/API_RestoreObject.html">RestoreObject</a>.
   * Otherwise, this operation returns an <code>InvalidObjectState</code> error. For
   * information about restoring archived objects, see <a
   * href="https://docs.aws.amazon.com/AmazonS3/latest/dev/restoring-objects.html">Restoring
   * Archived Objects</a> in the <i>Amazon S3 User Guide</i>.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/s3-2006-03-01/InvalidObjectState">AWS
   * API Reference</a></p>
   */
  class InvalidObjectState
  {
  public:
    AWS_S3CRT_API InvalidObjectState() = default;
    AWS_S3CRT_API InvalidObjectState(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_S3CRT_API InvalidObjectState& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    AWS_S3CRT_API void AddToNode(Aws::Utils::Xml::XmlNode& parentNode) const;


    ///@{
    
    inline StorageClass GetStorageClass() const { return m_storageClass; }
    inline bool StorageClassHasBeenSet() const { return m_storageClassHasBeenSet; }
    inline void SetStorageClass(StorageClass value) { m_storageClassHasBeenSet = true; m_storageClass = value; }
    inline InvalidObjectState& WithStorageClass(StorageClass value) { SetStorageClass(value); return *this;}
    ///@}

    ///@{
    
    inline IntelligentTieringAccessTier GetAccessTier() const { return m_accessTier; }
    inline bool AccessTierHasBeenSet() const { return m_accessTierHasBeenSet; }
    inline void SetAccessTier(IntelligentTieringAccessTier value) { m_accessTierHasBeenSet = true; m_accessTier = value; }
    inline InvalidObjectState& WithAccessTier(IntelligentTieringAccessTier value) { SetAccessTier(value); return *this;}
    ///@}
  private:

    StorageClass m_storageClass{StorageClass::NOT_SET};
    bool m_storageClassHasBeenSet = false;

    IntelligentTieringAccessTier m_accessTier{IntelligentTieringAccessTier::NOT_SET};
    bool m_accessTierHasBeenSet = false;
  };

} // namespace Model
} // namespace S3Crt
} // namespace Aws
