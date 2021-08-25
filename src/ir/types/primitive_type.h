#ifndef SRC_IR_TYPES_PRIMITIVE_TYPE_H_
#define SRC_IR_TYPES_PRIMITIVE_TYPE_H_

#include "absl/container/flat_hash_set.h"
#include "src/ir/access_path_selectors_set.h"
#include "src/ir/types/type.h"
#include "third_party/arcs/proto/manifest.pb.h"

namespace raksha::ir::types {

// TODO: Add the various kinds of primitive type.
// Right now, the most important thing about primitive types is that they
// terminate an access path. For now, we've left them empty; we should fill
// them in in the future.
class PrimitiveType : public Type {
 public:
  static PrimitiveType CreateFromProto(
      const arcs::PrimitiveTypeProto &primitive_type_proto) {
    return PrimitiveType();
  }

  // For now, a primitive type has no members and a trivial constructor. This
  // will change as we add more cases to this translator in the future.
  PrimitiveType() = default;

  // A primitive type marks the end of a single access path to be built.
  // Return a set containing an empty AccessPathSelectors object.
  raksha::ir::AccessPathSelectorsSet
    GetAccessPathSelectorsSet() const override {
    return raksha::ir::AccessPathSelectorsSet(
        { raksha::ir::AccessPathSelectors() });
  }

  // Make a TypeProto containing a PrimitiveTypeProto with this primitive
  // type's information.
  arcs::TypeProto MakeProto() const {
    arcs::TypeProto type_proto;
    // For now, just set all primitives to TEXT when serializing.
    type_proto.set_primitive(arcs::PrimitiveTypeProto::TEXT);
    return type_proto;
  }
};

}  // namespace raksha::ir::types

#endif  // SRC_IR_TYPES_PRIMITIVE_TYPE_H_