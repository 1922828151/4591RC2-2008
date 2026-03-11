/*
 * func-name: sub_1001EA40
 * func-address: 0x1001ea40
 * callers: 0x1001ee40
 * callees: 0x1001de90
 */

int __usercall sub_1001EA40@<eax>(char *a1@<edi>)
{
  int v2; // esi

  if ( !a1 )
    return 6;
  v2 = 0;
  while ( !sub_1001DE90(off_1003008C[v2], a1) )
  {
    if ( ++v2 >= 6 )
      return -1;
  }
  return v2;
}
