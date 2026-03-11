/*
 * func-name: sub_10261820
 * func-address: 0x10261820
 * callers: 0x10014bd2
 * callees: 0x10018eee
 */

char __thiscall sub_10261820(int this, int a2, POINT pt, int a4, int a5)
{
  _DWORD *v6; // ebx
  POINT v8; // [esp-8h] [ebp-18h]

  v6 = (_DWORD *)(this + 164);
  if ( !PtInRect((const RECT *)(this + 164), pt) )
    return 0;
  if ( a2 == 513 )
  {
    *(_BYTE *)(this + 560) = 1;
    return 1;
  }
  else
  {
    if ( a2 != 514 )
      return 0;
    v8.y = *(_DWORD *)(this + 536) + pt.y - *(_DWORD *)(this + 168);
    v8.x = pt.x - *v6;
    sub_10018EEE(v8);
    *(_BYTE *)(this + 560) = 0;
    return 1;
  }
}
