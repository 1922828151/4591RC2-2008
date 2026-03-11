/*
 * func-name: ?set_addr@INET_Addr@IONetwork@Outpop@@UAEXPAXH@Z
 * func-address: 0x100022b0
 * callers: none
 * callees: none
 */

int __thiscall Outpop::IONetwork::INET_Addr::set_addr(Outpop::IONetwork::INET_Addr *this, void *a2, int a3)
{
  return (*(int (__thiscall **)(Outpop::IONetwork::INET_Addr *, void *, int, _DWORD))(*(_DWORD *)this + 20))(
           this,
           a2,
           a3,
           0);
}
