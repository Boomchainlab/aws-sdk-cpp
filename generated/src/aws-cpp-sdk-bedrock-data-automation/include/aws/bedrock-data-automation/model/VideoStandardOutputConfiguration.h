﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bedrock-data-automation/BedrockDataAutomation_EXPORTS.h>
#include <aws/bedrock-data-automation/model/VideoStandardExtraction.h>
#include <aws/bedrock-data-automation/model/VideoStandardGenerativeField.h>
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
namespace BedrockDataAutomation
{
namespace Model
{

  /**
   * <p>Standard Output Configuration of Video</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/bedrock-data-automation-2023-07-26/VideoStandardOutputConfiguration">AWS
   * API Reference</a></p>
   */
  class VideoStandardOutputConfiguration
  {
  public:
    AWS_BEDROCKDATAAUTOMATION_API VideoStandardOutputConfiguration() = default;
    AWS_BEDROCKDATAAUTOMATION_API VideoStandardOutputConfiguration(Aws::Utils::Json::JsonView jsonValue);
    AWS_BEDROCKDATAAUTOMATION_API VideoStandardOutputConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_BEDROCKDATAAUTOMATION_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    
    inline const VideoStandardExtraction& GetExtraction() const { return m_extraction; }
    inline bool ExtractionHasBeenSet() const { return m_extractionHasBeenSet; }
    template<typename ExtractionT = VideoStandardExtraction>
    void SetExtraction(ExtractionT&& value) { m_extractionHasBeenSet = true; m_extraction = std::forward<ExtractionT>(value); }
    template<typename ExtractionT = VideoStandardExtraction>
    VideoStandardOutputConfiguration& WithExtraction(ExtractionT&& value) { SetExtraction(std::forward<ExtractionT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const VideoStandardGenerativeField& GetGenerativeField() const { return m_generativeField; }
    inline bool GenerativeFieldHasBeenSet() const { return m_generativeFieldHasBeenSet; }
    template<typename GenerativeFieldT = VideoStandardGenerativeField>
    void SetGenerativeField(GenerativeFieldT&& value) { m_generativeFieldHasBeenSet = true; m_generativeField = std::forward<GenerativeFieldT>(value); }
    template<typename GenerativeFieldT = VideoStandardGenerativeField>
    VideoStandardOutputConfiguration& WithGenerativeField(GenerativeFieldT&& value) { SetGenerativeField(std::forward<GenerativeFieldT>(value)); return *this;}
    ///@}
  private:

    VideoStandardExtraction m_extraction;
    bool m_extractionHasBeenSet = false;

    VideoStandardGenerativeField m_generativeField;
    bool m_generativeFieldHasBeenSet = false;
  };

} // namespace Model
} // namespace BedrockDataAutomation
} // namespace Aws
