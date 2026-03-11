/*
 * func-name: sub_10187A70
 * func-address: 0x10187a70
 * callers: 0x100062ee
 * callees: 0x10007dc9
 */

int __cdecl sub_10187A70(int a1, int a2, int a3)
{
  int i; // esi
  int result; // eax

  for ( i = a1; i != a2; i += 936 )
    result = sub_10007DC9(a3);
  return result;
}
