/*
 * func-name: sub_10071090
 * func-address: 0x10071090
 * callers: 0x10075070, 0x10075100
 * callees: 0x1006fab0, 0x101a2500
 */

int __thiscall sub_10071090(int this)
{
  int result; // eax
  int v3; // [esp+4h] [ebp-8h] BYREF

  sub_1006FAB0(this, &v3, this, **(_DWORD **)(this + 4), this, *(_DWORD *)(this + 4));
  operator delete(*(void **)(this + 4));
  result = 0;
  *(_DWORD *)(this + 4) = 0;
  *(_DWORD *)(this + 8) = 0;
  return result;
}
