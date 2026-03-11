/*
 * func-name: sub_1000C450
 * func-address: 0x1000c450
 * callers: 0x10025b10
 * callees: 0x1000a4e0, 0x1000a8b0
 */

char __thiscall sub_1000C450(_DWORD *this, unsigned int a2)
{
  char *v4; // eax

  this[1] = 0;
  this[2] = 0;
  this[3] = 0;
  if ( !a2 )
    return 0;
  if ( a2 > 0x3FFFFFF )
    sub_1000A4E0();
  v4 = (char *)sub_1000A8B0(a2);
  this[1] = v4;
  this[2] = v4;
  this[3] = &v4[64 * a2];
  return 1;
}
