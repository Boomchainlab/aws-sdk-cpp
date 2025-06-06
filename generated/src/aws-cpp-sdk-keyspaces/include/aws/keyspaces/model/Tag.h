﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/keyspaces/Keyspaces_EXPORTS.h>
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
namespace Keyspaces
{
namespace Model
{

  /**
   * <p>Describes a tag. A tag is a key-value pair. You can add up to 50 tags to a
   * single Amazon Keyspaces resource.</p> <p>Amazon Web Services-assigned tag names
   * and values are automatically assigned the <code>aws:</code> prefix, which the
   * user cannot assign. Amazon Web Services-assigned tag names do not count towards
   * the tag limit of 50. User-assigned tag names have the prefix <code>user:</code>
   * in the Cost Allocation Report. You cannot backdate the application of a tag.</p>
   * <p>For more information, see <a
   * href="https://docs.aws.amazon.com/keyspaces/latest/devguide/tagging-keyspaces.html">Adding
   * tags and labels to Amazon Keyspaces resources</a> in the <i>Amazon Keyspaces
   * Developer Guide</i>.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/keyspaces-2022-02-10/Tag">AWS API
   * Reference</a></p>
   */
  class Tag
  {
  public:
    AWS_KEYSPACES_API Tag() = default;
    AWS_KEYSPACES_API Tag(Aws::Utils::Json::JsonView jsonValue);
    AWS_KEYSPACES_API Tag& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_KEYSPACES_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The key of the tag. Tag keys are case sensitive. Each Amazon Keyspaces
     * resource can only have up to one tag with the same key. If you try to add an
     * existing tag (same key), the existing tag value will be updated to the new
     * value.</p>
     */
    inline const Aws::String& GetKey() const { return m_key; }
    inline bool KeyHasBeenSet() const { return m_keyHasBeenSet; }
    template<typename KeyT = Aws::String>
    void SetKey(KeyT&& value) { m_keyHasBeenSet = true; m_key = std::forward<KeyT>(value); }
    template<typename KeyT = Aws::String>
    Tag& WithKey(KeyT&& value) { SetKey(std::forward<KeyT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The value of the tag. Tag values are case-sensitive and can be null.</p>
     */
    inline const Aws::String& GetValue() const { return m_value; }
    inline bool ValueHasBeenSet() const { return m_valueHasBeenSet; }
    template<typename ValueT = Aws::String>
    void SetValue(ValueT&& value) { m_valueHasBeenSet = true; m_value = std::forward<ValueT>(value); }
    template<typename ValueT = Aws::String>
    Tag& WithValue(ValueT&& value) { SetValue(std::forward<ValueT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_key;
    bool m_keyHasBeenSet = false;

    Aws::String m_value;
    bool m_valueHasBeenSet = false;
  };

} // namespace Model
} // namespace Keyspaces
} // namespace Aws
