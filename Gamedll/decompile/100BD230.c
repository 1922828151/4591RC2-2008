/*
 * func-name: ?setColor@WaterDecal@@QAEXUFloatColor@@@Z_0
 * func-address: 0x100bd230
 * callers: 0x100175c6
 * callees: none
 */

int __thiscall WaterDecal::setColor(_DWORD *this, int a2, int a3, int a4, int a5)
{
  int result; // eax

  this[61] = a2;
  result = a4;
  this[62] = a3;
  this[63] = a4;
  this[64] = a5;
  return result;
}
