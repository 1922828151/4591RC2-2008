/*
 * func-name: sub_10035D50
 * func-address: 0x10035d50
 * callers: 0x10035760
 * callees: none
 */

char *__usercall sub_10035D50@<eax>(char *Destination@<ecx>, void *Source@<edx>, int a3@<eax>)
{
  bool v3; // zf
  int v4; // eax
  rsize_t v5; // eax
  char *v6; // esi

  v4 = (a3 - (int)Source) >> 1;
  v3 = v4 == 0;
  v5 = 2 * v4;
  v6 = &Destination[v5];
  if ( !v3 )
    memmove_s(Destination, v5, Source, v5);
  return v6;
}
