/*
 * func-name: sub_10001BD0
 * func-address: 0x10001bd0
 * callers: 0x10001c60
 * callees: none
 */

int __userpurge sub_10001BD0@<eax>(int a1@<ecx>, int a2@<edi>, int a3, Outpop::IONetwork::INET_Addr *a4, int a5)
{
  unsigned __int16 port_number; // ax
  unsigned int ip_address; // ebp

  if ( a3 )
    return (*(int (__cdecl **)(_DWORD, int))(a1 + 8))(*(_DWORD *)(a1 + 12), a3);
  Outpop::IONetwork::INET_Addr::operator=(a1 + 72, a5);
  port_number = Outpop::IONetwork::INET_Addr::get_port_number(a4);
  Outpop::IONetwork::INET_Addr::set_port_number((Outpop::IONetwork::INET_Addr *)(a1 + 44), port_number, a2);
  ip_address = Outpop::IONetwork::INET_Addr::get_ip_address((Outpop::IONetwork::INET_Addr *)(a1 + 44));
  *(_BYTE *)(a1 + 100) = Outpop::IONetwork::INET_Addr::get_ip_address((Outpop::IONetwork::INET_Addr *)(a1 + 72)) != ip_address;
  return (*(int (__cdecl **)(_DWORD, _DWORD))(a1 + 8))(*(_DWORD *)(a1 + 12), 0);
}
