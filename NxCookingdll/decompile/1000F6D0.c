/*
 * func-name: sub_1000F6D0
 * func-address: 0x1000f6d0
 * callers: none
 * callees: 0x10014910
 */

_DWORD *__thiscall sub_1000F6D0(_DWORD *this, char a2)
{
  int v3; // eax

  *this = &GaussMap::`vftable';
  if ( (a2 & 1) != 0 )
  {
    v3 = sub_10014910();
    (*(void (__thiscall **)(int, _DWORD *))(*(_DWORD *)v3 + 12))(v3, this);
  }
  return this;
}
