/*
 * func-name: sub_100328E0
 * func-address: 0x100328e0
 * callers: 0x10032960, 0x10048449
 * callees: 0x10032340, 0x1003711f
 */

int __thiscall sub_100328E0(int this, struct std::exception *a2)
{
  std::exception::exception((std::exception *)this, a2);
  *(_DWORD *)this = &std::logic_error::`vftable';
  *(_DWORD *)(this + 36) = 15;
  *(_DWORD *)(this + 32) = 0;
  *(_BYTE *)(this + 16) = 0;
  sub_10032340(this + 12, (_DWORD *)a2 + 3, 0, 0xFFFFFFFF);
  return this;
}
