/*
 * func-name: sub_100346C0
 * func-address: 0x100346c0
 * callers: 0x100096d3
 * callees: none
 */

int __thiscall sub_100346C0(_DWORD *this, _DWORD *a2)
{
  int result; // eax

  this[1] = *a2;
  this[2] = a2[1];
  result = a2[2];
  this[3] = result;
  return result;
}
