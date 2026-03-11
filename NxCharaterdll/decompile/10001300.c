/*
 * func-name: sub_10001300
 * func-address: 0x10001300
 * callers: 0x100017c0
 * callees: 0x10009760
 */

int __thiscall sub_10001300(_DWORD *this)
{
  int result; // eax

  *this = &BoxController::`vftable';
  this[2] = &BoxController::`vftable';
  result = sub_10009760();
  *this = &NxController::`vftable';
  return result;
}
