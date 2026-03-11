/*
 * func-name: sub_1000BD00
 * func-address: 0x1000bd00
 * callers: 0x100149d0
 * callees: 0x100099b0, 0x10009fe0
 */

char __thiscall sub_1000BD00(_DWORD *this, unsigned int a2)
{
  char *v4; // eax

  this[1] = 0;
  this[2] = 0;
  this[3] = 0;
  if ( !a2 )
    return 0;
  if ( a2 > 0x5D1745D )
    sub_100099B0();
  v4 = (char *)sub_10009FE0(a2);
  this[1] = v4;
  this[2] = v4;
  this[3] = &v4[44 * a2];
  return 1;
}
