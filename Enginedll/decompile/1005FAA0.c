/*
 * func-name: sub_1005FAA0
 * func-address: 0x1005faa0
 * callers: 0x100634e0
 * callees: 0x10001370, 0x1004c240, 0x10061060, 0x10079660, 0x1017a0b0, 0x101a2516
 */

char __cdecl sub_1005FAA0(float *a1, float *a2, int a3, float *a4)
{
  float v5; // eax
  float v6; // edx
  float v7; // [esp+Ch] [ebp-4Ch]
  float v8; // [esp+Ch] [ebp-4Ch]
  float v9; // [esp+10h] [ebp-48h] BYREF
  _BYTE v10[4]; // [esp+14h] [ebp-44h] BYREF
  float v11[3]; // [esp+18h] [ebp-40h] BYREF
  float v12[10]; // [esp+24h] [ebp-34h] BYREF
  int v13; // [esp+54h] [ebp-4h]

  sub_10001370(v12, a1, a2);
  v13 = 0;
  if ( (unsigned __int8)sub_10061060(a3) )
  {
    v13 = -1;
    sub_1017A0B0(v12);
    return 1;
  }
  else
  {
    v7 = a4[1] * a4[1] + *a4 * *a4 + a4[2] * a4[2];
    v8 = sqrt(v7);
    v5 = *a4;
    v6 = a4[2];
    v11[1] = a4[1];
    v11[0] = v5;
    v11[2] = v6;
    sub_1004C240(v11);
    if ( sub_10079660(a1, a2, a3, v11, &v9, v10) == -1 || v9 <= 0.0 || v8 <= (double)v9 )
    {
      v13 = -1;
      sub_1017A0B0(v12);
      return 0;
    }
    else
    {
      v13 = -1;
      sub_1017A0B0(v12);
      return 1;
    }
  }
}
