﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/textract/model/NotificationChannel.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace Textract
{
namespace Model
{

NotificationChannel::NotificationChannel(JsonView jsonValue)
{
  *this = jsonValue;
}

NotificationChannel& NotificationChannel::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("SNSTopicArn"))
  {
    m_sNSTopicArn = jsonValue.GetString("SNSTopicArn");
    m_sNSTopicArnHasBeenSet = true;
  }
  if(jsonValue.ValueExists("RoleArn"))
  {
    m_roleArn = jsonValue.GetString("RoleArn");
    m_roleArnHasBeenSet = true;
  }
  return *this;
}

JsonValue NotificationChannel::Jsonize() const
{
  JsonValue payload;

  if(m_sNSTopicArnHasBeenSet)
  {
   payload.WithString("SNSTopicArn", m_sNSTopicArn);

  }

  if(m_roleArnHasBeenSet)
  {
   payload.WithString("RoleArn", m_roleArn);

  }

  return payload;
}

} // namespace Model
} // namespace Textract
} // namespace Aws
