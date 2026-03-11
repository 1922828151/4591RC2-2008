/*
 * func-name: sub_1025D010
 * func-address: 0x1025d010
 * callers: 0x10007225
 * callees: none
 */

int __thiscall sub_1025D010(_DWORD *this)
{
  int result; // eax

  result = this[1];
  if ( result )
    return (this[2] - result) / 104;
  return result;
}
