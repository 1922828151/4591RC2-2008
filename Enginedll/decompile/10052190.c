/*
 * func-name: sub_10052190
 * func-address: 0x10052190
 * callers: 0x10052860
 * callees: 0x10051ef0, 0x10051fd0
 */

char __thiscall sub_10052190(_DWORD *this, unsigned int a2)
{
  char *v4; // eax

  this[1] = 0;
  this[2] = 0;
  this[3] = 0;
  if ( !a2 )
    return 0;
  if ( a2 > 0x15555555 )
    sub_10051EF0();
  v4 = (char *)sub_10051FD0(a2);
  this[1] = v4;
  this[2] = v4;
  this[3] = &v4[12 * a2];
  return 1;
}
