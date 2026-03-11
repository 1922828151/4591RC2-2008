/*
 * func-name: ?AddHistoryLine@GUIConsole@@QAEXV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@K@Z_0
 * func-address: 0x102bae10
 * callers: 0x1000dcb0
 * callees: 0x100194cf
 */

void __stdcall GUIConsole::AddHistoryLine(char a1, int a2, int a3, int a4, int a5, int a6, int a7, char *a8)
{
  char v8; // [esp-20h] [ebp-34h] BYREF
  int v9; // [esp-1Ch] [ebp-30h]
  int v10; // [esp-18h] [ebp-2Ch]
  int v11; // [esp-14h] [ebp-28h]
  int v12; // [esp-10h] [ebp-24h]
  int v13; // [esp-Ch] [ebp-20h]
  int v14; // [esp-8h] [ebp-1Ch]
  char *v15; // [esp-4h] [ebp-18h]
  int v16; // [esp+10h] [ebp-4h]

  v15 = a8;
  a8 = &v8;
  v16 = 0;
  std::string::string(&v8, &a1);
  GUIConsole::AddHistoryLine(0, -1, v8, v9, v10, v11, v12, v13, v14, (int)v15);
  v16 = -1;
  std::string::~string(&a1);
}
