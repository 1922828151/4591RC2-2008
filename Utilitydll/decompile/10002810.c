/*
 * func-name: ??0Task@Utility@Outpop@@QAE@ABV012@@Z
 * func-address: 0x10002810
 * callers: 0x100036a0, 0x10003c80, 0x10017c30
 * callees: 0x100058c0
 */

Outpop::Utility::Task *__thiscall Outpop::Utility::Task::Task(
        Outpop::Utility::Task *this,
        const struct Outpop::Utility::Task *a2)
{
  *(_DWORD *)this = &Outpop::Utility::Task::`vftable';
  *((_DWORD *)this + 1) = *((_DWORD *)a2 + 1);
  *((_DWORD *)this + 2) = *((_DWORD *)a2 + 2);
  sub_100058C0((char *)this + 12);
  *((_DWORD *)this + 13) = *((_DWORD *)a2 + 13);
  *((_DWORD *)this + 14) = *((_DWORD *)a2 + 14);
  *((_DWORD *)this + 15) = *((_DWORD *)a2 + 15);
  *((_DWORD *)this + 16) = *((_DWORD *)a2 + 16);
  *((_DWORD *)this + 17) = *((_DWORD *)a2 + 17);
  *((_DWORD *)this + 18) = *((_DWORD *)a2 + 18);
  return this;
}
