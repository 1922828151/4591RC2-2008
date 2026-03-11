/*
 * func-name: sub_100081C0
 * func-address: 0x100081c0
 * callers: 0x10005780
 * callees: none
 */

char *__usercall sub_100081C0@<eax>(int a1@<eax>, char *a2@<edx>, const void *a3@<edi>)
{
  int v3; // eax
  char *v4; // esi

  v3 = (a1 - (int)a3) >> 2;
  v4 = &a2[4 * v3];
  if ( v3 > 0 )
    memmove_s(a2, 4 * v3, a3, 4 * v3);
  return v4;
}
