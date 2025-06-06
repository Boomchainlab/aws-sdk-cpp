﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/iam/IAM_EXPORTS.h>
#include <aws/iam/IAMRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace IAM
{
namespace Model
{

  /**
   */
  class DeleteSAMLProviderRequest : public IAMRequest
  {
  public:
    AWS_IAM_API DeleteSAMLProviderRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DeleteSAMLProvider"; }

    AWS_IAM_API Aws::String SerializePayload() const override;

  protected:
    AWS_IAM_API void DumpBodyToUrl(Aws::Http::URI& uri ) const override;

  public:

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the SAML provider to delete.</p>
     */
    inline const Aws::String& GetSAMLProviderArn() const { return m_sAMLProviderArn; }
    inline bool SAMLProviderArnHasBeenSet() const { return m_sAMLProviderArnHasBeenSet; }
    template<typename SAMLProviderArnT = Aws::String>
    void SetSAMLProviderArn(SAMLProviderArnT&& value) { m_sAMLProviderArnHasBeenSet = true; m_sAMLProviderArn = std::forward<SAMLProviderArnT>(value); }
    template<typename SAMLProviderArnT = Aws::String>
    DeleteSAMLProviderRequest& WithSAMLProviderArn(SAMLProviderArnT&& value) { SetSAMLProviderArn(std::forward<SAMLProviderArnT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_sAMLProviderArn;
    bool m_sAMLProviderArnHasBeenSet = false;
  };

} // namespace Model
} // namespace IAM
} // namespace Aws
