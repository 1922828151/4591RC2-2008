/*
 * func-name: ?computeShootOffset@Weapon@GameClient@@IAE?AVVector@@ABV3@@Z_0
 * func-address: 0x101963e0
 * callers: 0x10005731
 * callees: 0x100029cd, 0x1000b78a, 0x10014669, 0x10015681, 0x102c0ed0, 0x102c1be0, 0x102c26d0
 */

float *__thiscall GameClient::Weapon::computeShootOffset(int this, float *a2, float *a3)
{
  float *result; // eax
  int v5; // ecx
  bool v6; // zf
  float v7; // ecx
  float v8; // edx
  float *v9; // eax
  int v10; // edi
  double v11; // st7
  double v12; // st7
  double v13; // st7
  float *v14; // esi
  float v15; // ecx
  double v16; // st7
  float v17; // edx
  float v18; // ecx
  float v19; // [esp+4h] [ebp-6Ch]
  float v20; // [esp+8h] [ebp-68h]
  float v21; // [esp+14h] [ebp-5Ch]
  float v22; // [esp+18h] [ebp-58h] BYREF
  float v23; // [esp+1Ch] [ebp-54h]
  float v24; // [esp+20h] [ebp-50h]
  float v25; // [esp+24h] [ebp-4Ch] BYREF
  float v26; // [esp+28h] [ebp-48h]
  float v27; // [esp+2Ch] [ebp-44h]
  _BYTE v28[64]; // [esp+30h] [ebp-40h] BYREF
  float v29; // [esp+78h] [ebp+8h]
  float v30; // [esp+78h] [ebp+8h]
  float v31; // [esp+78h] [ebp+8h]
  float v32; // [esp+78h] [ebp+8h]

  if ( *(_DWORD *)(this + 148) )
  {
    v6 = *(_BYTE *)(this + 244) == 0;
    v7 = a3[1];
    v22 = *a3;
    v8 = a3[2];
    v23 = v7;
    v24 = v8;
    if ( !v6 )
    {
      sub_10014669(v28);
      v29 = *(float *)(Input::Instance(0.0) + 1712) * 0.009999999776482582;
      v30 = *(float *)(Input::Instance(LODWORD(v29)) + 1716) * 0.009999999776482582;
      sub_102C26D0(v30, v19, v20);
      v9 = (float *)sub_102C0ED0(&v25);
      v22 = *v9;
      v23 = v9[1];
      v24 = v9[2];
    }
    v10 = 160 * *(_DWORD *)(this + 740) + *(_DWORD *)(this + 8);
    if ( *(_DWORD *)(v10 + 2116) == 1 )
    {
      ++*(_DWORD *)(this + 904);
      v11 = *(float *)(v10 + 2200);
      sub_10015681(*(float *)(v10 + 2200), *(_DWORD *)(this + 904) - 1);
      v31 = v11;
      v12 = GameClient::Robot::GetRecoilSteadyCoefficient((GameClient::Robot *)*(_DWORD *)(this + 148))
          * *(float *)(v10 + 2204)
          * v31;
    }
    else
    {
      v12 = GameClient::Robot::GetRecoilSteadyCoefficient((GameClient::Robot *)*(_DWORD *)(this + 148))
          * *(float *)(v10 + 2204);
    }
    *(float *)(this + 916) = v12;
    if ( *(float *)(this + 920) > 0.0 )
    {
      v21 = (double)(rand() % 100) * 0.009999999776482582 * *(float *)(this + 920);
      v25 = (float)(rand() % 200 - 100);
      v26 = (float)(rand() % 200 - 100);
      v27 = 0.0;
      sub_100029CD();
      v25 = v25 * v21;
      v26 = v21 * v26;
      sub_10014669(v28);
      sub_102C26D0(v25, v26, 0.0);
      v25 = 0.0;
      v26 = 0.0;
      v27 = 0.0;
      sub_102C1BE0(&v22, &v25);
      v22 = v25;
      v23 = v26;
      v24 = v27;
      sub_100029CD();
    }
    v32 = *(float *)(160 * *(_DWORD *)(this + 740) + *(_DWORD *)(this + 8) + 2208) * *(float *)(this + 916);
    *(float *)(this + 924) = v32;
    *(float *)(this + 928) = *(float *)(this + 916) - v32;
    v13 = *(float *)(this + 916);
    v14 = *(float **)(this + 148);
    v25 = -v13;
    v25 = v25 + v14[168];
    v26 = v14[169] + 0.0;
    v15 = v26;
    v16 = v14[170] + 0.0;
    v14[168] = v25;
    result = a2;
    v14[169] = v15;
    v27 = v16;
    v14[170] = v27;
    v17 = v23;
    *a2 = v22;
    v18 = v24;
    a2[1] = v17;
    a2[2] = v18;
  }
  else
  {
    result = a2;
    *a2 = *a3;
    v5 = *((_DWORD *)a3 + 2);
    a2[1] = a3[1];
    *((_DWORD *)a2 + 2) = v5;
  }
  return result;
}
