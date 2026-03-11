/*
 * func-name: ??0ProductManager@GameClient@@QAE@XZ_0
 * func-address: 0x1016ea20
 * callers: 0x1000103c
 * callees: 0x10006280, 0x10006bea, 0x1000b997, 0x1000f18c, 0x10015d70, 0x100176f7, 0x10017b2f, 0x10018f8e, 0x102c9d50
 */

GameClient::ProductManager *__thiscall GameClient::ProductManager::ProductManager(GameClient::ProductManager *this)
{
  int v2; // eax
  int v3; // eax
  int v4; // eax
  int v5; // eax
  int v6; // eax
  int v7; // eax
  int v8; // eax
  int v9; // eax
  int v10; // eax
  int v11; // eax
  int v12; // eax
  int v13; // eax
  int v14; // eax
  int v15; // eax
  int v16; // eax
  int v17; // eax
  int v18; // eax
  int v19; // eax
  int v20; // eax
  int v21; // eax
  int v22; // eax
  int v23; // eax
  int v24; // eax
  int v25; // eax
  char v27; // [esp+17h] [ebp-3Dh] BYREF
  _DWORD v28[2]; // [esp+18h] [ebp-3Ch] BYREF
  _BYTE v29[4]; // [esp+20h] [ebp-34h] BYREF
  void *v30; // [esp+28h] [ebp-2Ch]
  void *v31; // [esp+34h] [ebp-20h]
  int v32; // [esp+38h] [ebp-1Ch]
  int v33; // [esp+3Ch] [ebp-18h]
  int v34; // [esp+50h] [ebp-4h]

  v28[1] = this;
  *(_DWORD *)this = &GameClient::ProductManager::`vftable';
  sub_100176F7((int)&v27, (int)&v27);
  v34 = 0;
  sub_1000B997((int)&v27, (int)&v27);
  LOBYTE(v34) = 1;
  sub_10015D70((int)&v27, (int)&v27);
  LOBYTE(v34) = 2;
  sub_10018F8E((int)&v27, (int)&v27);
  LOBYTE(v34) = 3;
  v28[0] = 1;
  v2 = sub_1000F18C((int)v28);
  std::wstring::operator=(v2, L"PRODUCT_ROBOT_NORMALBODY");
  v28[0] = 2;
  v3 = sub_1000F18C((int)v28);
  std::wstring::operator=(v3, L"PRODUCT_ROBOT_HEAVYBODY");
  v28[0] = 1;
  if ( (_BYTE *)sub_10017B2F((int)v28) != v29 )
    sub_10006280((int)v29);
  v28[0] = 1;
  v4 = sub_1000F18C((int)v28);
  std::wstring::operator=(v4, L"PRODUCT_ROBOT_NORMALARMOR");
  v28[0] = 2;
  v5 = sub_1000F18C((int)v28);
  std::wstring::operator=(v5, L"PRODUCT_ROBOT_HEAVYARMOR");
  v28[0] = 2;
  if ( (_BYTE *)sub_10017B2F((int)v28) != v29 )
    sub_10006280((int)v29);
  v28[0] = 0;
  v6 = sub_1000F18C((int)v28);
  std::wstring::operator=(v6, L"PRODUCT_EQUIP_ENERGY");
  v28[0] = 4;
  if ( (_BYTE *)sub_10017B2F((int)v28) != v29 )
    sub_10006280((int)v29);
  v28[0] = 1;
  v7 = sub_1000F18C((int)v28);
  std::wstring::operator=(v7, L"PRODUCT_EQUIP_ASSAULTWEAPON");
  v28[0] = 2;
  v8 = sub_1000F18C((int)v28);
  std::wstring::operator=(v8, L"PRODUCT_EQUIP_SNIFFER");
  v28[0] = 4;
  v9 = sub_1000F18C((int)v28);
  std::wstring::operator=(v9, L"PRODUCT_EQUIP_ANTIARMOR");
  v28[0] = 8;
  v10 = sub_1000F18C((int)v28);
  std::wstring::operator=(v10, L"PRODUCT_EQUIP_MICROWEAPON");
  v28[0] = 16;
  v11 = sub_1000F18C((int)v28);
  std::wstring::operator=(v11, L"PRODUCT_EQUIP_REPAIRSET");
  v28[0] = 32;
  v12 = sub_1000F18C((int)v28);
  std::wstring::operator=(v12, L"PRODUCT_EQUIP_COMPUTER");
  v28[0] = 64;
  v13 = sub_1000F18C((int)v28);
  std::wstring::operator=(v13, L"PRODUCT_EQUIP_SCOUT");
  v28[0] = 128;
  v14 = sub_1000F18C((int)v28);
  std::wstring::operator=(v14, L"PRODUCT_EQUIP_COMMAND");
  v28[0] = 256;
  v15 = sub_1000F18C((int)v28);
  std::wstring::operator=(v15, L"PRODUCT_EQUIP_EXPLODE");
  v28[0] = 8;
  if ( (_BYTE *)sub_10017B2F((int)v28) != v29 )
    sub_10006280((int)v29);
  v28[0] = 16;
  if ( (_BYTE *)sub_10017B2F((int)v28) != v29 )
    sub_10006280((int)v29);
  v28[0] = 1;
  v16 = sub_1000F18C((int)v28);
  std::wstring::operator=(v16, L"PRODUCT_GROUNDVEHICLE_LIGHT");
  v28[0] = 2;
  v17 = sub_1000F18C((int)v28);
  std::wstring::operator=(v17, L"PRODUCT_GROUNDVEHICLE_INFANTRY");
  v28[0] = 4;
  v18 = sub_1000F18C((int)v28);
  std::wstring::operator=(v18, L"PRODUCT_GROUNDVEHICLE_TRANSPORT");
  v28[0] = 8;
  v19 = sub_1000F18C((int)v28);
  std::wstring::operator=(v19, L"PRODUCT_GROUNDVEHICLE_ENGINEER");
  v28[0] = 16;
  v20 = sub_1000F18C((int)v28);
  std::wstring::operator=(v20, L"PRODUCT_GROUNDVEHICLE_SCOUT");
  v28[0] = 32;
  v21 = sub_1000F18C((int)v28);
  std::wstring::operator=(v21, L"PRODUCT_GROUNDVEHICLE_BATTLE");
  v28[0] = 64;
  v22 = sub_1000F18C((int)v28);
  std::wstring::operator=(v22, L"PRODUCT_GROUNDVEHICLE_ATTACK");
  v28[0] = 128;
  v23 = sub_1000F18C((int)v28);
  std::wstring::operator=(v23, L"PRODUCT_GROUNDVEHICLE_STRATEGIC");
  v28[0] = 256;
  v24 = sub_1000F18C((int)v28);
  std::wstring::operator=(v24, L"PRODUCT_GROUNDVEHICLE_COMMAND");
  v28[0] = 512;
  v25 = sub_1000F18C((int)v28);
  std::wstring::operator=(v25, L"PRODUCT_GROUNDVEHICLE_SPECIAL");
  v28[0] = 32;
  if ( (_BYTE *)sub_10017B2F((int)v28) != v29 )
    sub_10006280((int)v29);
  LOBYTE(v34) = 2;
  if ( v31 )
    operator delete(v31);
  v31 = 0;
  v32 = 0;
  v33 = 0;
  sub_10006BEA();
  operator delete(v30);
  return this;
}
