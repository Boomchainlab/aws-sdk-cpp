﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/marketplace-catalog/MarketplaceCatalog_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
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
namespace MarketplaceCatalog
{
namespace Model
{

  /**
   * <p>Allows filtering on the <code>ResaleAuthorizationId</code> of an offer.</p>
   *  <p>Not all offers have a <code>ResaleAuthorizationId</code>. The response
   * will only include offers for which you have permissions.</p> <p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/marketplace-catalog-2018-09-17/OfferResaleAuthorizationIdFilter">AWS
   * API Reference</a></p>
   */
  class OfferResaleAuthorizationIdFilter
  {
  public:
    AWS_MARKETPLACECATALOG_API OfferResaleAuthorizationIdFilter() = default;
    AWS_MARKETPLACECATALOG_API OfferResaleAuthorizationIdFilter(Aws::Utils::Json::JsonView jsonValue);
    AWS_MARKETPLACECATALOG_API OfferResaleAuthorizationIdFilter& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_MARKETPLACECATALOG_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Allows filtering on the <code>ResaleAuthorizationId</code> of an offer with
     * list input.</p>
     */
    inline const Aws::Vector<Aws::String>& GetValueList() const { return m_valueList; }
    inline bool ValueListHasBeenSet() const { return m_valueListHasBeenSet; }
    template<typename ValueListT = Aws::Vector<Aws::String>>
    void SetValueList(ValueListT&& value) { m_valueListHasBeenSet = true; m_valueList = std::forward<ValueListT>(value); }
    template<typename ValueListT = Aws::Vector<Aws::String>>
    OfferResaleAuthorizationIdFilter& WithValueList(ValueListT&& value) { SetValueList(std::forward<ValueListT>(value)); return *this;}
    template<typename ValueListT = Aws::String>
    OfferResaleAuthorizationIdFilter& AddValueList(ValueListT&& value) { m_valueListHasBeenSet = true; m_valueList.emplace_back(std::forward<ValueListT>(value)); return *this; }
    ///@}
  private:

    Aws::Vector<Aws::String> m_valueList;
    bool m_valueListHasBeenSet = false;
  };

} // namespace Model
} // namespace MarketplaceCatalog
} // namespace Aws
