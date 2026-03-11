/*
 * func-name: sub_1021AA20
 * func-address: 0x1021aa20
 * callers: 0x1000860c
 * callees: 0x100012e9, 0x102c9d50
 */

_DWORD *__thiscall sub_1021AA20(_DWORD *this, char a2)
{
  *this = &GameClient::UserStageStateSelEntry::`vftable';
  sub_100012E9();
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}
