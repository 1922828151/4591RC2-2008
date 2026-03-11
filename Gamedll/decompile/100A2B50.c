/*
 * func-name: sub_100A2B50
 * func-address: 0x100a2b50
 * callers: 0x10012dd2
 * callees: 0x1000b22b, 0x1000b8e8
 */

char __thiscall sub_100A2B50(_DWORD *this, unsigned int a2)
{
  int v4; // eax
  int v5; // [esp+0h] [ebp-8h]
  int v6; // [esp+4h] [ebp-4h]

  this[1] = 0;
  this[2] = 0;
  this[3] = 0;
  if ( !a2 )
    return 0;
  if ( a2 > 0x7FFFFFF )
    sub_1000B8E8(v5, v6);
  v4 = sub_1000B22B(a2);
  this[1] = v4;
  this[2] = v4;
  this[3] = v4 + 32 * a2;
  return 1;
}
