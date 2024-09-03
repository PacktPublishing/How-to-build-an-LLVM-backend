#include "SolutionRegisterInfo.h"

#include "llvm/CodeGen/MachineFunction.h"
#include "llvm/CodeGen/TargetFrameLowering.h"
#include "llvm/CodeGen/TargetRegisterInfo.h"
#include "llvm/CodeGen/TargetSubtargetInfo.h"

namespace llvm {
class SolutionFrameLowering : public TargetFrameLowering {
public:
  SolutionFrameLowering()
      : TargetFrameLowering(StackGrowsDown, Align(16), 0, Align(16),
                            false /*StackRealignable*/) {}
};
} // namespace llvm

#define GET_REGINFO_TARGET_DESC
#define GET_REGINFO_MC_DESC
#include "SolutionGenRegisterInfo.inc"
