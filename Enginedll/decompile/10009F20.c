/*
 * func-name: sub_10009F20
 * func-address: 0x10009f20
 * callers: 0x100042c0, 0x100431a0, 0x1007c450, 0x10080200, 0x10095d70, 0x1009ddc0
 * callees: none
 */

int __cdecl sub_10009F20(int a1, int a2)
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
