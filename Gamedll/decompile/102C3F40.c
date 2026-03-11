/*
 * func-name: sub_102C3F40
 * func-address: 0x102c3f40
 * callers: none
 * callees: 0x100019d3, 0x102c2cf0, 0x102c6a50, 0x102c9d62
 */

char __stdcall sub_102C3F40(int a1, int a2, int a3)
{
  int v4; // [esp+0h] [ebp-64h]
  int v5; // [esp+4h] [ebp-60h]
  _BYTE v6[28]; // [esp+14h] [ebp-50h] BYREF
  int v7; // [esp+30h] [ebp-34h]
  int v8; // [esp+34h] [ebp-30h]
  _BYTE v9[28]; // [esp+38h] [ebp-2Ch] BYREF
  int v10; // [esp+60h] [ebp-4h]

  sub_102C2CF0((int)v6);
  v10 = 0;
  std::string::operator=(v6, a1);
  v7 = 11;
  v8 = a2;
  std::string::operator=(v9, a3);
  sub_102C6A50(v6);
  v10 = -1;
  sub_100019D3(v4, v5);
  return 1;
}
