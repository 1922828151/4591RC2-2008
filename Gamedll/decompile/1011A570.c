/*
 * func-name: sub_1011A570
 * func-address: 0x1011a570
 * callers: 0x10018075
 * callees: 0x1000c50e, 0x1000e1e2, 0x1000fc77, 0x1001610d, 0x102c9d86
 */

int __thiscall sub_1011A570(_DWORD *this, unsigned int a2, int a3)
{
  int result; // eax
  int v5; // edi
  int v6[9]; // [esp+0h] [ebp-24h] BYREF

  v6[5] = (int)v6;
  v6[4] = (int)this;
  result = 0;
  this[1] = 0;
  this[2] = 0;
  this[3] = 0;
  if ( a2 )
  {
    if ( a2 > 0x1FFFFFFF )
      sub_1000E1E2(v6[0], v6[1]);
    v5 = sub_1000C50E(a2);
    this[3] = v5 + 8 * a2;
    this[1] = v5;
    this[2] = v5;
    v6[8] = 0;
    result = sub_1000FC77(v5, a2, a3);
    this[2] = v5 + 8 * a2;
  }
  return result;
}
