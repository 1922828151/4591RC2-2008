/*
 * func-name: sub_100A5BF0
 * func-address: 0x100a5bf0
 * callers: 0x10004c28
 * callees: 0x1000c536, 0x102c9d50
 */

int __thiscall sub_100A5BF0(int this)
{
  int result; // eax
  _BYTE v3[8]; // [esp+4h] [ebp-8h] BYREF

  sub_1000C536((int)v3, this, **(_DWORD **)(this + 4), this, *(_DWORD *)(this + 4));
  operator delete(*(void **)(this + 4));
  result = 0;
  *(_DWORD *)(this + 4) = 0;
  *(_DWORD *)(this + 8) = 0;
  return result;
}
