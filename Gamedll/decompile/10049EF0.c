/*
 * func-name: sub_10049EF0
 * func-address: 0x10049ef0
 * callers: 0x100135ac
 * callees: 0x100020b8, 0x10016cd4
 */

char __thiscall sub_10049EF0(_DWORD *this, unsigned int a2)
{
  int v4; // eax
  int v5; // [esp+0h] [ebp-8h]
  int v6; // [esp+4h] [ebp-4h]

  this[1] = 0;
  this[2] = 0;
  this[3] = 0;
  if ( !a2 )
    return 0;
  if ( a2 > 0x71C71C7 )
    sub_100020B8(v5, v6);
  v4 = sub_10016CD4(a2);
  this[1] = v4;
  this[2] = v4;
  this[3] = v4 + 36 * a2;
  return 1;
}
