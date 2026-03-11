/*
 * func-name: sub_100165E0
 * func-address: 0x100165e0
 * callers: none
 * callees: 0x101a2500, 0x101a253a
 */

_DWORD *__thiscall sub_100165E0(_DWORD *this, char a2)
{
  void *v3; // eax

  v3 = (void *)this[1];
  *this = &BinStream::`vftable';
  if ( v3 )
  {
    operator delete[](v3);
    this[1] = 0;
  }
  this[2] = 0;
  this[3] = 0;
  this[4] = 0;
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}
