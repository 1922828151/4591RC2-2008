/*
 * func-name: ??0Accept_Bluider_Process@IONetwork@Outpop@@QAE@PAVWait_Channel@12@PAVAcceptor@12@@Z
 * func-address: 0x1003dc50
 * callers: 0x100192b0
 * callees: none
 */

Outpop::IONetwork::Accept_Bluider_Process *__thiscall Outpop::IONetwork::Accept_Bluider_Process::Accept_Bluider_Process(
        Outpop::IONetwork::Accept_Bluider_Process *this,
        struct Outpop::IONetwork::Wait_Channel *a2,
        struct Outpop::IONetwork::Acceptor *a3)
{
  Outpop::IONetwork::Accept_Bluider_Process *result; // eax

  result = this;
  *(_DWORD *)this = &Outpop::IONetwork::Bluider_Process::`vftable';
  *((_DWORD *)this + 4) = 0;
  *((_DWORD *)this + 5) = 0;
  *(_DWORD *)this = &Outpop::IONetwork::Accept_Bluider_Process::`vftable';
  *((_DWORD *)this + 1) = a2;
  *((_DWORD *)this + 6) = a3;
  return result;
}
