/*
 * func-name: sub_101E7AE0
 * func-address: 0x101e7ae0
 * callers: 0x1000b9b0
 * callees: 0x1000a0ce, 0x1000cd38
 */

char __thiscall sub_101E7AE0(_DWORD *this, unsigned int a2)
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
    sub_1000A0CE(v5, v6);
  v4 = sub_1000CD38(a2);
  this[1] = v4;
  this[2] = v4;
  this[3] = v4 + 28 * a2;
  return 1;
}
