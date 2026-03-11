/*
 * func-name: sub_1009D230
 * func-address: 0x1009d230
 * callers: 0x10008819
 * callees: 0x100073fb, 0x10015370
 */

char __thiscall sub_1009D230(_DWORD *this, unsigned int a2)
{
  int v4; // eax
  int v5; // [esp+0h] [ebp-8h]
  int v6; // [esp+4h] [ebp-4h]

  this[1] = 0;
  this[2] = 0;
  this[3] = 0;
  if ( !a2 )
    return 0;
  if ( a2 > 0x1642C85 )
    sub_10015370(v5, v6);
  v4 = sub_100073FB(a2);
  this[1] = v4;
  this[2] = v4;
  this[3] = v4 + 184 * a2;
  return 1;
}
