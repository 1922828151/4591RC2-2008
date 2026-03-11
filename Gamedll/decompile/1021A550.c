/*
 * func-name: sub_1021A550
 * func-address: 0x1021a550
 * callers: 0x10013a75
 * callees: 0x100012e9, 0x102c9d50
 */

_DWORD *__thiscall sub_1021A550(_DWORD *this, char a2)
{
  *this = &GameClient::UserStageStateSelCharacter::`vftable';
  sub_100012E9();
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}
