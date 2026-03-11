/*
 * func-name: sub_100CEB90
 * func-address: 0x100ceb90
 * callers: 0x100d1cc0
 * callees: 0x10051fd0, 0x100cded0
 */

char __thiscall sub_100CEB90(_DWORD *this, unsigned int a2)
{
  char *v4; // eax

  this[1] = 0;
  this[2] = 0;
  this[3] = 0;
  if ( !a2 )
    return 0;
  if ( a2 > 0x15555555 )
    sub_100CDED0();
  v4 = (char *)sub_10051FD0(a2);
  this[1] = v4;
  this[2] = v4;
  this[3] = &v4[12 * a2];
  return 1;
}
