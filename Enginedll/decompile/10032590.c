/*
 * func-name: sub_10032590
 * func-address: 0x10032590
 * callers: 0x10032870
 * callees: 0x10031e20
 */

char *__cdecl sub_10032590(char *a1, _DWORD *a2)
{
  char *result; // eax

  result = a1;
  if ( a1 )
  {
    *(_DWORD *)a1 = *a2;
    return sub_10031E20(a1 + 4, (int)(a2 + 1));
  }
  return result;
}
