/*
 * func-name: sub_100112B0
 * func-address: 0x100112b0
 * callers: 0x10012d90
 * callees: none
 */

int __usercall sub_100112B0@<eax>(void ***a1@<eax>)
{
  void **v1; // esi

  if ( !a1 )
    return -498;
  v1 = *a1;
  if ( !*a1 )
    return -498;
  if ( *v1 )
    free(*v1);
  if ( v1[1] )
    free(v1[1]);
  free(v1);
  return 0;
}
