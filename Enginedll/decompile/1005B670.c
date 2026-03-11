/*
 * func-name: sub_1005B670
 * func-address: 0x1005b670
 * callers: 0x1005b2d0, 0x1005ddc0, 0x1012fc10, 0x1012ffd0
 * callees: 0x10059e70, 0x101a2500
 */

int __thiscall sub_1005B670(int this)
{
  int result; // eax
  int v3; // [esp+4h] [ebp-8h] BYREF

  sub_10059E70(this, &v3, this, **(_DWORD **)(this + 4), this, *(_DWORD *)(this + 4));
  operator delete(*(void **)(this + 4));
  result = 0;
  *(_DWORD *)(this + 4) = 0;
  *(_DWORD *)(this + 8) = 0;
  return result;
}
