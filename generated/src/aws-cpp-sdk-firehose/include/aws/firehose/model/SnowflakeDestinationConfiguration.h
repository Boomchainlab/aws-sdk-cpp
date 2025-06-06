﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/firehose/Firehose_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/firehose/model/SnowflakeRoleConfiguration.h>
#include <aws/firehose/model/SnowflakeDataLoadingOption.h>
#include <aws/firehose/model/SnowflakeVpcConfiguration.h>
#include <aws/firehose/model/CloudWatchLoggingOptions.h>
#include <aws/firehose/model/ProcessingConfiguration.h>
#include <aws/firehose/model/SnowflakeRetryOptions.h>
#include <aws/firehose/model/SnowflakeS3BackupMode.h>
#include <aws/firehose/model/S3DestinationConfiguration.h>
#include <aws/firehose/model/SecretsManagerConfiguration.h>
#include <aws/firehose/model/SnowflakeBufferingHints.h>
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
namespace Firehose
{
namespace Model
{

  /**
   * <p>Configure Snowflake destination</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/firehose-2015-08-04/SnowflakeDestinationConfiguration">AWS
   * API Reference</a></p>
   */
  class SnowflakeDestinationConfiguration
  {
  public:
    AWS_FIREHOSE_API SnowflakeDestinationConfiguration() = default;
    AWS_FIREHOSE_API SnowflakeDestinationConfiguration(Aws::Utils::Json::JsonView jsonValue);
    AWS_FIREHOSE_API SnowflakeDestinationConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_FIREHOSE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>URL for accessing your Snowflake account. This URL must include your <a
     * href="https://docs.snowflake.com/en/user-guide/admin-account-identifier">account
     * identifier</a>. Note that the protocol (https://) and port number are
     * optional.</p>
     */
    inline const Aws::String& GetAccountUrl() const { return m_accountUrl; }
    inline bool AccountUrlHasBeenSet() const { return m_accountUrlHasBeenSet; }
    template<typename AccountUrlT = Aws::String>
    void SetAccountUrl(AccountUrlT&& value) { m_accountUrlHasBeenSet = true; m_accountUrl = std::forward<AccountUrlT>(value); }
    template<typename AccountUrlT = Aws::String>
    SnowflakeDestinationConfiguration& WithAccountUrl(AccountUrlT&& value) { SetAccountUrl(std::forward<AccountUrlT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The private key used to encrypt your Snowflake client. For information, see
     * <a
     * href="https://docs.snowflake.com/en/user-guide/data-load-snowpipe-streaming-configuration#using-key-pair-authentication-key-rotation">Using
     * Key Pair Authentication &amp; Key Rotation</a>.</p>
     */
    inline const Aws::String& GetPrivateKey() const { return m_privateKey; }
    inline bool PrivateKeyHasBeenSet() const { return m_privateKeyHasBeenSet; }
    template<typename PrivateKeyT = Aws::String>
    void SetPrivateKey(PrivateKeyT&& value) { m_privateKeyHasBeenSet = true; m_privateKey = std::forward<PrivateKeyT>(value); }
    template<typename PrivateKeyT = Aws::String>
    SnowflakeDestinationConfiguration& WithPrivateKey(PrivateKeyT&& value) { SetPrivateKey(std::forward<PrivateKeyT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Passphrase to decrypt the private key when the key is encrypted. For
     * information, see <a
     * href="https://docs.snowflake.com/en/user-guide/data-load-snowpipe-streaming-configuration#using-key-pair-authentication-key-rotation">Using
     * Key Pair Authentication &amp; Key Rotation</a>.</p>
     */
    inline const Aws::String& GetKeyPassphrase() const { return m_keyPassphrase; }
    inline bool KeyPassphraseHasBeenSet() const { return m_keyPassphraseHasBeenSet; }
    template<typename KeyPassphraseT = Aws::String>
    void SetKeyPassphrase(KeyPassphraseT&& value) { m_keyPassphraseHasBeenSet = true; m_keyPassphrase = std::forward<KeyPassphraseT>(value); }
    template<typename KeyPassphraseT = Aws::String>
    SnowflakeDestinationConfiguration& WithKeyPassphrase(KeyPassphraseT&& value) { SetKeyPassphrase(std::forward<KeyPassphraseT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>User login name for the Snowflake account.</p>
     */
    inline const Aws::String& GetUser() const { return m_user; }
    inline bool UserHasBeenSet() const { return m_userHasBeenSet; }
    template<typename UserT = Aws::String>
    void SetUser(UserT&& value) { m_userHasBeenSet = true; m_user = std::forward<UserT>(value); }
    template<typename UserT = Aws::String>
    SnowflakeDestinationConfiguration& WithUser(UserT&& value) { SetUser(std::forward<UserT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>All data in Snowflake is maintained in databases.</p>
     */
    inline const Aws::String& GetDatabase() const { return m_database; }
    inline bool DatabaseHasBeenSet() const { return m_databaseHasBeenSet; }
    template<typename DatabaseT = Aws::String>
    void SetDatabase(DatabaseT&& value) { m_databaseHasBeenSet = true; m_database = std::forward<DatabaseT>(value); }
    template<typename DatabaseT = Aws::String>
    SnowflakeDestinationConfiguration& WithDatabase(DatabaseT&& value) { SetDatabase(std::forward<DatabaseT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Each database consists of one or more schemas, which are logical groupings of
     * database objects, such as tables and views</p>
     */
    inline const Aws::String& GetSchema() const { return m_schema; }
    inline bool SchemaHasBeenSet() const { return m_schemaHasBeenSet; }
    template<typename SchemaT = Aws::String>
    void SetSchema(SchemaT&& value) { m_schemaHasBeenSet = true; m_schema = std::forward<SchemaT>(value); }
    template<typename SchemaT = Aws::String>
    SnowflakeDestinationConfiguration& WithSchema(SchemaT&& value) { SetSchema(std::forward<SchemaT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>All data in Snowflake is stored in database tables, logically structured as
     * collections of columns and rows.</p>
     */
    inline const Aws::String& GetTable() const { return m_table; }
    inline bool TableHasBeenSet() const { return m_tableHasBeenSet; }
    template<typename TableT = Aws::String>
    void SetTable(TableT&& value) { m_tableHasBeenSet = true; m_table = std::forward<TableT>(value); }
    template<typename TableT = Aws::String>
    SnowflakeDestinationConfiguration& WithTable(TableT&& value) { SetTable(std::forward<TableT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Optionally configure a Snowflake role. Otherwise the default user role will
     * be used.</p>
     */
    inline const SnowflakeRoleConfiguration& GetSnowflakeRoleConfiguration() const { return m_snowflakeRoleConfiguration; }
    inline bool SnowflakeRoleConfigurationHasBeenSet() const { return m_snowflakeRoleConfigurationHasBeenSet; }
    template<typename SnowflakeRoleConfigurationT = SnowflakeRoleConfiguration>
    void SetSnowflakeRoleConfiguration(SnowflakeRoleConfigurationT&& value) { m_snowflakeRoleConfigurationHasBeenSet = true; m_snowflakeRoleConfiguration = std::forward<SnowflakeRoleConfigurationT>(value); }
    template<typename SnowflakeRoleConfigurationT = SnowflakeRoleConfiguration>
    SnowflakeDestinationConfiguration& WithSnowflakeRoleConfiguration(SnowflakeRoleConfigurationT&& value) { SetSnowflakeRoleConfiguration(std::forward<SnowflakeRoleConfigurationT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Choose to load JSON keys mapped to table column names or choose to split the
     * JSON payload where content is mapped to a record content column and source
     * metadata is mapped to a record metadata column.</p>
     */
    inline SnowflakeDataLoadingOption GetDataLoadingOption() const { return m_dataLoadingOption; }
    inline bool DataLoadingOptionHasBeenSet() const { return m_dataLoadingOptionHasBeenSet; }
    inline void SetDataLoadingOption(SnowflakeDataLoadingOption value) { m_dataLoadingOptionHasBeenSet = true; m_dataLoadingOption = value; }
    inline SnowflakeDestinationConfiguration& WithDataLoadingOption(SnowflakeDataLoadingOption value) { SetDataLoadingOption(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specify a column name in the table, where the metadata information has to be
     * loaded. When you enable this field, you will see the following column in the
     * snowflake table, which differs based on the source type.</p> <p>For Direct PUT
     * as source </p> <p> <code>{ "firehoseDeliveryStreamName" : "streamname",
     * "IngestionTime" : "timestamp" }</code> </p> <p>For Kinesis Data Stream as source
     * </p> <p> <code> "kinesisStreamName" : "streamname", "kinesisShardId" : "Id",
     * "kinesisPartitionKey" : "key", "kinesisSequenceNumber" : "1234",
     * "subsequenceNumber" : "2334", "IngestionTime" : "timestamp" }</code> </p>
     */
    inline const Aws::String& GetMetaDataColumnName() const { return m_metaDataColumnName; }
    inline bool MetaDataColumnNameHasBeenSet() const { return m_metaDataColumnNameHasBeenSet; }
    template<typename MetaDataColumnNameT = Aws::String>
    void SetMetaDataColumnName(MetaDataColumnNameT&& value) { m_metaDataColumnNameHasBeenSet = true; m_metaDataColumnName = std::forward<MetaDataColumnNameT>(value); }
    template<typename MetaDataColumnNameT = Aws::String>
    SnowflakeDestinationConfiguration& WithMetaDataColumnName(MetaDataColumnNameT&& value) { SetMetaDataColumnName(std::forward<MetaDataColumnNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the record content column.</p>
     */
    inline const Aws::String& GetContentColumnName() const { return m_contentColumnName; }
    inline bool ContentColumnNameHasBeenSet() const { return m_contentColumnNameHasBeenSet; }
    template<typename ContentColumnNameT = Aws::String>
    void SetContentColumnName(ContentColumnNameT&& value) { m_contentColumnNameHasBeenSet = true; m_contentColumnName = std::forward<ContentColumnNameT>(value); }
    template<typename ContentColumnNameT = Aws::String>
    SnowflakeDestinationConfiguration& WithContentColumnName(ContentColumnNameT&& value) { SetContentColumnName(std::forward<ContentColumnNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The VPCE ID for Firehose to privately connect with Snowflake. The ID format
     * is com.amazonaws.vpce.[region].vpce-svc-&lt;[id]&gt;. For more information, see
     * <a
     * href="https://docs.snowflake.com/en/user-guide/admin-security-privatelink">Amazon
     * PrivateLink &amp; Snowflake</a> </p>
     */
    inline const SnowflakeVpcConfiguration& GetSnowflakeVpcConfiguration() const { return m_snowflakeVpcConfiguration; }
    inline bool SnowflakeVpcConfigurationHasBeenSet() const { return m_snowflakeVpcConfigurationHasBeenSet; }
    template<typename SnowflakeVpcConfigurationT = SnowflakeVpcConfiguration>
    void SetSnowflakeVpcConfiguration(SnowflakeVpcConfigurationT&& value) { m_snowflakeVpcConfigurationHasBeenSet = true; m_snowflakeVpcConfiguration = std::forward<SnowflakeVpcConfigurationT>(value); }
    template<typename SnowflakeVpcConfigurationT = SnowflakeVpcConfiguration>
    SnowflakeDestinationConfiguration& WithSnowflakeVpcConfiguration(SnowflakeVpcConfigurationT&& value) { SetSnowflakeVpcConfiguration(std::forward<SnowflakeVpcConfigurationT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const CloudWatchLoggingOptions& GetCloudWatchLoggingOptions() const { return m_cloudWatchLoggingOptions; }
    inline bool CloudWatchLoggingOptionsHasBeenSet() const { return m_cloudWatchLoggingOptionsHasBeenSet; }
    template<typename CloudWatchLoggingOptionsT = CloudWatchLoggingOptions>
    void SetCloudWatchLoggingOptions(CloudWatchLoggingOptionsT&& value) { m_cloudWatchLoggingOptionsHasBeenSet = true; m_cloudWatchLoggingOptions = std::forward<CloudWatchLoggingOptionsT>(value); }
    template<typename CloudWatchLoggingOptionsT = CloudWatchLoggingOptions>
    SnowflakeDestinationConfiguration& WithCloudWatchLoggingOptions(CloudWatchLoggingOptionsT&& value) { SetCloudWatchLoggingOptions(std::forward<CloudWatchLoggingOptionsT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const ProcessingConfiguration& GetProcessingConfiguration() const { return m_processingConfiguration; }
    inline bool ProcessingConfigurationHasBeenSet() const { return m_processingConfigurationHasBeenSet; }
    template<typename ProcessingConfigurationT = ProcessingConfiguration>
    void SetProcessingConfiguration(ProcessingConfigurationT&& value) { m_processingConfigurationHasBeenSet = true; m_processingConfiguration = std::forward<ProcessingConfigurationT>(value); }
    template<typename ProcessingConfigurationT = ProcessingConfiguration>
    SnowflakeDestinationConfiguration& WithProcessingConfiguration(ProcessingConfigurationT&& value) { SetProcessingConfiguration(std::forward<ProcessingConfigurationT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the Snowflake role</p>
     */
    inline const Aws::String& GetRoleARN() const { return m_roleARN; }
    inline bool RoleARNHasBeenSet() const { return m_roleARNHasBeenSet; }
    template<typename RoleARNT = Aws::String>
    void SetRoleARN(RoleARNT&& value) { m_roleARNHasBeenSet = true; m_roleARN = std::forward<RoleARNT>(value); }
    template<typename RoleARNT = Aws::String>
    SnowflakeDestinationConfiguration& WithRoleARN(RoleARNT&& value) { SetRoleARN(std::forward<RoleARNT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The time period where Firehose will retry sending data to the chosen HTTP
     * endpoint.</p>
     */
    inline const SnowflakeRetryOptions& GetRetryOptions() const { return m_retryOptions; }
    inline bool RetryOptionsHasBeenSet() const { return m_retryOptionsHasBeenSet; }
    template<typename RetryOptionsT = SnowflakeRetryOptions>
    void SetRetryOptions(RetryOptionsT&& value) { m_retryOptionsHasBeenSet = true; m_retryOptions = std::forward<RetryOptionsT>(value); }
    template<typename RetryOptionsT = SnowflakeRetryOptions>
    SnowflakeDestinationConfiguration& WithRetryOptions(RetryOptionsT&& value) { SetRetryOptions(std::forward<RetryOptionsT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Choose an S3 backup mode</p>
     */
    inline SnowflakeS3BackupMode GetS3BackupMode() const { return m_s3BackupMode; }
    inline bool S3BackupModeHasBeenSet() const { return m_s3BackupModeHasBeenSet; }
    inline void SetS3BackupMode(SnowflakeS3BackupMode value) { m_s3BackupModeHasBeenSet = true; m_s3BackupMode = value; }
    inline SnowflakeDestinationConfiguration& WithS3BackupMode(SnowflakeS3BackupMode value) { SetS3BackupMode(value); return *this;}
    ///@}

    ///@{
    
    inline const S3DestinationConfiguration& GetS3Configuration() const { return m_s3Configuration; }
    inline bool S3ConfigurationHasBeenSet() const { return m_s3ConfigurationHasBeenSet; }
    template<typename S3ConfigurationT = S3DestinationConfiguration>
    void SetS3Configuration(S3ConfigurationT&& value) { m_s3ConfigurationHasBeenSet = true; m_s3Configuration = std::forward<S3ConfigurationT>(value); }
    template<typename S3ConfigurationT = S3DestinationConfiguration>
    SnowflakeDestinationConfiguration& WithS3Configuration(S3ConfigurationT&& value) { SetS3Configuration(std::forward<S3ConfigurationT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> The configuration that defines how you access secrets for Snowflake. </p>
     */
    inline const SecretsManagerConfiguration& GetSecretsManagerConfiguration() const { return m_secretsManagerConfiguration; }
    inline bool SecretsManagerConfigurationHasBeenSet() const { return m_secretsManagerConfigurationHasBeenSet; }
    template<typename SecretsManagerConfigurationT = SecretsManagerConfiguration>
    void SetSecretsManagerConfiguration(SecretsManagerConfigurationT&& value) { m_secretsManagerConfigurationHasBeenSet = true; m_secretsManagerConfiguration = std::forward<SecretsManagerConfigurationT>(value); }
    template<typename SecretsManagerConfigurationT = SecretsManagerConfiguration>
    SnowflakeDestinationConfiguration& WithSecretsManagerConfiguration(SecretsManagerConfigurationT&& value) { SetSecretsManagerConfiguration(std::forward<SecretsManagerConfigurationT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> Describes the buffering to perform before delivering data to the Snowflake
     * destination. If you do not specify any value, Firehose uses the default values.
     * </p>
     */
    inline const SnowflakeBufferingHints& GetBufferingHints() const { return m_bufferingHints; }
    inline bool BufferingHintsHasBeenSet() const { return m_bufferingHintsHasBeenSet; }
    template<typename BufferingHintsT = SnowflakeBufferingHints>
    void SetBufferingHints(BufferingHintsT&& value) { m_bufferingHintsHasBeenSet = true; m_bufferingHints = std::forward<BufferingHintsT>(value); }
    template<typename BufferingHintsT = SnowflakeBufferingHints>
    SnowflakeDestinationConfiguration& WithBufferingHints(BufferingHintsT&& value) { SetBufferingHints(std::forward<BufferingHintsT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_accountUrl;
    bool m_accountUrlHasBeenSet = false;

    Aws::String m_privateKey;
    bool m_privateKeyHasBeenSet = false;

    Aws::String m_keyPassphrase;
    bool m_keyPassphraseHasBeenSet = false;

    Aws::String m_user;
    bool m_userHasBeenSet = false;

    Aws::String m_database;
    bool m_databaseHasBeenSet = false;

    Aws::String m_schema;
    bool m_schemaHasBeenSet = false;

    Aws::String m_table;
    bool m_tableHasBeenSet = false;

    SnowflakeRoleConfiguration m_snowflakeRoleConfiguration;
    bool m_snowflakeRoleConfigurationHasBeenSet = false;

    SnowflakeDataLoadingOption m_dataLoadingOption{SnowflakeDataLoadingOption::NOT_SET};
    bool m_dataLoadingOptionHasBeenSet = false;

    Aws::String m_metaDataColumnName;
    bool m_metaDataColumnNameHasBeenSet = false;

    Aws::String m_contentColumnName;
    bool m_contentColumnNameHasBeenSet = false;

    SnowflakeVpcConfiguration m_snowflakeVpcConfiguration;
    bool m_snowflakeVpcConfigurationHasBeenSet = false;

    CloudWatchLoggingOptions m_cloudWatchLoggingOptions;
    bool m_cloudWatchLoggingOptionsHasBeenSet = false;

    ProcessingConfiguration m_processingConfiguration;
    bool m_processingConfigurationHasBeenSet = false;

    Aws::String m_roleARN;
    bool m_roleARNHasBeenSet = false;

    SnowflakeRetryOptions m_retryOptions;
    bool m_retryOptionsHasBeenSet = false;

    SnowflakeS3BackupMode m_s3BackupMode{SnowflakeS3BackupMode::NOT_SET};
    bool m_s3BackupModeHasBeenSet = false;

    S3DestinationConfiguration m_s3Configuration;
    bool m_s3ConfigurationHasBeenSet = false;

    SecretsManagerConfiguration m_secretsManagerConfiguration;
    bool m_secretsManagerConfigurationHasBeenSet = false;

    SnowflakeBufferingHints m_bufferingHints;
    bool m_bufferingHintsHasBeenSet = false;
  };

} // namespace Model
} // namespace Firehose
} // namespace Aws
