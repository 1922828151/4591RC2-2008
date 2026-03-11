/*
 * func-name: ??1Connect_Bluider_Process@IONetwork@Outpop@@UAE@XZ
 * func-address: 0x1003ef70
 * callers: 0x10016670
 * callees: none
 */

void __thiscall Outpop::IONetwork::Connect_Bluider_Process::~Connect_Bluider_Process(
        Outpop::IONetwork::Connect_Bluider_Process *this)
{
  void (__thiscall ***v2)(_DWORD, int); // ecx

  *(_DWORD *)this = &Outpop::IONetwork::Connect_Bluider_Process::`vftable';
  v2 = (void (__thiscall ***)(_DWORD, int))*((_DWORD *)this + 2);
  if ( v2 )
    (**v2)(v2, 1);
  Outpop::Utility::Thread_Mutex::~Thread_Mutex((Outpop::IONetwork::Connect_Bluider_Process *)((char *)this + 20));
  *(_DWORD *)this = &Outpop::IONetwork::Bluider_Process::`vftable';
}
