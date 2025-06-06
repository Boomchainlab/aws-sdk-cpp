﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/servicecatalog/ServiceCatalog_EXPORTS.h>
#include <aws/servicecatalog/ServiceCatalogRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <utility>
#include <aws/core/utils/UUID.h>

namespace Aws
{
namespace ServiceCatalog
{
namespace Model
{

  /**
   */
  class ExecuteProvisionedProductServiceActionRequest : public ServiceCatalogRequest
  {
  public:
    AWS_SERVICECATALOG_API ExecuteProvisionedProductServiceActionRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "ExecuteProvisionedProductServiceAction"; }

    AWS_SERVICECATALOG_API Aws::String SerializePayload() const override;

    AWS_SERVICECATALOG_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p>The identifier of the provisioned product.</p>
     */
    inline const Aws::String& GetProvisionedProductId() const { return m_provisionedProductId; }
    inline bool ProvisionedProductIdHasBeenSet() const { return m_provisionedProductIdHasBeenSet; }
    template<typename ProvisionedProductIdT = Aws::String>
    void SetProvisionedProductId(ProvisionedProductIdT&& value) { m_provisionedProductIdHasBeenSet = true; m_provisionedProductId = std::forward<ProvisionedProductIdT>(value); }
    template<typename ProvisionedProductIdT = Aws::String>
    ExecuteProvisionedProductServiceActionRequest& WithProvisionedProductId(ProvisionedProductIdT&& value) { SetProvisionedProductId(std::forward<ProvisionedProductIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The self-service action identifier. For example,
     * <code>act-fs7abcd89wxyz</code>.</p>
     */
    inline const Aws::String& GetServiceActionId() const { return m_serviceActionId; }
    inline bool ServiceActionIdHasBeenSet() const { return m_serviceActionIdHasBeenSet; }
    template<typename ServiceActionIdT = Aws::String>
    void SetServiceActionId(ServiceActionIdT&& value) { m_serviceActionIdHasBeenSet = true; m_serviceActionId = std::forward<ServiceActionIdT>(value); }
    template<typename ServiceActionIdT = Aws::String>
    ExecuteProvisionedProductServiceActionRequest& WithServiceActionId(ServiceActionIdT&& value) { SetServiceActionId(std::forward<ServiceActionIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>An idempotency token that uniquely identifies the execute request.</p>
     */
    inline const Aws::String& GetExecuteToken() const { return m_executeToken; }
    inline bool ExecuteTokenHasBeenSet() const { return m_executeTokenHasBeenSet; }
    template<typename ExecuteTokenT = Aws::String>
    void SetExecuteToken(ExecuteTokenT&& value) { m_executeTokenHasBeenSet = true; m_executeToken = std::forward<ExecuteTokenT>(value); }
    template<typename ExecuteTokenT = Aws::String>
    ExecuteProvisionedProductServiceActionRequest& WithExecuteToken(ExecuteTokenT&& value) { SetExecuteToken(std::forward<ExecuteTokenT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The language code.</p> <ul> <li> <p> <code>jp</code> - Japanese</p> </li>
     * <li> <p> <code>zh</code> - Chinese</p> </li> </ul>
     */
    inline const Aws::String& GetAcceptLanguage() const { return m_acceptLanguage; }
    inline bool AcceptLanguageHasBeenSet() const { return m_acceptLanguageHasBeenSet; }
    template<typename AcceptLanguageT = Aws::String>
    void SetAcceptLanguage(AcceptLanguageT&& value) { m_acceptLanguageHasBeenSet = true; m_acceptLanguage = std::forward<AcceptLanguageT>(value); }
    template<typename AcceptLanguageT = Aws::String>
    ExecuteProvisionedProductServiceActionRequest& WithAcceptLanguage(AcceptLanguageT&& value) { SetAcceptLanguage(std::forward<AcceptLanguageT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A map of all self-service action parameters and their values. If a provided
     * parameter is of a special type, such as <code>TARGET</code>, the provided value
     * will override the default value generated by Service Catalog. If the parameters
     * field is not provided, no additional parameters are passed and default values
     * will be used for any special parameters such as <code>TARGET</code>.</p>
     */
    inline const Aws::Map<Aws::String, Aws::Vector<Aws::String>>& GetParameters() const { return m_parameters; }
    inline bool ParametersHasBeenSet() const { return m_parametersHasBeenSet; }
    template<typename ParametersT = Aws::Map<Aws::String, Aws::Vector<Aws::String>>>
    void SetParameters(ParametersT&& value) { m_parametersHasBeenSet = true; m_parameters = std::forward<ParametersT>(value); }
    template<typename ParametersT = Aws::Map<Aws::String, Aws::Vector<Aws::String>>>
    ExecuteProvisionedProductServiceActionRequest& WithParameters(ParametersT&& value) { SetParameters(std::forward<ParametersT>(value)); return *this;}
    template<typename ParametersKeyT = Aws::String, typename ParametersValueT = Aws::Vector<Aws::String>>
    ExecuteProvisionedProductServiceActionRequest& AddParameters(ParametersKeyT&& key, ParametersValueT&& value) {
      m_parametersHasBeenSet = true; m_parameters.emplace(std::forward<ParametersKeyT>(key), std::forward<ParametersValueT>(value)); return *this;
    }
    ///@}
  private:

    Aws::String m_provisionedProductId;
    bool m_provisionedProductIdHasBeenSet = false;

    Aws::String m_serviceActionId;
    bool m_serviceActionIdHasBeenSet = false;

    Aws::String m_executeToken{Aws::Utils::UUID::PseudoRandomUUID()};
    bool m_executeTokenHasBeenSet = true;

    Aws::String m_acceptLanguage;
    bool m_acceptLanguageHasBeenSet = false;

    Aws::Map<Aws::String, Aws::Vector<Aws::String>> m_parameters;
    bool m_parametersHasBeenSet = false;
  };

} // namespace Model
} // namespace ServiceCatalog
} // namespace Aws
