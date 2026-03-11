/*
 * func-name: sub_100574F0
 * func-address: 0x100574f0
 * callers: 0x10058e40
 * callees: 0x10056e00, 0x100dd410
 */

char __thiscall sub_100574F0(_DWORD *this, unsigned int a2)
{
  int v4; // eax

  this[1] = 0;
  this[2] = 0;
  this[3] = 0;
  if ( !a2 )
    return 0;
  if ( a2 > 0x3FFFFFFF )
    sub_10056E00();
  v4 = sub_100DD410(a2);
  this[1] = v4;
  this[2] = v4;
  this[3] = v4 + 4 * a2;
  return 1;
}
