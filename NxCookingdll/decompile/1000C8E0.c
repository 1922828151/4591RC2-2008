/*
 * func-name: sub_1000C8E0
 * func-address: 0x1000c8e0
 * callers: none
 * callees: 0x1000cad0, 0x100145d0, 0x10014910
 */

_DWORD *__thiscall sub_1000C8E0(_DWORD *this, char a2)
{
  int v3; // eax

  *this = &CollisionHull::`vftable';
  sub_100145D0(this + 22);
  sub_1000CAD0(this);
  if ( (a2 & 1) != 0 )
  {
    v3 = sub_10014910();
    (*(void (__thiscall **)(int, _DWORD *))(*(_DWORD *)v3 + 12))(v3, this);
  }
  return this;
}
