/*
 * func-name: sub_10297CC0
 * func-address: 0x10297cc0
 * callers: 0x10012a99
 * callees: 0x10003517, 0x10012c83
 */

char __thiscall sub_10297CC0(_DWORD *this, unsigned int a2)
{
  int v4; // eax
  int v5; // [esp+0h] [ebp-8h]
  int v6; // [esp+4h] [ebp-4h]

  this[1] = 0;
  this[2] = 0;
  this[3] = 0;
  if ( !a2 )
    return 0;
  if ( a2 > 0x35E50D7 )
    sub_10003517(v5, v6);
  v4 = sub_10012C83(a2);
  this[1] = v4;
  this[2] = v4;
  this[3] = v4 + 76 * a2;
  return 1;
}
