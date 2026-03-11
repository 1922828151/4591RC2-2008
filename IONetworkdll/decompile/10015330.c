/*
 * func-name: sub_10015330
 * func-address: 0x10015330
 * callers: 0x10015200, 0x1003bdc0
 * callees: 0x1000bc30, 0x100252e0, 0x10025930, 0x10035d20, 0x1004a4a0, 0x1004e870, 0x1004f112
 */

_DWORD *__fastcall sub_10015330(unsigned int a1, _DWORD *a2, int *a3, int a4, _DWORD *a5)
{
  _DWORD *result; // eax
  unsigned int v8; // ecx
  int v9; // edx
  int v10; // edx
  unsigned int v11; // ecx
  int v12; // edx
  int v13; // ecx
  int v14; // eax
  int v15; // ecx
  int v16; // eax
  unsigned int v17; // ebx
  int v18; // eax
  int v19; // ecx
  _DWORD *v20; // edi
  int v21; // ebx
  int v22; // [esp+0h] [ebp-34h] BYREF
  int v23; // [esp+10h] [ebp-24h]
  int v24; // [esp+14h] [ebp-20h]
  int v25; // [esp+18h] [ebp-1Ch]
  int v26; // [esp+1Ch] [ebp-18h]
  int *v27; // [esp+24h] [ebp-10h]
  int v28; // [esp+30h] [ebp-4h]
  unsigned int v29; // [esp+3Ch] [ebp+8h]
  int v30; // [esp+3Ch] [ebp+8h]

  v27 = &v22;
  v23 = *a3;
  v24 = a3[1];
  result = (_DWORD *)a2[1];
  if ( result )
    v8 = (a2[3] - (int)result) >> 3;
  else
    v8 = 0;
  if ( a1 )
  {
    if ( result )
      v9 = (a2[2] - (int)result) >> 3;
    else
      v9 = 0;
    if ( 0x1FFFFFFF - v9 < a1 )
      sub_1000BC30();
    if ( result )
      v10 = (a2[2] - (int)result) >> 3;
    else
      v10 = 0;
    if ( v8 >= a1 + v10 )
    {
      v18 = a2[2];
      v25 = v18;
      v19 = 8 * a1;
      v30 = 8 * a1;
      if ( (v18 - (int)a5) >> 3 >= a1 )
      {
        v21 = v18 - v19;
        a2[2] = sub_10035D20(v18 - v19, v18);
        sub_1004A4A0(v21, v25);
        for ( result = a5; result != &a5[v30 / 4u]; result += 2 )
        {
          *result = v23;
          result[1] = v24;
        }
      }
      else
      {
        sub_10035D20(a5, v18);
        v28 = 2;
        sub_10025930(a2[2], a1 - ((a2[2] - (int)a5) >> 3));
        v28 = -1;
        a2[2] += v30;
        v20 = (_DWORD *)(a2[2] - v30);
        for ( result = a5; result != v20; result += 2 )
        {
          *result = v23;
          result[1] = v24;
        }
      }
    }
    else
    {
      if ( 0x1FFFFFFF - (v8 >> 1) >= v8 )
      {
        v11 = (v8 >> 1) + v8;
        v29 = v11;
      }
      else
      {
        v29 = 0;
        v11 = 0;
      }
      if ( result )
        v12 = (a2[2] - (int)result) >> 3;
      else
        v12 = 0;
      if ( v11 < a1 + v12 )
      {
        if ( result )
          v13 = (a2[2] - (int)result) >> 3;
        else
          v13 = 0;
        v29 = a1 + v13;
      }
      v26 = sub_100252E0();
      v28 = 0;
      v14 = sub_10035D20(a2[1], a5);
      LOBYTE(v25) = 0;
      sub_10025930(v14, a1);
      sub_10035D20(a5, a2[2]);
      v28 = -1;
      v15 = a2[1];
      if ( v15 )
        v16 = (a2[2] - v15) >> 3;
      else
        v16 = 0;
      v17 = v16 + a1;
      if ( v15 )
        operator delete(a2[1]);
      result = (_DWORD *)v26;
      a2[3] = v26 + 8 * v29;
      a2[2] = &result[2 * v17];
      a2[1] = result;
    }
  }
  return result;
}
