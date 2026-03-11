/*
 * func-name: sub_1000B840
 * func-address: 0x1000b840
 * callers: 0x1000b980, 0x1000f820, 0x10025ab0, 0x1002bc70
 * callees: 0x1000a170
 */

int __cdecl sub_1000B840(int a1, int a2, int a3)
{
  sub_1000A170(a1, a2, a3);
  return a3 + 96 * ((a2 - a1) / 96);
}
