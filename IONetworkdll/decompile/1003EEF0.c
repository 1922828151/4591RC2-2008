/*
 * func-name: ??0Connect_Bluider_Process@IONetwork@Outpop@@QAE@PAVWait_Channel@12@PAVConnector@12@@Z
 * func-address: 0x1003eef0
 * callers: 0x1001f2c0
 * callees: none
 */

Outpop::IONetwork::Connect_Bluider_Process *__thiscall Outpop::IONetwork::Connect_Bluider_Process::Connect_Bluider_Process(
        Outpop::IONetwork::Connect_Bluider_Process *this,
        struct Outpop::IONetwork::Wait_Channel *a2,
        struct Outpop::IONetwork::Connector *a3)
{
  *(_DWORD *)this = &Outpop::IONetwork::Bluider_Process::`vftable';
  *((_DWORD *)this + 4) = a3;
  *(_DWORD *)this = &Outpop::IONetwork::Connect_Bluider_Process::`vftable';
  *((_DWORD *)this + 1) = a2;
  *((_DWORD *)this + 2) = 0;
  *((_DWORD *)this + 3) = 0;
  Outpop::Utility::Thread_Mutex::Thread_Mutex((Outpop::IONetwork::Connect_Bluider_Process *)((char *)this + 20));
  *((_BYTE *)this + 44) = 0;
  return this;
}
