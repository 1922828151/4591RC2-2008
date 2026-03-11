/*
 * func-name: sub_101377E0
 * func-address: 0x101377e0
 * callers: 0x10003d0a
 * callees: 0x100155d7, 0x10017800, 0x102c9d50
 */

void __thiscall sub_101377E0(char *this)
{
  void *v2; // eax
  void *v3; // eax

  *(_DWORD *)this = &COutPopStream::`vftable';
  v2 = (void *)*((_DWORD *)this + 26);
  if ( v2 )
    operator delete(v2);
  *((_DWORD *)this + 26) = 0;
  *((_DWORD *)this + 27) = 0;
  *((_DWORD *)this + 28) = 0;
  sub_100155D7();
  operator delete(*((void **)this + 23));
  *((_DWORD *)this + 23) = 0;
  v3 = (void *)*((_DWORD *)this + 16);
  if ( v3 )
    operator delete(v3);
  *((_DWORD *)this + 16) = 0;
  *((_DWORD *)this + 17) = 0;
  *((_DWORD *)this + 18) = 0;
  sub_10017800();
  operator delete(*((void **)this + 13));
  *((_DWORD *)this + 13) = 0;
  std::string::~string(this + 4);
  *(_DWORD *)this = &COutStream::`vftable';
}
