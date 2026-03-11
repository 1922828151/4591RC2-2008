/*
 * func-name: sub_100D0320
 * func-address: 0x100d0320
 * callers: 0x100d0d10, 0x100d2aa0, 0x1014a230, 0x1014a2e0
 * callees: 0x100d01d0, 0x101a2500
 */

int __thiscall sub_100D0320(int this)
{
  int result; // eax
  int v3; // [esp+4h] [ebp-8h] BYREF

  sub_100D01D0(this, &v3, this, **(_DWORD **)(this + 4), this, *(_DWORD *)(this + 4));
  operator delete(*(void **)(this + 4));
  result = 0;
  *(_DWORD *)(this + 4) = 0;
  *(_DWORD *)(this + 8) = 0;
  return result;
}
