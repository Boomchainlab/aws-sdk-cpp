﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/greengrass/Greengrass_EXPORTS.h>
#include <aws/greengrass/GreengrassRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace Greengrass
{
namespace Model
{

  /**
   */
  class GetConnectorDefinitionRequest : public GreengrassRequest
  {
  public:
    AWS_GREENGRASS_API GetConnectorDefinitionRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "GetConnectorDefinition"; }

    AWS_GREENGRASS_API Aws::String SerializePayload() const override;


    ///@{
    /**
     * The ID of the connector definition.
     */
    inline const Aws::String& GetConnectorDefinitionId() const { return m_connectorDefinitionId; }
    inline bool ConnectorDefinitionIdHasBeenSet() const { return m_connectorDefinitionIdHasBeenSet; }
    template<typename ConnectorDefinitionIdT = Aws::String>
    void SetConnectorDefinitionId(ConnectorDefinitionIdT&& value) { m_connectorDefinitionIdHasBeenSet = true; m_connectorDefinitionId = std::forward<ConnectorDefinitionIdT>(value); }
    template<typename ConnectorDefinitionIdT = Aws::String>
    GetConnectorDefinitionRequest& WithConnectorDefinitionId(ConnectorDefinitionIdT&& value) { SetConnectorDefinitionId(std::forward<ConnectorDefinitionIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_connectorDefinitionId;
    bool m_connectorDefinitionIdHasBeenSet = false;
  };

} // namespace Model
} // namespace Greengrass
} // namespace Aws
