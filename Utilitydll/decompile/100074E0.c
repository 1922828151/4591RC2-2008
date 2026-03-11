/*
 * func-name: sub_100074E0
 * func-address: 0x100074e0
 * callers: 0x10006750
 * callees: none
 */

int *__userpurge sub_100074E0@<eax>(int a1@<ebx>, int *a2, int a3, char *Destination, int a5, char *Source)
{
  int v6; // edi
  int v7; // eax
  char *v8; // edi

  v6 = a3;
  if ( !a3 || a3 != a5 )
    invalid_parameter_noinfo();
  if ( Destination != Source )
  {
    v7 = (*(_DWORD *)(a1 + 8) - (int)Source) >> 2;
    v8 = &Destination[4 * v7];
    if ( v7 > 0 )
      memmove_s(Destination, 4 * v7, Source, 4 * v7);
    *(_DWORD *)(a1 + 8) = v8;
    v6 = a3;
  }
  *a2 = v6;
  a2[1] = (int)Destination;
  return a2;
}
