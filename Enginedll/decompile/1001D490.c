/*
 * func-name: sub_1001D490
 * func-address: 0x1001d490
 * callers: 0x1002ee00
 * callees: 0x1001a4f0, 0x10057020
 */

char __thiscall sub_1001D490(_DWORD *this, unsigned int a2)
{
  int v4; // eax

  this[1] = 0;
  this[2] = 0;
  this[3] = 0;
  if ( !a2 )
    return 0;
  if ( a2 > 0x4EC4EC4 )
    sub_1001A4F0();
  v4 = sub_10057020(a2);
  this[1] = v4;
  this[2] = v4;
  this[3] = v4 + 52 * a2;
  return 1;
}
