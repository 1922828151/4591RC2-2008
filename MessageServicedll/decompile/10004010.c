/*
 * func-name: ??0Handler_Manager@Message@Outpop@@QAE@ABV012@@Z
 * func-address: 0x10004010
 * callers: none
 * callees: 0x10007440
 */

Outpop::Message::Handler_Manager *__thiscall Outpop::Message::Handler_Manager::Handler_Manager(
        Outpop::Message::Handler_Manager *this,
        const struct Outpop::Message::Handler_Manager *a2)
{
  *(_DWORD *)this = &Outpop::Message::Handler_Manager::`vftable';
  sub_10007440((char *)this + 4);
  *((_DWORD *)this + 11) = *((_DWORD *)a2 + 11);
  *((_DWORD *)this + 12) = *((_DWORD *)a2 + 12);
  *((_DWORD *)this + 13) = *((_DWORD *)a2 + 13);
  *((_DWORD *)this + 14) = *((_DWORD *)a2 + 14);
  *((_DWORD *)this + 15) = *((_DWORD *)a2 + 15);
  *((_DWORD *)this + 16) = *((_DWORD *)a2 + 16);
  return this;
}
