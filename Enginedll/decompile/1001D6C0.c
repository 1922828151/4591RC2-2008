/*
 * func-name: sub_1001D6C0
 * func-address: 0x1001d6c0
 * callers: 0x10022df0
 * callees: 0x1001a8b0, 0x100dd410
 */

char __thiscall sub_1001D6C0(_DWORD *this, unsigned int a2)
{
  int v4; // eax

  this[1] = 0;
  this[2] = 0;
  this[3] = 0;
  if ( !a2 )
    return 0;
  if ( a2 > 0x3FFFFFFF )
    sub_1001A8B0();
  v4 = sub_100DD410(a2);
  this[1] = v4;
  this[2] = v4;
  this[3] = v4 + 4 * a2;
  return 1;
}
