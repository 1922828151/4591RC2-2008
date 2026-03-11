/*
 * func-name: sub_1000B290
 * func-address: 0x1000b290
 * callers: 0x1000b180
 * callees: 0x10007600, 0x10007720, 0x10007ed0, 0x10008380, 0x10008a40, 0x1000b510, 0x1000b960, 0x10018cf2, 0x10019586
 */

LONG __stdcall sub_1000B290(int *a1, int *a2, int a3, int a4)
{
  int v4; // eax
  int v5; // eax
  unsigned int v6; // ecx
  int v7; // edx
  int v8; // edx
  unsigned int v9; // ecx
  int v10; // edx
  int v11; // ecx
  void *v12; // ebx
  LONG v13; // eax
  int v14; // edi
  LONG result; // eax
  int (__thiscall ***v16)(_DWORD, int); // esi
  int v17; // [esp-4h] [ebp-30h]
  int v18; // [esp-4h] [ebp-30h]
  int v19[4]; // [esp+0h] [ebp-2Ch] BYREF
  void *v20; // [esp+10h] [ebp-1Ch]
  int v21; // [esp+14h] [ebp-18h]
  _DWORD v22[2]; // [esp+18h] [ebp-14h] BYREF
  int v23; // [esp+28h] [ebp-4h]
  unsigned int v24; // [esp+38h] [ebp+Ch]

  v22[1] = v19;
  v4 = *a2;
  v22[0] = v4;
  if ( v4 )
    InterlockedIncrement((volatile LONG *)(v4 + 4));
  v23 = 0;
  v5 = a1[1];
  if ( v5 )
    v6 = (a1[3] - v5) >> 2;
  else
    v6 = 0;
  if ( v5 )
    v7 = (a1[2] - v5) >> 2;
  else
    v7 = 0;
  if ( v7 == 0x3FFFFFFF )
    sub_10007ED0(v19[0], v19[1]);
  if ( v5 )
    v8 = (a1[2] - v5) >> 2;
  else
    v8 = 0;
  if ( v6 >= v8 + 1 )
  {
    v17 = a1[2];
    if ( (v17 - a4) >> 2 )
    {
      a1[2] = sub_10008380(v6, a1[2], a1[2] - 4, v17);
      sub_1000B510();
      v18 = a4 + 4;
    }
    else
    {
      sub_10008380(v6, a4 + 4, a4, v17);
      LOBYTE(v23) = 3;
      sub_10007720((int)v22, a1[2], 1 - ((a1[2] - a4) >> 2));
      v23 = 0;
      a1[2] += 4;
      v18 = a1[2] - 4;
    }
    result = sub_1000B960(v18);
  }
  else
  {
    if ( 0x3FFFFFFF - (v6 >> 1) >= v6 )
    {
      v9 = (v6 >> 1) + v6;
      v24 = v9;
    }
    else
    {
      v24 = 0;
      v9 = 0;
    }
    if ( v5 )
      v10 = (a1[2] - v5) >> 2;
    else
      v10 = 0;
    if ( v9 < v10 + 1 )
    {
      if ( v5 )
        v11 = (a1[2] - v5) >> 2;
      else
        v11 = 0;
      v9 = v11 + 1;
      v24 = v9;
    }
    v12 = sub_10007600(v9);
    v20 = v12;
    v21 = (int)v12;
    LOBYTE(v23) = 1;
    v21 = sub_10008380(a4, (int)v12, a1[1], a4);
    v21 = sub_10007720((int)v22, v21, 1);
    sub_10008380(a1[2], v21, a4, a1[2]);
    v23 = 0;
    v13 = a1[1];
    if ( v13 )
      v14 = (a1[2] - v13) >> 2;
    else
      v14 = 0;
    if ( v13 )
    {
      sub_10008A40(v13, (int *)a1[2]);
      operator delete((void *)a1[1]);
      v12 = v20;
    }
    result = (LONG)v12 + 4 * v24;
    a1[3] = result;
    a1[2] = (int)v12 + 4 * v14 + 4;
    a1[1] = (int)v12;
  }
  v23 = -1;
  v16 = (int (__thiscall ***)(_DWORD, int))v22[0];
  if ( v22[0] )
  {
    result = InterlockedDecrement((volatile LONG *)(v22[0] + 4));
    if ( !result )
      return (**v16)(v16, 1);
  }
  return result;
}
