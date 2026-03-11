/*
 * func-name: sub_10011890
 * func-address: 0x10011890
 * callers: 0x10011770
 * callees: 0x10013b70
 */

int __usercall sub_10011890@<eax>(int *a1@<ebx>, const char *a2@<edi>)
{
  char *v2; // esi
  char *v4; // eax

  v2 = (char *)malloc(strlen(a2) + 1);
  if ( !v2 )
    return -1;
  sub_10013B70(a2);
  v4 = strstr(v2, "CONTENT-LENGTH:");
  if ( !v4 || sscanf(&a2[v4 - v2 + 15], "%d", a1) != 1 || *a1 > 0x10000 )
    *a1 = 0x10000;
  free(v2);
  return 0;
}
