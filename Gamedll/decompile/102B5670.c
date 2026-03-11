/*
 * func-name: Game_RunConsoleCommand_0
 * func-address: 0x102b5670
 * callers: 0x10010442
 * callees: 0x1000516e, 0x1000fae7, 0x102c9d62
 */

void __cdecl Game_RunConsoleCommand_0(char a1)
{
  const char *v1; // eax
  int v2[8]; // [esp-1Ch] [ebp-40h] BYREF
  _BYTE v3[28]; // [esp+4h] [ebp-20h] BYREF

  if ( *((_DWORD *)Game::Instance() + 26) )
  {
    v2[7] = (int)v2;
    std::string::string(v2, &a1);
    Game::Instance();
    sub_1000FAE7((int)v3, v2[0], v2[1], v2[2], v2[3], v2[4], v2[5], v2[6]);
    v1 = (const char *)std::string::c_str(v3);
    LogPrintf("%s", v1);
    std::string::~string(v3);
  }
  std::string::~string(&a1);
}
