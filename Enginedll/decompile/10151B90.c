/*
 * func-name: ?Render@CControlBox@@UAEXPAUIDirect3DDevice9@@MUtagRECT@@@Z
 * func-address: 0x10151b90
 * callers: none
 * callees: none
 */

void __thiscall CControlBox::Render(CControlBox *this, struct IDirect3DDevice9 *a2, float a3, struct tagRECT a4)
{
  unsigned int v5; // ebp
  int v6; // eax
  int v7; // eax
  int v8; // eax
  _DWORD *v9; // edi
  int v10; // eax
  int v11; // ebx
  int i; // [esp+1Ch] [ebp-4h]

  if ( *((_BYTE *)this + 90) )
  {
    v5 = 0;
    for ( i = 0; ; i += 12 )
    {
      v6 = *((_DWORD *)this + 134);
      if ( !v6 || v5 >= (*((_DWORD *)this + 135) - v6) / 12 )
        break;
      v7 = *((_DWORD *)this + 134);
      if ( !v7 || v5 >= (*((_DWORD *)this + 135) - v7) / 12 )
        invalid_parameter_noinfo();
      v8 = *((_DWORD *)this + 134);
      v9 = *(_DWORD **)(i + v8);
      if ( !v8 || v5 >= (*((_DWORD *)this + 135) - v8) / 12 )
        invalid_parameter_noinfo();
      v10 = *((_DWORD *)this + 134);
      v11 = i + v10;
      if ( !v10 || v5 >= (*((_DWORD *)this + 135) - v10) / 12 )
        invalid_parameter_noinfo();
      (*(void (__thiscall **)(_DWORD *, int, int))(*v9 + 156))(
        v9,
        *((_DWORD *)this + 24) + *(_DWORD *)(i + *((_DWORD *)this + 134) + 4),
        *((_DWORD *)this + 25) + *(_DWORD *)(v11 + 8));
      if ( v9[41] >= a4.left && v9[43] <= a4.right && v9[42] >= a4.top && v9[44] <= a4.bottom )
        (*(void (__thiscall **)(_DWORD *, struct IDirect3DDevice9 *, _DWORD))(*v9 + 20))(v9, a2, LODWORD(a3));
      ++v5;
    }
  }
}
