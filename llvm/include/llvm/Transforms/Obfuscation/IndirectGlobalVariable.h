#ifndef OBFUSCATION_INDIRECT_GLOBAL_VARIABLE_H
#define OBFUSCATION_INDIRECT_GLOBAL_VARIABLE_H

// Namespace
namespace llvm {
class FunctionPass;
class PassRegistry;
struct ObfuscationOptions;

FunctionPass* createIndirectGlobalVariablePass();
FunctionPass* createIndirectGlobalVariablePass(bool flag, ObfuscationOptions *Options);
void initializeIndirectGlobalVariablePass(PassRegistry &Registry);

}

#endif
