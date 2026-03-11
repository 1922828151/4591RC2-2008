/*
 * func-name: ??4SkyController@@QAEAAV0@ABV0@@Z
 * func-address: 0x1005e1c0
 * callers: none
 * callees: 0x1000f220, 0x100186b0, 0x1002dd40, 0x10031350, 0x10059e70, 0x10059f40, 0x10059fc0, 0x1005a090
 */

int __thiscall SkyController::operator=(int this, int a2)
{
  int v4; // ecx
  int v5; // eax
  int v6; // edx
  double v7; // st7
  int v8; // esi
  int v9; // edi
  char *v10; // esi
  int v11; // edi
  _DWORD *v12; // eax
  int v13; // edx
  int v15[2]; // [esp+Ch] [ebp-8h] BYREF
  int v16; // [esp+18h] [ebp+4h]

  Actor::operator=(this, a2);
  *(_BYTE *)(this + 1052) = *(_BYTE *)(a2 + 1052);
  *(_DWORD *)(this + 1056) = *(_DWORD *)(a2 + 1056);
  *(_DWORD *)(this + 1060) = *(_DWORD *)(a2 + 1060);
  v4 = a2 + 1072;
  v5 = this + 1064;
  v16 = a2 - this;
  v6 = 4;
  do
  {
    v7 = *(float *)(a2 - this + v5);
    v5 += 36;
    *(float *)(v5 - 36) = v7;
    v4 += 36;
    --v6;
    *(float *)(v5 - 32) = *(float *)(v4 - 40);
    *(float *)(v5 - 28) = *(float *)(v4 - 36);
    *(float *)(v5 - 24) = *(float *)(v4 - 32);
    *(float *)(v5 - 20) = *(float *)(v4 - 28);
    *(float *)(v5 - 16) = *(float *)(v4 - 24);
    *(float *)(v5 - 12) = *(float *)(v4 - 20);
    *(float *)(v5 - 8) = *(float *)(v4 - 16);
    *(float *)(v5 - 4) = *(float *)(v4 - 12);
  }
  while ( v6 );
  *(float *)(this + 1208) = *(float *)(a2 + 1208);
  *(float *)(this + 1212) = *(float *)(a2 + 1212);
  *(float *)(this + 1216) = *(float *)(a2 + 1216);
  *(float *)(this + 1220) = *(float *)(a2 + 1220);
  *(_BYTE *)(this + 1224) = *(_BYTE *)(a2 + 1224);
  *(_DWORD *)(this + 1228) = *(_DWORD *)(a2 + 1228);
  *(_DWORD *)(this + 1232) = *(_DWORD *)(a2 + 1232);
  *(_DWORD *)(this + 1236) = *(_DWORD *)(a2 + 1236);
  *(_DWORD *)(this + 1240) = *(_DWORD *)(a2 + 1240);
  if ( this + 1244 != a2 + 1244 )
  {
    sub_10059E70(this + 1244, v15, this + 1244, **(_DWORD **)(this + 1248), this + 1244, *(_DWORD *)(this + 1248));
    sub_10059F40((_DWORD *)(this + 1244), a2 + 1244);
  }
  if ( this + 1256 != a2 + 1256 )
  {
    sub_10059FC0(this + 1256, v15, this + 1256, **(_DWORD **)(this + 1260), this + 1256, *(_DWORD *)(this + 1260));
    sub_1005A090((_DWORD *)(this + 1256), a2 + 1256);
  }
  if ( this + 1268 != a2 + 1268 )
  {
    sub_10059FC0(this + 1268, v15, this + 1268, **(_DWORD **)(this + 1272), this + 1268, *(_DWORD *)(this + 1272));
    sub_1005A090((_DWORD *)(this + 1268), a2 + 1268);
  }
  if ( this + 1280 != a2 + 1280 )
  {
    sub_10059FC0(this + 1280, v15, this + 1280, **(_DWORD **)(this + 1284), this + 1280, *(_DWORD *)(this + 1284));
    sub_1005A090((_DWORD *)(this + 1280), a2 + 1280);
  }
  if ( this + 1292 != a2 + 1292 )
  {
    sub_10059E70(this + 1292, v15, this + 1292, **(_DWORD **)(this + 1296), this + 1292, *(_DWORD *)(this + 1296));
    sub_10059F40((_DWORD *)(this + 1292), a2 + 1292);
  }
  if ( this + 1304 != a2 + 1304 )
  {
    sub_10059FC0(this + 1304, v15, this + 1304, **(_DWORD **)(this + 1308), this + 1304, *(_DWORD *)(this + 1308));
    sub_1005A090((_DWORD *)(this + 1304), a2 + 1304);
  }
  if ( this + 1316 != a2 + 1316 )
  {
    sub_10059FC0(this + 1316, v15, this + 1316, **(_DWORD **)(this + 1320), this + 1316, *(_DWORD *)(this + 1320));
    sub_1005A090((_DWORD *)(this + 1316), a2 + 1316);
  }
  *(_BYTE *)(this + 1328) = *(_BYTE *)(a2 + 1328);
  Model::operator=(this + 1332, a2 + 1332);
  *(_DWORD *)(this + 1788) = *(_DWORD *)(a2 + 1788);
  *(_DWORD *)(this + 1792) = *(_DWORD *)(a2 + 1792);
  *(_DWORD *)(this + 1796) = *(_DWORD *)(a2 + 1796);
  v8 = this + 1800;
  v9 = 4;
  do
  {
    Texture::operator=(v8, v8 + v16);
    v8 += 156;
    --v9;
  }
  while ( v9 );
  v10 = (char *)(this + 2424);
  v11 = 4;
  do
  {
    ShaderVar::operator=(v10, (int)&v10[v16]);
    v10 += 280;
    --v11;
  }
  while ( v11 );
  *(_DWORD *)(this + 3544) = *(_DWORD *)(a2 + 3544);
  *(_DWORD *)(this + 3548) = *(_DWORD *)(a2 + 3548);
  *(_DWORD *)(this + 3552) = *(_DWORD *)(a2 + 3552);
  *(_DWORD *)(this + 3556) = *(_DWORD *)(a2 + 3556);
  *(_DWORD *)(this + 3560) = *(_DWORD *)(a2 + 3560);
  *(_DWORD *)(this + 3564) = *(_DWORD *)(a2 + 3564);
  *(_DWORD *)(this + 3568) = *(_DWORD *)(a2 + 3568);
  *(_DWORD *)(this + 3572) = *(_DWORD *)(a2 + 3572);
  qmemcpy((void *)(this + 3576), (const void *)(a2 + 3576), 0x48u);
  qmemcpy((void *)(this + 3648), (const void *)(a2 + 3648), 0x4Du);
  *(float *)(this + 3728) = *(float *)(a2 + 3728);
  *(float *)(this + 3732) = *(float *)(a2 + 3732);
  *(float *)(this + 3736) = *(float *)(a2 + 3736);
  *(float *)(this + 3740) = *(float *)(a2 + 3740);
  *(float *)(this + 3744) = *(float *)(a2 + 3744);
  *(float *)(this + 3748) = *(float *)(a2 + 3748);
  *(float *)(this + 3752) = *(float *)(a2 + 3752);
  *(float *)(this + 3756) = *(float *)(a2 + 3756);
  *(float *)(this + 3760) = *(float *)(a2 + 3760);
  *(float *)(this + 3764) = *(float *)(a2 + 3764);
  *(float *)(this + 3768) = *(float *)(a2 + 3768);
  *(float *)(this + 3772) = *(float *)(a2 + 3772);
  *(float *)(this + 3776) = *(float *)(a2 + 3776);
  *(float *)(this + 3780) = *(float *)(a2 + 3780);
  *(float *)(this + 3784) = *(float *)(a2 + 3784);
  *(float *)(this + 3788) = *(float *)(a2 + 3788);
  *(float *)(this + 3792) = *(float *)(a2 + 3792);
  *(_DWORD *)(this + 3796) = *(_DWORD *)(a2 + 3796);
  *(_DWORD *)(this + 3800) = *(_DWORD *)(a2 + 3800);
  *(_DWORD *)(this + 3804) = *(_DWORD *)(a2 + 3804);
  *(_DWORD *)(this + 3808) = *(_DWORD *)(a2 + 3808);
  *(_DWORD *)(this + 3812) = *(_DWORD *)(a2 + 3812);
  *(_DWORD *)(this + 3816) = *(_DWORD *)(a2 + 3816);
  *(_DWORD *)(this + 3820) = *(_DWORD *)(a2 + 3820);
  *(_DWORD *)(this + 3824) = *(_DWORD *)(a2 + 3824);
  *(_DWORD *)(this + 3828) = *(_DWORD *)(a2 + 3828);
  v12 = (_DWORD *)(this + 3832);
  v13 = 36;
  do
  {
    *v12 = *(_DWORD *)((char *)v12 + v16);
    v12[1] = *(_DWORD *)((char *)v12 + v16 + 4);
    v12[2] = *(_DWORD *)((char *)v12 + v16 + 8);
    v12[3] = *(_DWORD *)((char *)v12 + v16 + 12);
    v12 += 4;
    --v13;
  }
  while ( v13 );
  *(float *)(this + 4408) = *(float *)(a2 + 4408);
  *(float *)(this + 4412) = *(float *)(a2 + 4412);
  *(_DWORD *)(this + 4416) = *(_DWORD *)(a2 + 4416);
  *(_DWORD *)(this + 4420) = *(_DWORD *)(a2 + 4420);
  return this;
}
