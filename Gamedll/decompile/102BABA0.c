/*
 * func-name: ?AddHistoryLine@GUIConsole@@QAEXW4ConsoleMessageType@@HV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@K@Z_0
 * func-address: 0x102baba0
 * callers: 0x100194cf
 * callees: 0x10009d18, 0x102c9d62
 */

void __thiscall GUIConsole::AddHistoryLine(
        _DWORD *this,
        int a2,
        int a3,
        char a4,
        int a5,
        int a6,
        int a7,
        int a8,
        int a9,
        int a10,
        int a11)
{
  int v12; // eax
  const char *v13; // eax
  _BYTE v14[28]; // [esp+8h] [ebp-54h] BYREF
  _DWORD v15[2]; // [esp+24h] [ebp-38h] BYREF
  _BYTE v16[28]; // [esp+2Ch] [ebp-30h] BYREF
  int v17; // [esp+48h] [ebp-14h]
  int v18; // [esp+58h] [ebp-4h]

  v18 = 0;
  v12 = std::operator+<char>(v14, "Con: ", &a4);
  LOBYTE(v18) = 1;
  v13 = (const char *)std::string::c_str(v12);
  LogPrintf(v13);
  LOBYTE(v18) = 0;
  std::string::~string(v14);
  std::string::string(v16);
  LOBYTE(v18) = 2;
  std::string::operator=(v16, &a4);
  v17 = a11;
  v15[1] = a3;
  v15[0] = a2;
  sub_10009D18((int)v15);
  ++this[29];
  LOBYTE(v18) = 0;
  std::string::~string(v16);
  v18 = -1;
  std::string::~string(&a4);
}
