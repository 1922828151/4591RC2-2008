/*
 * func-name: sub_1021A280
 * func-address: 0x1021a280
 * callers: 0x1000c46e
 * callees: 0x100068ac
 */

_DWORD *__thiscall sub_1021A280(_DWORD *this)
{
  sub_100068AC();
  this[6] = -1;
  this[5] = -1;
  this[4] = -1;
  this[3] = -1;
  *this = &GameClient::UserStageStateSelCharacter::`vftable';
  this[2] = 1;
  return this;
}
