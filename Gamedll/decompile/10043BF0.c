/*
 * func-name: sub_10043BF0
 * func-address: 0x10043bf0
 * callers: 0x10012f53
 * callees: 0x102c9d50
 */

_DWORD *__thiscall sub_10043BF0(_DWORD *this, char a2)
{
  *this = &GameClient::FSMState::`vftable';
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}
