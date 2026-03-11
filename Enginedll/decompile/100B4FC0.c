/*
 * func-name: ?RemoveHoverPic@CHotZonePic@@QAEXHK@Z
 * func-address: 0x100b4fc0
 * callers: none
 * callees: 0x101a2500
 */

void __thiscall CHotZonePic::RemoveHoverPic(CHotZonePic *this, int a2, unsigned int a3)
{
  int v4; // ecx
  int v5; // eax
  int i; // ebx
  int v7; // ecx
  _DWORD *v8; // edi
  unsigned int v9; // edi
  unsigned int v10; // edi
  int v11; // eax

  v4 = *((_DWORD *)this + 141);
  if ( v4 )
    v5 = (*((_DWORD *)this + 142) - v4) >> 2;
  else
    v5 = 0;
  for ( i = v5 - 1; i >= 0; --i )
  {
    v7 = *((_DWORD *)this + 141);
    if ( !v7 || i >= (unsigned int)((*((_DWORD *)this + 142) - v7) >> 2) )
      invalid_parameter_noinfo();
    v8 = *(_DWORD **)(*((_DWORD *)this + 141) + 4 * i);
    if ( *v8 == a2 && (!a3 || a3 == v8[10]) )
    {
      if ( v8[1] )
        operator delete((void *)v8[1]);
      operator delete(v8);
      v9 = *((_DWORD *)this + 141);
      if ( v9 > *((_DWORD *)this + 142) )
        invalid_parameter_noinfo();
      v10 = v9 + 4 * i;
      if ( v10 > *((_DWORD *)this + 142) || v10 < *((_DWORD *)this + 141) )
        invalid_parameter_noinfo();
      v11 = (int)(*((_DWORD *)this + 142) - (v10 + 4)) >> 2;
      if ( v11 > 0 )
        memmove_s((void *const)v10, 4 * v11, (const void *const)(v10 + 4), 4 * v11);
      *((_DWORD *)this + 142) -= 4;
    }
  }
}
