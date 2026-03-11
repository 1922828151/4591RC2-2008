/*
 * func-name: sub_1003B320
 * func-address: 0x1003b320
 * callers: 0x10037b30, 0x1003d0f0, 0x100e1e90, 0x10108550, 0x1012f5d0, 0x1012ffd0, 0x101658e0, 0x10166fb0, 0x10167810, 0x10169020, 0x1017ad40
 * callees: none
 */

int __cdecl sub_1003B320(int a1, int a2)
{
  _BYTE v3[128]; // [esp+8h] [ebp-8Ch] BYREF
  int v4; // [esp+90h] [ebp-4h]

  std::ostringstream::ostringstream(v3, 2, 1);
  v4 = 1;
  std::ostream::operator<<(v3, a2);
  std::ostringstream::str(v3, a1);
  LOBYTE(v4) = 0;
  std::ostringstream::`vbase destructor'(v3);
  return a1;
}
