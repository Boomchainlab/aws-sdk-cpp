﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/dms/DatabaseMigrationService_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
namespace DatabaseMigrationService
{
namespace Model
{

  /**
   * <p>Provides information that defines an Amazon Neptune endpoint.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/dms-2016-01-01/NeptuneSettings">AWS
   * API Reference</a></p>
   */
  class NeptuneSettings
  {
  public:
    AWS_DATABASEMIGRATIONSERVICE_API NeptuneSettings() = default;
    AWS_DATABASEMIGRATIONSERVICE_API NeptuneSettings(Aws::Utils::Json::JsonView jsonValue);
    AWS_DATABASEMIGRATIONSERVICE_API NeptuneSettings& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_DATABASEMIGRATIONSERVICE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the service role that you created for the
     * Neptune target endpoint. The role must allow the <code>iam:PassRole</code>
     * action. For more information, see <a
     * href="https://docs.aws.amazon.com/dms/latest/userguide/CHAP_Target.Neptune.html#CHAP_Target.Neptune.ServiceRole">Creating
     * an IAM Service Role for Accessing Amazon Neptune as a Target</a> in the
     * <i>Database Migration Service User Guide. </i> </p>
     */
    inline const Aws::String& GetServiceAccessRoleArn() const { return m_serviceAccessRoleArn; }
    inline bool ServiceAccessRoleArnHasBeenSet() const { return m_serviceAccessRoleArnHasBeenSet; }
    template<typename ServiceAccessRoleArnT = Aws::String>
    void SetServiceAccessRoleArn(ServiceAccessRoleArnT&& value) { m_serviceAccessRoleArnHasBeenSet = true; m_serviceAccessRoleArn = std::forward<ServiceAccessRoleArnT>(value); }
    template<typename ServiceAccessRoleArnT = Aws::String>
    NeptuneSettings& WithServiceAccessRoleArn(ServiceAccessRoleArnT&& value) { SetServiceAccessRoleArn(std::forward<ServiceAccessRoleArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the Amazon S3 bucket where DMS can temporarily store migrated
     * graph data in .csv files before bulk-loading it to the Neptune target database.
     * DMS maps the SQL source data to graph data before storing it in these .csv
     * files.</p>
     */
    inline const Aws::String& GetS3BucketName() const { return m_s3BucketName; }
    inline bool S3BucketNameHasBeenSet() const { return m_s3BucketNameHasBeenSet; }
    template<typename S3BucketNameT = Aws::String>
    void SetS3BucketName(S3BucketNameT&& value) { m_s3BucketNameHasBeenSet = true; m_s3BucketName = std::forward<S3BucketNameT>(value); }
    template<typename S3BucketNameT = Aws::String>
    NeptuneSettings& WithS3BucketName(S3BucketNameT&& value) { SetS3BucketName(std::forward<S3BucketNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A folder path where you want DMS to store migrated graph data in the S3
     * bucket specified by <code>S3BucketName</code> </p>
     */
    inline const Aws::String& GetS3BucketFolder() const { return m_s3BucketFolder; }
    inline bool S3BucketFolderHasBeenSet() const { return m_s3BucketFolderHasBeenSet; }
    template<typename S3BucketFolderT = Aws::String>
    void SetS3BucketFolder(S3BucketFolderT&& value) { m_s3BucketFolderHasBeenSet = true; m_s3BucketFolder = std::forward<S3BucketFolderT>(value); }
    template<typename S3BucketFolderT = Aws::String>
    NeptuneSettings& WithS3BucketFolder(S3BucketFolderT&& value) { SetS3BucketFolder(std::forward<S3BucketFolderT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The number of milliseconds for DMS to wait to retry a bulk-load of migrated
     * graph data to the Neptune target database before raising an error. The default
     * is 250.</p>
     */
    inline int GetErrorRetryDuration() const { return m_errorRetryDuration; }
    inline bool ErrorRetryDurationHasBeenSet() const { return m_errorRetryDurationHasBeenSet; }
    inline void SetErrorRetryDuration(int value) { m_errorRetryDurationHasBeenSet = true; m_errorRetryDuration = value; }
    inline NeptuneSettings& WithErrorRetryDuration(int value) { SetErrorRetryDuration(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The maximum size in kilobytes of migrated graph data stored in a .csv file
     * before DMS bulk-loads the data to the Neptune target database. The default is
     * 1,048,576 KB. If the bulk load is successful, DMS clears the bucket, ready to
     * store the next batch of migrated graph data.</p>
     */
    inline int GetMaxFileSize() const { return m_maxFileSize; }
    inline bool MaxFileSizeHasBeenSet() const { return m_maxFileSizeHasBeenSet; }
    inline void SetMaxFileSize(int value) { m_maxFileSizeHasBeenSet = true; m_maxFileSize = value; }
    inline NeptuneSettings& WithMaxFileSize(int value) { SetMaxFileSize(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The number of times for DMS to retry a bulk load of migrated graph data to
     * the Neptune target database before raising an error. The default is 5.</p>
     */
    inline int GetMaxRetryCount() const { return m_maxRetryCount; }
    inline bool MaxRetryCountHasBeenSet() const { return m_maxRetryCountHasBeenSet; }
    inline void SetMaxRetryCount(int value) { m_maxRetryCountHasBeenSet = true; m_maxRetryCount = value; }
    inline NeptuneSettings& WithMaxRetryCount(int value) { SetMaxRetryCount(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>If you want Identity and Access Management (IAM) authorization enabled for
     * this endpoint, set this parameter to <code>true</code>. Then attach the
     * appropriate IAM policy document to your service role specified by
     * <code>ServiceAccessRoleArn</code>. The default is <code>false</code>.</p>
     */
    inline bool GetIamAuthEnabled() const { return m_iamAuthEnabled; }
    inline bool IamAuthEnabledHasBeenSet() const { return m_iamAuthEnabledHasBeenSet; }
    inline void SetIamAuthEnabled(bool value) { m_iamAuthEnabledHasBeenSet = true; m_iamAuthEnabled = value; }
    inline NeptuneSettings& WithIamAuthEnabled(bool value) { SetIamAuthEnabled(value); return *this;}
    ///@}
  private:

    Aws::String m_serviceAccessRoleArn;
    bool m_serviceAccessRoleArnHasBeenSet = false;

    Aws::String m_s3BucketName;
    bool m_s3BucketNameHasBeenSet = false;

    Aws::String m_s3BucketFolder;
    bool m_s3BucketFolderHasBeenSet = false;

    int m_errorRetryDuration{0};
    bool m_errorRetryDurationHasBeenSet = false;

    int m_maxFileSize{0};
    bool m_maxFileSizeHasBeenSet = false;

    int m_maxRetryCount{0};
    bool m_maxRetryCountHasBeenSet = false;

    bool m_iamAuthEnabled{false};
    bool m_iamAuthEnabledHasBeenSet = false;
  };

} // namespace Model
} // namespace DatabaseMigrationService
} // namespace Aws
