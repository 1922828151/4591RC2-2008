/*
 * func-name: sub_100CED20
 * func-address: 0x100ced20
 * callers: 0x100d3f80
 * callees: 0x100ce150, 0x100ce410
 */

char __thiscall sub_100CED20(_DWORD *this, unsigned int a2)
{
  char *v4; // eax

  this[1] = 0;
  this[2] = 0;
  this[3] = 0;
  if ( !a2 )
    return 0;
  if ( a2 > 0x71C71C7 )
    sub_100CE150();
  v4 = (char *)sub_100CE410(a2);
  this[1] = v4;
  this[2] = v4;
  this[3] = &v4[36 * a2];
  return 1;
}
