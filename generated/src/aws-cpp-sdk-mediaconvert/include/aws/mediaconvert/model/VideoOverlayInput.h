﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/mediaconvert/MediaConvert_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/mediaconvert/model/InputTimecodeSource.h>
#include <aws/mediaconvert/model/VideoOverlayInputClipping.h>
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
namespace MediaConvert
{
namespace Model
{

  /**
   * Input settings for Video overlay. You can include one or more video overlays in
   * sequence at different times that you specify.<p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/mediaconvert-2017-08-29/VideoOverlayInput">AWS
   * API Reference</a></p>
   */
  class VideoOverlayInput
  {
  public:
    AWS_MEDIACONVERT_API VideoOverlayInput() = default;
    AWS_MEDIACONVERT_API VideoOverlayInput(Aws::Utils::Json::JsonView jsonValue);
    AWS_MEDIACONVERT_API VideoOverlayInput& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_MEDIACONVERT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * Specify the input file S3, HTTP, or HTTPS URL for your video overlay.
To specify
     * one or more Transitions for your base input video instead: Leave blank.
     */
    inline const Aws::String& GetFileInput() const { return m_fileInput; }
    inline bool FileInputHasBeenSet() const { return m_fileInputHasBeenSet; }
    template<typename FileInputT = Aws::String>
    void SetFileInput(FileInputT&& value) { m_fileInputHasBeenSet = true; m_fileInput = std::forward<FileInputT>(value); }
    template<typename FileInputT = Aws::String>
    VideoOverlayInput& WithFileInput(FileInputT&& value) { SetFileInput(std::forward<FileInputT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * Specify one or more clips to use from your video overlay. When you include an
     * input clip, you must also specify its start timecode, end timecode, or both
     * start and end timecode.
     */
    inline const Aws::Vector<VideoOverlayInputClipping>& GetInputClippings() const { return m_inputClippings; }
    inline bool InputClippingsHasBeenSet() const { return m_inputClippingsHasBeenSet; }
    template<typename InputClippingsT = Aws::Vector<VideoOverlayInputClipping>>
    void SetInputClippings(InputClippingsT&& value) { m_inputClippingsHasBeenSet = true; m_inputClippings = std::forward<InputClippingsT>(value); }
    template<typename InputClippingsT = Aws::Vector<VideoOverlayInputClipping>>
    VideoOverlayInput& WithInputClippings(InputClippingsT&& value) { SetInputClippings(std::forward<InputClippingsT>(value)); return *this;}
    template<typename InputClippingsT = VideoOverlayInputClipping>
    VideoOverlayInput& AddInputClippings(InputClippingsT&& value) { m_inputClippingsHasBeenSet = true; m_inputClippings.emplace_back(std::forward<InputClippingsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * Specify the timecode source for your video overlay input clips. To use the
     * timecode present in your video overlay: Choose Embedded. To use a zerobased
     * timecode: Choose Start at 0. To choose a timecode: Choose Specified start. When
     * you do, enter the starting timecode in Start timecode. If you don't specify a
     * value for Timecode source, MediaConvert uses Embedded by default.
     */
    inline InputTimecodeSource GetTimecodeSource() const { return m_timecodeSource; }
    inline bool TimecodeSourceHasBeenSet() const { return m_timecodeSourceHasBeenSet; }
    inline void SetTimecodeSource(InputTimecodeSource value) { m_timecodeSourceHasBeenSet = true; m_timecodeSource = value; }
    inline VideoOverlayInput& WithTimecodeSource(InputTimecodeSource value) { SetTimecodeSource(value); return *this;}
    ///@}

    ///@{
    /**
     * Specify the starting timecode for this video overlay. To use this setting, you
     * must set Timecode source to Specified start.
     */
    inline const Aws::String& GetTimecodeStart() const { return m_timecodeStart; }
    inline bool TimecodeStartHasBeenSet() const { return m_timecodeStartHasBeenSet; }
    template<typename TimecodeStartT = Aws::String>
    void SetTimecodeStart(TimecodeStartT&& value) { m_timecodeStartHasBeenSet = true; m_timecodeStart = std::forward<TimecodeStartT>(value); }
    template<typename TimecodeStartT = Aws::String>
    VideoOverlayInput& WithTimecodeStart(TimecodeStartT&& value) { SetTimecodeStart(std::forward<TimecodeStartT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_fileInput;
    bool m_fileInputHasBeenSet = false;

    Aws::Vector<VideoOverlayInputClipping> m_inputClippings;
    bool m_inputClippingsHasBeenSet = false;

    InputTimecodeSource m_timecodeSource{InputTimecodeSource::NOT_SET};
    bool m_timecodeSourceHasBeenSet = false;

    Aws::String m_timecodeStart;
    bool m_timecodeStartHasBeenSet = false;
  };

} // namespace Model
} // namespace MediaConvert
} // namespace Aws
