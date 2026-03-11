/*
 * func-name: sub_10043B40
 * func-address: 0x10043b40
 * callers: 0x10002e5f
 * callees: 0x102c9d50
 */

_DWORD *__thiscall sub_10043B40(_DWORD *this, char a2)
{
  *this = &GameClient::FSMState::`vftable';
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}
