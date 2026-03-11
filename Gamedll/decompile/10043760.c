/*
 * func-name: sub_10043760
 * func-address: 0x10043760
 * callers: 0x1000cc48
 * callees: 0x102c9d50
 */

_DWORD *__thiscall sub_10043760(_DWORD *this, char a2)
{
  *this = &GameClient::FSM::`vftable';
  this[3] = &GameClient::FSMState::`vftable';
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}
