/*
 * func-name: sub_1015A010
 * func-address: 0x1015a010
 * callers: 0x1015a8d0
 * callees: 0x101592a0, 0x10159390
 */

char __thiscall sub_1015A010(_DWORD *this, unsigned int a2)
{
  char *v4; // eax

  this[1] = 0;
  this[2] = 0;
  this[3] = 0;
  if ( !a2 )
    return 0;
  if ( a2 > 0x30C30C3 )
    sub_101592A0();
  v4 = (char *)sub_10159390(a2);
  this[1] = v4;
  this[2] = v4;
  this[3] = &v4[84 * a2];
  return 1;
}
