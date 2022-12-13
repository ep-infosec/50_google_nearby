// Copyright 2022 Google LLC
//
// Licensed under the Apache License, Version 2.0 (the "License");
// you may not use this file except in compliance with the License.
// You may obtain a copy of the License at
//
//     https://www.apache.org/licenses/LICENSE-2.0
//
// Unless required by applicable law or agreed to in writing, software
// distributed under the License is distributed on an "AS IS" BASIS,
// WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
// See the License for the specific language governing permissions and
// limitations under the License.

#include "fastpair/common/protocol.h"

#include <ostream>

namespace location {
namespace nearby {
namespace fastpair {

std::ostream& operator<<(std::ostream& stream, Protocol protocol) {
  switch (protocol) {
    case Protocol::kFastPairInitialPairing:
      stream << "[Fast Pair Initial Pairing]";
      break;
    case Protocol::kFastPairRetroactivePairing:
      stream << "[Fast Pair Retroactive Pairing]";
      break;
    case Protocol::kFastPairSubsequentPairing:
      stream << "[Fast Pair Subsequent Pairing]";
      break;
  }

  return stream;
}

}  // namespace fastpair
}  // namespace nearby
}  // namespace location
