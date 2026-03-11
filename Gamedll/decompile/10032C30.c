/*
 * func-name: sub_10032C30
 * func-address: 0x10032c30
 * callers: 0x10012864
 * callees: 0x102c9d50
 */

_DWORD *__thiscall sub_10032C30(_DWORD *this, char a2)
{
  *this = &GameClient::FSMState::`vftable';
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}
