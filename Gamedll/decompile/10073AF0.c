/*
 * func-name: sub_10073AF0
 * func-address: 0x10073af0
 * callers: 0x10004831
 * callees: 0x1000484a, 0x102c9d50
 */

int __thiscall sub_10073AF0(int this)
{
  int result; // eax
  _BYTE v3[8]; // [esp+4h] [ebp-8h] BYREF

  sub_1000484A((int)v3, this, **(_DWORD **)(this + 4), this, *(_DWORD *)(this + 4));
  operator delete(*(void **)(this + 4));
  result = 0;
  *(_DWORD *)(this + 4) = 0;
  *(_DWORD *)(this + 8) = 0;
  return result;
}
