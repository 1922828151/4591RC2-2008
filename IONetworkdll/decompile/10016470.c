/*
 * func-name: ??0Accept_Bluider_Process@IONetwork@Outpop@@QAE@ABV012@@Z
 * func-address: 0x10016470
 * callers: none
 * callees: none
 */

Outpop::IONetwork::Accept_Bluider_Process *__thiscall Outpop::IONetwork::Accept_Bluider_Process::Accept_Bluider_Process(
        Outpop::IONetwork::Accept_Bluider_Process *this,
        const struct Outpop::IONetwork::Accept_Bluider_Process *a2)
{
  Outpop::IONetwork::Accept_Bluider_Process *result; // eax

  result = this;
  *(_DWORD *)this = &Outpop::IONetwork::Bluider_Process::`vftable';
  *(_DWORD *)this = &Outpop::IONetwork::Accept_Bluider_Process::`vftable';
  *((_DWORD *)this + 1) = *((_DWORD *)a2 + 1);
  *((_DWORD *)this + 2) = *((_DWORD *)a2 + 2);
  *((_DWORD *)this + 3) = *((_DWORD *)a2 + 3);
  *((_DWORD *)this + 4) = *((_DWORD *)a2 + 4);
  *((_DWORD *)this + 5) = *((_DWORD *)a2 + 5);
  *((_DWORD *)this + 6) = *((_DWORD *)a2 + 6);
  return result;
}
