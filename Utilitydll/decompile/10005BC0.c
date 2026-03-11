/*
 * func-name: sub_10005BC0
 * func-address: 0x10005bc0
 * callers: 0x100037a0
 * callees: 0x10006b20, 0x100073f0, 0x10008250, 0x10008380, 0x10008a40, 0x10018cf2
 */

int __stdcall sub_10005BC0(int a1, int a2)
{
  int v3; // edx
  unsigned int v4; // ebx
  int v6; // edi
  unsigned int v7; // ecx
  int v8; // eax
  unsigned int v9; // eax
  int v10; // eax
  int v11; // eax
  int v12; // esi
  int v13; // [esp+10h] [ebp+8h]

  if ( a1 == a2 )
    return a1;
  v3 = *(_DWORD *)(a2 + 4);
  if ( !v3 || (v4 = (*(_DWORD *)(a2 + 8) - v3) >> 2) == 0 )
  {
    sub_10006B20();
    return a1;
  }
  v6 = *(_DWORD *)(a1 + 4);
  if ( v6 )
    v7 = (*(_DWORD *)(a1 + 8) - v6) >> 2;
  else
    v7 = 0;
  if ( v4 <= v7 )
  {
    sub_10008250();
    sub_10008A40(a2);
    v8 = *(_DWORD *)(a2 + 4);
    if ( v8 )
      *(_DWORD *)(a1 + 8) = *(_DWORD *)(a1 + 4) + 4 * ((*(_DWORD *)(a2 + 8) - v8) >> 2);
    else
      *(_DWORD *)(a1 + 8) = *(_DWORD *)(a1 + 4);
    return a1;
  }
  if ( v6 )
    v9 = (*(_DWORD *)(a1 + 12) - v6) >> 2;
  else
    v9 = 0;
  if ( v4 > v9 )
  {
    if ( v6 )
    {
      sub_10008A40(a2);
      operator delete(*(void **)(a1 + 4));
    }
    v11 = *(_DWORD *)(a2 + 4);
    if ( v11 )
      v12 = (*(_DWORD *)(a2 + 8) - v11) >> 2;
    else
      v12 = 0;
    *(_DWORD *)(a1 + 4) = 0;
    *(_DWORD *)(a1 + 8) = 0;
    *(_DWORD *)(a1 + 12) = 0;
    if ( v12 && (unsigned __int8)sub_100073F0() )
      *(_DWORD *)(a1 + 8) = sub_10008380(*(_DWORD *)(a2 + 4), *(_DWORD *)(a2 + 8));
    return a1;
  }
  if ( v6 )
    v10 = (*(_DWORD *)(a1 + 8) - v6) >> 2;
  else
    v10 = 0;
  v13 = v3 + 4 * v10;
  sub_10008250();
  *(_DWORD *)(a1 + 8) = sub_10008380(v13, *(_DWORD *)(a2 + 8));
  return a1;
}
