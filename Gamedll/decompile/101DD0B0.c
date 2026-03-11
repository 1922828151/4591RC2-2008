/*
 * func-name: sub_101DD0B0
 * func-address: 0x101dd0b0
 * callers: 0x1000308a
 * callees: 0x10005362, 0x102c9d50
 */

_DWORD *__thiscall sub_101DD0B0(_DWORD *this, char a2)
{
  *this = &GameClient::LogicCoreMUser::`vftable';
  sub_10005362();
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}
