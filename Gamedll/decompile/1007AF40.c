/*
 * func-name: ?SetBlendMode@DynamicLasers@@QAEXW4BlendMode@@@Z_0
 * func-address: 0x1007af40
 * callers: 0x1001277e
 * callees: none
 */

int __thiscall DynamicLasers::SetBlendMode(_DWORD *this, int a2)
{
  int result; // eax

  result = a2;
  this[56] = a2;
  return result;
}
