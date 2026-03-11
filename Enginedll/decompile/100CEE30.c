/*
 * func-name: sub_100CEE30
 * func-address: 0x100cee30
 * callers: 0x100b3c70
 * callees: 0x10036480
 */

int __cdecl sub_100CEE30(int a1, const char *a2)
{
  _BYTE v3[128]; // [esp+8h] [ebp-8Ch] BYREF
  int v4; // [esp+90h] [ebp-4h]

  std::wostringstream::wostringstream(v3, 2, 1);
  v4 = 1;
  sub_10036480((int)v3, a2);
  std::wostringstream::str(v3, a1);
  LOBYTE(v4) = 0;
  std::wostringstream::`vbase destructor'(v3);
  return a1;
}
