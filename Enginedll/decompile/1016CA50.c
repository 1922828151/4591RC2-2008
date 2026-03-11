/*
 * func-name: sub_1016CA50
 * func-address: 0x1016ca50
 * callers: 0x1016c260, 0x1016c4c0, 0x1016c6e0
 * callees: none
 */

int __cdecl sub_1016CA50(int a1, int a2)
{
  _BYTE v3[128]; // [esp+8h] [ebp-8Ch] BYREF
  int v4; // [esp+90h] [ebp-4h]

  std::wostringstream::wostringstream(v3, 2, 1);
  v4 = 1;
  std::wostream::operator<<(v3, a2);
  std::wostringstream::str(v3, a1);
  LOBYTE(v4) = 0;
  std::wostringstream::`vbase destructor'(v3);
  return a1;
}
