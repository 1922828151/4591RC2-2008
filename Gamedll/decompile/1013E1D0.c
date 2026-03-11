/*
 * func-name: sub_1013E1D0
 * func-address: 0x1013e1d0
 * callers: 0x10004d63
 * callees: 0x102c9d50
 */

_DWORD *__thiscall sub_1013E1D0(_DWORD *this, char a2)
{
  void (__thiscall ***v3)(_DWORD, int); // ecx

  v3 = (void (__thiscall ***)(_DWORD, int))this[1];
  *this = &ScreenLayout::`vftable';
  if ( v3 )
  {
    (**v3)(v3, 1);
    this[1] = 0;
  }
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}
