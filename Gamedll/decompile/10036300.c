/*
 * func-name: sub_10036300
 * func-address: 0x10036300
 * callers: 0x1000f9d9
 * callees: 0x10001dfc, 0x100029cd, 0x10016a4f, 0x102c9dbc
 */

void __thiscall sub_10036300(int this, float *a2)
{
  int v3; // eax
  int v4; // eax
  float v5; // ebp
  float v6; // ebx
  float v7; // edi
  float v8; // [esp+8h] [ebp-28h]
  float v9; // [esp+8h] [ebp-28h]
  float v10; // [esp+8h] [ebp-28h]
  float v11; // [esp+8h] [ebp-28h]
  float v12; // [esp+Ch] [ebp-24h]
  float v13; // [esp+10h] [ebp-20h]
  float v14; // [esp+14h] [ebp-1Ch]
  float v15; // [esp+24h] [ebp-Ch]
  float v16; // [esp+28h] [ebp-8h]
  float v17; // [esp+2Ch] [ebp-4h]

  v3 = sub_10016A4F(*(_DWORD *)(this + 136));
  if ( v3 && (v4 = sub_10001DFC(*(_DWORD *)(v3 + 292))) != 0 )
  {
    v12 = *(float *)(v4 + 24) - a2[6];
    v13 = 0.0 - 0.0;
    v14 = *(float *)(v4 + 32) - a2[8];
    v8 = v13 * v13 + v12 * v12 + v14 * v14;
    v9 = sqrt(v8);
    if ( *(float *)(this + 140) - *(float *)(this + 36) * a2[82] <= v9 )
    {
      v7 = *(float *)(v4 + 32) - a2[8];
      v6 = 0.0 - 0.0;
      v5 = *(float *)(v4 + 24) - a2[6];
    }
    else
    {
      if ( v9 >= 1.0 )
      {
        v7 = *(float *)(v4 + 32) - a2[8];
        v6 = 0.0 - 0.0;
        v5 = *(float *)(v4 + 24) - a2[6];
      }
      else
      {
        v5 = 1.0;
        v12 = 1.0;
        v6 = 0.0;
        v13 = 0.0;
        v7 = 1.0;
        v14 = 1.0;
      }
      sub_100029CD();
      v15 = -v5;
      v16 = -v6;
      v17 = -v7;
      *(float *)(this + 20) = v15 + *(float *)(this + 20);
      *(float *)(this + 24) = *(float *)(this + 24) + v16;
      *(float *)(this + 28) = v17 + *(float *)(this + 28);
    }
    v10 = v13 * v13 + v12 * v12 + v14 * v14;
    v11 = sqrt(v10);
    if ( *(float *)(this + 36) * a2[82] + *(float *)(this + 140) < v11 )
    {
      sub_100029CD();
      *(float *)(this + 8) = *(float *)(this + 8) + v5;
      *(float *)(this + 12) = v6 + *(float *)(this + 12);
      *(float *)(this + 16) = *(float *)(this + 16) + v7;
      sub_100029CD();
      *(float *)(this + 20) = *(float *)(this + 20) + v5;
      *(float *)(this + 24) = v6 + *(float *)(this + 24);
      *(float *)(this + 28) = *(float *)(this + 28) + v7;
    }
  }
  else
  {
    *(_DWORD *)(this + 4) = 0;
  }
}
