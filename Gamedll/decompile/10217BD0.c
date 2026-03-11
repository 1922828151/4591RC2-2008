/*
 * func-name: sub_10217BD0
 * func-address: 0x10217bd0
 * callers: 0x100127e2
 * callees: 0x100012e9, 0x102c9d50
 */

_DWORD *__thiscall sub_10217BD0(_DWORD *this, char a2)
{
  *this = &GameClient::UserStageStateInBattle::`vftable';
  sub_100012E9();
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}
