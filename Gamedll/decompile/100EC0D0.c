/*
 * func-name: sub_100EC0D0
 * func-address: 0x100ec0d0
 * callers: 0x10001ee2
 * callees: 0x1000292d, 0x10010b7c
 */

void __thiscall sub_100EC0D0(_DWORD **this, int a2, int (__cdecl *a3)(int, int))
{
  int v3; // edi
  int *v4; // ebx
  int v5; // esi
  int v6; // edi
  int v7; // eax
  int v9; // [esp+8h] [ebp-10h]
  int v10; // [esp+Ch] [ebp-Ch]

  v3 = a2;
  if ( (_DWORD **)a2 != this )
  {
    v4 = (int *)*this[1];
    v10 = (int)this[1];
    v5 = **(_DWORD **)(a2 + 4);
    v9 = *(_DWORD *)(a2 + 4);
    while ( v4 != (int *)v10 )
    {
      if ( !a2 || a2 != v3 )
        _invalid_parameter_noinfo();
      if ( v5 == v9 )
        break;
      if ( v4 == this[1] )
        _invalid_parameter_noinfo();
      if ( !a2 )
        _invalid_parameter_noinfo();
      if ( v5 == *(_DWORD *)(a2 + 4) )
        _invalid_parameter_noinfo();
      if ( a3(v5 + 8, (int)(v4 + 2)) )
      {
        if ( v5 == *(_DWORD *)(a2 + 4) )
          _invalid_parameter_noinfo();
        v6 = *(_DWORD *)v5;
        sub_10010B7C(1);
        --*(_DWORD *)(a2 + 8);
        **(_DWORD **)(v5 + 4) = v6;
        **(_DWORD **)(v6 + 4) = v4;
        *(_DWORD *)v4[1] = v5;
        v7 = v4[1];
        v4[1] = *(_DWORD *)(v6 + 4);
        *(_DWORD *)(v6 + 4) = *(_DWORD *)(v5 + 4);
        *(_DWORD *)(v5 + 4) = v7;
        v5 = v6;
        v3 = a2;
      }
      else
      {
        if ( v4 == this[1] )
          _invalid_parameter_noinfo();
        v4 = (int *)*v4;
      }
    }
    if ( !a2 || a2 != v3 )
      _invalid_parameter_noinfo();
    if ( v5 != v9 )
      sub_1000292D((int)this, v10, v3, a2, v5, v3, v9, *(_DWORD *)(v3 + 8), 0);
  }
}
