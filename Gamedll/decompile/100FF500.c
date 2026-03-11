/*
 * func-name: ??0AEquip@GameClient@@QAE@PAVWorld@@@Z_0
 * func-address: 0x100ff500
 * callers: 0x10002d83
 * callees: 0x1000451b, 0x100057f4, 0x10007009, 0x1000d166, 0x100111c1, 0x10014326, 0x1001a221, 0x1001a974, 0x102c9d98
 */

GameClient::AEquip *__thiscall GameClient::AEquip::AEquip(GameClient::AEquip *this, struct World *a2)
{
  AsyncLoaderReport *v3; // eax
  AsyncLoaderReport *v4; // edi
  unsigned int v5; // eax
  bool v6; // cc
  struct World *v7; // eax
  struct World *v8; // eax
  int v10; // [esp+0h] [ebp-38h]
  int v11; // [esp+0h] [ebp-38h]
  int v12; // [esp+0h] [ebp-38h]
  int v13; // [esp+0h] [ebp-38h]
  int v14; // [esp+0h] [ebp-38h]
  int v15; // [esp+0h] [ebp-38h]
  int v16; // [esp+0h] [ebp-38h]
  int v17; // [esp+0h] [ebp-38h]
  int v18; // [esp+0h] [ebp-38h]
  int v19; // [esp+0h] [ebp-38h]
  int v20; // [esp+0h] [ebp-38h]
  int v21; // [esp+0h] [ebp-38h]
  int v22; // [esp+4h] [ebp-34h]
  int v23; // [esp+4h] [ebp-34h]
  int v24; // [esp+4h] [ebp-34h]
  int v25; // [esp+4h] [ebp-34h]
  int v26; // [esp+4h] [ebp-34h]
  int v27; // [esp+4h] [ebp-34h]
  int v28; // [esp+4h] [ebp-34h]
  int v29; // [esp+4h] [ebp-34h]
  int v30; // [esp+4h] [ebp-34h]
  int v31; // [esp+4h] [ebp-34h]
  int v32; // [esp+4h] [ebp-34h]
  int v33; // [esp+4h] [ebp-34h]
  int v34[3]; // [esp+14h] [ebp-24h] BYREF
  float v35; // [esp+20h] [ebp-18h] BYREF
  float v36; // [esp+24h] [ebp-14h]
  float v37; // [esp+28h] [ebp-10h]
  int v38; // [esp+34h] [ebp-4h]

  v34[2] = (int)this;
  GameClient::AdapterActor::AdapterActor(this, a2);
  v38 = 0;
  *(_DWORD *)this = &GameClient::AEquip::`vftable';
  sub_1001A974(v10, v22);
  *((float *)this + 343) = 0.0;
  *((float *)this + 344) = 0.0;
  *((float *)this + 345) = 0.0;
  sub_1001A221(v11, v23);
  sub_1001A221(v12, v24);
  sub_1001A221(v13, v25);
  sub_100057F4(v14, v26);
  sub_100057F4(v15, v27);
  sub_100057F4(v16, v28);
  sub_100057F4(v17, v29);
  sub_100057F4(v18, v30);
  sub_100057F4(v19, v31);
  sub_100057F4(v20, v32);
  sub_100111C1((int)&a2, (int)&a2);
  *((_DWORD *)this + 556) = 0;
  *((_DWORD *)this + 557) = 0;
  *((_DWORD *)this + 558) = 0;
  *((_DWORD *)this + 560) = 0;
  *((_DWORD *)this + 561) = 0;
  *((_DWORD *)this + 562) = 0;
  *((_DWORD *)this + 564) = 0;
  *((_DWORD *)this + 565) = 0;
  *((_DWORD *)this + 566) = 0;
  *((_DWORD *)this + 568) = 0;
  *((_DWORD *)this + 569) = 0;
  *((_DWORD *)this + 570) = 0;
  LOBYTE(v38) = 16;
  v3 = (AsyncLoaderReport *)operator new(8u);
  v4 = v3;
  if ( v3 )
  {
    AsyncLoaderReport::AsyncLoaderReport(v3);
    *(_DWORD *)v4 = &GameClient::EquipAsyncLoaderReport::`vftable';
    *((_DWORD *)v4 + 1) = this;
  }
  else
  {
    v4 = 0;
  }
  v35 = 0.0;
  *((_DWORD *)this + 308) = v4;
  v36 = 0.0;
  v37 = 0.0;
  *((float *)this + 343) = v35;
  *((float *)this + 344) = 0.0;
  *((_BYTE *)this + 1108) = 1;
  *((float *)this + 345) = 0.0;
  *((_BYTE *)this + 1384) = 0;
  std::string::operator=((char *)this + 1276, &unk_10311260);
  std::string::operator=((char *)this + 1304, &unk_10311261);
  *((_DWORD *)this + 341) = 0;
  *((_DWORD *)this + 533) = -1;
  *((_DWORD *)this + 534) = -1;
  *((_DWORD *)this + 545) = -1;
  *((_DWORD *)this + 550) = -1;
  *((_DWORD *)this + 546) = -1;
  *((_DWORD *)this + 551) = -1;
  *((_DWORD *)this + 547) = -1;
  *((_DWORD *)this + 552) = -1;
  *((_DWORD *)this + 548) = -1;
  *((_DWORD *)this + 553) = -1;
  *((_DWORD *)this + 549) = -1;
  *((_DWORD *)this + 554) = -1;
  sub_10007009(v21, v33);
  v36 = *((float *)this + 537);
  v5 = *((_DWORD *)this + 541);
  v6 = *((_DWORD *)this + 540) <= v5;
  LODWORD(v35) = (char *)this + 2144;
  v34[0] = v5;
  if ( !v6 )
    _invalid_parameter_noinfo();
  v7 = (struct World *)*((_DWORD *)this + 540);
  v6 = (unsigned int)v7 <= *((_DWORD *)this + 541);
  a2 = v7;
  if ( !v6 )
  {
    _invalid_parameter_noinfo();
    v7 = a2;
  }
  sub_10014326((int)v34, (int)this + 2156, (int)v7, (int)this + 2156, v34[0]);
  v8 = (struct World *)*((_DWORD *)this + 540);
  v6 = (unsigned int)v8 <= *((_DWORD *)this + 541);
  a2 = v8;
  if ( !v6 )
  {
    _invalid_parameter_noinfo();
    v8 = a2;
  }
  sub_1000D166((int)this + 2156, (int)v8, 9, (int)&v35);
  *((_DWORD *)this + 543) = 1;
  *((_DWORD *)this + 544) = 1;
  std::string::operator=((char *)this + 1388, &unk_10311262);
  std::string::operator=((char *)this + 1416, &unk_10311263);
  std::string::operator=((char *)this + 1448, &unk_10311264);
  std::string::operator=((char *)this + 1476, &unk_10311265);
  std::string::operator=((char *)this + 1508, &unk_10311266);
  std::string::operator=((char *)this + 1536, &unk_10311267);
  *((_DWORD *)this + 532) = 0;
  *((_DWORD *)this + 318) = 0;
  return this;
}
