﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/bedrock/model/GuardrailSensitiveInformationAction.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace Bedrock
  {
    namespace Model
    {
      namespace GuardrailSensitiveInformationActionMapper
      {

        static const int BLOCK_HASH = HashingUtils::HashString("BLOCK");
        static const int ANONYMIZE_HASH = HashingUtils::HashString("ANONYMIZE");
        static const int NONE_HASH = HashingUtils::HashString("NONE");


        GuardrailSensitiveInformationAction GetGuardrailSensitiveInformationActionForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == BLOCK_HASH)
          {
            return GuardrailSensitiveInformationAction::BLOCK;
          }
          else if (hashCode == ANONYMIZE_HASH)
          {
            return GuardrailSensitiveInformationAction::ANONYMIZE;
          }
          else if (hashCode == NONE_HASH)
          {
            return GuardrailSensitiveInformationAction::NONE;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<GuardrailSensitiveInformationAction>(hashCode);
          }

          return GuardrailSensitiveInformationAction::NOT_SET;
        }

        Aws::String GetNameForGuardrailSensitiveInformationAction(GuardrailSensitiveInformationAction enumValue)
        {
          switch(enumValue)
          {
          case GuardrailSensitiveInformationAction::NOT_SET:
            return {};
          case GuardrailSensitiveInformationAction::BLOCK:
            return "BLOCK";
          case GuardrailSensitiveInformationAction::ANONYMIZE:
            return "ANONYMIZE";
          case GuardrailSensitiveInformationAction::NONE:
            return "NONE";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace GuardrailSensitiveInformationActionMapper
    } // namespace Model
  } // namespace Bedrock
} // namespace Aws
