/*
 * func-name: sub_10131F30
 * func-address: 0x10131f30
 * callers: 0x1012f5d0, 0x1012ffd0
 * callees: 0x100161f0
 */

int __cdecl sub_10131F30(int a1, int a2)
{
  _BYTE v3[128]; // [esp+8h] [ebp-8Ch] BYREF
  int v4; // [esp+90h] [ebp-4h]

  std::ostringstream::ostringstream(v3, 2, 1);
  v4 = 1;
  sub_100161F0((int)v3, a2);
  std::ostringstream::str(v3, a1);
  LOBYTE(v4) = 0;
  std::ostringstream::`vbase destructor'(v3);
  return a1;
}
