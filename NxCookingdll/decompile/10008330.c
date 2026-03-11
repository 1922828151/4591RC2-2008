/*
 * func-name: sub_10008330
 * func-address: 0x10008330
 * callers: 0x1000b780
 * callees: none
 */

int __cdecl sub_10008330(int *a1, unsigned int *a2)
{
  int v2; // ebp
  unsigned int v3; // esi
  unsigned int v4; // ebx
  int v5; // eax
  unsigned int v6; // eax
  unsigned int *v7; // ecx
  unsigned int v8; // edx
  unsigned int v9; // esi
  unsigned int v11; // [esp+10h] [ebp-4h]
  unsigned int v12; // [esp+18h] [ebp+4h]

  v2 = *a1;
  v3 = 0;
  v4 = *a2;
  v5 = (a1[1] - *a1) / 12 - 1;
  v11 = 0;
  v12 = v5;
  while ( 1 )
  {
    v6 = (v3 + v5) >> 1;
    v7 = (unsigned int *)(v2 + 12 * v6);
    if ( *v7 == v4 && v7[1] == a2[1] && v7[2] == a2[2] )
      break;
    if ( v4 >= *v7 && (v4 > *v7 || (v8 = a2[1], v9 = v7[1], v8 >= v9) && (v8 > v9 || a2[2] >= v7[2])) )
      v11 = v6 + 1;
    else
      v12 = v6 - 1;
    v3 = v11;
    v5 = v12;
    if ( v11 > v12 )
      return 0;
  }
  if ( v6
    && *(_DWORD *)(v2 + 12 * v6 - 12) == *(_DWORD *)(v2 + 12 * v6)
    && *(_DWORD *)(v2 + 12 * v6 - 8) == *(_DWORD *)(v2 + 12 * v6 + 4) )
  {
    return 0;
  }
  return v2 + 12 * v6;
}
