/*
 * func-name: sub_100E5350
 * func-address: 0x100e5350
 * callers: 0x10014d26
 * callees: 0x10008972, 0x102c9d50
 */

int __thiscall sub_100E5350(int this)
{
  int result; // eax
  int v3; // [esp+4h] [ebp-8h] BYREF

  sub_10008972((int)&v3, this, **(void ***)(this + 4), this, *(_DWORD *)(this + 4));
  operator delete(*(void **)(this + 4));
  result = 0;
  *(_DWORD *)(this + 4) = 0;
  *(_DWORD *)(this + 8) = 0;
  return result;
}
