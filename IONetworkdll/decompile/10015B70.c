/*
 * func-name: sub_10015B70
 * func-address: 0x10015b70
 * callers: 0x10015920
 * callees: 0x1000bc30, 0x10016130, 0x10016160, 0x1003bd40, 0x1003bd90, 0x1003c250, 0x1003c280, 0x1004e870, 0x1004f112
 */

unsigned int __stdcall sub_10015B70(_DWORD *a1, int a2, _DWORD *a3, int a4, int a5, unsigned int a6, int a7, int a8)
{
  unsigned int v9; // edi
  unsigned int result; // eax
  unsigned int v11; // ecx
  int v12; // edx
  int v13; // edx
  unsigned int v14; // ecx
  int v15; // edx
  int v16; // ecx
  int v17; // eax
  int v18; // ecx
  unsigned int v19; // edi
  unsigned int v20; // edi
  unsigned int v21; // eax
  int v22; // [esp+0h] [ebp-38h] BYREF
  int v23; // [esp+14h] [ebp-24h]
  int v24; // [esp+18h] [ebp-20h]
  unsigned int v25; // [esp+1Ch] [ebp-1Ch]
  unsigned int v26; // [esp+24h] [ebp-14h]
  int *v27; // [esp+28h] [ebp-10h]
  int v28; // [esp+34h] [ebp-4h]
  int v29; // [esp+40h] [ebp+8h]

  v27 = &v22;
  if ( !a7 || a7 != a5 )
    invalid_parameter_noinfo();
  v9 = (int)(a8 - a6) >> 2;
  v25 = v9;
  result = a1[1];
  if ( result )
    v11 = (int)(a1[3] - result) >> 2;
  else
    v11 = 0;
  if ( v9 )
  {
    if ( result )
      v12 = (int)(a1[2] - result) >> 2;
    else
      v12 = 0;
    if ( 0x3FFFFFFF - v12 < v9 )
      sub_1000BC30();
    if ( result )
      v13 = (int)(a1[2] - result) >> 2;
    else
      v13 = 0;
    if ( v11 >= v9 + v13 )
    {
      v26 = a1[2];
      if ( result > v26 )
        invalid_parameter_noinfo();
      if ( a1 != a3 )
        invalid_parameter_noinfo();
      if ( (int)(v26 - a4) >> 2 >= v9 )
      {
        a1[2] = sub_1003C250(a1[2] - 4 * v25, a1[2]);
        sub_1003C280(a4);
        return sub_10016160(a5, a6, a7, a8);
      }
      else
      {
        v23 = 4 * v9;
        sub_1003C250(a4, a1[2]);
        v26 = a6;
        v20 = a1[2];
        if ( a1[1] > v20 )
          invalid_parameter_noinfo();
        if ( a1 != a3 )
          invalid_parameter_noinfo();
        v26 = (int)(v20 - a4) >> 2;
        if ( !a5 )
          invalid_parameter_noinfo();
        v21 = a6 + 4 * v26;
        v26 = v21;
        if ( v21 > *(_DWORD *)(a5 + 8) || v21 < *(_DWORD *)(a5 + 4) )
        {
          invalid_parameter_noinfo();
          v21 = v26;
        }
        v28 = 2;
        sub_10016130(a5, v21, a7, a8);
        v28 = -1;
        a1[2] += v23;
        return sub_10016160(a5, a6, a5, v26);
      }
    }
    else
    {
      if ( 0x3FFFFFFF - (v11 >> 1) >= v11 )
      {
        v14 = (v11 >> 1) + v11;
        v26 = v14;
      }
      else
      {
        v26 = 0;
        v14 = 0;
      }
      if ( result )
        v15 = (int)(a1[2] - result) >> 2;
      else
        v15 = 0;
      if ( v14 < v9 + v15 )
      {
        if ( result )
          v16 = (int)(a1[2] - result) >> 2;
        else
          v16 = 0;
        v26 = v9 + v16;
      }
      v29 = sub_1003BD40();
      v24 = v29;
      v28 = 0;
      v24 = sub_1003C250(a1[1], a4);
      v24 = sub_10016130(a5, a6, a7, a8);
      sub_1003C250(a4, a1[2]);
      v28 = -1;
      v17 = a1[1];
      if ( v17 )
        v18 = (a1[2] - v17) >> 2;
      else
        v18 = 0;
      v19 = v18 + v9;
      v25 = v19;
      if ( v17 )
      {
        sub_1003BD90();
        operator delete(a1[1]);
        v19 = v25;
      }
      result = v29;
      a1[3] = v29 + 4 * v26;
      a1[2] = v29 + 4 * v19;
      a1[1] = v29;
    }
  }
  return result;
}
