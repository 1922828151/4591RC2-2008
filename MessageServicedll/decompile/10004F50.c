/*
 * func-name: ??0Remote_Event_Stub@Message@Outpop@@QAE@EGIIW4EDispatchType@Utility@2@PAVDispatch_Thread@42@@Z
 * func-address: 0x10004f50
 * callers: none
 * callees: none
 */

_BYTE *__thiscall Outpop::Message::Remote_Event_Stub::Remote_Event_Stub(
        _BYTE *this,
        char a2,
        __int16 a3,
        int a4,
        int a5,
        int a6,
        int a7)
{
  _BYTE *result; // eax

  result = this;
  *(_DWORD *)this = &Outpop::Message::Message_Handler::`vftable';
  this[5] = a2;
  *((_WORD *)this + 3) = a3;
  *((_DWORD *)this + 2) = a4;
  *((_DWORD *)this + 3) = a5;
  *((_DWORD *)this + 4) = a6;
  *((_DWORD *)this + 5) = a7;
  *(_DWORD *)this = &Outpop::Message::Remote_Event_Stub::`vftable';
  *((_DWORD *)this + 6) = -1;
  this[4] = 0;
  return result;
}
