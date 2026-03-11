/*
 * func-name: sub_10051D20
 * func-address: 0x10051d20
 * callers: 0x10053800, 0x10097910, 0x10099690, 0x100997d0, 0x10099880, 0x1009b530, 0x1009b880, 0x10148a20
 * callees: none
 */

int __thiscall sub_10051D20(_DWORD *this)
{
  int result; // eax

  result = this[1];
  if ( result )
    return (this[2] - result) / 104;
  return result;
}
