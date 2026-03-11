/*
 * func-name: ??0Timer_Queue@Utility@Outpop@@QAE@ABV012@@Z
 * func-address: 0x100036a0
 * callers: none
 * callees: 0x10002810, 0x10005d20, 0x10006610
 */

Outpop::Utility::Timer_Queue *__thiscall Outpop::Utility::Timer_Queue::Timer_Queue(
        Outpop::Utility::Timer_Queue *this,
        const struct Outpop::Utility::Timer_Queue *a2)
{
  Outpop::Utility::Task::Task(this, a2);
  *(_DWORD *)this = &Outpop::Utility::Timer_Queue::`vftable';
  *((_DWORD *)this + 19) = *((_DWORD *)a2 + 19);
  *((_DWORD *)this + 20) = *((_DWORD *)a2 + 20);
  *((_DWORD *)this + 21) = *((_DWORD *)a2 + 21);
  *((_DWORD *)this + 22) = *((_DWORD *)a2 + 22);
  *((_DWORD *)this + 23) = *((_DWORD *)a2 + 23);
  *((_DWORD *)this + 24) = *((_DWORD *)a2 + 24);
  sub_10006610((char *)this + 100);
  *((_DWORD *)this + 30) = *((_DWORD *)a2 + 30);
  *((_DWORD *)this + 31) = *((_DWORD *)a2 + 31);
  *((_DWORD *)this + 32) = *((_DWORD *)a2 + 32);
  *((_BYTE *)this + 132) = *((_BYTE *)a2 + 132);
  sub_10005D20((char *)this + 136);
  *((_DWORD *)this + 44) = *((_DWORD *)a2 + 44);
  *((_DWORD *)this + 45) = *((_DWORD *)a2 + 45);
  return this;
}
