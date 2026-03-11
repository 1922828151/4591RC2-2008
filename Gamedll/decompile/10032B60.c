/*
 * func-name: sub_10032B60
 * func-address: 0x10032b60
 * callers: 0x1000c739
 * callees: 0x102c9d50
 */

_DWORD *__thiscall sub_10032B60(_DWORD *this, char a2)
{
  *this = &GameClient::ControlModule::`vftable';
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}
