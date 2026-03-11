/*
 * func-name: sub_102055C0
 * func-address: 0x102055c0
 * callers: 0x10018205
 * callees: 0x10011fc2
 */

int __cdecl sub_102055C0(int a1, int a2, int a3)
{
  int i; // esi
  int result; // eax

  for ( i = a1; i != a2; i += 128 )
    result = sub_10011FC2(a3);
  return result;
}
