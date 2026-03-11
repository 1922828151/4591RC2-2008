/*
 * func-name: ?DeclareSymbol@GUIConsole@@QAEXW4ShellType@@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@PAX@Z_0
 * func-address: 0x10033d70
 * callers: 0x10001fdc
 * callees: 0x1001424a
 */

void __stdcall GUIConsole::DeclareSymbol(int a1, int a2, int a3, int a4, int a5, int a6, int a7, int a8, int a9)
{
  int v9[7]; // [esp-20h] [ebp-38h] BYREF
  int v10; // [esp-4h] [ebp-1Ch]
  int *v11; // [esp+8h] [ebp-10h]
  int v12; // [esp+14h] [ebp-4h]

  v10 = a9;
  v11 = v9;
  v12 = 0;
  std::string::string(v9, &a2);
  sub_1001424A(a1, v9[0], v9[1], v9[2], v9[3], v9[4], v9[5], v9[6], v10);
  v12 = -1;
  std::string::~string(&a2);
}
