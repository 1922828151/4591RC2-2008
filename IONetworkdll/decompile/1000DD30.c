/*
 * func-name: sub_1000DD30
 * func-address: 0x1000dd30
 * callers: 0x1000dcf0
 * callees: none
 */

_DWORD *__userpurge sub_1000DD30@<eax>(int a1@<ebx>, _DWORD *a2, int a3, char *Destination, int a5, char *Source)
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
  a2[1] = Destination;
  return a2;
}
