/*
 * func-name: sub_1001DE90
 * func-address: 0x1001de90
 * callers: 0x1001ea40, 0x1001edd0, 0x1001ee40
 * callees: none
 */

int __usercall sub_1001DE90@<eax>(char *a1@<eax>, char *a2@<ecx>)
{
  char v4; // al
  char v5; // cl
  unsigned __int8 v6; // dl

  while ( 1 )
  {
    v4 = *a2;
    v5 = *a1;
    v6 = *a2++ - 97;
    ++a1;
    if ( v6 <= 0x19u )
      v4 -= 32;
    if ( (unsigned __int8)(v5 - 97) <= 0x19u )
      v5 -= 32;
    if ( v4 != v5 )
      break;
    if ( !v4 )
      return 1;
  }
  return 0;
}
