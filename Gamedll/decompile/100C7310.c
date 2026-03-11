/*
 * func-name: sub_100C7310
 * func-address: 0x100c7310
 * callers: 0x100195e7
 * callees: none
 */

int __cdecl sub_100C7310(int a1, int a2)
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
