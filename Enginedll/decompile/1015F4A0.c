/*
 * func-name: sub_1015F4A0
 * func-address: 0x1015f4a0
 * callers: 0x10167810
 * callees: 0x101a253a
 */

char __thiscall sub_1015F4A0(void *this, int a2, int a3, int a4, int a5, int a6)
{
  void *v7; // eax

  v7 = (void *)*((_DWORD *)this + 5);
  *((_DWORD *)this + 7) = 0;
  *(_DWORD *)this = 0;
  *((_DWORD *)this + 1) = 0;
  *((_DWORD *)this + 2) = 0;
  *((_DWORD *)this + 3) = 0;
  if ( v7 )
  {
    operator delete[](v7);
    *((_DWORD *)this + 5) = 0;
  }
  if ( *((_DWORD *)this + 6) )
  {
    operator delete[](*((void **)this + 6));
    *((_DWORD *)this + 6) = 0;
  }
  *((_DWORD *)this + 7) = a2;
  *((_DWORD *)this + 2) = a5;
  *(_DWORD *)this = a3;
  *((_DWORD *)this + 3) = a6;
  *((_DWORD *)this + 1) = a4;
  return 1;
}
