/*
 * func-name: ?SetBlendMode@Laser@@QAEXW4BlendMode@@@Z_0
 * func-address: 0x1007fff0
 * callers: 0x10001212
 * callees: none
 */

int __thiscall Laser::SetBlendMode(_DWORD *this, int a2)
{
  int result; // eax

  result = a2;
  this[44] = a2;
  return result;
}
