/*
 * func-name: sub_10073DD0
 * func-address: 0x10073dd0
 * callers: 0x10016ce8
 * callees: 0x10011699, 0x102c9d50
 */

int __thiscall sub_10073DD0(int this)
{
  int result; // eax
  _BYTE v3[8]; // [esp+4h] [ebp-8h] BYREF

  sub_10011699((int)v3, this, **(_DWORD **)(this + 4), this, *(_DWORD *)(this + 4));
  operator delete(*(void **)(this + 4));
  result = 0;
  *(_DWORD *)(this + 4) = 0;
  *(_DWORD *)(this + 8) = 0;
  return result;
}
