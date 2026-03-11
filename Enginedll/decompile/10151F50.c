/*
 * func-name: ?Render@CControlBoxList@@UAEXPAUIDirect3DDevice9@@M@Z
 * func-address: 0x10151f50
 * callers: none
 * callees: none
 */

void __thiscall CControlBoxList::Render(CControlBoxList *this, struct IDirect3DDevice9 *a2, float a3)
{
  unsigned int i; // edi
  int v5; // ecx
  unsigned int v6; // edi
  int v7; // ecx
  int v8; // edx
  _BYTE *v9; // edi
  void (__thiscall *v10)(_BYTE *, _DWORD, int); // eax
  int v11; // ecx
  unsigned int j; // ebp
  int v13; // ecx
  int v14; // edx
  int v15; // ebx
  int v16; // eax
  int v17; // ecx
  _BYTE *v18; // edi
  void (__thiscall *v19)(_BYTE *, _DWORD, int); // eax
  int v20; // eax
  int v21; // ecx
  int v22; // [esp+2Ch] [ebp-18h]
  int v23; // [esp+2Ch] [ebp-18h]
  unsigned int v24; // [esp+30h] [ebp-14h]
  int v25; // [esp+34h] [ebp-10h]
  int v26; // [esp+3Ch] [ebp-8h]
  int v27; // [esp+40h] [ebp-4h]

  if ( *((_BYTE *)this + 90) )
  {
    for ( i = 0; ; ++i )
    {
      v5 = *((_DWORD *)this + 134);
      if ( !v5 || i >= (*((_DWORD *)this + 135) - v5) >> 2 )
        break;
      *(_BYTE *)(*(_DWORD *)(*((_DWORD *)this + 134) + 4 * i) + 90) = 0;
    }
    v6 = *((_DWORD *)this + 140) * *((_DWORD *)this + 143);
    v22 = 0;
    v24 = v6;
    if ( *((_DWORD *)this + 142) == 1 )
    {
      for ( j = 0; ; ++j )
      {
        v13 = *((_DWORD *)this + 134);
        if ( !v13 )
          break;
        if ( j >= (*((_DWORD *)this + 135) - v13) >> 2 )
          break;
        v14 = *((_DWORD *)this + 134);
        if ( v22 + *(_DWORD *)(*(_DWORD *)(v14 + 4 * j) + 108) > (int)v6 )
          break;
        if ( !v14 || j >= (*((_DWORD *)this + 135) - v14) >> 2 )
          invalid_parameter_noinfo();
        v22 += *((_DWORD *)this + 139) + *(_DWORD *)(*(_DWORD *)(*((_DWORD *)this + 134) + 4 * j) + 108);
      }
      v23 = v22 - v6;
      v15 = *((_DWORD *)this + 42);
      v26 = *((_DWORD *)this + 43);
      v16 = *((_DWORD *)this + 134);
      v25 = *((_DWORD *)this + 41);
      v27 = *((_DWORD *)this + 44);
      if ( v16 && j < (*((_DWORD *)this + 135) - v16) >> 2 )
      {
        while ( 1 )
        {
          v17 = *((_DWORD *)this + 134);
          if ( !v17 || j >= (*((_DWORD *)this + 135) - v17) >> 2 || v27 <= v15 )
            break;
          if ( j >= (*((_DWORD *)this + 135) - v17) >> 2 )
            invalid_parameter_noinfo();
          v18 = *(_BYTE **)(*((_DWORD *)this + 134) + 4 * j);
          v19 = *(void (__thiscall **)(_BYTE *, _DWORD, int))(*(_DWORD *)v18 + 156);
          v18[90] = 1;
          v19(v18, *((_DWORD *)this + 24), v23 + *((_DWORD *)this + 25));
          (*(void (__thiscall **)(_BYTE *, struct IDirect3DDevice9 *, _DWORD, int, int, int, int))(*(_DWORD *)v18 + 16))(
            v18,
            a2,
            LODWORD(a3),
            v25,
            v15,
            v26,
            v27);
          v20 = *((_DWORD *)this + 134);
          if ( !v20 || j >= (*((_DWORD *)this + 135) - v20) >> 2 )
            invalid_parameter_noinfo();
          v21 = *((_DWORD *)this + 134);
          v15 = v23 + *((_DWORD *)this + 139) + *(_DWORD *)(*(_DWORD *)(v21 + 4 * j) + 108);
          if ( !v21 || j >= (*((_DWORD *)this + 135) - v21) >> 2 )
            invalid_parameter_noinfo();
          v23 += *((_DWORD *)this + 139) + *(_DWORD *)(*(_DWORD *)(*((_DWORD *)this + 134) + 4 * j++) + 108);
        }
      }
    }
    else if ( *((_DWORD *)this + 142) == 2 )
    {
      while ( 1 )
      {
        v7 = *((_DWORD *)this + 134);
        if ( !v7 )
          break;
        if ( v6 >= (*((_DWORD *)this + 135) - v7) >> 2 )
          break;
        v8 = *((_DWORD *)this + 134);
        if ( v22 + *(_DWORD *)(*(_DWORD *)(v8 + 4 * v6) + 108) > *((_DWORD *)this + 27) )
          break;
        if ( !v8 || v6 >= (*((_DWORD *)this + 135) - v8) >> 2 )
          invalid_parameter_noinfo();
        v9 = *(_BYTE **)(*((_DWORD *)this + 134) + 4 * v6);
        v10 = *(void (__thiscall **)(_BYTE *, _DWORD, int))(*(_DWORD *)v9 + 156);
        v9[90] = 1;
        v10(v9, *((_DWORD *)this + 24), v22 + *((_DWORD *)this + 25));
        (*(void (__thiscall **)(_BYTE *, struct IDirect3DDevice9 *, _DWORD))(*(_DWORD *)v9 + 20))(v9, a2, LODWORD(a3));
        v11 = *((_DWORD *)this + 134);
        if ( !v11 || v24 >= (*((_DWORD *)this + 135) - v11) >> 2 )
          invalid_parameter_noinfo();
        v22 += *((_DWORD *)this + 139) + *(_DWORD *)(*(_DWORD *)(*((_DWORD *)this + 134) + 4 * v24++) + 108);
        v6 = v24;
      }
    }
  }
}
