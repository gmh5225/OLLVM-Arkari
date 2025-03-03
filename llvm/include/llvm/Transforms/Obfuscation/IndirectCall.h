#ifndef OBFUSCATION_INDIRECT_CALL_H
#define OBFUSCATION_INDIRECT_CALL_H

// Namespace
namespace llvm {
class FunctionPass;
class PassRegistry;
struct ObfuscationOptions;

FunctionPass* createIndirectCallPass();
FunctionPass* createIndirectCallPass(bool flag, ObfuscationOptions *Options);
void initializeIndirectCallPass(PassRegistry &Registry);

}

#endif
