/*
 * func-name: sub_102AD670
 * func-address: 0x102ad670
 * callers: 0x1000fb55
 * callees: 0x100068e8, 0x1000e56b, 0x102c9d62
 */

void __stdcall sub_102AD670(int a1)
{
  int v1; // eax
  int (__cdecl *v2)(int, const char *); // edi
  char v3; // bl
  int (__thiscall *v4)(int, _BYTE *, _BYTE *); // eax
  int v5; // eax
  int v6; // eax
  unsigned __int16 v7; // ax
  int v8; // edi
  int (__thiscall *v9)(int, _BYTE *); // edx
  int v10; // ebp
  int v11; // eax
  int v12; // eax
  char v13; // bl
  void (__thiscall *v14)(int, _DWORD *, _BYTE *); // eax
  int v15; // [esp+10h] [ebp-E8h]
  int v16; // [esp+14h] [ebp-E4h]
  _BYTE v17[28]; // [esp+24h] [ebp-D4h] BYREF
  _BYTE v18[28]; // [esp+40h] [ebp-B8h] BYREF
  _BYTE v19[28]; // [esp+5Ch] [ebp-9Ch] BYREF
  _BYTE v20[28]; // [esp+78h] [ebp-80h] BYREF
  _BYTE v21[28]; // [esp+94h] [ebp-64h] BYREF
  _BYTE v22[8]; // [esp+B0h] [ebp-48h] BYREF
  _DWORD v23[5]; // [esp+B8h] [ebp-40h] BYREF
  _DWORD v24[7]; // [esp+CCh] [ebp-2Ch] BYREF
  int v25; // [esp+F4h] [ebp-4h]

  v1 = (*(int (__thiscall **)(int, _BYTE *))(*(_DWORD *)a1 + 4))(a1, v17);
  v2 = (int (__cdecl *)(int, const char *))std::operator==<char>;
  v25 = 0;
  v3 = std::operator==<char>(v1, "LoginServer");
  v25 = -1;
  std::string::~string(v17);
  if ( v3 )
  {
    std::string::string(v17, "Address");
    v25 = 1;
    std::string::string(v21, "Port");
    LOBYTE(v25) = 2;
    std::string::string(v20, "ID");
    v4 = *(int (__thiscall **)(int, _BYTE *, _BYTE *))(*(_DWORD *)a1 + 12);
    LOBYTE(v25) = 3;
    v5 = v4(a1, v18, v17);
    LOBYTE(v25) = 4;
    v6 = std::string::c_str(v5);
    v7 = (*(int (__thiscall **)(int, _BYTE *, int, _DWORD))(*(_DWORD *)a1 + 92))(a1, v21, v6, 0);
    v8 = Outpop::IONetwork::INET_Addr::INET_Addr((Outpop::IONetwork::INET_Addr *)v23, v7);
    v9 = *(int (__thiscall **)(int, _BYTE *))(*(_DWORD *)a1 + 20);
    LOBYTE(v25) = 5;
    v10 = v9(a1, v20);
    v11 = sub_1000E56B(v15, v16);
    *(_DWORD *)(v11 + 28) = v10;
    Outpop::IONetwork::INET_Addr::operator=(v11 + 112, v8);
    LOBYTE(v25) = 4;
    Outpop::IONetwork::INET_Addr::~INET_Addr((Outpop::IONetwork::INET_Addr *)v22);
    LOBYTE(v25) = 3;
    std::string::~string(v18);
    LOBYTE(v25) = 2;
    std::string::~string(v20);
    LOBYTE(v25) = 1;
    std::string::~string(v21);
    v25 = -1;
    std::string::~string(v17);
    v2 = (int (__cdecl *)(int, const char *))std::operator==<char>;
  }
  v12 = (*(int (__thiscall **)(int, _BYTE *))(*(_DWORD *)a1 + 4))(a1, v18);
  v25 = 6;
  v13 = v2(v12, "NetworkConfig");
  v25 = -1;
  std::string::~string(v18);
  if ( v13 )
  {
    std::string::string(v19, "DirectChannelType");
    v14 = *(void (__thiscall **)(int, _DWORD *, _BYTE *))(*(_DWORD *)a1 + 12);
    v25 = 7;
    v14(a1, v24, v19);
    LOBYTE(v25) = 9;
    std::string::~string(v19);
    if ( (unsigned __int8)v2((int)v24, "Dgram") )
      *(_DWORD *)(sub_100068E8(v15, v16) + 16) = 1;
    else
      *(_DWORD *)(sub_100068E8(v15, v16) + 16) = 0;
    v25 = -1;
    std::string::~string(v24);
  }
}
