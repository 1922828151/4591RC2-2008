/*
 * func-name: sub_100F59F0
 * func-address: 0x100f59f0
 * callers: 0x100f6080
 * callees: none
 */

int __cdecl sub_100F59F0(char *a1, char *a2, int a3)
{
  int result; // eax
  char *i; // edx

  result = a3 + 68 * ((a2 - a1) / 68);
  for ( i = a1; i != a2; i += 68 )
    qmemcpy(&i[a3 - (_DWORD)a1], i, 0x44u);
  return result;
}
