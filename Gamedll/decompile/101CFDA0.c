/*
 * func-name: ?WriteSynaData@AMovement@GameClient@@UAE_NAAVBinStream@@@Z_0
 * func-address: 0x101cfda0
 * callers: 0x10008224
 * callees: 0x10008a62, 0x1000b5c3, 0x10017eb3, 0x10019cd6, 0x102c9ea8
 */

char __thiscall GameClient::AMovement::WriteSynaData(GameClient::AMovement *this, float a2)
{
  float v2; // esi
  int v5; // edi
  int v6; // eax
  unsigned int v7; // edx
  double v8; // st7
  int v9; // eax
  double v10; // st7
  float v11; // ecx
  float v12; // edx
  float v13; // eax
  GameClient::ControlledEstab *v14; // edi
  float v15; // [esp+Ch] [ebp-10h]
  float v16; // [esp+10h] [ebp-Ch] BYREF
  float v17; // [esp+14h] [ebp-8h]
  float v18; // [esp+18h] [ebp-4h]

  v2 = a2;
  if ( !GameClient::Aura::WriteSynaData(this, (struct BinStream *)LODWORD(a2)) )
    return 0;
  v5 = *((_DWORD *)this + 8);
  if ( !v5 )
    return 0;
  if ( *(_DWORD *)(v5 + 112) == 1 )
  {
    v6 = *(_DWORD *)(LODWORD(v2) + 12);
    v7 = *(_DWORD *)(LODWORD(v2) + 8);
    v16 = 0.0;
    v17 = 0.0;
    v18 = 0.0;
    if ( v6 + 4 <= v7 )
    {
      v8 = *(float *)(v6 + *(_DWORD *)(LODWORD(v2) + 4));
      *(_DWORD *)(LODWORD(v2) + 12) = v6 + 4;
      a2 = v8;
    }
    v9 = *(_DWORD *)(LODWORD(v2) + 12);
    if ( v9 + 4 <= v7 )
    {
      v10 = *(float *)(v9 + *(_DWORD *)(LODWORD(v2) + 4));
      *(_DWORD *)(LODWORD(v2) + 12) = v9 + 4;
      v15 = v10;
    }
    sub_10017EB3((int)&v16);
    v11 = v16;
    *(float *)(v5 + 328) = a2;
    v12 = v17;
    v13 = v18;
    *(float *)(v5 + 332) = v15;
    *(float *)(v5 + 756) = v15;
    *(float *)(v5 + 752) = v11;
    *(float *)(v5 + 756) = v12;
    *(float *)(v5 + 760) = v13;
    return 1;
  }
  else
  {
    v14 = (GameClient::ControlledEstab *)_RTDynamicCast(
                                           v5,
                                           0,
                                           &GameClient::WorldObject `RTTI Type Descriptor',
                                           &GameClient::ControlledEstab `RTTI Type Descriptor',
                                           0);
    if ( v14 )
    {
      sub_1000B5C3((int)&a2);
      GameClient::ControlledEstab::SetImpluseAccel(v14, a2);
    }
    return 1;
  }
}
