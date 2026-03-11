/*
 * func-name: sub_10023090
 * func-address: 0x10023090
 * callers: 0x10020130
 * callees: 0x10023100
 */

int __usercall sub_10023090@<eax>(_BYTE *a1@<eax>, _DWORD *a2@<ecx>)
{
  int result; // eax

  while ( a2[3] != a2[2] || sub_10023100() )
  {
    *(_BYTE *)a2[3]++ = *a1;
    if ( !*a1++ )
    {
      result = a2[4];
      a2[4] = a2[3];
      return result;
    }
  }
  return 0;
}
