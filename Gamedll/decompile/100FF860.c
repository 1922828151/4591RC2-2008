/*
 * func-name: ??1AEquip@GameClient@@UAE@XZ_0
 * func-address: 0x100ff860
 * callers: 0x1000512d
 * callees: 0x10001de3, 0x10003fe9, 0x10004dcc, 0x10006122, 0x10007009, 0x10009999, 0x1000b091, 0x10014c90, 0x102c9d50
 */

void __thiscall GameClient::AEquip::~AEquip(GameClient::AEquip *this)
{
  char *v2; // edi
  unsigned int v3; // ebp
  unsigned int v4; // edi
  unsigned int v5; // ebp
  unsigned int v6; // edi
  unsigned int v7; // edi
  unsigned int v8; // eax
  unsigned int v9; // eax
  bool v10; // cc
  unsigned int v11; // eax
  void *v12; // eax
  int v13; // [esp+0h] [ebp-30h]
  int v14; // [esp+0h] [ebp-30h]
  int v15; // [esp+0h] [ebp-30h]
  int v16; // [esp+0h] [ebp-30h]
  int v17; // [esp+0h] [ebp-30h]
  int v18; // [esp+0h] [ebp-30h]
  int v19; // [esp+0h] [ebp-30h]
  int v20; // [esp+0h] [ebp-30h]
  int v21; // [esp+0h] [ebp-30h]
  int v22; // [esp+0h] [ebp-30h]
  int v23; // [esp+0h] [ebp-30h]
  int v24; // [esp+0h] [ebp-30h]
  int v25; // [esp+0h] [ebp-30h]
  int v26; // [esp+4h] [ebp-2Ch]
  int v27; // [esp+4h] [ebp-2Ch]
  int v28; // [esp+4h] [ebp-2Ch]
  int v29; // [esp+4h] [ebp-2Ch]
  int v30; // [esp+4h] [ebp-2Ch]
  int v31; // [esp+4h] [ebp-2Ch]
  int v32; // [esp+4h] [ebp-2Ch]
  int v33; // [esp+4h] [ebp-2Ch]
  int v34; // [esp+4h] [ebp-2Ch]
  int v35; // [esp+4h] [ebp-2Ch]
  int v36; // [esp+4h] [ebp-2Ch]
  int v37; // [esp+4h] [ebp-2Ch]
  int v38; // [esp+4h] [ebp-2Ch]
  unsigned int v39; // [esp+14h] [ebp-1Ch]
  unsigned int v40; // [esp+14h] [ebp-1Ch]
  int v41[3]; // [esp+18h] [ebp-18h] BYREF
  int v42; // [esp+2Ch] [ebp-4h]

  v41[2] = (int)this;
  *(_DWORD *)this = &GameClient::AEquip::`vftable';
  v2 = (char *)this + 2144;
  v42 = 16;
  sub_10007009(v13, v26);
  v41[1] = *((_DWORD *)v2 + 1);
  v41[0] = (int)v2;
  sub_1000B091(9, (int)v41);
  *((_DWORD *)this + 543) = 1;
  *((_DWORD *)this + 544) = 1;
  v3 = *((_DWORD *)this + 557);
  if ( *((_DWORD *)this + 556) > v3 )
    _invalid_parameter_noinfo();
  v4 = *((_DWORD *)this + 556);
  if ( v4 > *((_DWORD *)this + 557) )
    _invalid_parameter_noinfo();
  sub_10004DCC((int)v41, (int)this + 2220, v4, (int)this + 2220, v3);
  v5 = *((_DWORD *)this + 561);
  if ( *((_DWORD *)this + 560) > v5 )
    _invalid_parameter_noinfo();
  v6 = *((_DWORD *)this + 560);
  if ( v6 > *((_DWORD *)this + 561) )
    _invalid_parameter_noinfo();
  sub_10004DCC((int)v41, (int)this + 2236, v6, (int)this + 2236, v5);
  v7 = *((_DWORD *)this + 565);
  if ( *((_DWORD *)this + 564) > v7 )
    _invalid_parameter_noinfo();
  v8 = *((_DWORD *)this + 564);
  v39 = v8;
  if ( v8 > *((_DWORD *)this + 565) )
  {
    _invalid_parameter_noinfo();
    v8 = v39;
  }
  sub_10004DCC((int)v41, (int)this + 2252, v8, (int)this + 2252, v7);
  v9 = *((_DWORD *)this + 569);
  v10 = *((_DWORD *)this + 568) <= v9;
  v41[0] = v9;
  if ( !v10 )
    _invalid_parameter_noinfo();
  v11 = *((_DWORD *)this + 568);
  v40 = v11;
  if ( v11 > *((_DWORD *)this + 569) )
  {
    _invalid_parameter_noinfo();
    v11 = v40;
  }
  sub_10004DCC((int)v41, (int)this + 2268, v11, (int)this + 2268, v41[0]);
  LOBYTE(v42) = 15;
  sub_10003FE9();
  LOBYTE(v42) = 14;
  sub_10003FE9();
  LOBYTE(v42) = 13;
  sub_10003FE9();
  LOBYTE(v42) = 12;
  sub_10003FE9();
  v12 = (void *)*((_DWORD *)this + 540);
  LOBYTE(v42) = 11;
  if ( v12 )
    operator delete(v12);
  *((_DWORD *)this + 540) = 0;
  *((_DWORD *)this + 541) = 0;
  *((_DWORD *)this + 542) = 0;
  sub_10007009(v14, v27);
  operator delete(*((void **)this + 537));
  *((_DWORD *)this + 537) = 0;
  LOBYTE(v42) = 10;
  sub_10014C90(v15, v28);
  LOBYTE(v42) = 9;
  sub_10014C90(v16, v29);
  LOBYTE(v42) = 8;
  sub_10014C90(v17, v30);
  LOBYTE(v42) = 7;
  sub_10014C90(v18, v31);
  LOBYTE(v42) = 6;
  sub_10014C90(v19, v32);
  LOBYTE(v42) = 5;
  sub_10014C90(v20, v33);
  LOBYTE(v42) = 4;
  sub_10014C90(v21, v34);
  LOBYTE(v42) = 3;
  sub_10001DE3(v22, v35);
  LOBYTE(v42) = 2;
  sub_10001DE3(v23, v36);
  LOBYTE(v42) = 1;
  sub_10001DE3(v24, v37);
  LOBYTE(v42) = 0;
  sub_10006122(v25, v38);
  v42 = -1;
  GameClient::AdapterActor::~AdapterActor(this);
}
