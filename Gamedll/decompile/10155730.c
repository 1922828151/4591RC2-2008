/*
 * func-name: sub_10155730
 * func-address: 0x10155730
 * callers: 0x1000c4c8
 * callees: 0x10008ab7, 0x1000ad5d, 0x10014236, 0x10018804, 0x102c9d86
 */

int __thiscall sub_10155730(_DWORD *this, unsigned int a2, int a3)
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
      sub_10014236(v6[0], v6[1]);
    v5 = sub_10008AB7(a2);
    this[3] = v5 + 8 * a2;
    this[1] = v5;
    this[2] = v5;
    v6[8] = 0;
    result = sub_10018804(v5, a2, a3);
    this[2] = v5 + 8 * a2;
  }
  return result;
}
