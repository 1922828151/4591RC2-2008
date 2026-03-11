/*
 * func-name: sub_10014090
 * func-address: 0x10014090
 * callers: none
 * callees: 0x10011260, 0x10014c10, 0x10014f50, 0x10015020
 */

int __thiscall sub_10014090(unsigned int **this)
{
  int v3; // esi
  _BYTE v4[28]; // [esp+4h] [ebp-1Ch] BYREF

  if ( !this[46] )
    return 0;
  sub_10014F50(0x1000u, 0);
  sub_10011260(this[46], 0, v4);
  v3 = sub_10014C10(v4);
  sub_10015020(v4);
  return v3;
}
