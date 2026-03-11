/*
 * func-name: sub_1006D160
 * func-address: 0x1006d160
 * callers: 0x10070f20
 * callees: 0x10009fe0, 0x1006c740
 */

char __thiscall sub_1006D160(_DWORD *this, unsigned int a2)
{
  char *v4; // eax

  this[1] = 0;
  this[2] = 0;
  this[3] = 0;
  if ( !a2 )
    return 0;
  if ( a2 > 0x5D1745D )
    sub_1006C740();
  v4 = (char *)sub_10009FE0(a2);
  this[1] = v4;
  this[2] = v4;
  this[3] = &v4[44 * a2];
  return 1;
}
