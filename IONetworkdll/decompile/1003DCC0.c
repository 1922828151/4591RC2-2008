/*
 * func-name: ??1Accept_Bluider_Process@IONetwork@Outpop@@UAE@XZ
 * func-address: 0x1003dcc0
 * callers: 0x10016520
 * callees: none
 */

int __thiscall Outpop::IONetwork::Accept_Bluider_Process::~Accept_Bluider_Process(
        Outpop::IONetwork::Accept_Bluider_Process *this)
{
  int (__thiscall ***v2)(_DWORD, int); // ecx
  int result; // eax

  *(_DWORD *)this = &Outpop::IONetwork::Accept_Bluider_Process::`vftable';
  v2 = (int (__thiscall ***)(_DWORD, int))*((_DWORD *)this + 4);
  if ( v2 )
    result = (**v2)(v2, 1);
  *(_DWORD *)this = &Outpop::IONetwork::Bluider_Process::`vftable';
  return result;
}
