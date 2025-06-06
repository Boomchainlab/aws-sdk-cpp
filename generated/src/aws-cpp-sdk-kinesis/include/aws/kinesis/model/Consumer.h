﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/kinesis/Kinesis_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/kinesis/model/ConsumerStatus.h>
#include <aws/core/utils/DateTime.h>
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
namespace Kinesis
{
namespace Model
{

  /**
   * <p>An object that represents the details of the consumer you registered. This
   * type of object is returned by <a>RegisterStreamConsumer</a>.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/kinesis-2013-12-02/Consumer">AWS
   * API Reference</a></p>
   */
  class Consumer
  {
  public:
    AWS_KINESIS_API Consumer() = default;
    AWS_KINESIS_API Consumer(Aws::Utils::Json::JsonView jsonValue);
    AWS_KINESIS_API Consumer& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_KINESIS_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The name of the consumer is something you choose when you register the
     * consumer.</p>
     */
    inline const Aws::String& GetConsumerName() const { return m_consumerName; }
    inline bool ConsumerNameHasBeenSet() const { return m_consumerNameHasBeenSet; }
    template<typename ConsumerNameT = Aws::String>
    void SetConsumerName(ConsumerNameT&& value) { m_consumerNameHasBeenSet = true; m_consumerName = std::forward<ConsumerNameT>(value); }
    template<typename ConsumerNameT = Aws::String>
    Consumer& WithConsumerName(ConsumerNameT&& value) { SetConsumerName(std::forward<ConsumerNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>When you register a consumer, Kinesis Data Streams generates an ARN for it.
     * You need this ARN to be able to call <a>SubscribeToShard</a>.</p> <p>If you
     * delete a consumer and then create a new one with the same name, it won't have
     * the same ARN. That's because consumer ARNs contain the creation timestamp. This
     * is important to keep in mind if you have IAM policies that reference consumer
     * ARNs.</p>
     */
    inline const Aws::String& GetConsumerARN() const { return m_consumerARN; }
    inline bool ConsumerARNHasBeenSet() const { return m_consumerARNHasBeenSet; }
    template<typename ConsumerARNT = Aws::String>
    void SetConsumerARN(ConsumerARNT&& value) { m_consumerARNHasBeenSet = true; m_consumerARN = std::forward<ConsumerARNT>(value); }
    template<typename ConsumerARNT = Aws::String>
    Consumer& WithConsumerARN(ConsumerARNT&& value) { SetConsumerARN(std::forward<ConsumerARNT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A consumer can't read data while in the <code>CREATING</code> or
     * <code>DELETING</code> states.</p>
     */
    inline ConsumerStatus GetConsumerStatus() const { return m_consumerStatus; }
    inline bool ConsumerStatusHasBeenSet() const { return m_consumerStatusHasBeenSet; }
    inline void SetConsumerStatus(ConsumerStatus value) { m_consumerStatusHasBeenSet = true; m_consumerStatus = value; }
    inline Consumer& WithConsumerStatus(ConsumerStatus value) { SetConsumerStatus(value); return *this;}
    ///@}

    ///@{
    /**
     * <p/>
     */
    inline const Aws::Utils::DateTime& GetConsumerCreationTimestamp() const { return m_consumerCreationTimestamp; }
    inline bool ConsumerCreationTimestampHasBeenSet() const { return m_consumerCreationTimestampHasBeenSet; }
    template<typename ConsumerCreationTimestampT = Aws::Utils::DateTime>
    void SetConsumerCreationTimestamp(ConsumerCreationTimestampT&& value) { m_consumerCreationTimestampHasBeenSet = true; m_consumerCreationTimestamp = std::forward<ConsumerCreationTimestampT>(value); }
    template<typename ConsumerCreationTimestampT = Aws::Utils::DateTime>
    Consumer& WithConsumerCreationTimestamp(ConsumerCreationTimestampT&& value) { SetConsumerCreationTimestamp(std::forward<ConsumerCreationTimestampT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_consumerName;
    bool m_consumerNameHasBeenSet = false;

    Aws::String m_consumerARN;
    bool m_consumerARNHasBeenSet = false;

    ConsumerStatus m_consumerStatus{ConsumerStatus::NOT_SET};
    bool m_consumerStatusHasBeenSet = false;

    Aws::Utils::DateTime m_consumerCreationTimestamp{};
    bool m_consumerCreationTimestampHasBeenSet = false;
  };

} // namespace Model
} // namespace Kinesis
} // namespace Aws
