/*
 * func-name: sub_10032D10
 * func-address: 0x10032d10
 * callers: 0x10032d30, 0x10033040, 0x10172c10, 0x10174800
 * callees: 0x10032a70, 0x101a2500
 */

void __thiscall sub_10032D10(int this)
{
  sub_10032A70((_DWORD *)this);
  operator delete(*(void **)(this + 4));
  *(_DWORD *)(this + 4) = 0;
}
