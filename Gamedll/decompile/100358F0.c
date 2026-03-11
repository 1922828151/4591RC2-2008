/*
 * func-name: sub_100358F0
 * func-address: 0x100358f0
 * callers: 0x1000d1bb
 * callees: 0x100029cd, 0x102c9dbc
 */

void __thiscall sub_100358F0(int this, float *a2)
{
  double v4; // st7
  float v5; // [esp+8h] [ebp-18h]
  float v6; // [esp+Ch] [ebp-14h]
  float v7; // [esp+10h] [ebp-10h]
  float v8; // [esp+24h] [ebp+4h]
  float v9; // [esp+24h] [ebp+4h]
  float v10; // [esp+24h] [ebp+4h]

  v5 = *(float *)(this + 40) - a2[6];
  v6 = *(float *)(this + 44) - 0.0;
  v7 = *(float *)(this + 48) - a2[8];
  v8 = v6 * v6 + v5 * v5 + v7 * v7;
  v9 = sqrt(v8);
  v4 = v9;
  v10 = a2[82] * *(float *)(this + 36);
  if ( v10 <= v4 )
  {
    sub_100029CD();
    *(float *)(this + 8) = *(float *)(this + 8) + v5;
    *(float *)(this + 12) = *(float *)(this + 12) + v6;
    *(float *)(this + 16) = *(float *)(this + 16) + v7;
    sub_100029CD();
    *(float *)(this + 20) = *(float *)(this + 20) + v5;
    *(float *)(this + 24) = *(float *)(this + 24) + v6;
    *(float *)(this + 28) = *(float *)(this + 28) + v7;
  }
  else
  {
    *(_DWORD *)(this + 4) = 0;
    *(float *)(this + 48) = 0.0;
    *(float *)(this + 44) = 0.0;
    *(float *)(this + 40) = 0.0;
  }
}
