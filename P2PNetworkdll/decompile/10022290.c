/*
 * func-name: sub_10022290
 * func-address: 0x10022290
 * callers: 0x1001f4a0, 0x10020f30, 0x10021ad0
 * callees: 0x10022250, 0x10022450, 0x10022fa0, 0x10023030, 0x10023100
 */

int __cdecl sub_10022290(int a1, int a2)
{
  int v2; // ecx
  int v3; // ebx
  int v5; // edi
  int v6; // eax
  int v7; // eax
  _BYTE *v8; // edi
  int v9; // [esp+Ch] [ebp-4h]
  int v10; // [esp+18h] [ebp+8h]

  v3 = v2;
  if ( *(_DWORD *)(a1 + 52) )
  {
    v10 = a2 + 2 * *(_DWORD *)(v2 + 64);
    v5 = v10 + (*(int (__cdecl **)(int, int))(v2 + 28))(v2, v10);
    if ( !sub_10023030(v10) || *(_DWORD *)(a1 + 448) == *(_DWORD *)(a1 + 444) && !sub_10023100() )
      return 0;
    **(_BYTE **)(a1 + 448) = 0;
    v6 = *(_DWORD *)(a1 + 452);
    ++*(_DWORD *)(a1 + 448);
    v9 = v6;
    if ( !v6 )
      return 0;
    *(_DWORD *)(a1 + 452) = *(_DWORD *)(a1 + 448);
    v7 = (*(int (__cdecl **)(int, int))(v3 + 32))(v3, v5);
    if ( !sub_10023030(v7) || *(_DWORD *)(a1 + 448) == *(_DWORD *)(a1 + 444) && !sub_10023100() )
      return 0;
    **(_BYTE **)(a1 + 448) = 0;
    v8 = *(_BYTE **)(a1 + 452);
    ++*(_DWORD *)(a1 + 448);
    if ( v8 )
    {
      sub_10022250(v8);
      (*(void (__cdecl **)(_DWORD, int, _BYTE *))(a1 + 52))(*(_DWORD *)(a1 + 4), v9, v8);
      sub_10022FA0(a1 + 436);
      return 1;
    }
    else
    {
      return 0;
    }
  }
  else
  {
    if ( *(_DWORD *)(a1 + 68) )
      sub_10022450(a2);
    return 1;
  }
}
