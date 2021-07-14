#-----------------------------------------------------------------------------
# Copyright 2021 Google LLC
#
# Licensed under the Apache License, Version 2.0 (the "License");
# you may not use this file except in compliance with the License.
# You may obtain a copy of the License at
#
#     https:#www.apache.org/licenses/LICENSE-2.0
#
# Unless required by applicable law or agreed to in writing, software
# distributed under the License is distributed on an "AS IS" BASIS,
# WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
# See the License for the specific language governing permissions and
# limitations under the License.
#-----------------------------------------------------------------------------

def souffle_cc_library(name, src, visibility = None):
    """Generates a C++ interface for the given datalog file.

    Args:
      name: String; Name of the library.
      src: String; The datalog program.
      visibility: List; List of visibilities.
    """
    cc_file = src + ".cpp"
    native.genrule(
        name = name + "_cpp",
        srcs = [src],
        outs = [cc_file],
        cmd = "$(location @souffle//:souffle) -g $@ $<",
        tools = ["@souffle//:souffle"],
        visibility = visibility,
    )
    native.cc_library(
        name = name,
        srcs = [cc_file],
        copts = [
            "-Iexternal/souffle/src/include/souffle",
            "-std=c++17",
        ],
        defines = [
            "__EMBEDDED_SOUFFLE__",
        ],
        deps = ["@souffle//:souffle_lib"],
        alwayslink = True,
        visibility = visibility,
    )