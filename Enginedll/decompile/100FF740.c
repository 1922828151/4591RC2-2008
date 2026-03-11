/*
 * func-name: sub_100FF740
 * func-address: 0x100ff740
 * callers: 0x100faa40, 0x100fb800, 0x100fc250, 0x100fccd0
 * callees: 0x100fee10, 0x101a2500
 */

int __thiscall sub_100FF740(int this)
{
  int result; // eax
  int v3; // [esp+4h] [ebp-8h] BYREF

  sub_100FEE10(this, &v3, this, **(_DWORD **)(this + 4), this, *(_DWORD *)(this + 4));
  operator delete(*(void **)(this + 4));
  result = 0;
  *(_DWORD *)(this + 4) = 0;
  *(_DWORD *)(this + 8) = 0;
  return result;
}
