/*
 * func-name: sub_10212A20
 * func-address: 0x10212a20
 * callers: 0x10015d5c
 * callees: 0x102c9d50, 0x102c9dc8
 */

_DWORD *__thiscall sub_10212A20(_DWORD *this, char a2)
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
