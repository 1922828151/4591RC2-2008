/*
 * func-name: sub_100159D0
 * func-address: 0x100159d0
 * callers: 0x10015a20
 * callees: none
 */

int __usercall sub_100159D0@<eax>(
        unsigned __int8 *a1@<eax>,
        int a2@<edx>,
        unsigned __int8 **a3@<edi>,
        unsigned __int8 *a4@<esi>)
{
  char v4; // cl

  if ( a1 == a4 )
    return -1;
  if ( (unsigned __int8)(*(_BYTE *)(*a1 + a2 + 72) - 24) > 1u )
  {
LABEL_9:
    *a3 = a1;
    return 0;
  }
  if ( ++a1 == a4 )
    return -1;
  while ( 1 )
  {
    v4 = *(_BYTE *)(*a1 + a2 + 72);
    if ( v4 == 18 )
      break;
    if ( (unsigned __int8)(v4 - 24) > 1u )
      goto LABEL_9;
    if ( ++a1 == a4 )
      return -1;
  }
  *a3 = a1 + 1;
  return 10;
}
