/*
 * func-name: sub_102942A0
 * func-address: 0x102942a0
 * callers: 0x100195f6
 * callees: 0x1000e78c
 */

char __thiscall sub_102942A0(int this, int a2, POINT pt, int a4, int a5)
{
  if ( !PtInRect((const RECT *)(this + 164), pt) )
    return 0;
  switch ( a2 )
  {
    case 513:
      *(_BYTE *)(this + 696) = 1;
      return 1;
    case 514:
      sub_1000E78C((int)&pt, (int)&a2, (int)&a2, (int)&a2, 0);
      *(_BYTE *)(this + 696) = 0;
      return 1;
    case 515:
      sub_1000E78C((int)&pt, (int)&a2, (int)&a2, (int)&a2, 1);
      return 1;
    default:
      return 0;
  }
}
