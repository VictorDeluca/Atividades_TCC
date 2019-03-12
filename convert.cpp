int main(){

  std::string inputFile = "ex01.c";
  clang::CompilerInstance compInst;

  clang::EmitLLVMOnlyAction codegenAction;
  codegenAction.BeginSourceFile(compInst, FrontendInputFile(inputFile, IK_CXX, false));
  codegenAction.Execute();
  codegenAction.EndSourceFile();

  llvm::Module* module = codegenAction.takeModule();

}
