/*
 * func-name: ?AddMember@Group@GameClient@@QAEXKABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@J_NK@Z_0
 * func-address: 0x101f8f90
 * callers: 0x10003a35
 * callees: 0x10009d68, 0x10017d28, 0x102c9d62
 */

void __thiscall GameClient::Group::AddMember(_DWORD *this, int a2, int a3, int a4, char a5, int a6)
{
  int v7; // eax
  int v8; // [esp+10h] [ebp-64h] BYREF
  _BYTE v9[28]; // [esp+14h] [ebp-60h] BYREF
  int v10; // [esp+30h] [ebp-44h]
  char v11; // [esp+34h] [ebp-40h]
  int v12; // [esp+38h] [ebp-3Ch]
  float v13; // [esp+3Ch] [ebp-38h]
  float v14; // [esp+40h] [ebp-34h]
  float v15; // [esp+44h] [ebp-30h]
  int v16; // [esp+50h] [ebp-24h]
  float v17; // [esp+54h] [ebp-20h]
  float v18; // [esp+58h] [ebp-1Ch]
  float v19; // [esp+5Ch] [ebp-18h]
  int v20; // [esp+60h] [ebp-14h]
  int v21; // [esp+70h] [ebp-4h]

  std::string::string(v9);
  v13 = 0.0;
  v14 = 0.0;
  v15 = 0.0;
  v17 = 0.0;
  v18 = 0.0;
  v19 = 0.0;
  v21 = 0;
  v8 = a2;
  v10 = a4;
  std::string::operator=(v9, a3);
  v11 = a5;
  v12 = a6;
  v16 = 6;
  v20 = 0;
  sub_10017D28((int)&v8);
  v7 = sub_10009D68(a2);
  if ( v7 )
    *(_DWORD *)(v7 + 216) = this[1];
  v21 = -1;
  std::string::~string(v9);
}
