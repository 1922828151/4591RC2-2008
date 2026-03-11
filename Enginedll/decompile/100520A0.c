/*
 * func-name: sub_100520A0
 * func-address: 0x100520a0
 * callers: 0x10053800
 * callees: 0x10051d70, 0x100995f0
 */

char __thiscall sub_100520A0(_DWORD *this, unsigned int a2)
{
  int v4; // eax

  this[1] = 0;
  this[2] = 0;
  this[3] = 0;
  if ( !a2 )
    return 0;
  if ( a2 > 0x2762762 )
    sub_10051D70();
  v4 = sub_100995F0(a2);
  this[1] = v4;
  this[2] = v4;
  this[3] = v4 + 104 * a2;
  return 1;
}
