/*
 * func-name: sub_1006CC90
 * func-address: 0x1006cc90
 * callers: 0x10070bb0
 * callees: 0x1006bf80, 0x1006c470
 */

char __thiscall sub_1006CC90(_DWORD *this, unsigned int a2)
{
  char *v4; // eax

  this[1] = 0;
  this[2] = 0;
  this[3] = 0;
  if ( !a2 )
    return 0;
  if ( a2 > 0x6666666 )
    sub_1006BF80();
  v4 = (char *)sub_1006C470(a2);
  this[1] = v4;
  this[2] = v4;
  this[3] = &v4[40 * a2];
  return 1;
}
