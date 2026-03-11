/*
 * func-name: sub_1000B640
 * func-address: 0x1000b640
 * callers: 0x1000af80
 * callees: 0x10007600, 0x10007ed0, 0x10008380, 0x10008a40, 0x1000b510, 0x1000b9b0, 0x1000b9e0, 0x10018cf2, 0x10019586
 */

unsigned int __stdcall sub_1000B640(_DWORD *a1, int a2, _DWORD *a3, int a4, int a5, int a6, int a7, int a8)
{
  unsigned int v9; // ebx
  unsigned int result; // eax
  unsigned int v11; // ecx
  int v12; // edx
  int v13; // edx
  unsigned int v14; // ecx
  int v15; // edx
  int v16; // ecx
  int v17; // ecx
  LONG v18; // eax
  int v19; // ecx
  unsigned int v20; // ebx
  unsigned int v21; // ecx
  unsigned int v22; // ebx
  unsigned int v23; // eax
  int v24; // ebx
  int v25[5]; // [esp+0h] [ebp-38h] BYREF
  int v26; // [esp+14h] [ebp-24h]
  char *v27; // [esp+18h] [ebp-20h]
  unsigned int v28; // [esp+1Ch] [ebp-1Ch]
  int v29; // [esp+24h] [ebp-14h]
  int *v30; // [esp+28h] [ebp-10h]
  int v31; // [esp+34h] [ebp-4h]
  char *v32; // [esp+40h] [ebp+8h]
  void *v33; // [esp+40h] [ebp+8h]

  v30 = v25;
  if ( !a7 || a7 != a5 )
    invalid_parameter_noinfo();
  v9 = (a8 - a6) >> 2;
  v28 = v9;
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
      sub_10007ED0(v25[0], v25[1]);
    if ( result )
      v13 = (int)(a1[2] - result) >> 2;
    else
      v13 = 0;
    if ( v11 >= v9 + v13 )
    {
      v21 = a1[2];
      v29 = v21;
      if ( result > v21 )
        invalid_parameter_noinfo();
      if ( a1 != a3 )
        invalid_parameter_noinfo();
      if ( (v29 - a4) >> 2 >= v9 )
      {
        v24 = a1[2];
        v33 = (void *)(v24 - 4 * v28);
        a1[2] = sub_10008380(4 * v28, v24, (int)v33, v24);
        sub_1000B510((int)v33, a4, v24);
        return sub_1000B9E0(a5, a6, a7, a8);
      }
      else
      {
        v26 = 4 * v9;
        sub_10008380(v21, 4 * v9 + a4, a4, a1[2]);
        v29 = a6;
        v22 = a1[2];
        if ( a1[1] > v22 )
          invalid_parameter_noinfo();
        if ( a1 != a3 )
          invalid_parameter_noinfo();
        v29 = (int)(v22 - a4) >> 2;
        if ( !a5 )
          invalid_parameter_noinfo();
        v23 = a6 + 4 * v29;
        v29 = v23;
        if ( v23 > *(_DWORD *)(a5 + 8) || v23 < *(_DWORD *)(a5 + 4) )
        {
          invalid_parameter_noinfo();
          v23 = v29;
        }
        v31 = 2;
        sub_1000B9B0(a5, v23, a7, a8);
        v31 = -1;
        a1[2] += v26;
        return sub_1000B9E0(a5, a6, a5, v29);
      }
    }
    else
    {
      if ( 0x3FFFFFFF - (v11 >> 1) >= v11 )
      {
        v14 = (v11 >> 1) + v11;
        v29 = v14;
      }
      else
      {
        v29 = 0;
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
        v14 = v9 + v16;
        v29 = v14;
      }
      v32 = (char *)sub_10007600(v14);
      v27 = v32;
      v31 = 0;
      v27 = (char *)sub_10008380(a1[1], (int)v32, a1[1], a4);
      v27 = (char *)sub_1000B9B0(a5, a6, a7, a8);
      sub_10008380(v17, (int)v27, a4, a1[2]);
      v31 = -1;
      v18 = a1[1];
      if ( v18 )
        v19 = (a1[2] - v18) >> 2;
      else
        v19 = 0;
      v20 = v19 + v9;
      v28 = v20;
      if ( v18 )
      {
        sub_10008A40(v18, (int *)a1[2]);
        operator delete((void *)a1[1]);
        v20 = v28;
      }
      result = (unsigned int)v32;
      a1[3] = &v32[4 * v29];
      a1[2] = &v32[4 * v20];
      a1[1] = v32;
    }
  }
  return result;
}
