/*
 * func-name: sub_101FE810
 * func-address: 0x101fe810
 * callers: 0x1000e246
 * callees: 0x10001942, 0x10003eea, 0x1000c40a, 0x1000d45e, 0x102c9d86
 */

int __thiscall sub_101FE810(_DWORD *this, unsigned int a2, int a3)
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
      sub_10003EEA(v6[0], v6[1]);
    v5 = sub_10001942(a2);
    this[3] = v5 + 8 * a2;
    this[1] = v5;
    this[2] = v5;
    v6[8] = 0;
    result = sub_1000D45E(v5, a2, a3);
    this[2] = v5 + 8 * a2;
  }
  return result;
}
