/*
 * func-name: ?RemoveWindow@GUISystem@@UAEXPAVCREDialog@@@Z
 * func-address: 0x100d6be0
 * callers: none
 * callees: 0x101a2500
 */

void __thiscall GUISystem::RemoveWindow(GUISystem *this, struct CREDialog *a2)
{
  unsigned int i; // edi
  int v4; // ecx
  int v5; // eax
  _DWORD *v6; // ebx
  int v7; // ecx
  unsigned int v8; // ebx
  unsigned int v9; // edi
  int v10; // eax

  for ( i = 0; ; ++i )
  {
    v4 = *((_DWORD *)this + 5);
    if ( !v4 || i >= (*((_DWORD *)this + 6) - v4) >> 2 )
      break;
    v5 = *((_DWORD *)this + 5);
    if ( *(struct CREDialog **)(*(_DWORD *)(v5 + 4 * i) + 4) == a2 )
    {
      if ( !v5 || i >= (*((_DWORD *)this + 6) - v5) >> 2 )
        invalid_parameter_noinfo();
      v6 = *(_DWORD **)(*((_DWORD *)this + 5) + 4 * i);
      if ( v6 )
      {
        v7 = v6[1];
        if ( v7 )
        {
          (*(void (__thiscall **)(int, int))(*(_DWORD *)v7 + 4))(v7, 1);
          v6[1] = 0;
        }
        operator delete(v6);
      }
      v8 = *((_DWORD *)this + 5);
      if ( v8 > *((_DWORD *)this + 6) )
        invalid_parameter_noinfo();
      v9 = v8 + 4 * i;
      if ( v9 > *((_DWORD *)this + 6) || v9 < *((_DWORD *)this + 5) )
        invalid_parameter_noinfo();
      v10 = (int)(*((_DWORD *)this + 6) - (v9 + 4)) >> 2;
      if ( v10 > 0 )
        memmove_s((void *const)v9, 4 * v10, (const void *const)(v9 + 4), 4 * v10);
      *((_DWORD *)this + 6) -= 4;
      return;
    }
  }
}
