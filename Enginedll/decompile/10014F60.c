/*
 * func-name: sub_10014F60
 * func-address: 0x10014f60
 * callers: 0x10014ee0, 0x10015030, 0x1008f370, 0x1008f580
 * callees: 0x10013c80, 0x101a2500
 */

void __thiscall sub_10014F60(int this)
{
  sub_10013C80((_DWORD *)this);
  operator delete(*(void **)(this + 4));
  *(_DWORD *)(this + 4) = 0;
}
