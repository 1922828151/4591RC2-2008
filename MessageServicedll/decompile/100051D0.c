/*
 * func-name: ??0Remote_Event_Manager@Message@Outpop@@QAE@ABV012@@Z
 * func-address: 0x100051d0
 * callers: none
 * callees: 0x100076b0, 0x100077a0
 */

Outpop::Message::Remote_Event_Manager *__thiscall Outpop::Message::Remote_Event_Manager::Remote_Event_Manager(
        Outpop::Message::Remote_Event_Manager *this,
        const struct Outpop::Message::Remote_Event_Manager *a2)
{
  *(_DWORD *)this = *(_DWORD *)a2;
  sub_100076B0((char *)this + 4);
  sub_100077A0((char *)this + 44);
  return this;
}
