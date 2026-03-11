/*
 * func-name: ??0Remote_Event_Stub@Message@Outpop@@QAE@ABV012@@Z
 * func-address: 0x10005050
 * callers: none
 * callees: none
 */

Outpop::Message::Remote_Event_Stub *__thiscall Outpop::Message::Remote_Event_Stub::Remote_Event_Stub(
        Outpop::Message::Remote_Event_Stub *this,
        const struct Outpop::Message::Remote_Event_Stub *a2)
{
  Outpop::Message::Remote_Event_Stub *result; // eax

  result = this;
  *(_DWORD *)this = &Outpop::Message::Message_Handler::`vftable';
  *(_DWORD *)this = &Outpop::Message::Remote_Event_Stub::`vftable';
  *((_BYTE *)this + 4) = *((_BYTE *)a2 + 4);
  *((_BYTE *)this + 5) = *((_BYTE *)a2 + 5);
  *((_WORD *)this + 3) = *((_WORD *)a2 + 3);
  *((_DWORD *)this + 2) = *((_DWORD *)a2 + 2);
  *((_DWORD *)this + 3) = *((_DWORD *)a2 + 3);
  *((_DWORD *)this + 4) = *((_DWORD *)a2 + 4);
  *((_DWORD *)this + 5) = *((_DWORD *)a2 + 5);
  *((_DWORD *)this + 6) = *((_DWORD *)a2 + 6);
  return result;
}
