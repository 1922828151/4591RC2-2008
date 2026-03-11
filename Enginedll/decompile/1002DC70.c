/*
 * func-name: sub_1002DC70
 * func-address: 0x1002dc70
 * callers: 0x1002c4a0, 0x10030270, 0x1013a9b0, 0x1013df40
 * callees: 0x10026e50, 0x101a2500
 */

int __thiscall sub_1002DC70(int this)
{
  int result; // eax
  int v3; // [esp+4h] [ebp-8h] BYREF

  sub_10026E50(this, &v3, this, **(_DWORD **)(this + 4), this, *(_DWORD *)(this + 4));
  operator delete(*(void **)(this + 4));
  result = 0;
  *(_DWORD *)(this + 4) = 0;
  *(_DWORD *)(this + 8) = 0;
  return result;
}
