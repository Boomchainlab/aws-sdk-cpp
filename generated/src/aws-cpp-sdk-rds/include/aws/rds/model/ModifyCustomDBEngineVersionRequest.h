﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/rds/RDS_EXPORTS.h>
#include <aws/rds/RDSRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/rds/model/CustomEngineVersionStatus.h>
#include <utility>

namespace Aws
{
namespace RDS
{
namespace Model
{

  /**
   */
  class ModifyCustomDBEngineVersionRequest : public RDSRequest
  {
  public:
    AWS_RDS_API ModifyCustomDBEngineVersionRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "ModifyCustomDBEngineVersion"; }

    AWS_RDS_API Aws::String SerializePayload() const override;

  protected:
    AWS_RDS_API void DumpBodyToUrl(Aws::Http::URI& uri ) const override;

  public:

    ///@{
    /**
     * <p>The database engine. RDS Custom for Oracle supports the following values:</p>
     * <ul> <li> <p> <code>custom-oracle-ee</code> </p> </li> <li> <p>
     * <code>custom-oracle-ee-cdb</code> </p> </li> <li> <p>
     * <code>custom-oracle-se2</code> </p> </li> <li> <p>
     * <code>custom-oracle-se2-cdb</code> </p> </li> </ul>
     */
    inline const Aws::String& GetEngine() const { return m_engine; }
    inline bool EngineHasBeenSet() const { return m_engineHasBeenSet; }
    template<typename EngineT = Aws::String>
    void SetEngine(EngineT&& value) { m_engineHasBeenSet = true; m_engine = std::forward<EngineT>(value); }
    template<typename EngineT = Aws::String>
    ModifyCustomDBEngineVersionRequest& WithEngine(EngineT&& value) { SetEngine(std::forward<EngineT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The custom engine version (CEV) that you want to modify. This option is
     * required for RDS Custom for Oracle, but optional for Amazon RDS. The combination
     * of <code>Engine</code> and <code>EngineVersion</code> is unique per customer per
     * Amazon Web Services Region.</p>
     */
    inline const Aws::String& GetEngineVersion() const { return m_engineVersion; }
    inline bool EngineVersionHasBeenSet() const { return m_engineVersionHasBeenSet; }
    template<typename EngineVersionT = Aws::String>
    void SetEngineVersion(EngineVersionT&& value) { m_engineVersionHasBeenSet = true; m_engineVersion = std::forward<EngineVersionT>(value); }
    template<typename EngineVersionT = Aws::String>
    ModifyCustomDBEngineVersionRequest& WithEngineVersion(EngineVersionT&& value) { SetEngineVersion(std::forward<EngineVersionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>An optional description of your CEV.</p>
     */
    inline const Aws::String& GetDescription() const { return m_description; }
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }
    template<typename DescriptionT = Aws::String>
    void SetDescription(DescriptionT&& value) { m_descriptionHasBeenSet = true; m_description = std::forward<DescriptionT>(value); }
    template<typename DescriptionT = Aws::String>
    ModifyCustomDBEngineVersionRequest& WithDescription(DescriptionT&& value) { SetDescription(std::forward<DescriptionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The availability status to be assigned to the CEV. Valid values are as
     * follows:</p> <dl> <dt>available</dt> <dd> <p>You can use this CEV to create a
     * new RDS Custom DB instance.</p> </dd> <dt>inactive</dt> <dd> <p>You can create a
     * new RDS Custom instance by restoring a DB snapshot with this CEV. You can't
     * patch or create new instances with this CEV.</p> </dd> </dl> <p>You can change
     * any status to any status. A typical reason to change status is to prevent the
     * accidental use of a CEV, or to make a deprecated CEV eligible for use again. For
     * example, you might change the status of your CEV from <code>available</code> to
     * <code>inactive</code>, and from <code>inactive</code> back to
     * <code>available</code>. To change the availability status of the CEV, it must
     * not currently be in use by an RDS Custom instance, snapshot, or automated
     * backup.</p>
     */
    inline CustomEngineVersionStatus GetStatus() const { return m_status; }
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
    inline void SetStatus(CustomEngineVersionStatus value) { m_statusHasBeenSet = true; m_status = value; }
    inline ModifyCustomDBEngineVersionRequest& WithStatus(CustomEngineVersionStatus value) { SetStatus(value); return *this;}
    ///@}
  private:

    Aws::String m_engine;
    bool m_engineHasBeenSet = false;

    Aws::String m_engineVersion;
    bool m_engineVersionHasBeenSet = false;

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;

    CustomEngineVersionStatus m_status{CustomEngineVersionStatus::NOT_SET};
    bool m_statusHasBeenSet = false;
  };

} // namespace Model
} // namespace RDS
} // namespace Aws
