﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/mediaconvert/MediaConvert_EXPORTS.h>

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
   * Required when you set Codec, under AudioDescriptions>CodecSettings, to the value
   * FLAC.<p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/mediaconvert-2017-08-29/FlacSettings">AWS
   * API Reference</a></p>
   */
  class FlacSettings
  {
  public:
    AWS_MEDIACONVERT_API FlacSettings() = default;
    AWS_MEDIACONVERT_API FlacSettings(Aws::Utils::Json::JsonView jsonValue);
    AWS_MEDIACONVERT_API FlacSettings& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_MEDIACONVERT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * Specify Bit depth (BitDepth), in bits per sample, to choose the encoding quality
     * for this audio track.
     */
    inline int GetBitDepth() const { return m_bitDepth; }
    inline bool BitDepthHasBeenSet() const { return m_bitDepthHasBeenSet; }
    inline void SetBitDepth(int value) { m_bitDepthHasBeenSet = true; m_bitDepth = value; }
    inline FlacSettings& WithBitDepth(int value) { SetBitDepth(value); return *this;}
    ///@}

    ///@{
    /**
     * Specify the number of channels in this output audio track. Choosing Mono on the
     * console gives you 1 output channel; choosing Stereo gives you 2. In the API,
     * valid values are between 1 and 8.
     */
    inline int GetChannels() const { return m_channels; }
    inline bool ChannelsHasBeenSet() const { return m_channelsHasBeenSet; }
    inline void SetChannels(int value) { m_channelsHasBeenSet = true; m_channels = value; }
    inline FlacSettings& WithChannels(int value) { SetChannels(value); return *this;}
    ///@}

    ///@{
    /**
     * Sample rate in Hz.
     */
    inline int GetSampleRate() const { return m_sampleRate; }
    inline bool SampleRateHasBeenSet() const { return m_sampleRateHasBeenSet; }
    inline void SetSampleRate(int value) { m_sampleRateHasBeenSet = true; m_sampleRate = value; }
    inline FlacSettings& WithSampleRate(int value) { SetSampleRate(value); return *this;}
    ///@}
  private:

    int m_bitDepth{0};
    bool m_bitDepthHasBeenSet = false;

    int m_channels{0};
    bool m_channelsHasBeenSet = false;

    int m_sampleRate{0};
    bool m_sampleRateHasBeenSet = false;
  };

} // namespace Model
} // namespace MediaConvert
} // namespace Aws
