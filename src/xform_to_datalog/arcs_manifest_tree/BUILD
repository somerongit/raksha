package(default_visibility = ["//src/xform_to_datalog:__subpackages__"])

cc_library(
    name = "arcs_manifest_tree",
    srcs = glob(
        ["*.cc"],
        exclude = ["*_test.cc"],
    ),
    hdrs = glob(["*.h"]),
    deps = [
        "//src/common/logging",
        "//src/ir",
        "//src/ir/proto:types",
        "//src/ir/types",
        "//third_party/arcs/proto:manifest_cc_proto",
        "@absl//absl/container:flat_hash_map",
    ],
)

cc_test(
    name = "handle_connection_spec_test",
    srcs = ["handle_connection_spec_test.cc"],
    deps = [
        ":arcs_manifest_tree",
        "//src/common/testing:gtest",
    ],
)

cc_test(
    name = "particle_spec_test",
    srcs = ["particle_spec_test.cc"],
    deps = [
        ":arcs_manifest_tree",
        "//src/common/testing:gtest",
    ],
)
