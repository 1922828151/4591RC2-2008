/*
 * func-name: sub_10011DE0
 * func-address: 0x10011de0
 * callers: 0x100119f0, 0x10011aa0
 * callees: none
 */

int __usercall sub_10011DE0@<eax>(__int16 a1@<di>, const char *a2@<esi>, char **a3)
{
  char *v4; // eax

  if ( a1 > 0x3FFF )
    return -897;
  v4 = (char *)malloc(strlen(a2) + 7);
  *a3 = v4;
  if ( !v4 )
    return -499;
  sprintf(v4, "%s:%d", a2, a1);
  return 0;
}
