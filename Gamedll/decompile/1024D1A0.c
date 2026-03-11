/*
 * func-name: sub_1024D1A0
 * func-address: 0x1024d1a0
 * callers: 0x10008472
 * callees: none
 */

_DWORD *__thiscall sub_1024D1A0(_DWORD *this)
{
  EventAttemper *v2; // eax

  *this = &GameClient::AIRobotRebornPointManager::`vftable';
  this[2] = 0;
  this[1] = 0;
  *((_BYTE *)this + 12) = 0;
  v2 = (EventAttemper *)EventAttemper::Instance(19, 5331);
  EventAttemper::AddObserver(v2);
  return this;
}
