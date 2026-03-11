/*
 * func-name: sub_1002D9F0
 * func-address: 0x1002d9f0
 * callers: none
 * callees: none
 */

int __cdecl sub_1002D9F0(int a1, FILE *Stream)
{
  int i; // esi

  fprintf(Stream, "Global variables { ");
  for ( i = *(_DWORD *)(a1 + 8); i; i = *(_DWORD *)(i + 12) )
  {
    fprintf(Stream, "%s", *(const char **)i);
    if ( *(_DWORD *)(i + 12) )
      fprintf(Stream, ", ");
  }
  fprintf(Stream, " }\n");
  return 0;
}
