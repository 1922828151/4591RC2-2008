/*
 * func-name: sub_101DD500
 * func-address: 0x101dd500
 * callers: 0x1000f7d6
 * callees: 0x10005362, 0x102c9d50
 */

_DWORD *__thiscall sub_101DD500(_DWORD *this, char a2)
{
  *this = &GameClient::LogicCoreUser::`vftable';
  sub_10005362();
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}
