/*
 * func-name: sub_100A2E00
 * func-address: 0x100a2e00
 * callers: 0x100134f8
 * callees: 0x1000a6f0, 0x100159f1
 */

char __thiscall sub_100A2E00(_DWORD *this, unsigned int a2)
{
  int v4; // eax
  int v5; // [esp+0h] [ebp-8h]
  int v6; // [esp+4h] [ebp-4h]

  this[1] = 0;
  this[2] = 0;
  this[3] = 0;
  if ( !a2 )
    return 0;
  if ( a2 > 0x9249249 )
    sub_1000A6F0(v5, v6);
  v4 = sub_100159F1(a2);
  this[1] = v4;
  this[2] = v4;
  this[3] = v4 + 28 * a2;
  return 1;
}
