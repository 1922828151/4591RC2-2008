/*
 * func-name: ?LoadWorld@ILoad@@UAE_NV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@PAVWorld@@@Z
 * func-address: 0x100019a0
 * callers: none
 * callees: 0x100977a0
 */

char __stdcall ILoad::LoadWorld(char a1, int a2, int a3, int a4, int a5, int a6, int a7, int a8)
{
  SeriousWarning("Serializer does not support world loading");
  std::string::~string(&a1);
  return 0;
}
