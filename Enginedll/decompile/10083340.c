/*
 * func-name: ?IsClassInsertable@Editor@@QAE_NV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
 * func-address: 0x10083340
 * callers: none
 * callees: 0x1000e1b0
 */

char __stdcall Editor::IsClassInsertable(char a1, int a2, int a3, int a4, int a5, int a6, int a7)
{
  char IsInsertable; // bl
  char v9[32]; // [esp-1Ch] [ebp-30h] BYREF
  char *v10; // [esp+4h] [ebp-10h]
  int v11; // [esp+10h] [ebp-4h]

  v10 = v9;
  v11 = 0;
  std::string::string(v9, &a1);
  IsInsertable = Factory::IsInsertable(v9[0]);
  v11 = -1;
  std::string::~string(&a1);
  return IsInsertable;
}
