/*
 * func-name: sub_10015370
 * func-address: 0x10015370
 * callers: 0x1001fda0
 * callees: none
 */

int __thiscall sub_10015370(_DWORD *this)
{
  int result; // eax

  this[1] ^= this[2];
  this[2] ^= this[1];
  result = this[2];
  this[1] ^= result;
  return result;
}
