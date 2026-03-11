/*
 * func-name: sub_101056D0
 * func-address: 0x101056d0
 * callers: 0x10106ce0
 * callees: none
 */

int __cdecl sub_101056D0(int a1, int *a2, int a3, int *a4, float *a5)
{
  int result; // eax
  unsigned int v6; // eax
  unsigned int v7; // ecx
  unsigned int v8; // eax
  unsigned int v9; // ecx
  float v10; // [esp+18h] [ebp-24h]
  float v11; // [esp+18h] [ebp-24h]
  _DWORD v12[6]; // [esp+1Ch] [ebp-20h] BYREF
  unsigned int v13; // [esp+34h] [ebp-8h]
  unsigned int v14; // [esp+38h] [ebp-4h]
  float v15; // [esp+40h] [ebp+4h]
  float v16; // [esp+40h] [ebp+4h]

  if ( !a1 || !a3 || !a5 )
    return -2147024809;
  *a5 = 0.0;
  a5[1] = 0.0;
  a5[2] = 1.0;
  a5[3] = 1.0;
  if ( a2 )
  {
    result = (*(int (__stdcall **)(int, _DWORD, _DWORD *))(*(_DWORD *)a1 + 68))(a1, 0, v12);
    if ( result < 0 )
      return result;
    v6 = v13;
    v7 = v14;
    v15 = 1.0 / (double)v13;
    v10 = 1.0 / (double)v14;
    *a5 = (double)*a2 * v15 + *a5;
    a5[1] = (double)a2[1] * v10 + a5[1];
    a5[2] = a5[2] - v15 * (double)(v6 - a2[2]);
    a5[3] = a5[3] - v10 * (double)(v7 - a2[3]);
  }
  if ( a4 )
  {
    result = (*(int (__stdcall **)(int, _DWORD, _DWORD *))(*(_DWORD *)a3 + 68))(a3, 0, v12);
    if ( result < 0 )
      return result;
    v8 = v13;
    v9 = v14;
    v16 = 1.0 / (double)v13;
    v11 = 1.0 / (double)v14;
    *a5 = *a5 - (double)*a4 * v16;
    a5[1] = a5[1] - (double)a4[1] * v11;
    a5[2] = v16 * (double)(v8 - a4[2]) + a5[2];
    a5[3] = v11 * (double)(v9 - a4[3]) + a5[3];
  }
  return 0;
}
