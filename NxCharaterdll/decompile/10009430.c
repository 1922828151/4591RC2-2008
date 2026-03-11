/*
 * func-name: sub_10009430
 * func-address: 0x10009430
 * callers: none
 * callees: 0x10002a00, 0x1000b1fa
 */

int *__thiscall sub_10009430(_DWORD *this, int *a2)
{
  _DWORD *v3; // eax
  _DWORD *v4; // eax
  int *v5; // ecx
  int v6; // edi
  int v7; // edx
  int v8; // eax
  int v9; // edx
  int v10; // eax
  int v11; // ecx

  if ( !this[1] )
  {
    v3 = operator new(0x30u);
    if ( v3 )
      v4 = sub_10002A00(v3);
    else
      v4 = 0;
    this[1] = v4;
  }
  v5 = (int *)this[1];
  v6 = v5[5] - v5[4];
  *a2 = (v5[1] - *v5) >> 4;
  v7 = v5[9] - v5[8];
  a2[1] = v6 / 28;
  v8 = v7 / 40;
  v9 = *v5;
  a2[2] = v8;
  v10 = v5[4];
  v11 = v5[8];
  a2[4] = v10;
  a2[3] = v9;
  a2[5] = v11;
  return a2;
}
