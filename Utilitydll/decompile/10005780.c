/*
 * func-name: sub_10005780
 * func-address: 0x10005780
 * callers: 0x10002610
 * callees: 0x10006750, 0x100073f0, 0x100081c0, 0x10008350, 0x10018cf2
 */

int __userpurge sub_10005780@<eax>(int a1@<ebx>, int a2)
{
  char *v2; // esi
  unsigned int v3; // edi
  void *v5; // edx
  unsigned int v6; // ecx
  int v7; // eax
  int v8; // ecx
  int v9; // edx
  unsigned int v10; // eax
  int v11; // eax
  char *v12; // esi
  int v13; // eax
  int v14; // esi

  if ( a2 == a1 )
    return a2;
  v2 = *(char **)(a1 + 4);
  if ( !v2 || (v3 = (*(_DWORD *)(a1 + 8) - (int)v2) >> 2) == 0 )
  {
    sub_10006750();
    return a2;
  }
  v5 = *(void **)(a2 + 4);
  if ( v5 )
    v6 = (*(_DWORD *)(a2 + 8) - (int)v5) >> 2;
  else
    v6 = 0;
  if ( v3 > v6 )
  {
    if ( v5 )
      v10 = (*(_DWORD *)(a2 + 12) - (int)v5) >> 2;
    else
      v10 = 0;
    if ( v3 <= v10 )
    {
      if ( v5 )
        v11 = (*(_DWORD *)(a2 + 8) - (int)v5) >> 2;
      else
        v11 = 0;
      v12 = &v2[4 * v11];
      sub_100081C0();
      *(_DWORD *)(a2 + 8) = sub_10008350(*(void **)(a2 + 8), v12);
      return a2;
    }
    if ( v5 )
      operator delete(*(void **)(a2 + 4));
    v13 = *(_DWORD *)(a1 + 4);
    if ( v13 )
      v14 = (*(_DWORD *)(a1 + 8) - v13) >> 2;
    else
      v14 = 0;
    *(_DWORD *)(a2 + 4) = 0;
    *(_DWORD *)(a2 + 8) = 0;
    *(_DWORD *)(a2 + 12) = 0;
    if ( v14 && (unsigned __int8)sub_100073F0() )
      *(_DWORD *)(a2 + 8) = sub_10008350(*(void **)(a2 + 4), *(void **)(a1 + 4));
    return a2;
  }
  v7 = (*(_DWORD *)(a1 + 8) - (int)v2) >> 2;
  if ( v7 > 0 )
    memmove_s(v5, 4 * v7, v2, 4 * v7);
  v8 = *(_DWORD *)(a1 + 4);
  if ( v8 )
    v9 = *(_DWORD *)(a2 + 4) + 4 * ((*(_DWORD *)(a1 + 8) - v8) >> 2);
  else
    v9 = *(_DWORD *)(a2 + 4);
  *(_DWORD *)(a2 + 8) = v9;
  return a2;
}
