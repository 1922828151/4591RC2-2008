/*
 * func-name: sub_1015F400
 * func-address: 0x1015f400
 * callers: 0x1015f510, 0x1015f6b0, 0x10160440
 * callees: 0x101a24ac, 0x101a253a
 */

bool __thiscall sub_1015F400(void *this, int a2, int a3)
{
  void *v4; // eax
  void *v5; // eax
  void *v7; // eax

  v4 = (void *)*((_DWORD *)this + 5);
  *((_DWORD *)this + 7) = 0;
  *(_DWORD *)this = 0;
  *((_DWORD *)this + 1) = 0;
  *((_DWORD *)this + 2) = 0;
  *((_DWORD *)this + 3) = 0;
  if ( v4 )
  {
    operator delete[](v4);
    *((_DWORD *)this + 5) = 0;
  }
  if ( *((_DWORD *)this + 6) )
  {
    operator delete[](*((void **)this + 6));
    *((_DWORD *)this + 6) = 0;
  }
  *((_DWORD *)this + 2) = a2;
  *((_DWORD *)this + 3) = a3;
  v5 = operator new(4 * a3 * a2);
  *((_DWORD *)this + 5) = v5;
  if ( !v5 )
    return 0;
  v7 = operator new(4 * *((_DWORD *)this + 2) * *((_DWORD *)this + 3));
  *((_DWORD *)this + 6) = v7;
  return v7 != 0;
}
