﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/guardduty/GuardDuty_EXPORTS.h>
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
namespace GuardDuty
{
namespace Model
{

  /**
   * <p>Contains information on the owner of the bucket.</p><p><h3>See Also:</h3>  
   * <a href="http://docs.aws.amazon.com/goto/WebAPI/guardduty-2017-11-28/Owner">AWS
   * API Reference</a></p>
   */
  class Owner
  {
  public:
    AWS_GUARDDUTY_API Owner() = default;
    AWS_GUARDDUTY_API Owner(Aws::Utils::Json::JsonView jsonValue);
    AWS_GUARDDUTY_API Owner& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_GUARDDUTY_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The canonical user ID of the bucket owner. For information about locating
     * your canonical user ID see <a
     * href="https://docs.aws.amazon.com/general/latest/gr/acct-identifiers.html#FindingCanonicalId">Finding
     * Your Account Canonical User ID.</a> </p>
     */
    inline const Aws::String& GetId() const { return m_id; }
    inline bool IdHasBeenSet() const { return m_idHasBeenSet; }
    template<typename IdT = Aws::String>
    void SetId(IdT&& value) { m_idHasBeenSet = true; m_id = std::forward<IdT>(value); }
    template<typename IdT = Aws::String>
    Owner& WithId(IdT&& value) { SetId(std::forward<IdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_id;
    bool m_idHasBeenSet = false;
  };

} // namespace Model
} // namespace GuardDuty
} // namespace Aws
