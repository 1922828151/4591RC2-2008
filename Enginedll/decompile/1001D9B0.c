/*
 * func-name: sub_1001D9B0
 * func-address: 0x1001d9b0
 * callers: 0x10026b60
 * callees: 0x1001ac30, 0x1001b3b0
 */

char __thiscall sub_1001D9B0(_DWORD *this, unsigned int a2)
{
  char *v4; // eax

  this[1] = 0;
  this[2] = 0;
  this[3] = 0;
  if ( !a2 )
    return 0;
  if ( a2 > 0x38E38E3 )
    sub_1001AC30();
  v4 = (char *)sub_1001B3B0(a2);
  this[1] = v4;
  this[2] = v4;
  this[3] = &v4[72 * a2];
  return 1;
}
