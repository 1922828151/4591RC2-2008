/*
 * func-name: sub_10149370
 * func-address: 0x10149370
 * callers: none
 * callees: 0x101a2500, 0x101a253a
 */

_DWORD *__thiscall sub_10149370(_DWORD *this, char a2)
{
  void *v4; // [esp-4h] [ebp-8h]

  v4 = (void *)this[3];
  *this = &MemoryWriteBuffer::`vftable';
  operator delete[](v4);
  *this = &NxStream::`vftable';
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}
