/*
 * func-name: sub_1004D8D0
 * func-address: 0x1004d8d0
 * callers: 0x100159bf
 * callees: 0x1000c56d, 0x10019952
 */

char __thiscall sub_1004D8D0(_DWORD *this, unsigned int a2)
{
  int v4; // eax
  int v5; // [esp+0h] [ebp-8h]
  int v6; // [esp+4h] [ebp-4h]

  this[1] = 0;
  this[2] = 0;
  this[3] = 0;
  if ( !a2 )
    return 0;
  if ( a2 > 0x15555555 )
    sub_10019952(v5, v6);
  v4 = sub_1000C56D(a2);
  this[1] = v4;
  this[2] = v4;
  this[3] = v4 + 12 * a2;
  return 1;
}
