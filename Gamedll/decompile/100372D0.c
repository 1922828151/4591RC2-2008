/*
 * func-name: sub_100372D0
 * func-address: 0x100372d0
 * callers: 0x100026f8
 * callees: 0x100175f8, 0x102c9d50
 */

void **__thiscall sub_100372D0(void *this)
{
  void **result; // eax

  *(_DWORD *)this = &GameClient::AISingleBrain::`vftable';
  *((_DWORD *)this + 1) = &GameClient::AISingleBrain::`vftable';
  if ( *((_DWORD *)this + 80) )
    operator delete(*((void **)this + 80));
  *((_DWORD *)this + 80) = 0;
  *((_DWORD *)this + 81) = 0;
  *((_DWORD *)this + 82) = 0;
  sub_100175F8();
  result = &GameClient::FSMState::`vftable';
  *((_DWORD *)this + 60) = &GameClient::FSMState::`vftable';
  *((_DWORD *)this + 50) = &GameClient::FSMState::`vftable';
  *((_DWORD *)this + 40) = &GameClient::FSMState::`vftable';
  *((_DWORD *)this + 30) = &GameClient::FSMState::`vftable';
  *((_DWORD *)this + 20) = &GameClient::FSMState::`vftable';
  *((_DWORD *)this + 10) = &GameClient::FSMState::`vftable';
  *((_DWORD *)this + 1) = &GameClient::FSM::`vftable';
  *((_DWORD *)this + 4) = &GameClient::FSMState::`vftable';
  *(_DWORD *)this = &GameClient::ControlModule::`vftable';
  return result;
}
