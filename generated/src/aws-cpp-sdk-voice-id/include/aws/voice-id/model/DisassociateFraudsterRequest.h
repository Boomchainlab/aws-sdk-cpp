﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/voice-id/VoiceID_EXPORTS.h>
#include <aws/voice-id/VoiceIDRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace VoiceID
{
namespace Model
{

  /**
   */
  class DisassociateFraudsterRequest : public VoiceIDRequest
  {
  public:
    AWS_VOICEID_API DisassociateFraudsterRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DisassociateFraudster"; }

    AWS_VOICEID_API Aws::String SerializePayload() const override;

    AWS_VOICEID_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p>The identifier of the domain that contains the fraudster.</p>
     */
    inline const Aws::String& GetDomainId() const { return m_domainId; }
    inline bool DomainIdHasBeenSet() const { return m_domainIdHasBeenSet; }
    template<typename DomainIdT = Aws::String>
    void SetDomainId(DomainIdT&& value) { m_domainIdHasBeenSet = true; m_domainId = std::forward<DomainIdT>(value); }
    template<typename DomainIdT = Aws::String>
    DisassociateFraudsterRequest& WithDomainId(DomainIdT&& value) { SetDomainId(std::forward<DomainIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The identifier of the fraudster to be disassociated from the watchlist.</p>
     */
    inline const Aws::String& GetFraudsterId() const { return m_fraudsterId; }
    inline bool FraudsterIdHasBeenSet() const { return m_fraudsterIdHasBeenSet; }
    template<typename FraudsterIdT = Aws::String>
    void SetFraudsterId(FraudsterIdT&& value) { m_fraudsterIdHasBeenSet = true; m_fraudsterId = std::forward<FraudsterIdT>(value); }
    template<typename FraudsterIdT = Aws::String>
    DisassociateFraudsterRequest& WithFraudsterId(FraudsterIdT&& value) { SetFraudsterId(std::forward<FraudsterIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The identifier of the watchlist that you want to disassociate from the
     * fraudster.</p>
     */
    inline const Aws::String& GetWatchlistId() const { return m_watchlistId; }
    inline bool WatchlistIdHasBeenSet() const { return m_watchlistIdHasBeenSet; }
    template<typename WatchlistIdT = Aws::String>
    void SetWatchlistId(WatchlistIdT&& value) { m_watchlistIdHasBeenSet = true; m_watchlistId = std::forward<WatchlistIdT>(value); }
    template<typename WatchlistIdT = Aws::String>
    DisassociateFraudsterRequest& WithWatchlistId(WatchlistIdT&& value) { SetWatchlistId(std::forward<WatchlistIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_domainId;
    bool m_domainIdHasBeenSet = false;

    Aws::String m_fraudsterId;
    bool m_fraudsterIdHasBeenSet = false;

    Aws::String m_watchlistId;
    bool m_watchlistIdHasBeenSet = false;
  };

} // namespace Model
} // namespace VoiceID
} // namespace Aws
