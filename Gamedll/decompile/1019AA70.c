/*
 * func-name: ??4FWeapon@GameClient@@QAEAAV01@ABV01@@Z_0
 * func-address: 0x1019aa70
 * callers: 0x100057e5
 * callees: 0x1000a808, 0x10017cba
 */

int __thiscall GameClient::FWeapon::operator=(int this, int a2)
{
  int v4; // ebx
  int v5; // ebp
  float *v6; // ebx
  int v7; // edi
  int result; // eax
  int v9; // [esp+14h] [ebp+4h]

  GameClient::FEquip::operator=(a2);
  v4 = this + 2084;
  v5 = a2 - this;
  v9 = 2;
  do
  {
    GameClient::WeaponPattern::operator=(v4 + v5);
    v4 += 160;
    --v9;
  }
  while ( v9 );
  *(_BYTE *)(this + 2404) = *(_BYTE *)(a2 + 2404);
  *(_DWORD *)(this + 2408) = *(_DWORD *)(a2 + 2408);
  std::string::operator=(this + 2412, a2 + 2412);
  std::string::operator=(this + 2440, a2 + 2440);
  *(_DWORD *)(this + 2468) = *(_DWORD *)(a2 + 2468);
  *(_DWORD *)(this + 2472) = *(_DWORD *)(a2 + 2472);
  *(_DWORD *)(this + 2476) = *(_DWORD *)(a2 + 2476);
  *(_DWORD *)(this + 2480) = *(_DWORD *)(a2 + 2480);
  std::string::operator=(this + 2484, a2 + 2484);
  std::string::operator=(this + 2512, a2 + 2512);
  *(_DWORD *)(this + 2540) = *(_DWORD *)(a2 + 2540);
  *(float *)(this + 2544) = *(float *)(a2 + 2544);
  *(_BYTE *)(this + 2548) = *(_BYTE *)(a2 + 2548);
  *(float *)(this + 2552) = *(float *)(a2 + 2552);
  *(float *)(this + 2556) = *(float *)(a2 + 2556);
  *(float *)(this + 2560) = *(float *)(a2 + 2560);
  std::string::operator=(this + 2564, a2 + 2564);
  std::string::operator=(this + 2592, a2 + 2592);
  *(_DWORD *)(this + 2620) = *(_DWORD *)(a2 + 2620);
  *(float *)(this + 2624) = *(float *)(a2 + 2624);
  *(_BYTE *)(this + 2628) = *(_BYTE *)(a2 + 2628);
  *(float *)(this + 2632) = *(float *)(a2 + 2632);
  *(float *)(this + 2636) = *(float *)(a2 + 2636);
  *(float *)(this + 2640) = *(float *)(a2 + 2640);
  std::string::operator=(this + 2644, a2 + 2644);
  std::string::operator=(this + 2672, a2 + 2672);
  *(_DWORD *)(this + 2700) = *(_DWORD *)(a2 + 2700);
  *(float *)(this + 2704) = *(float *)(a2 + 2704);
  *(_BYTE *)(this + 2708) = *(_BYTE *)(a2 + 2708);
  *(float *)(this + 2712) = *(float *)(a2 + 2712);
  *(float *)(this + 2716) = *(float *)(a2 + 2716);
  v6 = (float *)(a2 + 2724);
  *(float *)(this + 2720) = *(float *)(a2 + 2720);
  std::string::operator=(this + 2724, a2 + 2724);
  std::string::operator=(this + 2752, a2 + 2752);
  *(_DWORD *)(this + 2780) = *(_DWORD *)(a2 + 2780);
  *(float *)(this + 2784) = *(float *)(a2 + 2784);
  *(_BYTE *)(this + 2788) = *(_BYTE *)(a2 + 2788);
  v7 = a2 + 2804;
  *(float *)(this + 2792) = v6[17];
  *(float *)(this + 2796) = v6[18];
  *(float *)(this + 2800) = v6[19];
  std::string::operator=(this + 2804, v7);
  std::string::operator=(this + 2832, v7 + 28);
  *(_DWORD *)(this + 2860) = *(_DWORD *)(v7 + 56);
  *(float *)(this + 2864) = *(float *)(v7 + 60);
  *(_BYTE *)(this + 2868) = *(_BYTE *)(v7 + 64);
  result = this;
  *(float *)(this + 2872) = *(float *)(v7 + 68);
  *(float *)(this + 2876) = *(float *)(v7 + 72);
  *(float *)(this + 2880) = *(float *)(v7 + 76);
  return result;
}
