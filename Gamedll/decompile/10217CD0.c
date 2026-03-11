/*
 * func-name: sub_10217CD0
 * func-address: 0x10217cd0
 * callers: 0x1001488f
 * callees: 0x100012e9, 0x102c9d50
 */

_DWORD *__thiscall sub_10217CD0(_DWORD *this, char a2)
{
  *this = &GameClient::UserStageStateInCity::`vftable';
  sub_100012E9();
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}
