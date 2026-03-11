/*
 * func-name: sub_1001D4E0
 * func-address: 0x1001d4e0
 * callers: 0x10021c60
 * callees: 0x1001a570, 0x100dd410
 */

char __thiscall sub_1001D4E0(_DWORD *this, unsigned int a2)
{
  int v4; // eax

  this[1] = 0;
  this[2] = 0;
  this[3] = 0;
  if ( !a2 )
    return 0;
  if ( a2 > 0x3FFFFFFF )
    sub_1001A570();
  v4 = sub_100DD410(a2);
  this[1] = v4;
  this[2] = v4;
  this[3] = v4 + 4 * a2;
  return 1;
}
