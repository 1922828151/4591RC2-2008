/*
 * func-name: ?RemoveWindow@GUISystem@@UAEXPAVCGUIWindow@@@Z
 * func-address: 0x100d6b20
 * callers: none
 * callees: 0x101a2500
 */

void __thiscall GUISystem::RemoveWindow(GUISystem *this, struct CGUIWindow *a2)
{
  unsigned int i; // edi
  int v4; // ecx
  int v5; // ecx
  unsigned int v6; // ebx
  unsigned int v7; // edi
  int v8; // eax

  for ( i = 0; ; ++i )
  {
    v4 = *((_DWORD *)this + 5);
    if ( !v4 || i >= (*((_DWORD *)this + 6) - v4) >> 2 )
      break;
    if ( *(struct CGUIWindow **)(*((_DWORD *)this + 5) + 4 * i) == a2 )
    {
      if ( a2 )
      {
        v5 = *((_DWORD *)a2 + 1);
        if ( v5 )
        {
          (*(void (__thiscall **)(int, int))(*(_DWORD *)v5 + 4))(v5, 1);
          *((_DWORD *)a2 + 1) = 0;
        }
        operator delete(a2);
      }
      v6 = *((_DWORD *)this + 5);
      if ( v6 > *((_DWORD *)this + 6) )
        invalid_parameter_noinfo();
      v7 = v6 + 4 * i;
      if ( v7 > *((_DWORD *)this + 6) || v7 < *((_DWORD *)this + 5) )
        invalid_parameter_noinfo();
      v8 = (int)(*((_DWORD *)this + 6) - (v7 + 4)) >> 2;
      if ( v8 > 0 )
        memmove_s((void *const)v7, 4 * v8, (const void *const)(v7 + 4), 4 * v8);
      *((_DWORD *)this + 6) -= 4;
      return;
    }
  }
}
