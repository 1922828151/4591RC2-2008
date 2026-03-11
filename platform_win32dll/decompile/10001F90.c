/*
 * func-name: sub_10001F90
 * func-address: 0x10001f90
 * callers: none
 * callees: 0x10001ba0, 0x10004ef0, 0x10005920, 0x10019750, 0x10019805
 */

int __stdcall sub_10001F90(int a1, int a2, int a3, int a4, int a5, int a6, int a7)
{
  int v7; // eax
  Editor *v9; // eax
  const char *v10; // eax
  int v11; // eax
  int v12; // eax
  UINT v13; // [esp-Ch] [ebp-FD0h]
  WPARAM v14; // [esp-8h] [ebp-FCCh]
  LPARAM v15; // [esp-4h] [ebp-FC8h]
  const char *v16; // [esp+0h] [ebp-FC4h] BYREF
  int v17; // [esp+4h] [ebp-FC0h]
  int v18; // [esp+8h] [ebp-FBCh]
  int v19; // [esp+Ch] [ebp-FB8h]
  _DWORD Buffer[1002]; // [esp+10h] [ebp-FB4h] BYREF
  int v21; // [esp+FC0h] [ebp-4h]

  Buffer[1001] = &v16;
  v21 = 0;
  if ( (dword_100384E4 & 1) == 0 )
  {
    dword_100384E4 |= 1u;
    LOBYTE(v21) = 1;
    std::string::string("IMPOSSIBLE - FLAW IN ERROR HANDLER");
    atexit(sub_1001AB90);
    LOBYTE(v21) = 0;
  }
  if ( byte_100384C4 )
  {
    v7 = Engine::Instance(274, 61536, 0, v16, v17, v18, v19);
    SendMessageA(*(HWND *)(v7 + 140), v13, v14, v15);
    exit(0);
  }
  LogPrintf("Entering Error().. (%dst time)", dword_100384C0);
  if ( !dword_100384C0 )
  {
    dword_100384C0 = 1;
    if ( *(_BYTE *)(Editor::Instance(v16) + 2056) && *(_DWORD *)(Editor::Instance(v16) + 2048) )
    {
      sub_10005920();
      CreateDirectoryA("..\\Maps\\Autorecover\\", 0);
      v9 = (Editor *)Editor::Instance("..\\Maps\\Autorecover\\Autorecover.xml");
      Editor::SaveScene(v9, v16);
    }
    while ( ShowCursor(1) < 0 )
      ;
    std::string::operator=(&unk_100384C8, "\n-------\n");
    std::string::operator+=(&unk_100384C8, &a1);
    if ( *(_BYTE *)(Editor::Instance(v16) + 2056) )
      std::string::operator+=(&unk_100384C8, "\nYour scene has been recovered and saved in 'Maps\\AutoRecover'");
    if ( !byte_100384F0 )
    {
      sub_10004EF0();
      std::string::operator+=(&unk_100384C8, "\n\nStack Trace:\n");
      std::string::operator+=(&unk_100384C8, Buffer);
    }
    LOBYTE(v21) = 2;
    v10 = (const char *)std::string::c_str(&unk_100384C8);
    LogPrintf(v10);
    v21 = 0;
    while ( ShowCursor(1) < 0 )
      ;
    v11 = std::string::c_str(&unk_100384C8);
    sub_10001BA0(v11);
    byte_100384C4 = 1;
    LOBYTE(v21) = 4;
    v12 = Engine::Instance(v16, v17, v18, v19, Buffer[0], Buffer[1], Buffer[2]);
    SendMessageA(*(HWND *)(v12 + 140), 0x112u, 0xF060u, 0);
    exit(0);
  }
  MEMORY[0] = 0;
  v21 = -1;
  return std::string::~string(&a1);
}
