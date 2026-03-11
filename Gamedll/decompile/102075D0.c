/*
 * func-name: sub_102075D0
 * func-address: 0x102075d0
 * callers: 0x1000cf90
 * callees: 0x100134a8, 0x1001739b, 0x102be780, 0x102bfb10, 0x102c9d62, 0x102c9d98
 */

void __thiscall sub_102075D0(_DWORD *this)
{
  int v2; // eax
  int v3; // eax
  const CHAR *v4; // eax
  int v5; // esi
  Input *v6; // eax
  char v7; // [esp-1Ch] [ebp-ACh] BYREF
  int v8; // [esp-18h] [ebp-A8h]
  int v9; // [esp-14h] [ebp-A4h]
  int v10; // [esp-10h] [ebp-A0h]
  int v11; // [esp-Ch] [ebp-9Ch]
  LPCSTR v12; // [esp-8h] [ebp-98h]
  int v13; // [esp-4h] [ebp-94h]
  struct ConfigFile *v14; // [esp+0h] [ebp-90h]
  HWND v15; // [esp+4h] [ebp-8Ch]
  bool v16; // [esp+8h] [ebp-88h]
  char *v17; // [esp+Ch] [ebp-84h]
  _BYTE v18[28]; // [esp+10h] [ebp-80h] BYREF
  _BYTE v19[28]; // [esp+2Ch] [ebp-64h] BYREF
  _BYTE v20[28]; // [esp+48h] [ebp-48h] BYREF
  _BYTE v21[28]; // [esp+64h] [ebp-2Ch] BYREF
  int v22; // [esp+8Ch] [ebp-4h]

  std::string::string(v21, "InputConfig_Default.ini");
  v13 = this[1];
  v22 = 0;
  v2 = sub_100134A8((int)v18, v13);
  LOBYTE(v22) = 1;
  v3 = std::operator+<char>(v19, "InputConfig_User", v2);
  LOBYTE(v22) = 2;
  std::operator+<char>(v20, v3, ".ini");
  LOBYTE(v22) = 4;
  std::string::~string(v19);
  LOBYTE(v22) = 5;
  std::string::~string(v18);
  v17 = &v7;
  std::string::string(&v7, v20);
  if ( !sub_1001739B(v7, v8) )
  {
    v13 = 0;
    v12 = (LPCSTR)std::string::c_str(v20);
    v4 = (const CHAR *)std::string::c_str(v21);
    if ( !CopyFileA(v4, v12, v13) )
      Error(byte_10317A60);
  }
  v17 = (char *)operator new(0x60u);
  LOBYTE(v22) = 6;
  if ( v17 )
    v5 = sub_102BE780(v14, v15);
  else
    v5 = 0;
  v17 = &v7;
  LOBYTE(v22) = 5;
  std::string::string(&v7, v20);
  if ( !(unsigned __int8)sub_102BFB10(v7, v8, v9, v10, v11, v12, v13) )
    Error(byte_10317A7C);
  v13 = *(_DWORD *)(Engine::Instance(0) + 144);
  v6 = (Input *)Input::Instance(v5);
  Input::ReMapping(v6, v14, v15, v16);
  (*(void (__thiscall **)(int))(*(_DWORD *)dword_103B67B4 + 4))(dword_103B67B4);
  LOBYTE(v22) = 0;
  std::string::~string(v20);
  v22 = -1;
  std::string::~string(v21);
}
