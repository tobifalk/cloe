/*
 * Copyright 2020 Robert Bosch GmbH
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *     http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 *
 * SPDX-License-Identifier: Apache-2.0
 */
/**
 * \file fable/utility/type_traits.hpp
 */

#pragma once
#ifndef FABLE_UTILITY_TYPE_TRAITS_HPP_
#define FABLE_UTILITY_TYPE_TRAITS_HPP_

#include <type_traits>  // for enable_if_t<>, is_base_of<>, ...

#include <fable/schema/interface.hpp>  // for Interface

namespace fable {

/**
 * Use SFINAE mechanism to disable a template function when S is not a subclass
 * of Interface, hence not a schema.
 *
 * \example
 *     template<typename = enable_if_schema<S>>
 *     void foobar(S schema);
 */
template <typename S>
using enable_if_schema_t = std::enable_if_t<std::is_base_of<Interface, S>::value>;

}  // namespace fable
