/*
 * func-name: sub_1005F970
 * func-address: 0x1005f970
 * callers: none
 * callees: 0x1005f470, 0x1005f670
 */

char __thiscall sub_1005F970(_DWORD *this, int a2, int (__thiscall ***a3)(_DWORD, int, int), int a4)
{
  double v4; // st7
  bool v5; // zf
  double v6; // st7
  double v7; // st7
  float v9; // [esp+0h] [ebp-24h] BYREF
  float v10; // [esp+4h] [ebp-20h]
  float v11; // [esp+8h] [ebp-1Ch]
  float v12; // [esp+Ch] [ebp-18h]
  float v13; // [esp+10h] [ebp-14h]
  float v14; // [esp+14h] [ebp-10h]
  _DWORD v15[3]; // [esp+18h] [ebp-Ch] BYREF

  v4 = 0.0;
  if ( 0.0 == *(float *)(a2 + 12) )
    v9 = 0.0;
  else
    v9 = 1.0 / *(float *)(a2 + 12);
  if ( 0.0 == *(float *)(a2 + 16) )
    v10 = 0.0;
  else
    v10 = 1.0 / *(float *)(a2 + 16);
  if ( 0.0 != *(float *)(a2 + 20) )
    v4 = 1.0 / *(float *)(a2 + 20);
  v5 = *(_BYTE *)(a2 + 48) == 0;
  v11 = v4;
  v12 = *(float *)(a2 + 12) + *(float *)a2;
  v6 = *(float *)(a2 + 16);
  *(float *)v15 = v12;
  v13 = v6 + *(float *)(a2 + 4);
  v7 = *(float *)(a2 + 20);
  *(float *)&v15[1] = v13;
  v14 = v7 + *(float *)(a2 + 8);
  *(float *)&v15[2] = v14;
  if ( v5 )
    return sub_1005F670(this, 0, (float *)a2, (int)&v9, a2, (int)v15, a3, a4);
  else
    return sub_1005F470(this, 0, (float *)a2, (int)&v9, a2, (int)v15, a3, a4);
}
