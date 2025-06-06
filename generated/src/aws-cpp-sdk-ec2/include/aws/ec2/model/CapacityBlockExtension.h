﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ec2/EC2_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSStreamFwd.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/ec2/model/CapacityBlockExtensionStatus.h>
#include <aws/core/utils/DateTime.h>
#include <utility>

namespace Aws
{
namespace Utils
{
namespace Xml
{
  class XmlNode;
} // namespace Xml
} // namespace Utils
namespace EC2
{
namespace Model
{

  /**
   * <p>Describes a Capacity Block extension. With an extension, you can extend the
   * duration of time for an existing Capacity Block.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/CapacityBlockExtension">AWS
   * API Reference</a></p>
   */
  class CapacityBlockExtension
  {
  public:
    AWS_EC2_API CapacityBlockExtension() = default;
    AWS_EC2_API CapacityBlockExtension(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_EC2_API CapacityBlockExtension& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    AWS_EC2_API void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    AWS_EC2_API void OutputToStream(Aws::OStream& oStream, const char* location) const;


    ///@{
    /**
     * <p>The reservation ID of the Capacity Block extension.</p>
     */
    inline const Aws::String& GetCapacityReservationId() const { return m_capacityReservationId; }
    inline bool CapacityReservationIdHasBeenSet() const { return m_capacityReservationIdHasBeenSet; }
    template<typename CapacityReservationIdT = Aws::String>
    void SetCapacityReservationId(CapacityReservationIdT&& value) { m_capacityReservationIdHasBeenSet = true; m_capacityReservationId = std::forward<CapacityReservationIdT>(value); }
    template<typename CapacityReservationIdT = Aws::String>
    CapacityBlockExtension& WithCapacityReservationId(CapacityReservationIdT&& value) { SetCapacityReservationId(std::forward<CapacityReservationIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The instance type of the Capacity Block extension.</p>
     */
    inline const Aws::String& GetInstanceType() const { return m_instanceType; }
    inline bool InstanceTypeHasBeenSet() const { return m_instanceTypeHasBeenSet; }
    template<typename InstanceTypeT = Aws::String>
    void SetInstanceType(InstanceTypeT&& value) { m_instanceTypeHasBeenSet = true; m_instanceType = std::forward<InstanceTypeT>(value); }
    template<typename InstanceTypeT = Aws::String>
    CapacityBlockExtension& WithInstanceType(InstanceTypeT&& value) { SetInstanceType(std::forward<InstanceTypeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The number of instances in the Capacity Block extension.</p>
     */
    inline int GetInstanceCount() const { return m_instanceCount; }
    inline bool InstanceCountHasBeenSet() const { return m_instanceCountHasBeenSet; }
    inline void SetInstanceCount(int value) { m_instanceCountHasBeenSet = true; m_instanceCount = value; }
    inline CapacityBlockExtension& WithInstanceCount(int value) { SetInstanceCount(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Availability Zone of the Capacity Block extension.</p>
     */
    inline const Aws::String& GetAvailabilityZone() const { return m_availabilityZone; }
    inline bool AvailabilityZoneHasBeenSet() const { return m_availabilityZoneHasBeenSet; }
    template<typename AvailabilityZoneT = Aws::String>
    void SetAvailabilityZone(AvailabilityZoneT&& value) { m_availabilityZoneHasBeenSet = true; m_availabilityZone = std::forward<AvailabilityZoneT>(value); }
    template<typename AvailabilityZoneT = Aws::String>
    CapacityBlockExtension& WithAvailabilityZone(AvailabilityZoneT&& value) { SetAvailabilityZone(std::forward<AvailabilityZoneT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Availability Zone ID of the Capacity Block extension.</p>
     */
    inline const Aws::String& GetAvailabilityZoneId() const { return m_availabilityZoneId; }
    inline bool AvailabilityZoneIdHasBeenSet() const { return m_availabilityZoneIdHasBeenSet; }
    template<typename AvailabilityZoneIdT = Aws::String>
    void SetAvailabilityZoneId(AvailabilityZoneIdT&& value) { m_availabilityZoneIdHasBeenSet = true; m_availabilityZoneId = std::forward<AvailabilityZoneIdT>(value); }
    template<typename AvailabilityZoneIdT = Aws::String>
    CapacityBlockExtension& WithAvailabilityZoneId(AvailabilityZoneIdT&& value) { SetAvailabilityZoneId(std::forward<AvailabilityZoneIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the Capacity Block extension offering.</p>
     */
    inline const Aws::String& GetCapacityBlockExtensionOfferingId() const { return m_capacityBlockExtensionOfferingId; }
    inline bool CapacityBlockExtensionOfferingIdHasBeenSet() const { return m_capacityBlockExtensionOfferingIdHasBeenSet; }
    template<typename CapacityBlockExtensionOfferingIdT = Aws::String>
    void SetCapacityBlockExtensionOfferingId(CapacityBlockExtensionOfferingIdT&& value) { m_capacityBlockExtensionOfferingIdHasBeenSet = true; m_capacityBlockExtensionOfferingId = std::forward<CapacityBlockExtensionOfferingIdT>(value); }
    template<typename CapacityBlockExtensionOfferingIdT = Aws::String>
    CapacityBlockExtension& WithCapacityBlockExtensionOfferingId(CapacityBlockExtensionOfferingIdT&& value) { SetCapacityBlockExtensionOfferingId(std::forward<CapacityBlockExtensionOfferingIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The duration of the Capacity Block extension in hours.</p>
     */
    inline int GetCapacityBlockExtensionDurationHours() const { return m_capacityBlockExtensionDurationHours; }
    inline bool CapacityBlockExtensionDurationHoursHasBeenSet() const { return m_capacityBlockExtensionDurationHoursHasBeenSet; }
    inline void SetCapacityBlockExtensionDurationHours(int value) { m_capacityBlockExtensionDurationHoursHasBeenSet = true; m_capacityBlockExtensionDurationHours = value; }
    inline CapacityBlockExtension& WithCapacityBlockExtensionDurationHours(int value) { SetCapacityBlockExtensionDurationHours(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The status of the Capacity Block extension. A Capacity Block extension can
     * have one of the following statuses:</p> <ul> <li> <p>
     * <code>payment-pending</code> - The Capacity Block extension payment is
     * processing. If your payment can't be processed within 12 hours, the Capacity
     * Block extension is failed.</p> </li> <li> <p> <code>payment-failed</code> -
     * Payment for the Capacity Block extension request was not successful.</p> </li>
     * <li> <p> <code>payment-succeeded</code> - Payment for the Capacity Block
     * extension request was successful. You receive an invoice that reflects the
     * one-time upfront payment. In the invoice, you can associate the paid amount with
     * the Capacity Block reservation ID.</p> </li> </ul>
     */
    inline CapacityBlockExtensionStatus GetCapacityBlockExtensionStatus() const { return m_capacityBlockExtensionStatus; }
    inline bool CapacityBlockExtensionStatusHasBeenSet() const { return m_capacityBlockExtensionStatusHasBeenSet; }
    inline void SetCapacityBlockExtensionStatus(CapacityBlockExtensionStatus value) { m_capacityBlockExtensionStatusHasBeenSet = true; m_capacityBlockExtensionStatus = value; }
    inline CapacityBlockExtension& WithCapacityBlockExtensionStatus(CapacityBlockExtensionStatus value) { SetCapacityBlockExtensionStatus(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The date when the Capacity Block extension was purchased.</p>
     */
    inline const Aws::Utils::DateTime& GetCapacityBlockExtensionPurchaseDate() const { return m_capacityBlockExtensionPurchaseDate; }
    inline bool CapacityBlockExtensionPurchaseDateHasBeenSet() const { return m_capacityBlockExtensionPurchaseDateHasBeenSet; }
    template<typename CapacityBlockExtensionPurchaseDateT = Aws::Utils::DateTime>
    void SetCapacityBlockExtensionPurchaseDate(CapacityBlockExtensionPurchaseDateT&& value) { m_capacityBlockExtensionPurchaseDateHasBeenSet = true; m_capacityBlockExtensionPurchaseDate = std::forward<CapacityBlockExtensionPurchaseDateT>(value); }
    template<typename CapacityBlockExtensionPurchaseDateT = Aws::Utils::DateTime>
    CapacityBlockExtension& WithCapacityBlockExtensionPurchaseDate(CapacityBlockExtensionPurchaseDateT&& value) { SetCapacityBlockExtensionPurchaseDate(std::forward<CapacityBlockExtensionPurchaseDateT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The start date of the Capacity Block extension.</p>
     */
    inline const Aws::Utils::DateTime& GetCapacityBlockExtensionStartDate() const { return m_capacityBlockExtensionStartDate; }
    inline bool CapacityBlockExtensionStartDateHasBeenSet() const { return m_capacityBlockExtensionStartDateHasBeenSet; }
    template<typename CapacityBlockExtensionStartDateT = Aws::Utils::DateTime>
    void SetCapacityBlockExtensionStartDate(CapacityBlockExtensionStartDateT&& value) { m_capacityBlockExtensionStartDateHasBeenSet = true; m_capacityBlockExtensionStartDate = std::forward<CapacityBlockExtensionStartDateT>(value); }
    template<typename CapacityBlockExtensionStartDateT = Aws::Utils::DateTime>
    CapacityBlockExtension& WithCapacityBlockExtensionStartDate(CapacityBlockExtensionStartDateT&& value) { SetCapacityBlockExtensionStartDate(std::forward<CapacityBlockExtensionStartDateT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The end date of the Capacity Block extension.</p>
     */
    inline const Aws::Utils::DateTime& GetCapacityBlockExtensionEndDate() const { return m_capacityBlockExtensionEndDate; }
    inline bool CapacityBlockExtensionEndDateHasBeenSet() const { return m_capacityBlockExtensionEndDateHasBeenSet; }
    template<typename CapacityBlockExtensionEndDateT = Aws::Utils::DateTime>
    void SetCapacityBlockExtensionEndDate(CapacityBlockExtensionEndDateT&& value) { m_capacityBlockExtensionEndDateHasBeenSet = true; m_capacityBlockExtensionEndDate = std::forward<CapacityBlockExtensionEndDateT>(value); }
    template<typename CapacityBlockExtensionEndDateT = Aws::Utils::DateTime>
    CapacityBlockExtension& WithCapacityBlockExtensionEndDate(CapacityBlockExtensionEndDateT&& value) { SetCapacityBlockExtensionEndDate(std::forward<CapacityBlockExtensionEndDateT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The total price to be paid up front.</p>
     */
    inline const Aws::String& GetUpfrontFee() const { return m_upfrontFee; }
    inline bool UpfrontFeeHasBeenSet() const { return m_upfrontFeeHasBeenSet; }
    template<typename UpfrontFeeT = Aws::String>
    void SetUpfrontFee(UpfrontFeeT&& value) { m_upfrontFeeHasBeenSet = true; m_upfrontFee = std::forward<UpfrontFeeT>(value); }
    template<typename UpfrontFeeT = Aws::String>
    CapacityBlockExtension& WithUpfrontFee(UpfrontFeeT&& value) { SetUpfrontFee(std::forward<UpfrontFeeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The currency of the payment for the Capacity Block extension.</p>
     */
    inline const Aws::String& GetCurrencyCode() const { return m_currencyCode; }
    inline bool CurrencyCodeHasBeenSet() const { return m_currencyCodeHasBeenSet; }
    template<typename CurrencyCodeT = Aws::String>
    void SetCurrencyCode(CurrencyCodeT&& value) { m_currencyCodeHasBeenSet = true; m_currencyCode = std::forward<CurrencyCodeT>(value); }
    template<typename CurrencyCodeT = Aws::String>
    CapacityBlockExtension& WithCurrencyCode(CurrencyCodeT&& value) { SetCurrencyCode(std::forward<CurrencyCodeT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_capacityReservationId;
    bool m_capacityReservationIdHasBeenSet = false;

    Aws::String m_instanceType;
    bool m_instanceTypeHasBeenSet = false;

    int m_instanceCount{0};
    bool m_instanceCountHasBeenSet = false;

    Aws::String m_availabilityZone;
    bool m_availabilityZoneHasBeenSet = false;

    Aws::String m_availabilityZoneId;
    bool m_availabilityZoneIdHasBeenSet = false;

    Aws::String m_capacityBlockExtensionOfferingId;
    bool m_capacityBlockExtensionOfferingIdHasBeenSet = false;

    int m_capacityBlockExtensionDurationHours{0};
    bool m_capacityBlockExtensionDurationHoursHasBeenSet = false;

    CapacityBlockExtensionStatus m_capacityBlockExtensionStatus{CapacityBlockExtensionStatus::NOT_SET};
    bool m_capacityBlockExtensionStatusHasBeenSet = false;

    Aws::Utils::DateTime m_capacityBlockExtensionPurchaseDate{};
    bool m_capacityBlockExtensionPurchaseDateHasBeenSet = false;

    Aws::Utils::DateTime m_capacityBlockExtensionStartDate{};
    bool m_capacityBlockExtensionStartDateHasBeenSet = false;

    Aws::Utils::DateTime m_capacityBlockExtensionEndDate{};
    bool m_capacityBlockExtensionEndDateHasBeenSet = false;

    Aws::String m_upfrontFee;
    bool m_upfrontFeeHasBeenSet = false;

    Aws::String m_currencyCode;
    bool m_currencyCodeHasBeenSet = false;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
