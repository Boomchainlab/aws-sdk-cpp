﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/timestream-influxdb/TimestreamInfluxDB_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/timestream-influxdb/model/Status.h>
#include <aws/timestream-influxdb/model/NetworkType.h>
#include <aws/timestream-influxdb/model/DbInstanceType.h>
#include <aws/timestream-influxdb/model/DbStorageType.h>
#include <aws/timestream-influxdb/model/DeploymentType.h>
#include <aws/timestream-influxdb/model/InstanceMode.h>
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
namespace TimestreamInfluxDB
{
namespace Model
{

  /**
   * <p>Contains a summary of a DB instance belonging to a DB cluster.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/timestream-influxdb-2023-01-27/DbInstanceForClusterSummary">AWS
   * API Reference</a></p>
   */
  class DbInstanceForClusterSummary
  {
  public:
    AWS_TIMESTREAMINFLUXDB_API DbInstanceForClusterSummary() = default;
    AWS_TIMESTREAMINFLUXDB_API DbInstanceForClusterSummary(Aws::Utils::Json::JsonView jsonValue);
    AWS_TIMESTREAMINFLUXDB_API DbInstanceForClusterSummary& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_TIMESTREAMINFLUXDB_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The service-generated unique identifier of the DB instance.</p>
     */
    inline const Aws::String& GetId() const { return m_id; }
    inline bool IdHasBeenSet() const { return m_idHasBeenSet; }
    template<typename IdT = Aws::String>
    void SetId(IdT&& value) { m_idHasBeenSet = true; m_id = std::forward<IdT>(value); }
    template<typename IdT = Aws::String>
    DbInstanceForClusterSummary& WithId(IdT&& value) { SetId(std::forward<IdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A service-generated name for the DB instance based on the customer-supplied
     * name for the DB cluster.</p>
     */
    inline const Aws::String& GetName() const { return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    template<typename NameT = Aws::String>
    void SetName(NameT&& value) { m_nameHasBeenSet = true; m_name = std::forward<NameT>(value); }
    template<typename NameT = Aws::String>
    DbInstanceForClusterSummary& WithName(NameT&& value) { SetName(std::forward<NameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the DB instance.</p>
     */
    inline const Aws::String& GetArn() const { return m_arn; }
    inline bool ArnHasBeenSet() const { return m_arnHasBeenSet; }
    template<typename ArnT = Aws::String>
    void SetArn(ArnT&& value) { m_arnHasBeenSet = true; m_arn = std::forward<ArnT>(value); }
    template<typename ArnT = Aws::String>
    DbInstanceForClusterSummary& WithArn(ArnT&& value) { SetArn(std::forward<ArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The status of the DB instance.</p>
     */
    inline Status GetStatus() const { return m_status; }
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
    inline void SetStatus(Status value) { m_statusHasBeenSet = true; m_status = value; }
    inline DbInstanceForClusterSummary& WithStatus(Status value) { SetStatus(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The endpoint used to connect to InfluxDB. The default InfluxDB port is
     * 8086.</p>
     */
    inline const Aws::String& GetEndpoint() const { return m_endpoint; }
    inline bool EndpointHasBeenSet() const { return m_endpointHasBeenSet; }
    template<typename EndpointT = Aws::String>
    void SetEndpoint(EndpointT&& value) { m_endpointHasBeenSet = true; m_endpoint = std::forward<EndpointT>(value); }
    template<typename EndpointT = Aws::String>
    DbInstanceForClusterSummary& WithEndpoint(EndpointT&& value) { SetEndpoint(std::forward<EndpointT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The port number on which InfluxDB accepts connections.</p>
     */
    inline int GetPort() const { return m_port; }
    inline bool PortHasBeenSet() const { return m_portHasBeenSet; }
    inline void SetPort(int value) { m_portHasBeenSet = true; m_port = value; }
    inline DbInstanceForClusterSummary& WithPort(int value) { SetPort(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies whether the network type of the Timestream for InfluxDB instance is
     * IPv4, which can communicate over IPv4 protocol only, or DUAL, which can
     * communicate over both IPv4 and IPv6 protocols.</p>
     */
    inline NetworkType GetNetworkType() const { return m_networkType; }
    inline bool NetworkTypeHasBeenSet() const { return m_networkTypeHasBeenSet; }
    inline void SetNetworkType(NetworkType value) { m_networkTypeHasBeenSet = true; m_networkType = value; }
    inline DbInstanceForClusterSummary& WithNetworkType(NetworkType value) { SetNetworkType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Timestream for InfluxDB instance type to run InfluxDB on.</p>
     */
    inline DbInstanceType GetDbInstanceType() const { return m_dbInstanceType; }
    inline bool DbInstanceTypeHasBeenSet() const { return m_dbInstanceTypeHasBeenSet; }
    inline void SetDbInstanceType(DbInstanceType value) { m_dbInstanceTypeHasBeenSet = true; m_dbInstanceType = value; }
    inline DbInstanceForClusterSummary& WithDbInstanceType(DbInstanceType value) { SetDbInstanceType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The storage type for your DB instance.</p>
     */
    inline DbStorageType GetDbStorageType() const { return m_dbStorageType; }
    inline bool DbStorageTypeHasBeenSet() const { return m_dbStorageTypeHasBeenSet; }
    inline void SetDbStorageType(DbStorageType value) { m_dbStorageTypeHasBeenSet = true; m_dbStorageType = value; }
    inline DbInstanceForClusterSummary& WithDbStorageType(DbStorageType value) { SetDbStorageType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The amount of storage allocated for your DB storage type in GiB
     * (gibibytes).</p>
     */
    inline int GetAllocatedStorage() const { return m_allocatedStorage; }
    inline bool AllocatedStorageHasBeenSet() const { return m_allocatedStorageHasBeenSet; }
    inline void SetAllocatedStorage(int value) { m_allocatedStorageHasBeenSet = true; m_allocatedStorage = value; }
    inline DbInstanceForClusterSummary& WithAllocatedStorage(int value) { SetAllocatedStorage(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies the deployment type if applicable.</p>
     */
    inline DeploymentType GetDeploymentType() const { return m_deploymentType; }
    inline bool DeploymentTypeHasBeenSet() const { return m_deploymentTypeHasBeenSet; }
    inline void SetDeploymentType(DeploymentType value) { m_deploymentTypeHasBeenSet = true; m_deploymentType = value; }
    inline DbInstanceForClusterSummary& WithDeploymentType(DeploymentType value) { SetDeploymentType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies the DB instance's role in the cluster.</p>
     */
    inline InstanceMode GetInstanceMode() const { return m_instanceMode; }
    inline bool InstanceModeHasBeenSet() const { return m_instanceModeHasBeenSet; }
    inline void SetInstanceMode(InstanceMode value) { m_instanceModeHasBeenSet = true; m_instanceMode = value; }
    inline DbInstanceForClusterSummary& WithInstanceMode(InstanceMode value) { SetInstanceMode(value); return *this;}
    ///@}
  private:

    Aws::String m_id;
    bool m_idHasBeenSet = false;

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    Aws::String m_arn;
    bool m_arnHasBeenSet = false;

    Status m_status{Status::NOT_SET};
    bool m_statusHasBeenSet = false;

    Aws::String m_endpoint;
    bool m_endpointHasBeenSet = false;

    int m_port{0};
    bool m_portHasBeenSet = false;

    NetworkType m_networkType{NetworkType::NOT_SET};
    bool m_networkTypeHasBeenSet = false;

    DbInstanceType m_dbInstanceType{DbInstanceType::NOT_SET};
    bool m_dbInstanceTypeHasBeenSet = false;

    DbStorageType m_dbStorageType{DbStorageType::NOT_SET};
    bool m_dbStorageTypeHasBeenSet = false;

    int m_allocatedStorage{0};
    bool m_allocatedStorageHasBeenSet = false;

    DeploymentType m_deploymentType{DeploymentType::NOT_SET};
    bool m_deploymentTypeHasBeenSet = false;

    InstanceMode m_instanceMode{InstanceMode::NOT_SET};
    bool m_instanceModeHasBeenSet = false;
  };

} // namespace Model
} // namespace TimestreamInfluxDB
} // namespace Aws
