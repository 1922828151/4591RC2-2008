/*
 * func-name: sub_100F5CF0
 * func-address: 0x100f5cf0
 * callers: 0x100f6e10
 * callees: none
 */

char *__cdecl sub_100F5CF0(char *a1, char *a2, const void *a3)
{
  char *result; // eax

  for ( result = a1; result != a2; result += 68 )
    qmemcpy(result, a3, 0x44u);
  return result;
}
