/*
 * func-name: sub_10149100
 * func-address: 0x10149100
 * callers: 0x10141960
 * callees: 0x101a253a
 */

void __thiscall sub_10149100(_DWORD *this)
{
  void *v2; // [esp-4h] [ebp-8h]

  v2 = (void *)this[3];
  *this = &MemoryWriteBuffer::`vftable';
  operator delete[](v2);
  *this = &NxStream::`vftable';
}
