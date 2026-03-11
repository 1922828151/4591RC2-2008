/*
 * func-name: sub_100603B0
 * func-address: 0x100603b0
 * callers: 0x10062590, 0x101b8b90
 * callees: 0x100618a0, 0x101a2500
 */

void __thiscall sub_100603B0(char *this)
{
  void *v2; // eax
  void **v3; // edi

  v2 = (void *)*((_DWORD *)this + 14);
  *(_DWORD *)this = &BSPManager::`vftable';
  *((_DWORD *)this + 1) = &BSPManager::`vftable';
  if ( v2 )
    operator delete(v2);
  v3 = (void **)(this + 24);
  sub_100618A0(this + 24);
  if ( *((_DWORD *)this + 8) != -1 )
  {
    if ( *v3 )
    {
      free(*v3);
      *v3 = 0;
    }
    *((_DWORD *)this + 7) = 0;
  }
  if ( *((_DWORD *)this + 3) )
    operator delete(*((void **)this + 3));
  *((_DWORD *)this + 3) = 0;
  *((_DWORD *)this + 4) = 0;
  *((_DWORD *)this + 5) = 0;
}
