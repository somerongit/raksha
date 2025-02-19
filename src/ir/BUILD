package(default_visibility = ["//src:__subpackages__"])

cc_library(
    name = "ir",
    srcs = glob(
        ["*.cc"],
        exclude = ["*_test.cc"],
    ),
    hdrs = glob(
        ["*.h"],
        exclude = [
            "access_path.h",
            "access_path_root.h",
            "access_path_selectors.h",
            "access_path_selectors_set.h",
            "field_selector.h",
            "selector.h",
        ],
    ),
    deps = [
        ":access_path",
        "//src/common/logging",
        "//src/ir/proto:access_path",
        "//third_party/arcs/proto:manifest_cc_proto",
        "@absl//absl/container:flat_hash_map",
        "@absl//absl/container:flat_hash_set",
        "@absl//absl/hash",
        "@absl//absl/strings",
        "@absl//absl/types:variant",
    ],
)

cc_library(
    name = "access_path",
    hdrs = [
        "access_path.h",
        "access_path_root.h",
        "access_path_selectors.h",
        "access_path_selectors_set.h",
        "field_selector.h",
        "selector.h",
    ],
    deps = [
        "//src/common/logging",
        "@absl//absl/container:flat_hash_map",
        "@absl//absl/container:flat_hash_set",
        "@absl//absl/hash",
        "@absl//absl/strings",
    ],
)

cc_test(
    name = "access_path_selectors_test",
    srcs = ["access_path_selectors_test.cc"],
    deps = [
        ":ir",
        "//src/common/testing:gtest",
        "@absl//absl/hash",
        "@absl//absl/hash:hash_testing",
        "@absl//absl/status",
        "@absl//absl/status:statusor",
        "@absl//absl/strings",
    ],
)

cc_test(
    name = "access_path_selectors_set_test",
    srcs = ["access_path_selectors_set_test.cc"],
    deps = [
        ":ir",
        "//src/common/testing:gtest",
        "@absl//absl/container:btree",
        "@absl//absl/container:flat_hash_set",
        "@absl//absl/hash",
        "@absl//absl/hash:hash_testing",
        "@absl//absl/strings",
    ],
)

cc_test(
    name = "field_selector_test",
    srcs = ["field_selector_test.cc"],
    deps = [
        ":ir",
        "//src/common/testing:gtest",
        "@absl//absl/hash",
        "@absl//absl/hash:hash_testing",
        "@absl//absl/strings",
    ],
)

cc_test(
    name = "selector_test",
    srcs = ["selector_test.cc"],
    deps = [
        ":ir",
        "//src/common/testing:gtest",
        "@absl//absl/hash",
        "@absl//absl/hash:hash_testing",
        "@absl//absl/strings",
    ],
)

cc_test(
    name = "access_path_test",
    srcs = ["access_path_test.cc"],
    deps = [
        ":ir",
        "//src/common/testing:gtest",
        "@absl//absl/hash:hash_testing",
    ],
)

cc_test(
    name = "edge_test",
    srcs = ["edge_test.cc"],
    deps = [
        ":ir",
        "//src/common/testing:gtest",
    ],
)

cc_test(
    name = "tag_claim_test",
    srcs = ["tag_claim_test.cc"],
    deps = [
        ":ir",
        "//src/common/testing:gtest",
        "@absl//absl/strings",
        "@absl//absl/strings:str_format",
    ],
)

cc_test(
    name = "tag_check_test",
    srcs = ["tag_check_test.cc"],
    deps = [
        ":ir",
        "//src/common/testing:gtest",
        "@absl//absl/strings",
        "@absl//absl/strings:str_format",
    ],
)

cc_test(
    name = "access_path_root_test",
    srcs = ["access_path_root_test.cc"],
    deps = [
        ":ir",
        "//src/common/testing:gtest",
        "@absl//absl/hash:hash_testing",
    ],
)

cc_test(
    name = "derives_from_claim_test",
    srcs = ["derives_from_claim_test.cc"],
    deps = [
        ":ir",
        "//src/common/testing:gtest",
        "@absl//absl/strings",
        "@absl//absl/strings:str_format",
    ],
)
