/*
 * func-name: sub_1021B060
 * func-address: 0x1021b060
 * callers: 0x10011608
 * callees: none
 */

int __cdecl sub_1021B060(int a1, int a2)
{
  _BYTE v3[128]; // [esp+Ch] [ebp-8Ch] BYREF
  int v4; // [esp+94h] [ebp-4h]

  std::ostringstream::ostringstream(v3, 2, 1);
  v4 = 1;
  std::ostream::operator<<(v3, a2);
  std::ostringstream::str(v3, a1);
  LOBYTE(v4) = 0;
  std::ostringstream::`vbase destructor'(v3);
  return a1;
}
