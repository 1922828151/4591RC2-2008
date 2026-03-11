/*
 * func-name: ?RemoveAllHoverPic@CHotZonePic@@QAEXXZ
 * func-address: 0x100b51c0
 * callers: none
 * callees: 0x101a2500
 */

void __thiscall CHotZonePic::RemoveAllHoverPic(CHotZonePic *this)
{
  unsigned int i; // ebx
  unsigned int v3; // ecx
  void **v4; // edi
  char *v5; // ebx
  char *v6; // edi
  int v7; // eax
  char *v8; // ebp

  for ( i = 0; ; ++i )
  {
    v3 = *((_DWORD *)this + 141);
    if ( !v3 || i >= (int)(*((_DWORD *)this + 142) - v3) >> 2 )
      break;
    v4 = *(void ***)(*((_DWORD *)this + 141) + 4 * i);
    if ( v4 )
    {
      if ( v4[1] )
        operator delete(v4[1]);
      operator delete(v4);
    }
  }
  v5 = (char *)*((_DWORD *)this + 142);
  if ( v3 > (unsigned int)v5 )
    invalid_parameter_noinfo();
  v6 = (char *)*((_DWORD *)this + 141);
  if ( (unsigned int)v6 > *((_DWORD *)this + 142) )
    invalid_parameter_noinfo();
  if ( v6 != v5 )
  {
    v7 = (*((_DWORD *)this + 142) - (int)v5) >> 2;
    v8 = &v6[4 * v7];
    if ( v7 > 0 )
      memmove_s(v6, 4 * v7, v5, 4 * v7);
    *((_DWORD *)this + 142) = v8;
  }
}
