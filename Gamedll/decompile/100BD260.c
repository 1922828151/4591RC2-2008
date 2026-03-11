/*
 * func-name: ?setBlendMode@WaterDecal@@QAEXW4BlendMode@@@Z_0
 * func-address: 0x100bd260
 * callers: 0x1001604a
 * callees: none
 */

int __thiscall WaterDecal::setBlendMode(_DWORD *this, int a2)
{
  int result; // eax

  result = a2;
  this[65] = a2;
  return result;
}
