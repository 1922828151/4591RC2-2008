/*
 * func-name: sub_10108B20
 * func-address: 0x10108b20
 * callers: 0x10108f10
 * callees: 0x100dd410, 0x10108950
 */

char __thiscall sub_10108B20(_DWORD *this, unsigned int a2)
{
  char *v4; // eax

  this[1] = 0;
  this[2] = 0;
  this[3] = 0;
  if ( !a2 )
    return 0;
  if ( a2 > 0x3FFFFFFF )
    sub_10108950();
  v4 = (char *)sub_100DD410(a2);
  this[1] = v4;
  this[2] = v4;
  this[3] = &v4[4 * a2];
  return 1;
}
