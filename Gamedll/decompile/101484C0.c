/*
 * func-name: sub_101484C0
 * func-address: 0x101484c0
 * callers: 0x10001c8a
 * callees: 0x10001dfc, 0x100029cd, 0x10005c59, 0x1000d28d, 0x100126d4, 0x102c9db6, 0x102c9dbc
 */

void __thiscall sub_101484C0(int this)
{
  int v2; // eax
  float *v3; // eax
  int v4; // edi
  double v5; // st7
  double v6; // st7
  double v7; // st6
  _DWORD *v8; // eax
  float v9; // [esp+0h] [ebp-34h]
  float v10; // [esp+0h] [ebp-34h]
  float v11; // [esp+Ch] [ebp-28h]
  float v12; // [esp+Ch] [ebp-28h]
  float v13; // [esp+Ch] [ebp-28h]
  float v14; // [esp+Ch] [ebp-28h]
  float v15; // [esp+Ch] [ebp-28h]
  float v16; // [esp+Ch] [ebp-28h]
  float v17; // [esp+10h] [ebp-24h]
  float v18; // [esp+14h] [ebp-20h]
  float v19; // [esp+18h] [ebp-1Ch]
  int v20; // [esp+1Ch] [ebp-18h] BYREF
  float v21; // [esp+20h] [ebp-14h]
  float v22; // [esp+24h] [ebp-10h]
  int v23; // [esp+28h] [ebp-Ch] BYREF
  float v24; // [esp+2Ch] [ebp-8h]
  float v25; // [esp+30h] [ebp-4h]

  v2 = *(_DWORD *)(this + 176);
  if ( v2 != -1 )
  {
    v3 = (float *)sub_10001DFC(v2);
    if ( v3 )
    {
      v4 = *(_DWORD *)(this + 8);
      *(float *)&v23 = v3[6] - *(float *)(this + 12);
      v24 = v3[7] - *(float *)(this + 16);
      v5 = v3[8] - *(float *)(this + 20);
      v21 = v24;
      v20 = v23;
      v25 = v5;
      v22 = v25;
      sub_100029CD();
      v18 = *(float *)(this + 40);
      v17 = *(float *)(this + 36);
      v19 = *(float *)(this + 44);
      sub_100029CD();
      *(float *)&v23 = *(float *)&v23 - v17;
      v24 = v24 - v18;
      v25 = v25 - v19;
      v11 = v24 * v24 + *(float *)&v23 * *(float *)&v23 + v25 * v25;
      v12 = sqrt(v11);
      if ( v12 > 0.001 )
      {
        v13 = v21 * v18 + v17 * *(float *)&v20 + v22 * v19;
        v14 = acos(v13);
        v6 = v14;
        if ( *(float *)(v4 + 176) >= (double)v14 )
        {
          if ( 0.0 != v6 )
          {
            v15 = *(float *)(v4 + 172) * GDeltaTime;
            v7 = v15;
            if ( v15 >= v6 )
            {
              v16 = v6;
              v7 = v16;
            }
            *(float *)&v20 = *(float *)&v23 * v7;
            v21 = v24 * v7;
            v22 = v7 * v25;
            v9 = v6;
            sub_100126D4((int)&v23, v9);
            v10 = (float)*(int *)(v4 + 152);
            sub_10005C59((int)&v20);
            v8 = (_DWORD *)sub_1000D28D((int)&v23, v10);
            *(_DWORD *)(this + 36) = *v8;
            *(_DWORD *)(this + 40) = v8[1];
            *(_DWORD *)(this + 44) = v8[2];
          }
        }
        else
        {
          *(_DWORD *)(this + 176) = -1;
        }
      }
    }
    else
    {
      *(_DWORD *)(this + 176) = -1;
    }
  }
}
