/*
 * func-name: sub_1015DB30
 * func-address: 0x1015db30
 * callers: 0x1015f510
 * callees: 0x101a253a
 */

void __thiscall sub_1015DB30(void *this)
{
  void *v2; // eax

  v2 = (void *)*((_DWORD *)this + 5);
  *((_DWORD *)this + 7) = 0;
  *(_DWORD *)this = 0;
  *((_DWORD *)this + 1) = 0;
  *((_DWORD *)this + 2) = 0;
  *((_DWORD *)this + 3) = 0;
  if ( v2 )
  {
    operator delete[](v2);
    *((_DWORD *)this + 5) = 0;
  }
  if ( *((_DWORD *)this + 6) )
  {
    operator delete[](*((void **)this + 6));
    *((_DWORD *)this + 6) = 0;
  }
}
