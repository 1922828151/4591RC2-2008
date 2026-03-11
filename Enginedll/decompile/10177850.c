/*
 * func-name: sub_10177850
 * func-address: 0x10177850
 * callers: 0x10175180
 * callees: 0x10011260, 0x100112c0, 0x10011510, 0x10015410, 0x10097220
 */

char __thiscall sub_10177850(int *this, int a2, int a3, char a4, int a5)
{
  int v7[7]; // [esp+4h] [ebp-60h] BYREF
  _BYTE v8[36]; // [esp+20h] [ebp-44h] BYREF
  _BYTE v9[20]; // [esp+44h] [ebp-20h] BYREF
  int v10; // [esp+60h] [ebp-4h]

  sub_10011260((int)v7);
  v10 = 0;
  std::string::operator=(v7, a2);
  v9[16] = a4;
  std::string::operator=(v8, a3);
  if ( FindMedia((int)v8, (int)"Models", 0, 0) )
  {
    if ( a5 )
      sub_10011510((int)v9, a5);
    sub_10015410(this + 26, (int)v7);
    v10 = -1;
    sub_100112C0(v7);
    return 1;
  }
  else
  {
    v10 = -1;
    sub_100112C0(v7);
    return 0;
  }
}
