/*
 * func-name: ?GetAnimFPV@AEquip@GameClient@@QAEHABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z_0
 * func-address: 0x100fe8f0
 * callers: 0x10016b5d
 * callees: 0x10002ce8, 0x102c71e0, 0x102c7580
 */

int __thiscall GameClient::AEquip::GetAnimFPV(_DWORD *this, int a2)
{
  void *v3; // eax
  int v4; // eax
  int v5; // eax
  int v6; // edi
  _DWORD *v7; // eax
  _DWORD *v8; // esi
  int v9; // ebx
  _DWORD *v11; // [esp+14h] [ebp-68h] BYREF
  int v12; // [esp+18h] [ebp-64h]
  _BYTE v13[28]; // [esp+1Ch] [ebp-60h] BYREF
  _BYTE v14[28]; // [esp+38h] [ebp-44h] BYREF
  _BYTE v15[28]; // [esp+54h] [ebp-28h] BYREF
  int v16; // [esp+78h] [ebp-4h]

  v3 = (void *)sub_102C71E0(v15, a2);
  v16 = 0;
  v4 = sub_102C7580(v14, v3);
  LOBYTE(v16) = 1;
  v5 = std::operator+<char>(v13, v4, "FPV");
  LOBYTE(v16) = 2;
  sub_10002CE8((int)&v11, v5);
  LOBYTE(v16) = 1;
  std::string::~string(v13);
  LOBYTE(v16) = 0;
  std::string::~string(v14);
  v16 = -1;
  std::string::~string(v15);
  v6 = this[537];
  v7 = this + 536;
  v8 = v11;
  if ( !v11 || v11 != v7 )
    _invalid_parameter_noinfo();
  v9 = v12;
  if ( v12 == v6 )
    return -1;
  if ( !v8 )
    _invalid_parameter_noinfo();
  if ( v9 == v8[1] )
    _invalid_parameter_noinfo();
  return *(_DWORD *)(v9 + 80);
}
