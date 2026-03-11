/*
 * func-name: sub_10057400
 * func-address: 0x10057400
 * callers: 0x10058a90
 * callees: 0x10056c80, 0x100dd410
 */

char __thiscall sub_10057400(_DWORD *this, unsigned int a2)
{
  int v4; // eax

  this[1] = 0;
  this[2] = 0;
  this[3] = 0;
  if ( !a2 )
    return 0;
  if ( a2 > 0x3FFFFFFF )
    sub_10056C80();
  v4 = sub_100DD410(a2);
  this[1] = v4;
  this[2] = v4;
  this[3] = v4 + 4 * a2;
  return 1;
}
