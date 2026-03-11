/*
 * func-name: sub_100F17C0
 * func-address: 0x100f17c0
 * callers: 0x10003e2c
 * callees: 0x10002f7c, 0x1000abc8, 0x1000ae2a, 0x102c23d0
 */

void __thiscall sub_100F17C0(int *this)
{
  int v2; // eax
  _BYTE v3[64]; // [esp+4h] [ebp-40h] BYREF

  if ( this[29] )
  {
    if ( sub_1000ABC8(this[28]) )
    {
      sub_1000AE2A(this[29] + 212);
      v2 = sub_102C23D0(v3);
      sub_10002F7C(v2);
    }
  }
}
