/*
 * func-name: sub_101C3C80
 * func-address: 0x101c3c80
 * callers: 0x1000f583
 * callees: 0x10007f68, 0x10015730
 */

char __thiscall sub_101C3C80(_DWORD *this, unsigned int a2)
{
  int v4; // eax
  int v5; // [esp+0h] [ebp-8h]
  int v6; // [esp+4h] [ebp-4h]

  this[1] = 0;
  this[2] = 0;
  this[3] = 0;
  if ( !a2 )
    return 0;
  if ( a2 > 0xFFFFFFF )
    sub_10007F68(v5, v6);
  v4 = sub_10015730(a2);
  this[1] = v4;
  this[2] = v4;
  this[3] = v4 + 16 * a2;
  return 1;
}
