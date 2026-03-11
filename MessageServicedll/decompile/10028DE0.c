/*
 * func-name: ??0Remote_Event_Manager@Message@Outpop@@QAE@AAVContext@12@@Z
 * func-address: 0x10028de0
 * callers: 0x100052a0
 * callees: 0x100278e0, 0x10029080
 */

Outpop::Message::Remote_Event_Manager *__thiscall Outpop::Message::Remote_Event_Manager::Remote_Event_Manager(
        Outpop::Message::Remote_Event_Manager *this,
        struct Outpop::Message::Context *a2)
{
  *(_DWORD *)this = a2;
  sub_10029080((char *)this + 4, &a2);
  sub_100278E0((int)this + 44, &a2);
  return this;
}
