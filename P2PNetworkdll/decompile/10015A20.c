/*
 * func-name: sub_10015A20
 * func-address: 0x10015a20
 * callers: 0x10015a90
 * callees: 0x100159d0
 */

int __usercall sub_10015A20@<eax>(
        unsigned __int8 *a1@<eax>,
        int a2@<edx>,
        unsigned __int8 **a3@<ecx>,
        unsigned __int8 *a4)
{
  char v6; // cl

  if ( a1 == a4 )
    return -1;
  if ( *a1 == 120 )
    return sub_100159D0(a1 + 1, a2, a3, a4);
  if ( *(_BYTE *)(*a1 + a2 + 72) != 25 )
  {
LABEL_5:
    *a3 = a1;
    return 0;
  }
  if ( ++a1 == a4 )
    return -1;
  while ( 1 )
  {
    v6 = *(_BYTE *)(*a1 + a2 + 72);
    if ( v6 == 18 )
      break;
    if ( v6 != 25 )
      goto LABEL_5;
    if ( ++a1 == a4 )
      return -1;
  }
  *a3 = a1 + 1;
  return 10;
}
