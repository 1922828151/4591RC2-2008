/*
 * func-name: sub_10001BA0
 * func-address: 0x10001ba0
 * callers: 0x10001f90
 * callees: 0x10005820, 0x10019750
 */

int __cdecl sub_10001BA0(int a1)
{
  int v1; // eax
  DWORD LastError; // eax
  DLGPROC v4; // [esp-8h] [ebp-70h]
  LPARAM v5; // [esp-4h] [ebp-6Ch]
  int v6; // [esp+0h] [ebp-68h]
  _DWORD v7[7]; // [esp+4h] [ebp-64h] BYREF
  _BYTE v8[28]; // [esp+20h] [ebp-48h] BYREF
  _BYTE v9[28]; // [esp+3Ch] [ebp-2Ch] BYREF
  int v10; // [esp+64h] [ebp-4h]

  std::string::string(a1);
  v10 = 2;
  std::string::string(&unk_1001B3E8);
  std::string::string(&unk_1001B3EC);
  sub_10005820((int)v9, (int)v7, (int)v8);
  LOBYTE(v10) = 1;
  std::string::~string(v7);
  LOBYTE(v10) = 0;
  std::string::~string(v8);
  std::string::string(&unk_1001B3F0);
  LOBYTE(v10) = 3;
  std::string::string(&unk_1001B3F4);
  LOBYTE(v10) = 4;
  sub_10005820((int)v9, (int)v8, (int)v7);
  LOBYTE(v10) = 3;
  std::string::~string(v8);
  LOBYTE(v10) = 0;
  std::string::~string(v7);
  lpString = (LPCSTR)std::string::c_str(v9);
  v1 = Engine::Instance(DialogFunc, 0, v6, v7[0], v7[1], v7[2], v7[3]);
  if ( DialogBoxParamA(hInstance, (LPCSTR)0x65, *(HWND *)(v1 + 140), v4, v5) == -1 )
  {
    LastError = GetLastError();
    FormatMessageA(0x1100u, 0, LastError, 0x409u, Buffer, 0, 0);
    LogPrintf("ERROR STRING: %s", *(const char **)Buffer);
  }
  v10 = -1;
  return std::string::~string(v9);
}
