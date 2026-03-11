/*
 * func-name: sub_10099C90
 * func-address: 0x10099c90
 * callers: 0x1009b530
 * callees: 0x10099570, 0x100995f0
 */

char __thiscall sub_10099C90(_DWORD *this, unsigned int a2)
{
  char *v4; // eax

  this[1] = 0;
  this[2] = 0;
  this[3] = 0;
  if ( !a2 )
    return 0;
  if ( a2 > 0x2762762 )
    sub_10099570();
  v4 = (char *)sub_100995F0(a2);
  this[1] = v4;
  this[2] = v4;
  this[3] = &v4[104 * a2];
  return 1;
}
