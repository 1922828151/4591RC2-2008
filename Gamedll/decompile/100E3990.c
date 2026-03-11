/*
 * func-name: sub_100E3990
 * func-address: 0x100e3990
 * callers: 0x1000bd61
 * callees: 0x10002ee1
 */

int __stdcall sub_100E3990(int a1, int a2)
{
  int i; // esi
  int result; // eax
  int v4; // [esp+0h] [ebp-8h]
  int v5; // [esp+4h] [ebp-4h]

  for ( i = a1; i != a2; i += 92 )
    result = sub_10002EE1(v4, v5);
  return result;
}
