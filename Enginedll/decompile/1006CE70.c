/*
 * func-name: sub_1006CE70
 * func-address: 0x1006ce70
 * callers: 0x1006eed0
 * callees: 0x1006c280, 0x100dd410
 */

char __thiscall sub_1006CE70(_DWORD *this, unsigned int a2)
{
  int v4; // eax

  this[1] = 0;
  this[2] = 0;
  this[3] = 0;
  if ( !a2 )
    return 0;
  if ( a2 > 0x3FFFFFFF )
    sub_1006C280();
  v4 = sub_100DD410(a2);
  this[1] = v4;
  this[2] = v4;
  this[3] = v4 + 4 * a2;
  return 1;
}
