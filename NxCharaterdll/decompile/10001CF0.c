/*
 * func-name: sub_10001CF0
 * func-address: 0x10001cf0
 * callers: 0x10002210
 * callees: 0x10009760
 */

int __thiscall sub_10001CF0(_DWORD *this)
{
  int result; // eax

  *this = &CapsuleController::`vftable';
  this[2] = &CapsuleController::`vftable';
  result = sub_10009760();
  *this = &NxController::`vftable';
  return result;
}
