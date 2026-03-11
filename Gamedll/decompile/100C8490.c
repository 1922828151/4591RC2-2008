/*
 * func-name: sub_100C8490
 * func-address: 0x100c8490
 * callers: 0x10002ee6
 * callees: none
 */

char *__cdecl sub_100C8490(char *a1, char *a2, const void *a3)
{
  char *result; // eax
  void *v4; // edi

  for ( result = a1; result != a2; result += 56 )
  {
    v4 = result;
    qmemcpy(v4, a3, 0x38u);
  }
  return result;
}
