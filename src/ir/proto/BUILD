#-------------------------------------------------------------------------------
# Copyright 2021 Google LLC
#
# Licensed under the Apache License, Version 2.0 (the "License");
# you may not use this file except in compliance with the License.
# You may obtain a copy of the License at
#
#     http://www.apache.org/licenses/LICENSE-2.0
#
# Unless required by applicable law or agreed to in writing, software
# distributed under the License is distributed on an "AS IS" BASIS,
# WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
# See the License for the specific language governing permissions and
# limitations under the License.
#
#-------------------------------------------------------------------------------
package(default_visibility = ["//src:__subpackages__"])

cc_library(
    name = "types",
    srcs = [
        "entity_type.cc",
        "primitive_type.cc",
        "schema.cc",
        "type.cc",
    ],
    hdrs = [
        "entity_type.h",
        "primitive_type.h",
        "schema.h",
        "type.h",
    ],
    deps = [
        "//src/ir/types",
        "//third_party/arcs/proto:manifest_cc_proto",
    ],
)

cc_library(
    name = "access_path",
    srcs = ["access_path.cc"],
    hdrs = ["access_path.h"],
    deps = [
        "//src/ir:access_path",
        "//third_party/arcs/proto:manifest_cc_proto",
    ],
)

cc_test(
    name = "access_path_test",
    srcs = ["access_path_test.cc"],
    deps = [
        ":access_path",
        "//src/common/testing:gtest",
        "//src/ir",
    ],
)

cc_test(
    name = "access_path_root_test",
    srcs = ["access_path_root_test.cc"],
    deps = [
        ":access_path",
        "//src/common/testing:gtest",
        "//src/ir",
    ],
)

cc_test(
    name = "access_path_selector_test",
    srcs = ["access_path_selector_test.cc"],
    deps = [
        ":access_path",
        "//src/common/testing:gtest",
        "//src/ir",
    ],
)

cc_test(
    name = "entity_type_test",
    srcs = ["entity_type_test.cc"],
    deps = [
        "types",
        "//src/common/testing:gtest",
        "//src/ir/types",
        "//third_party/arcs/proto:manifest_cc_proto",
    ],
)

cc_test(
    name = "primitive_type_test",
    srcs = ["primitive_type_test.cc"],
    deps = [
        "types",
        "//src/common/testing:gtest",
        "//src/ir/types",
        "//third_party/arcs/proto:manifest_cc_proto",
    ],
)
