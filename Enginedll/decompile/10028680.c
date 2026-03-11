/*
 * func-name: sub_10028680
 * func-address: 0x10028680
 * callers: 0x100287c0, 0x10174d80
 * callees: 0x10020910, 0x101a2500
 */

void __thiscall sub_10028680(int this)
{
  sub_10020910((_DWORD *)this);
  operator delete(*(void **)(this + 4));
  *(_DWORD *)(this + 4) = 0;
}
