/*
 * func-name: sub_10187460
 * func-address: 0x10187460
 * callers: 0x10001e97
 * callees: 0x10004a2a, 0x100054ca
 */

char __thiscall sub_10187460(_DWORD *this, unsigned int a2)
{
  int v4; // eax
  int v5; // [esp+0h] [ebp-8h]
  int v6; // [esp+4h] [ebp-4h]

  this[1] = 0;
  this[2] = 0;
  this[3] = 0;
  if ( !a2 )
    return 0;
  if ( a2 > 0x4924924 )
    sub_100054CA(v5, v6);
  v4 = sub_10004A2A(a2);
  this[1] = v4;
  this[2] = v4;
  this[3] = v4 + 56 * a2;
  return 1;
}
