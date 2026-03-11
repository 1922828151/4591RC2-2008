/*
 * func-name: sub_1009ABB0
 * func-address: 0x1009abb0
 * callers: 0x1009b530, 0x1009b880
 * callees: 0x100999b0
 */

int __stdcall sub_1009ABB0(char *a1, char *a2)
{
  char *i; // esi
  int result; // eax

  for ( i = a1; i != a2; i += 104 )
    result = sub_100999B0(i);
  return result;
}
