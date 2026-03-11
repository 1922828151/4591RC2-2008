/*
 * func-name: sub_102191C0
 * func-address: 0x102191c0
 * callers: 0x10019b91
 * callees: 0x1000b154, 0x1000b50a, 0x102c9d50, 0x102c9d86
 */

_DWORD *__cdecl sub_102191C0(_DWORD *a1, _DWORD *a2, _DWORD *a3)
{
  _DWORD *v3; // esi
  int v5; // eax
  int v6; // eax
  int v7; // eax
  int v9; // [esp+0h] [ebp-38h] BYREF
  char v10[4]; // [esp+10h] [ebp-28h] BYREF
  void *v11; // [esp+14h] [ebp-24h]
  int v12; // [esp+18h] [ebp-20h]
  int v13; // [esp+1Ch] [ebp-1Ch]
  _DWORD *v14; // [esp+20h] [ebp-18h]
  _DWORD *v15; // [esp+24h] [ebp-14h]
  int *v16; // [esp+28h] [ebp-10h]
  int v17; // [esp+34h] [ebp-4h]

  v16 = &v9;
  v3 = a3;
  v15 = a3;
  v11 = 0;
  v12 = 0;
  v13 = 0;
  v17 = 0;
  while ( 1 )
  {
    LOBYTE(v17) = 1;
    if ( a1 == a2 )
      break;
    v14 = v3;
    LOBYTE(v17) = 2;
    if ( v3 )
      sub_1000B50A((int)v10);
    v5 = v3[1];
    v3[1] = a1[1];
    a1[1] = v5;
    v6 = v3[2];
    v3[2] = a1[2];
    a1[2] = v6;
    v7 = v3[3];
    v3[3] = a1[3];
    v3 += 4;
    a1[3] = v7;
    a1 += 4;
  }
  if ( v11 )
    operator delete(v11);
  return v3;
}
