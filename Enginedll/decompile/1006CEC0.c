/*
 * func-name: sub_1006CEC0
 * func-address: 0x1006cec0
 * callers: 0x10070d30
 * callees: 0x1006c300, 0x100ce410
 */

char __thiscall sub_1006CEC0(_DWORD *this, unsigned int a2)
{
  int v4; // eax

  this[1] = 0;
  this[2] = 0;
  this[3] = 0;
  if ( !a2 )
    return 0;
  if ( a2 > 0x71C71C7 )
    sub_1006C300();
  v4 = sub_100CE410(a2);
  this[1] = v4;
  this[2] = v4;
  this[3] = v4 + 36 * a2;
  return 1;
}
