/*
 * func-name: sub_1029B110
 * func-address: 0x1029b110
 * callers: 0x1000916a
 * callees: 0x1001a8fc
 */

int __cdecl sub_1029B110(int a1, int a2, int a3)
{
  sub_1001A8FC(a1, a2, a3);
  return a3 + 60 * ((a2 - a1) / 60);
}
