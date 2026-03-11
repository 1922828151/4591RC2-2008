/*
 * func-name: sub_10023900
 * func-address: 0x10023900
 * callers: 0x10023e50
 * callees: 0x100043e0, 0x10004610, 0x10036680
 */

int __thiscall sub_10023900(int this)
{
  long double v2; // st7
  double v3; // st6
  double v4; // st5
  double v5; // st4
  int v6; // esi
  long double v7; // st4
  double v8; // st7
  float v10; // [esp+4h] [ebp-18h] BYREF
  float v11; // [esp+8h] [ebp-14h]
  float v12; // [esp+Ch] [ebp-10h]
  float v13[3]; // [esp+10h] [ebp-Ch] BYREF

  sub_10004610(v13, &v10, *(_DWORD *)(this + 168), *(float **)(this + 172));
  v2 = pow(2.0, -22.0);
  v3 = v10;
  *(float *)(this + 152) = v10;
  v4 = v11;
  if ( v11 >= v3 )
    v5 = v11;
  else
    v5 = v3;
  *(float *)(this + 152) = v5;
  if ( v12 >= v5 )
    v5 = v12;
  v6 = this + 136;
  v7 = v2 * v5;
  v8 = v12;
  *(float *)(v6 + 16) = v7;
  *(float *)(v6 - 24) = v13[0];
  *(float *)(v6 - 20) = v13[1];
  *(float *)(v6 - 16) = v13[2];
  *(float *)(v6 - 12) = v3;
  *(float *)(v6 - 8) = v4;
  *(float *)(v6 - 4) = v8;
  return sub_100043E0((float *)v6, *(_DWORD *)(v6 + 32), *(_DWORD *)(v6 + 36));
}
