/*
 * func-name: ??1CHotZonePic@@UAE@XZ
 * func-address: 0x100cab00
 * callers: 0x1006bac0
 * callees: 0x101a2500
 */

void __thiscall CHotZonePic::~CHotZonePic(CHotZonePic *this)
{
  unsigned int i; // ebx
  int v3; // ecx
  void **v4; // edi
  unsigned int j; // ebx
  int v6; // ecx
  void **v7; // edi

  *(_DWORD *)this = &CHotZonePic::`vftable';
  for ( i = 0; ; ++i )
  {
    v3 = *((_DWORD *)this + 137);
    if ( !v3 || i >= (*((_DWORD *)this + 138) - v3) >> 2 )
      break;
    v4 = *(void ***)(*((_DWORD *)this + 137) + 4 * i);
    if ( v4 )
    {
      if ( v4[8] )
        operator delete(v4[8]);
      operator delete(v4);
    }
  }
  for ( j = 0; ; ++j )
  {
    v6 = *((_DWORD *)this + 141);
    if ( !v6 || j >= (*((_DWORD *)this + 142) - v6) >> 2 )
      break;
    v7 = *(void ***)(*((_DWORD *)this + 141) + 4 * j);
    if ( v7 )
    {
      if ( v7[1] )
        operator delete(v7[1]);
      operator delete(v7);
    }
  }
  if ( *((_DWORD *)this + 133) )
  {
    operator delete(*((void **)this + 133));
    *((_DWORD *)this + 133) = 0;
  }
  if ( *((_DWORD *)this + 145) )
    operator delete(*((void **)this + 145));
  *((_DWORD *)this + 145) = 0;
  *((_DWORD *)this + 146) = 0;
  *((_DWORD *)this + 147) = 0;
  if ( *((_DWORD *)this + 141) )
    operator delete(*((void **)this + 141));
  *((_DWORD *)this + 141) = 0;
  *((_DWORD *)this + 142) = 0;
  *((_DWORD *)this + 143) = 0;
  if ( *((_DWORD *)this + 137) )
    operator delete(*((void **)this + 137));
  *((_DWORD *)this + 137) = 0;
  *((_DWORD *)this + 138) = 0;
  *((_DWORD *)this + 139) = 0;
  CREControl::~CREControl(this);
}
