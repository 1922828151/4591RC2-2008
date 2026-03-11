/*
 * func-name: ?computeShootOffsetRecover@Weapon@GameClient@@IAEXXZ_0
 * func-address: 0x10195290
 * callers: 0x1000d3ff
 * callees: 0x100017cb, 0x10003f58, 0x1000a097, 0x102c9db6, 0x102c9dbc
 */

void __thiscall GameClient::Weapon::computeShootOffsetRecover(GameClient::Weapon *this)
{
  double v2; // st6
  float *v3; // eax
  double v4; // st6
  int v5; // edi
  CameraHandler *v6; // eax
  float *Camera; // eax
  float v8; // edi
  float v9; // ebx
  float v10; // ebp
  CameraHandler *v11; // eax
  float *v12; // eax
  double v13; // st6
  double v14; // st5
  double v15; // st7
  bool v16; // c0
  float *v17; // edi
  double OffsetSteadyCoefficient; // st7
  float *v19; // ecx
  double v20; // st7
  float v21; // [esp+4h] [ebp-24h]
  float v22; // [esp+4h] [ebp-24h]
  float v23; // [esp+4h] [ebp-24h]
  double v24; // [esp+4h] [ebp-24h]
  float v25; // [esp+4h] [ebp-24h]
  float v26; // [esp+4h] [ebp-24h]
  float v27; // [esp+4h] [ebp-24h]
  float v28; // [esp+4h] [ebp-24h]
  float v29; // [esp+4h] [ebp-24h]
  float v30; // [esp+10h] [ebp-18h]
  float v31; // [esp+10h] [ebp-18h]
  float v32; // [esp+14h] [ebp-14h]
  float v33; // [esp+14h] [ebp-14h]
  float v34; // [esp+18h] [ebp-10h]
  float v35; // [esp+18h] [ebp-10h]
  float v36; // [esp+1Ch] [ebp-Ch]
  float v37; // [esp+20h] [ebp-8h]
  float v38; // [esp+24h] [ebp-4h]

  if ( *((_DWORD *)this + 37) )
  {
    if ( *((float *)this + 229) > 0.0 )
    {
      v21 = *((float *)this + 231) * GDeltaTime * 4.0;
      v2 = v21;
      v22 = *((float *)this + 229) - v21;
      *((float *)this + 229) = v22;
      if ( *((float *)this + 232) >= (double)v22 )
      {
        v23 = v2 - (*((float *)this + 232) - v22);
        *((float *)this + 229) = 0.0;
        *((float *)this + 56) = 0.0;
        *((float *)this + 55) = 0.0;
        *((float *)this + 54) = 0.0;
        *((float *)this + 231) = 0.0;
        *((float *)this + 232) = 0.0;
        v2 = v23;
      }
      v3 = (float *)*((_DWORD *)this + 37);
      v30 = v2 + v3[168];
      v32 = v3[169] + 0.0;
      v4 = v3[170] + 0.0;
      v3[168] = v30;
      v3[169] = v32;
      v34 = v4;
      v3[170] = v34;
    }
    v5 = 160 * *((_DWORD *)this + 185) + *((_DWORD *)this + 2);
    if ( (*(_DWORD *)(v5 + 2116) != 1 || *((_DWORD *)this + 186) != 1) && *((float *)this + 230) > 0.0 )
    {
      v24 = *((float *)this + 230);
      *(float *)&v24 = v24
                     - 1.0
                     / GameClient::Robot::GetOffsetSteadyCoefficient((GameClient::Robot *)*((_DWORD *)this + 37))
                     * *(float *)(v5 + 2220)
                     * GDeltaTime;
      *((float *)this + 230) = *(float *)&v24;
      if ( *(float *)&v24 < 0.0 )
        *((float *)this + 230) = 0.0;
    }
    v6 = CameraHandler::Instance();
    Camera = (float *)CameraHandler::GetCamera(v6, 0);
    v8 = Camera[88];
    v9 = Camera[89];
    v10 = Camera[90];
    v11 = CameraHandler::Instance();
    v12 = (float *)CameraHandler::GetCamera(v11, 0);
    v36 = v8 - *((float *)this + 233);
    v31 = v12[94];
    v33 = v12[95];
    v35 = v12[96];
    v37 = v9 - *((float *)this + 234);
    v38 = v10 - *((float *)this + 235);
    v25 = v37 * v37 + v36 * v36 + v38 * v38;
    v26 = sqrt(v25);
    *((float *)this + 239) = v26 / GDeltaTime;
    v13 = v35;
    v14 = v33;
    if ( *((float *)this + 236) == v31 && *((float *)this + 237) == v14 && *((float *)this + 238) == v13 )
    {
      v15 = 0.0;
      *((float *)this + 240) = 0.0;
    }
    else
    {
      v27 = v31 * *((float *)this + 236) + v14 * *((float *)this + 237) + v13 * *((float *)this + 238);
      v28 = acos(v27);
      *((float *)this + 240) = v28 / GDeltaTime;
      v15 = 0.0;
    }
    v16 = v15 < *((float *)this + 239);
    *((float *)this + 236) = v31;
    *((float *)this + 233) = v8;
    *((float *)this + 237) = v33;
    *((float *)this + 234) = v9;
    *((float *)this + 235) = v10;
    *((float *)this + 238) = v35;
    if ( v16 || v15 < *((float *)this + 240) )
    {
      v17 = (float *)(160 * *((_DWORD *)this + 185) + *((_DWORD *)this + 2) + 2084);
      OffsetSteadyCoefficient = GameClient::Robot::GetOffsetSteadyCoefficient((GameClient::Robot *)*((_DWORD *)this + 37));
      v19 = (float *)(160 * *((_DWORD *)this + 185) + *((_DWORD *)this + 2) + 2216);
      v29 = OffsetSteadyCoefficient
          * v17[32]
          * ((*((float *)this + 240) + 1.0) * v17[36] + v17[35] * *((float *)this + 239))
          * 0.1000000014901161;
      v20 = v29;
      if ( *v19 < (double)v29 )
        v20 = *v19;
      if ( *((float *)this + 230) < v20 )
        *((float *)this + 230) = v20;
    }
  }
}
