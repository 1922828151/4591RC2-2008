/*
 * func-name: sub_10012100
 * func-address: 0x10012100
 * callers: none
 * callees: none
 */

_DWORD *__thiscall sub_10012100(_DWORD *this, char a2)
{
  int v3; // eax

  v3 = this[27];
  *this = &PenetrationMap::`vftable';
  if ( v3 )
  {
    (*(void (__thiscall **)(int, int))(*(_DWORD *)dword_100580A0 + 20))(dword_100580A0, v3);
    this[27] = 0;
  }
  if ( (a2 & 1) != 0 )
    (*(void (__thiscall **)(int, _DWORD *))(*(_DWORD *)dword_100580A0 + 20))(dword_100580A0, this);
  return this;
}
