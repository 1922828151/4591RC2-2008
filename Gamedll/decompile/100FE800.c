/*
 * func-name: ?GetAnimHandle@AEquip@GameClient@@QAEHABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z_0
 * func-address: 0x100fe800
 * callers: 0x10013f7f
 * callees: 0x10002ce8, 0x102c71e0, 0x102c7580
 */

int __thiscall GameClient::AEquip::GetAnimHandle(_DWORD *this, int a2)
{
  void *v3; // eax
  int v4; // eax
  int v5; // edi
  _DWORD *v6; // eax
  _DWORD *v7; // esi
  int v8; // ebp
  _DWORD *v10; // [esp+10h] [ebp-4Ch] BYREF
  int v11; // [esp+14h] [ebp-48h]
  _BYTE v12[28]; // [esp+18h] [ebp-44h] BYREF
  _BYTE v13[28]; // [esp+34h] [ebp-28h] BYREF
  int v14; // [esp+58h] [ebp-4h]

  v3 = (void *)sub_102C71E0(v13, a2);
  v14 = 0;
  v4 = sub_102C7580(v12, v3);
  LOBYTE(v14) = 1;
  sub_10002CE8((int)&v10, v4);
  LOBYTE(v14) = 0;
  std::string::~string(v12);
  v14 = -1;
  std::string::~string(v13);
  v5 = this[537];
  v6 = this + 536;
  v7 = v10;
  if ( !v10 || v10 != v6 )
    _invalid_parameter_noinfo();
  v8 = v11;
  if ( v11 == v5 )
    return -1;
  if ( !v7 )
    _invalid_parameter_noinfo();
  if ( v8 == v7[1] )
    _invalid_parameter_noinfo();
  return *(_DWORD *)(v8 + 80);
}
