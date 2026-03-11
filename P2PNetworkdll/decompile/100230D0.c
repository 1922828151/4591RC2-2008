/*
 * func-name: sub_100230D0
 * func-address: 0x100230d0
 * callers: 0x10020c10, 0x10020f30
 * callees: 0x10023100
 */

int __usercall sub_100230D0@<eax>(_DWORD *a1@<eax>)
{
  int result; // eax

  if ( a1[3] != a1[2] || (result = sub_10023100()) != 0 )
  {
    *(_BYTE *)a1[3]++ = 0;
    return a1[4];
  }
  return result;
}
